// rea decompile_all
// name: FUN_0047431c
// address: 0x47431c
// body: available
// range: 0x47431c-0x474760 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 3d97689231092bb069c4cce300579f66b49d458d30316f639f63b3829183de18
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0047431c(undefined4 *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  UINT UVar2;
  int *piVar3;
  int iVar4;
  UINT UVar5;
  UINT *pUVar6;
  UINT_PTR uIDNewItem;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar8;
  uint local_c0 [9];
  undefined1 *local_9c;
  undefined4 local_98;
  LPCSTR local_94;
  LPCSTR local_90;
  undefined1 *local_8c;
  LPCSTR local_88;
  UINT local_84;
  UINT local_80;
  UINT_PTR local_7c;
  UINT local_78;
  UINT local_74;
  UINT_PTR local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  UINT local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  undefined1 local_30 [8];
  int local_28;
  undefined1 local_20 [8];
  LPCSTR local_18;
  undefined4 local_10;
  HMENU local_c;
  
  FUN_004dce64(0x4ff8f0);
  FUN_004bde38((int *)*param_1,param_2,param_3,param_4);
  if ((param_2 != (HMENU)0x0) && (param_4 == '\0')) {
    local_44 = 8;
    FUN_00497aec(&local_10,param_2,0);
    local_38 = local_38 + 1;
    local_44 = 0x14;
    uVar7 = 0;
    pUVar6 = &DAT_004ff36c;
    do {
      UVar2 = GetMenuState(local_c,*pUVar6,0);
      if (UVar2 != 0xffffffff) {
        DAT_0051ac84 = pUVar6[1];
        _DAT_0051ac88 = DAT_0051ac84;
        break;
      }
      uVar7 = uVar7 + 1;
      pUVar6 = pUVar6 + 2;
    } while (uVar7 < 0xb);
    if (DAT_0051ac84 == 0x3412) {
      bVar1 = FUN_00454524(param_1[0x12],0x1d42);
      uVar7 = (uint)bVar1;
      puVar8 = &local_10;
      piVar3 = (int *)FUN_00422fc4(param_1[0x13]);
      FUN_00423e14(piVar3,(int)puVar8,uVar7);
    }
    UVar2 = FUN_00497c2c((int)&local_10,0);
    if (UVar2 == 0x1d7e) {
      FUN_004663a0(param_1[0x13],(int)&local_10);
      UVar2 = GetMenuItemCount(local_c);
      local_44 = 0x14;
      do {
        UVar2 = UVar2 - 1;
        if ((int)UVar2 < 0) break;
        UVar5 = FUN_00497c2c((int)&local_10,UVar2);
      } while (UVar5 != 0x12e8);
      if (-1 < (int)UVar2) {
        local_58 = FUN_0041238c(param_1[0x13],0);
        if (*(int *)(param_1[0x12] + 100) == 2) {
          local_5c = 0x401;
        }
        else {
          local_5c = 0x400;
        }
        uIDNewItem = 0x12e8;
        do {
          local_44 = 0x2c;
          FUN_00412434((int)local_20,(int)local_58,uIDNewItem - 0x12e8);
          local_44 = 0x20;
          if (*(int *)(local_18 + -4) == 0) {
            if (local_18 == (LPCSTR)0x0) break;
            if (*(int *)(local_18 + -0xc) != -1) {
              piVar3 = (int *)(local_18 + -0xc);
              if (piVar3 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else if (piVar3 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else {
                *piVar3 = *piVar3 + -1;
                iVar4 = *piVar3 + 1;
              }
              if (iVar4 != 0) break;
            }
            local_88 = local_18 + -0xc;
            FUN_004cc0bc();
            local_8c = local_20;
            local_18 = (LPCSTR)0x0;
            break;
          }
          local_38 = local_38 + 1;
          FUN_004e0344((undefined1 *)local_c0,&DAT_004ff3d5);
          local_44 = 0x38;
          FUN_00435880((int)local_30,local_c0,(int)local_20);
          local_38 = local_38 + 1;
          FUN_004cf384((int)local_20,(int)local_30);
          local_38 = local_38 + -1;
          if (local_28 != 0) {
            if (*(int *)(local_28 + -0xc) != -1) {
              piVar3 = (int *)(local_28 + -0xc);
              if (piVar3 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else if (piVar3 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else {
                *piVar3 = *piVar3 + -1;
                iVar4 = *piVar3 + 1;
              }
              if (iVar4 != 0) goto LAB_0047461f;
            }
            local_60 = local_28 + -0xc;
            local_64 = local_28 + -0xc;
            FUN_004cc0bc();
            local_68 = 0;
            local_6c = local_30;
            local_28 = 0;
          }
LAB_0047461f:
          local_44 = 0x20;
          UVar5 = FUN_00497c2c((int)&local_10,UVar2);
          if (uIDNewItem == UVar5) {
            local_80 = local_5c;
            local_84 = UVar2;
            local_7c = uIDNewItem;
            ModifyMenuA(local_c,UVar2,local_5c,uIDNewItem,local_18);
          }
          else {
            local_74 = local_5c;
            local_78 = UVar2;
            local_70 = uIDNewItem;
            InsertMenuA(local_c,UVar2,local_5c,uIDNewItem,local_18);
          }
          UVar2 = UVar2 + 1;
          local_38 = local_38 + -1;
          if (local_18 != (LPCSTR)0x0) {
            if (*(int *)(local_18 + -0xc) != -1) {
              piVar3 = (int *)(local_18 + -0xc);
              if (piVar3 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else if (piVar3 == &DAT_00513d58) {
                iVar4 = 1;
              }
              else {
                *piVar3 = *piVar3 + -1;
                iVar4 = *piVar3 + 1;
              }
              if (iVar4 != 0) goto LAB_00474726;
            }
            local_90 = local_18 + -0xc;
            local_94 = local_18 + -0xc;
            FUN_004cc0bc();
            local_98 = 0;
            local_9c = local_20;
            local_18 = (LPCSTR)0x0;
          }
LAB_00474726:
          local_44 = 0x14;
          uIDNewItem = uIDNewItem + 1;
        } while (uIDNewItem < 0x12f2);
      }
    }
    local_38 = local_38 + -1;
    FUN_00497bf4(&local_10,2);
  }
  *in_FS_OFFSET = local_54;
  return;
}

