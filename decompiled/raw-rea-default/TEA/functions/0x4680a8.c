// rea decompile_all
// name: FUN_004680a8
// address: 0x4680a8
// body: available
// range: 0x4680a8-0x468157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_004680a8(int param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  WPARAM WVar5;
  
  BVar1 = IsWindowEnabled(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc));
  if (BVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)(param_1 + 0x60),0x1304,0,0);
    iVar4 = FUN_004a76a8(*(int *)(param_1 + 0x60),0x130b,0,0);
    WVar5 = iVar4 + param_2;
    if ((int)WVar5 < 0) {
      WVar5 = iVar3 - 1;
    }
    else if (iVar3 <= (int)WVar5) {
      WVar5 = 0;
    }
    FUN_004a76a8(*(int *)(param_1 + 0x60),0x130c,WVar5,0);
    GetDlgCtrlID(*(HWND *)(*(int *)(param_1 + 0x60) + 0xc));
    uVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}

