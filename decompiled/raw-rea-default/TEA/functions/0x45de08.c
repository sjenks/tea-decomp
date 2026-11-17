// rea decompile_all
// name: FUN_0045de08
// address: 0x45de08
// body: available
// range: 0x45de08-0x45dfba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_0045de08(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  HWND local_8;
  
  if (param_2 == 0x73) {
    FUN_0044faac(*param_1);
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  else if ((param_2 == 0x74) && (param_3 != 0)) {
    FUN_0044faac(param_3);
  }
  else {
    local_8 = GetTopWindow((HWND)0x0);
    local_c = 0xffffffff;
    local_10 = 0xffffffff;
    local_14 = 0xffffffff;
    local_18 = 0;
    while ((local_18 < 1000 && (local_8 != (HWND)0x0))) {
      uVar4 = 0;
      while( true ) {
        iVar3 = param_1[0x322] - param_1[0x321];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) <= uVar4) break;
        iVar3 = *(int *)(param_1[0x321] + uVar4 * 4);
        if (*(int *)(iVar3 + 0xc) == 0) {
          bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
        }
        else {
          BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
          bVar5 = BVar2 != 0;
        }
        uVar1 = local_c;
        if ((((bVar5) && (*(HWND *)(*(int *)(param_1[0x321] + uVar4 * 4) + 0xc) == local_8)) &&
            (local_14 = uVar4, uVar1 = uVar4, local_c != 0xffffffff)) &&
           (uVar1 = local_c, local_10 == 0xffffffff)) {
          local_10 = uVar4;
        }
        local_c = uVar1;
        uVar4 = uVar4 + 1;
      }
      local_8 = GetWindow(local_8,2);
      local_18 = local_18 + 1;
    }
    if (((param_2 == 0x75) && (local_c != 0xffffffff)) && (local_c != local_14)) {
      FUN_004a7aa0(*(int *)(param_1[0x321] + local_c * 4),
                   *(HWND *)(*(int *)(param_1[0x321] + local_14 * 4) + 0xc),0,0,0,0,0x53);
      local_c = local_10;
    }
    if (local_c != 0xffffffff) {
      BringWindowToTop(*(HWND *)(*(int *)(param_1[0x321] + local_c * 4) + 0xc));
    }
  }
  return;
}

