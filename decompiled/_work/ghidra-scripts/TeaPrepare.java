// Define functions that Ghidra's default analysis missed in a Borland C++ image:
//  1. entries proven by static tables (RTTI destructors, vtable slots, OWL response-table handlers)
//  2. unclaimed, 4-byte-aligned code that begins with the standard frame prologue (push ebp; mov ebp,esp)
// It changes analysis metadata only; the imported bytes are untouched.
// Args: <entries.txt> <report.txt>
// @category TEA

import java.io.BufferedReader;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.MemoryBlock;

public class TeaPrepare extends GhidraScript {

    private PrintWriter report;
    private int created = 0, existed = 0, failed = 0;

    private boolean ensureFunction(Address a, String why) throws Exception {
        if (getFunctionAt(a) != null) {
            existed++;
            return false;
        }
        Listing listing = currentProgram.getListing();
        if (listing.getInstructionAt(a) == null) {
            if (listing.getInstructionContaining(a) != null || listing.getDefinedDataContaining(a) != null) {
                failed++;
                report.println("skip\t" + a + "\t" + why + "\tinside an existing instruction or defined data");
                return false;
            }
            disassemble(a);
        }
        if (listing.getInstructionAt(a) == null) {
            failed++;
            report.println("skip\t" + a + "\t" + why + "\tdoes not disassemble");
            return false;
        }
        Function owner = getFunctionContaining(a);
        Function f = createFunction(a, null);
        if (f == null) {
            failed++;
            report.println("skip\t" + a + "\t" + why + "\tcreateFunction failed" + (owner != null ? " (inside " + owner.getName() + ")" : ""));
            return false;
        }
        created++;
        report.println("new\t" + a + "\t" + why + "\t" + f.getBody().getNumAddresses() + " bytes");
        return true;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            throw new IllegalArgumentException("usage: TeaPrepare.java <entries.txt> <report.txt>");
        }
        report = new PrintWriter(Files.newBufferedWriter(Paths.get(args[1]), StandardCharsets.UTF_8));
        int before = currentProgram.getFunctionManager().getFunctionCount();

        // ---- 1. table-proven entries
        List<String[]> seeds = new ArrayList<>();
        try (BufferedReader r = Files.newBufferedReader(Paths.get(args[0]), StandardCharsets.UTF_8)) {
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty()) continue;
                seeds.add(line.split("\t"));
            }
        }
        for (String[] s : seeds) {
            if (monitor.isCancelled()) break;
            ensureFunction(toAddr(Long.parseLong(s[0], 16)), s.length > 1 ? s[1] : "seed");
        }
        int afterSeeds = created;
        analyzeChanges(currentProgram);

        // ---- 2. prologue scan over unclaimed .text, repeated until it stops finding anything
        MemoryBlock text = currentProgram.getMemory().getBlock(".text");
        int rounds = 0;
        if (text != null) {
            byte[] bytes = new byte[(int) text.getSize()];
            text.getBytes(text.getStart(), bytes);
            Listing listing = currentProgram.getListing();
            int found;
            do {
                found = 0;
                rounds++;
                for (int i = 0; i + 3 <= bytes.length; i += 4) {
                    if (monitor.isCancelled()) break;
                    if ((bytes[i] & 0xff) != 0x55 || (bytes[i + 1] & 0xff) != 0x8b || (bytes[i + 2] & 0xff) != 0xec) continue;
                    Address a = text.getStart().add(i);
                    if (listing.getInstructionContaining(a) != null) continue;
                    if (listing.getDefinedDataContaining(a) != null) continue;
                    if (getFunctionContaining(a) != null) continue;
                    if (ensureFunction(a, "prologue-scan")) found++;
                }
                if (found > 0) analyzeChanges(currentProgram);
            } while (found > 0 && rounds < 6);
        }

        // ---- 3. coverage summary
        long textBytes = text == null ? 0 : text.getSize();
        AddressSet covered = new AddressSet();
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            covered.add(f.getBody());
        }
        long inText = text == null ? 0 : covered.intersectRange(text.getStart(), text.getEnd()).getNumAddresses();
        int after = currentProgram.getFunctionManager().getFunctionCount();
        report.println("summary\tfunctions_before=" + before + "\tfunctions_after=" + after + "\tcreated_from_tables=" + afterSeeds
            + "\tcreated_by_prologue_scan=" + (created - afterSeeds) + "\talready_present=" + existed + "\tskipped=" + failed
            + "\tscan_rounds=" + rounds + "\ttext_bytes=" + textBytes + "\ttext_bytes_in_functions=" + inText);
        report.close();
        println("TeaPrepare: functions " + before + " -> " + after + " (tables +" + afterSeeds + ", prologue +" + (created - afterSeeds) + ", skipped " + failed + ")");
    }
}
