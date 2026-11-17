// Export Ghidra decompiler output for every function of the current program:
//   <out>/functions/0x<addr>.c      one file per function
//   <out>/decompile-journal.jsonl   one JSON line per function: address, name, status, body ranges,
//                                   stored prototype, thunk target, and every global the pseudocode
//                                   names with the type the decompiler gave it in that function
// Read-only: the program is not modified. Args: <outDir>
// @category TEA

import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.decompiler.ClangNode;
import ghidra.app.decompiler.ClangTokenGroup;
import ghidra.app.decompiler.ClangVariableToken;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighGlobal;
import ghidra.program.model.pcode.HighSymbol;
import ghidra.program.model.pcode.HighVariable;

public class TeaExport extends GhidraScript {

    private static String esc(String s) {
        StringBuilder b = new StringBuilder();
        for (char c : s.toCharArray()) {
            if (c == '"' || c == '\\') b.append('\\').append(c);
            else if (c < 0x20) b.append(String.format("\\u%04x", (int) c));
            else b.append(c);
        }
        return b.toString();
    }

    private String globalsJson(DecompileResults res) {
        HighFunction hf = res.getHighFunction();
        ClangTokenGroup markup = res.getCCodeMarkup();
        if (hf == null || markup == null) return "[],\"locals\":[]";
        List<ClangNode> flat = new ArrayList<>();
        markup.flatten(flat);
        Map<String, String> seen = new LinkedHashMap<>();
        Map<String, String> locals = new LinkedHashMap<>();
        for (ClangNode n : flat) {
            if (!(n instanceof ClangVariableToken)) continue;
            ClangVariableToken t = (ClangVariableToken) n;
            HighSymbol hs;
            try {
                hs = t.getHighSymbol(hf);
            } catch (Exception e) {
                continue;
            }
            if (hs == null || hs.getDataType() == null) continue;
            String text = t.getText();
            HighVariable hv = t.getHighVariable();
            if (!hs.isGlobal()) {
                // a local printed as _name is being accessed with a different type than it was declared with
                if (text.startsWith("_") && text.substring(1).equals(hs.getName()) && hv != null && hv.getDataType() != null && !locals.containsKey(text)) {
                    locals.put(text, "{\"t\":\"" + esc(text) + "\",\"base\":\"" + esc(hs.getName()) + "\",\"type\":\"" + esc(hv.getDataType().getDisplayName()) + "\"}");
                }
                continue;
            }
            if (seen.containsKey(text)) continue;
            // a direct access carries the type used here; a reference (&X) only tells us the symbol's own type
            boolean direct = hv instanceof HighGlobal && hv.getDataType() != null;
            String useType = direct ? hv.getDataType().getDisplayName() : hs.getDataType().getDisplayName();
            Address a = null;
            try {
                if (hs.getStorage() != null) a = hs.getStorage().getMinAddress();
            } catch (Exception e) {
                // dynamic storage: no fixed address
            }
            boolean isFn = a != null && getFunctionAt(a) != null;
            MemoryBlock blk = a == null ? null : currentProgram.getMemory().getBlock(a);
            boolean inCode = blk != null && blk.isExecute();
            seen.put(text, "{\"t\":\"" + esc(text) + "\",\"type\":\"" + esc(useType) + "\",\"symtype\":\"" + esc(hs.getDataType().getDisplayName())
                + "\",\"size\":" + hs.getSize() + ",\"direct\":" + direct + (a == null ? "" : ",\"a\":\"0x" + Long.toHexString(a.getOffset()) + "\"")
                + ",\"fn\":" + isFn + ",\"code\":" + inCode + "}");
        }
        return "[" + String.join(",", seen.values()) + "],\"locals\":[" + String.join(",", locals.values()) + "]";
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("usage: TeaExport.java <outDir>");
        Path out = Paths.get(args[0]);
        Path fdir = out.resolve("functions");
        Files.createDirectories(fdir);

        DecompInterface ifc = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        ifc.setOptions(opts);
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        ifc.setSimplificationStyle("decompile");
        if (!ifc.openProgram(currentProgram)) throw new IllegalStateException("decompiler failed to open program: " + ifc.getLastMessage());

        String ver = getGhidraVersion();
        int written = 0, failed = 0, external = 0;
        try (PrintWriter j = new PrintWriter(Files.newBufferedWriter(out.resolve("decompile-journal.jsonl"), StandardCharsets.UTF_8))) {
            j.println("{\"kind\":\"header\",\"version\":2,\"exporter\":\"TeaExport.java\",\"provider\":{\"id\":\"ghidra\",\"version\":\"" + ver
                + "\"},\"program\":\"" + esc(currentProgram.getName()) + "\",\"executable_sha256\":\"" + esc(String.valueOf(currentProgram.getExecutableSHA256()))
                + "\",\"language\":\"" + currentProgram.getLanguageID() + "\",\"compiler_spec\":\"" + currentProgram.getCompilerSpec().getCompilerSpecID() + "\"}");
            for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
                if (monitor.isCancelled()) break;
                String addr = "0x" + Long.toHexString(f.getEntryPoint().getOffset());
                StringBuilder ranges = new StringBuilder();
                for (AddressRange r : f.getBody()) {
                    if (ranges.length() > 0) ranges.append(',');
                    ranges.append("{\"start\":\"0x").append(Long.toHexString(r.getMinAddress().getOffset())).append("\",\"end\":\"0x")
                        .append(Long.toHexString(r.getMaxAddress().getOffset())).append("\"}");
                }
                String thunkOf = "";
                if (f.isThunk()) {
                    Function tg = f.getThunkedFunction(true);
                    if (tg != null) thunkOf = ",\"thunk_of\":\"" + (tg.isExternal() ? "external:" + esc(tg.getName(true)) : "0x" + Long.toHexString(tg.getEntryPoint().getOffset())) + "\"";
                }
                String common = "{\"address\":\"" + addr + "\",\"name\":\"" + esc(f.getName(true)) + "\",\"thunk\":" + f.isThunk() + thunkOf
                    + ",\"proto\":\"" + esc(f.getPrototypeString(false, true)) + "\",\"sig_source\":\"" + f.getSignatureSource() + "\"";
                if (f.isExternal()) {
                    external++;
                    j.println(common + ",\"status\":\"external\"}");
                    continue;
                }
                DecompileResults res = ifc.decompileFunction(f, 180, monitor);
                String c = (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) ? res.getDecompiledFunction().getC() : null;
                if (c == null) {
                    failed++;
                    j.println(common + ",\"status\":\"failed\",\"reason\":\"" + esc(res == null ? "no result" : String.valueOf(res.getErrorMessage()))
                        + "\",\"body\":{\"ranges\":[" + ranges + "]}}");
                    continue;
                }
                String rel = "functions/" + addr + ".c";
                StringBuilder h = new StringBuilder();
                h.append("// name: ").append(f.getName(true)).append('\n');
                h.append("// address: ").append(addr).append('\n');
                h.append("// provider: Ghidra ").append(ver).append(" (prepared project; ").append(currentProgram.getCompilerSpec().getCompilerSpecID()).append(")\n");
                h.append("// pseudocode: decompiler output; not original source\n");
                Files.write(out.resolve(rel), (h + c).getBytes(StandardCharsets.UTF_8));
                written++;
                j.println(common + ",\"status\":\"written\",\"relative_path\":\"" + rel + "\",\"body\":{\"ranges\":[" + ranges + "]},\"globals\":" + globalsJson(res) + "}");
            }
            // imported functions: no address in this image, but their prototypes are what call sites are printed against
            for (Function f : currentProgram.getFunctionManager().getExternalFunctions()) {
                external++;
                j.println("{\"external\":true,\"name\":\"" + esc(f.getName(true)) + "\",\"proto\":\"" + esc(f.getPrototypeString(false, true)) + "\"}");
            }
        }
        ifc.dispose();
        println("TeaExport: written=" + written + " failed=" + failed + " external=" + external + " -> " + out);
    }
}
