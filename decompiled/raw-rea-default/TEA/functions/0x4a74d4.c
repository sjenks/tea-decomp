// rea decompile_all
// name: FUN_004a74d4
// address: 0x4a74d4
// body: available
// range: 0x4a74d4-0x4a755e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004a74d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  uint3 extraout_var;
  
  iVar1 = FUN_004a7590(param_1,FUN_004a4ab5);
  if (iVar1 != 0) {
    FUN_004a857c(iVar1,0x7fe9);
  }
  pHVar4 = (HWND)0x0;
  iVar1 = FUN_004a743c(param_1);
  iVar3 = iVar1;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    iVar2 = FUN_004a7604(param_1,PTR_FUN_0050ac37);
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_004a7aa0(iVar2,pHVar4,0,0,0,0,0x13);
      iVar3 = (uint)extraout_var << 8;
      pHVar4 = *(HWND *)(iVar2 + 0xc);
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

