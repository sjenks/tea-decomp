// rea decompile_all
// name: FUN_004b3ce4
// address: 0x4b3ce4
// body: available
// range: 0x4b3ce4-0x4b3e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004b3ce4(int param_1,int *param_2,int param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_cc;
  int local_a8 [33];
  undefined4 local_22 [6];
  undefined4 local_9;
  
  FUN_004dce64(0x50d7a0);
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  FUN_0049b7b0(local_a8,0,uVar3,0x7ef5);
  while (param_3 != 0) {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    pCVar1 = (LPCSTR)FUN_004b5274(iVar2);
    FUN_0049b904((int)local_a8,pCVar1);
    param_3 = param_3 + -1;
  }
  iVar2 = FUN_0049b940((int)local_a8);
  iVar2 = iVar2 + 1;
  if (iVar2 == -1) {
    iVar2 = 0;
    FUN_00497bf4(local_22,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    FUN_004a52c0(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    FUN_00489c54(&local_9,0);
    *in_FS_OFFSET = local_cc;
  }
  else {
    FUN_00497bf4(local_22,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    FUN_004a52c0(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    FUN_00489c54(&local_9,0);
    *in_FS_OFFSET = local_cc;
  }
  return iVar2;
}

