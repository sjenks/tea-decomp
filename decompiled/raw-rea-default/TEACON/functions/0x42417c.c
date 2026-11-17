// rea decompile_all
// name: FUN_0042417c
// address: 0x42417c
// body: available
// range: 0x42417c-0x424212 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** __stdcall FUN_0042417c(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_0041ee4c(&PTR_DAT_00432e2c,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_0043330c + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00432e2c = (undefined *)puVar1[1];
    PTR_DAT_00432e30 = (undefined *)*puVar1;
    PTR_DAT_00432e34 = (undefined *)puVar1[2];
    PTR_DAT_00432e4c = (undefined *)puVar1[3];
    PTR_DAT_00432e50 = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_0043330c + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_00432e38 = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00432e3c = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00432e40 = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00432e44 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_00432e48 = *(undefined **)(puVar2 + 0x24);
    DAT_00432e54 = puVar2[2];
    DAT_00432e55 = *puVar2;
    DAT_00432e56 = puVar2[0xc];
    DAT_00432e57 = puVar2[0xe];
    DAT_00432e58 = puVar2[0x10];
    DAT_00432e59 = puVar2[0x12];
    DAT_00432e5a = puVar2[8];
    DAT_00432e5b = puVar2[10];
  }
  return &PTR_DAT_00432e2c;
}

