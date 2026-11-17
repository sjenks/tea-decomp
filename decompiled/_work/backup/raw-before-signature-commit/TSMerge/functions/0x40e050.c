// name: FUN_0040e050
// address: 0x40e050
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0040e091) */

int __cdecl FUN_0040e050(int param_1)

{
  uint uVar1;
  HRESULT HVar2;
  IMalloc *This;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  uint local_1a4 [67];
  undefined *local_98;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  uint local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  int local_54;
  LPCITEMIDLIST local_50;
  IMalloc *local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_00455f04(0x463d64);
  local_c = (undefined4 *)&DAT_00471d68;
  local_98 = &DAT_00471d68;
  local_2c = local_2c + 1;
  local_38 = 0x20;
  HVar2 = SHGetMalloc(&local_4c);
  if (HVar2 == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      BVar3 = SHGetPathFromIDListA(local_50,(LPSTR)local_1a4);
      if (BVar3 != 0) {
        FUN_0044cf10((int)local_14,local_1a4);
      }
      This = (IMalloc *)(*local_4c->lpVtbl->Free)((IMalloc *)local_4c->lpVtbl,local_50);
    }
    (*local_4c->lpVtbl->Release)(This);
  }
  iVar4 = local_c[-1];
  if (iVar4 == 0) {
    local_38 = 0x2c;
    FUN_0040dee4((int)local_24);
    local_2c = local_2c + 1;
    FUN_0044ce78((int)local_14,(int)local_24);
    local_2c = local_2c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_0040e1f9;
      }
      local_54 = local_1c + -0xc;
      FUN_0044b2cc();
      local_58 = 0;
      local_5c = local_24;
      local_1c = 0;
    }
  }
  else {
    if (1 < local_c[-3] + 1) {
      FUN_0045143c((int)local_14);
    }
    if (local_c + -3 != &DAT_00471d5c) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      FUN_00451d38((int)local_14,local_c[-1],0,1,0x5c);
    }
  }
LAB_0040e1f9:
  local_38 = 0x44;
  local_60 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_70 = FUN_0044d2a4(param_1,uVar1,uVar1);
    local_6c = local_70 + 3;
    *(int **)(param_1 + 8) = local_6c;
    local_74 = param_1;
    local_7c = local_c;
    local_80 = *(undefined4 **)(param_1 + 8);
    local_78 = uVar1;
    FUN_004559d0(local_80,local_c,uVar1);
  }
  else {
    local_64 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_68 = param_1;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00471d5c) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_38 = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0040e34c;
    }
    local_84 = local_c + -3;
    local_88 = local_c + -3;
    FUN_0044b2cc();
  }
LAB_0040e34c:
  *in_FS_OFFSET = local_48;
  return param_1;
}

