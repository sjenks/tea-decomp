// name: FUN_00412cf0
// address: 0x412cf0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00412e4d) */
/* WARNING: Removing unreachable block (ram,0x00412f6e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl FUN_00412cf0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint local_150 [15];
  undefined4 local_114;
  undefined *local_104;
  undefined4 local_f4;
  undefined1 *local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  undefined *local_e0;
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined *local_d4;
  undefined *local_d0;
  int *local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  uint *local_94;
  undefined1 *local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  undefined *local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  undefined *local_14;
  int local_c [2];
  
  FUN_004dce64(0x4ecdb8);
  local_70 = 8;
  FUN_004cc3c4(param_1,0x10,10,1,FUN_00412334);
  local_64 = local_64 + 10;
  param_1[0x28] = param_2;
  param_1[0x29] = param_3;
  local_70 = 0x20;
  iVar3 = 0;
  iVar2 = 0;
  FUN_004649b0((int)local_2c);
  local_64 = local_64 + 1;
  FUN_0044e83c(local_c,(int)local_2c,iVar2,iVar3);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar1 = (int *)(local_24 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00412e08;
    }
    local_84 = local_24 + -0xc;
    local_88 = local_24 + -0xc;
    FUN_004cc0bc();
    local_8c = 0;
    local_90 = local_2c;
    local_24 = 0;
    local_f4 = 0;
  }
LAB_00412e08:
  if (param_1[0x29] == 0) {
    local_94 = (uint *)s_FileDictionary_004ecb28;
  }
  else {
    local_94 = (uint *)s_FileCrossword_004ecb37;
  }
  local_14 = &DAT_00513d64;
  local_104 = &DAT_00513d64;
  local_64 = local_64 + 1;
  puVar4 = local_1c;
  local_70 = 0x50;
  FUN_004cf628((int)local_3c,local_94);
  local_64 = local_64 + 1;
  FUN_0044e94c((int)local_c,(int)local_3c,(int)puVar4);
  local_64 = local_64 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar1 = (int *)(local_34 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00412f16;
    }
    local_a0 = local_34 + -0xc;
    local_a4 = local_34 + -0xc;
    FUN_004cc0bc();
    local_a8 = 0;
    local_ac = local_3c;
    local_34 = 0;
    local_114 = 0;
  }
LAB_00412f16:
  local_70 = 0x14;
  FUN_004cf384((int)param_1,(int)local_1c);
  iVar2 = 1;
  do {
    FUN_004e0344((undefined1 *)local_150,&DAT_004ecb45);
    local_44 = &DAT_00513d64;
    local_64 = local_64 + 1;
    puVar4 = local_4c;
    local_70 = 0x8c;
    FUN_004cf628((int)local_5c,local_150);
    local_64 = local_64 + 1;
    FUN_0044e94c((int)local_c,(int)local_5c,(int)puVar4);
    local_64 = local_64 + -1;
    if (local_54 != 0) {
      if (*(int *)(local_54 + -0xc) != -1) {
        local_b8 = (int *)(local_54 + -0xc);
        if (local_b8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_b8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_b8 = *local_b8 + -1;
          iVar3 = *local_b8 + 1;
        }
        if (iVar3 != 0) goto LAB_00413055;
      }
      local_bc = local_54 + -0xc;
      local_c0 = local_54 + -0xc;
      FUN_004cc0bc();
      local_c4 = 0;
      local_c8 = local_5c;
      local_54 = 0;
    }
LAB_00413055:
    local_70 = 0x80;
    FUN_004cf384((int)(param_1 + iVar2 * 4),(int)local_4c);
    local_64 = local_64 + -1;
    if (local_44 != (undefined *)0x0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        local_cc = (int *)(local_44 + -0xc);
        if (local_cc == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_cc == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_cc = *local_cc + -1;
          iVar3 = *local_cc + 1;
        }
        if (iVar3 != 0) goto LAB_00413115;
      }
      local_d0 = local_44 + -0xc;
      local_d4 = local_44 + -0xc;
      FUN_004cc0bc();
      local_d8 = 0;
      local_dc = local_4c;
      local_44 = (undefined *)0x0;
    }
LAB_00413115:
    local_70 = 0x14;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  local_64 = local_64 + -1;
  if (local_14 != (undefined *)0x0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar1 = (int *)(local_14 + -0xc);
      if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_004131ac;
    }
    local_e0 = local_14 + -0xc;
    local_e4 = local_14 + -0xc;
    FUN_004cc0bc();
    local_e8 = 0;
    local_ec = local_1c;
    local_14 = (undefined *)0x0;
  }
LAB_004131ac:
  local_70 = 0x14;
  local_64 = local_64 + -1;
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_80;
  return param_1;
}

