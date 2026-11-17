// rea decompile_all
// name: FUN_004b0624
// address: 0x4b0624
// body: available
// range: 0x4b0624-0x4b0709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_004b0624(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  LONG dwNewLong;
  int local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if (param_2 != 0xc) {
    if (param_2 == 0x30) {
      if ((*(byte *)(*param_1 + 0x74) & 0x20) == 0) {
        local_20[0] = param_2;
        local_20[1] = 0;
        local_14 = 0;
        cVar2 = (**(code **)(param_1[3] + 0x38))();
        if (cVar2 != '\0') {
          iVar3 = FUN_0048e7e0(param_1[1],(int)local_20);
          return iVar3 == 0;
        }
      }
      return true;
    }
    if (1 < param_2 - 0x85U) {
      if (param_2 != 0x110) {
        return false;
      }
      uVar1 = (**(code **)(param_1[3] + 8))();
      return (bool)uVar1;
    }
  }
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') {
    local_8 = param_3;
    local_c = param_2;
    local_10 = *(undefined4 *)(*param_1 + 0xc);
    dwNewLong = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x35))();
    SetWindowLongA(*(HWND *)(*param_1 + 0xc),0,dwNewLong);
  }
  return false;
}

