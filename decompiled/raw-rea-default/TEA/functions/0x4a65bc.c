// rea decompile_all
// name: FUN_004a65bc
// address: 0x4a65bc
// body: available
// range: 0x4a65bc-0x4a6631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a65bc(int param_1,int param_2,undefined4 param_3,HWND param_4)

{
  int iVar1;
  LRESULT LVar2;
  uint uVar3;
  
  if (param_4 == (HWND)0x0) {
    FUN_004a5774(param_1);
  }
  else {
    LVar2 = FUN_004a614c(param_4,*(LPARAM *)(param_1 + 0x6c));
    if (LVar2 != 0) {
      FUN_004a7708(LVar2,'\x01');
    }
    uVar3 = GetDlgCtrlID(param_4);
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0x5b) = 0x111;
    *(uint *)(iVar1 + 0x5f) = param_2 << 0x10 | uVar3 & 0xffff;
    *(HWND *)(iVar1 + 99) = param_4;
    (**(code **)(*(int *)(param_1 + 8) + 0x48))();
  }
  return;
}

