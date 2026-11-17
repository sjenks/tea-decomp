// rea decompile_all
// name: FUN_004d00c0
// address: 0x4d00c0
// body: available
// range: 0x4d00c0-0x4d0157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004d00c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_004d0158(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004d0164(param_1);
    iVar1 = FUN_004d0178(piVar2);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_004d0164(param_1);
      iVar1 = FUN_004d0184(piVar2);
      if (iVar1 != 0) {
        return;
      }
    }
    FUN_004d0164(param_1);
    FUN_004d023c(local_c);
    FUN_004d0264();
    FUN_004d0334(param_1);
    FUN_004d0164(param_1);
    FUN_004d027c(local_14);
    FUN_004d02a4();
    local_18 = 0;
    FUN_004d02b4((int)local_28,param_1,&local_18);
  }
  return;
}

