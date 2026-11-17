// rea decompile_all
// name: FUN_004bde38
// address: 0x4bde38
// body: available
// range: 0x4bde38-0x4bdebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004bde38(int *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  HMENU pHVar2;
  uint uVar3;
  undefined4 local_c;
  
  if ((param_4 == '\0') && (param_2 != (HMENU)0x0)) {
    iVar1 = GetMenuItemCount(param_2);
    local_c = 0;
    pHVar2 = GetMenu(*(HWND *)(*param_1 + 0xc));
    if (param_2 == pHVar2) {
      local_c = FUN_004bd6bc(param_2,iVar1);
    }
    FUN_004a7d1c(*param_1,param_2,param_3,'\0');
    pHVar2 = GetMenu(*(HWND *)(*param_1 + 0xc));
    if (param_2 == pHVar2) {
      uVar3 = FUN_004bd6bc(param_2,iVar1);
      if (uVar3 != local_c) {
        DrawMenuBar(*(HWND *)(*param_1 + 0xc));
      }
    }
  }
  return;
}

