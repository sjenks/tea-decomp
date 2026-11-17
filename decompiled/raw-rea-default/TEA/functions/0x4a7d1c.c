// rea decompile_all
// name: FUN_004a7d1c
// address: 0x4a7d1c
// body: available
// range: 0x4a7d1c-0x4a7e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_004a7d1c(int param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  HMENU pHVar1;
  UINT UVar2;
  int nPos;
  undefined4 *in_FS_OFFSET;
  undefined **local_54 [3];
  undefined4 local_48;
  HMENU local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x50b22c);
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    if ((param_4 == '\0') && (param_2 != (HMENU)0x0)) {
      local_38 = GetMenuItemCount(param_2);
      nPos = 0;
      if (0 < local_38) {
        do {
          pHVar1 = GetMenu(*(HWND *)(param_1 + 0xc));
          if (param_2 == pHVar1) {
            UVar2 = GetMenuItemID(param_2,nPos);
          }
          else {
            local_24 = 8;
            FUN_00497aec(local_10,param_2,0);
            local_18 = local_18 + 1;
            local_24 = 0x14;
            UVar2 = FUN_00497c2c((int)local_10,nPos);
            local_18 = local_18 + -1;
            FUN_00497bf4(local_10,2);
            local_24 = 0;
          }
          if ((UVar2 != 0) && ((short)UVar2 != -1)) {
            if ((UVar2 == 0x7d01) || (0xf000 < UVar2)) break;
            local_3c = nPos;
            FUN_004a4d68(local_54,UVar2,*(undefined4 *)(param_1 + 0xc));
            local_54[0] = &PTR_FUN_0050b3e0;
            local_44 = param_2;
            local_40 = local_3c;
            UVar2 = GetMenuItemID(param_2,local_3c);
            if (UVar2 == 0xffffffff) {
              local_48 = 2;
            }
            (**(code **)(*(int *)(param_1 + 8) + 0x50))();
          }
          nPos = nPos + 1;
        } while (nPos < local_38);
      }
    }
  }
  else {
    FUN_004a5774(param_1);
  }
  *in_FS_OFFSET = local_34;
  return;
}

