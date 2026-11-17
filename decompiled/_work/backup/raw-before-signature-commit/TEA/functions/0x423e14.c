// name: FUN_00423e14
// address: 0x423e14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00423e14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  BOOL BVar4;
  int iVar5;
  UINT uPosition;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  MENUITEMINFOA local_e8;
  int *local_b0;
  int *local_a0;
  UINT local_98;
  undefined1 local_91;
  int local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  undefined1 local_76;
  undefined1 local_75;
  uint local_74;
  int *local_70;
  uint local_6c;
  int *local_68;
  undefined4 *local_64;
  uint local_60;
  undefined1 *local_5c;
  int *local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4f12f0);
  FUN_00423c6c(param_1);
  uPosition = 0;
  local_3c = 0;
  do {
    iVar6 = 0;
    do {
      if (*(int *)(param_1[local_3c] + 0x40 + iVar6 * 0x38) != 0) {
        local_28 = 0x14;
        iVar1 = param_1[local_3c] + iVar6 * 0x38;
        local_40 = iVar1 + 0x48;
        local_c = (int *)0x0;
        iVar5 = *(int *)(*(int *)(iVar1 + 0x50) + -0xc);
        if (iVar5 == -1 || iVar5 + 1 < 0) {
          local_50 = *(uint *)(*(int *)(iVar1 + 0x50) + -4);
          local_58 = FUN_004cf7b0(local_14,local_50,local_50);
          local_b0 = local_58 + 3;
          local_60 = local_50;
          local_64 = *(undefined4 **)(local_40 + 8);
          local_68 = local_b0;
          local_5c = local_14;
          local_54 = local_b0;
          local_c = local_b0;
          FUN_004dc7d4(local_b0,local_64,local_50);
        }
        else {
          local_a0 = *(int **)(iVar1 + 0x50);
          local_4c = local_a0 + -3;
          local_48 = local_14;
          local_44 = local_a0;
          local_c = local_a0;
          if (local_4c != &DAT_00513d58) {
            *local_4c = *local_4c + 1;
          }
        }
        local_1c = local_1c + 1;
        local_28 = 8;
        local_70 = param_1 + 8;
        uVar2 = FUN_004d40d0((int)local_14,0,local_c[-1],(byte *)param_1[10],
                             *(uint *)(param_1[10] + -4));
        local_6c = (uint)(uVar2 == 0);
        if (local_6c != 0) {
          local_74 = local_c[-1];
          pcVar3 = FUN_004dc9f4((uint *)s_Ctrl_Alt_Enter_004f0e7c);
          FUN_004cfad4((int)local_14,local_74,0,0x4f0e7c,(uint)pcVar3,0,(uint)pcVar3);
        }
        FUN_004979c4(&local_e8.cbSize,0);
        local_e8.fMask = local_e8.fMask | 0x13;
        local_e8.fType = 0x200;
        local_e8.dwTypeData = (LPSTR)local_c;
        if (local_6c == 0) {
          local_e8.fState = local_e8.fState & 0xfffffff7;
        }
        else {
          local_e8.fState = local_e8.fState | 8;
        }
        if (param_3 == 0) {
          local_e8.fState = local_e8.fState | 3;
        }
        else {
          local_e8.fState = local_e8.fState & 0xfffffffc;
        }
        local_e8.wID = uPosition + 0x3340;
        uVar2 = GetMenuItemCount(*(HMENU *)(param_2 + 4));
        if (uPosition + 2 < uVar2) {
          local_75 = FUN_00497d04(param_2,uPosition,'\x01',&local_e8);
        }
        else {
          local_76 = FUN_00497d34(param_2,uPosition,'\x01',&local_e8);
        }
        uPosition = uPosition + 1;
        local_1c = local_1c + -1;
        if (local_c != (int *)0x0) {
          if (local_c[-3] != -1) {
            local_7c = local_c + -3;
            if (local_7c == &DAT_00513d58) {
              iVar5 = 1;
            }
            else if (local_7c == &DAT_00513d58) {
              iVar5 = 1;
            }
            else {
              *local_7c = *local_7c + -1;
              iVar5 = *local_7c + 1;
            }
            if (iVar5 != 0) goto LAB_004240e2;
          }
          local_80 = local_c + -3;
          local_84 = local_c + -3;
          FUN_004cc0bc();
          local_88 = 0;
          local_c = (int *)0x0;
          local_8c = local_14;
        }
LAB_004240e2:
        local_28 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    local_3c = local_3c + 1;
    if (3 < local_3c) {
      iVar6 = GetMenuItemCount(*(HMENU *)(param_2 + 4));
      local_90 = (iVar6 + -2) - uPosition;
      while (0 < local_90) {
        local_98 = uPosition;
        local_90 = local_90 + -1;
        BVar4 = DeleteMenu(*(HMENU *)(param_2 + 4),uPosition,0x400);
        local_91 = BVar4 != 0;
      }
      *in_FS_OFFSET = local_38;
      return;
    }
  } while( true );
}

