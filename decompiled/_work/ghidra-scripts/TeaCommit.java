// Make every function's signature authoritative so that definitions and call sites agree.
//
// Ghidra's default analysis leaves most prototypes "unlocked": the decompiler then re-derives the
// arguments and the use of the return value separately at every call site, so a function printed as
// `void f(void)` can be called elsewhere as `x = f(a, b)`. That reads fine but cannot compile.
//
// Pass 1 decompiles everything and records which functions have their return value used by a caller.
// Pass 2 decompiles each function again and commits the parameters and return type the decompiler
// recovered for it; a function recovered as `void` whose result some caller uses is given a
// 4-byte return instead, so the value stays visible at the call sites.
//
// This changes analysis metadata in the project only. Args: <report.txt>
// @category TEA

import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Undefined4DataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.pcode.HighFunctionDBUtil.ReturnCommitOption;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.PcodeOpAST;
import ghidra.program.model.symbol.SourceType;

public class TeaCommit extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("usage: TeaCommit.java <report.txt>");
        PrintWriter report = new PrintWriter(Files.newBufferedWriter(Paths.get(args[0]), StandardCharsets.UTF_8));

        DecompInterface ifc = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        ifc.setOptions(opts);
        ifc.toggleCCode(false);
        ifc.toggleSyntaxTree(true);
        ifc.setSimplificationStyle("decompile");
        if (!ifc.openProgram(currentProgram)) throw new IllegalStateException(ifc.getLastMessage());

        FunctionManager fm = currentProgram.getFunctionManager();

        // ---- pass 1: whose return value is used by a caller?
        Set<Address> used = new HashSet<>();
        int seen = 0;
        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            if (f.isThunk()) continue;
            DecompileResults r = ifc.decompileFunction(f, 180, monitor);
            HighFunction hf = r == null ? null : r.getHighFunction();
            if (hf == null) continue;
            seen++;
            Iterator<PcodeOpAST> it = hf.getPcodeOps();
            while (it.hasNext()) {
                PcodeOpAST op = it.next();
                if (op.getOpcode() != PcodeOp.CALL || op.getOutput() == null) continue;
                Function g = fm.getFunctionAt(op.getInput(0).getAddress());
                if (g == null) continue;
                used.add(g.getEntryPoint());
                if (g.isThunk()) {
                    Function tg = g.getThunkedFunction(true);
                    if (tg != null && !tg.isExternal()) used.add(tg.getEntryPoint());
                }
            }
        }

        // ---- pass 2: commit recovered parameters and return types
        int committed = 0, failed = 0, errors = 0, widened = 0;
        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            if (f.isThunk()) continue;
            DecompileResults r = ifc.decompileFunction(f, 180, monitor);
            HighFunction hf = r == null ? null : r.getHighFunction();
            if (hf == null) {
                failed++;
                report.println("nodecompile\t" + f.getEntryPoint());
                continue;
            }
            try {
                HighFunctionDBUtil.commitParamsToDatabase(hf, true, ReturnCommitOption.COMMIT, SourceType.USER_DEFINED);
                committed++;
            } catch (Exception e) {
                errors++;
                report.println("commiterror\t" + f.getEntryPoint() + "\t" + e.getClass().getSimpleName() + ": " + e.getMessage());
                continue;
            }
            if (used.contains(f.getEntryPoint()) && VoidDataType.dataType.isEquivalent(f.getReturnType())) {
                try {
                    f.setReturnType(Undefined4DataType.dataType, SourceType.USER_DEFINED);
                    widened++;
                } catch (Exception e) {
                    report.println("returnerror\t" + f.getEntryPoint() + "\t" + e.getMessage());
                }
            }
        }
        ifc.dispose();
        report.println("summary\tdecompiled=" + seen + "\tcommitted=" + committed + "\tno_decompile=" + failed + "\tcommit_errors=" + errors
            + "\treturn_used_by_callers=" + used.size() + "\tvoid_widened_to_value=" + widened);
        report.close();
        println("TeaCommit: committed=" + committed + " noDecompile=" + failed + " errors=" + errors + " widened=" + widened);
    }
}
