// rea decompile_all
// name: FUN_004b7164
// address: 0x4b7164
// body: available
// range: 0x4b7164-0x4b7218 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_004b7164(int *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  LPSTR lpString;
  int local_8;
  
  if (((param_1[6] != 0) && ((*(byte *)(param_1[6] + 4) & 2) != 0)) &&
     (iVar1 = FUN_004a76a8(*param_1,0xba,0,0), iVar1 < 2)) {
    lpString = (LPSTR)FUN_004cc180();
    GetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString,param_1[5]);
    local_8 = (**(code **)(*(int *)param_1[6] + 0x10))();
    if (local_8 == 0) {
      local_8 = FUN_004c7ba4(param_1,param_2,param_3);
    }
    else if (param_3 == 1) {
      SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
    }
    FUN_004cc0cc();
    return local_8;
  }
  iVar1 = FUN_004c7ba4(param_1,param_2,param_3);
  return iVar1;
}

