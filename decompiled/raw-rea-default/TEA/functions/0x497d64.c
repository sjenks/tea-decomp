// rea decompile_all
// name: FUN_00497d64
// address: 0x497d64
// body: available
// range: 0x497d64-0x497efc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_00497d64(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  UINT uFlags;
  HMENU pHVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  CHAR local_14c [256];
  UINT local_4c;
  UINT_PTR local_48;
  int local_44;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  int local_1c [3];
  int local_10 [3];
  
  FUN_004dce64(0x507ee8);
  if (param_4 < 0) {
    iVar1 = GetMenuItemCount((HMENU)param_2[1]);
    param_4 = iVar1 - param_3;
  }
  iVar1 = 0;
  if (0 < param_4) {
    do {
      uFlags = GetMenuState((HMENU)param_2[1],param_3 + iVar1,0x400);
      if (uFlags == 0xffffffff) {
        *in_FS_OFFSET = local_40;
        return;
      }
      (**(code **)(*param_2 + 4))();
      FUN_004c1f4c();
      if ((uFlags & 0x10) == 0) {
        local_4c = FUN_00497c2c((int)param_2,param_3 + iVar1);
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags,local_4c,local_14c);
      }
      else {
        local_30 = 8;
        iVar3 = 0;
        local_44 = param_3 + iVar1;
        pHVar2 = GetSubMenu((HMENU)param_2[1],local_44);
        FUN_00497aec(local_10,pHVar2,iVar3);
        local_24 = local_24 + 1;
        local_30 = 0x20;
        FUN_00497a04(local_1c,0);
        local_24 = local_24 + 1;
        local_30 = 0x14;
        FUN_00497d64((int)local_1c,local_10,0,-1);
        local_48 = (**(code **)(local_1c[0] + 4))();
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags & 0x10,local_48,local_14c);
        local_24 = local_24 + -1;
        FUN_00497bf4(local_1c,2);
        local_24 = local_24 + -1;
        FUN_00497bf4(local_10,2);
        local_30 = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  *in_FS_OFFSET = local_40;
  return;
}

