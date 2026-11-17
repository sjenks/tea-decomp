// name: FUN_0043db94
// address: 0x43db94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0043db94(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  LPCSTR pCVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  _FILETIME local_9c;
  undefined1 *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined1 *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  char *local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_004dce64(0x4f5758);
  uVar4 = DAT_005140ac;
  if (*(uint *)(*(int *)(param_2 + 8) + -4) < DAT_005140ac) {
    uVar4 = *(uint *)(*(int *)(param_2 + 8) + -4);
  }
  local_6c = FUN_00420b88(*(char **)(param_2 + 8),'\\',uVar4);
  uVar4 = DAT_005140ac;
  if (local_6c != (char *)0x0) {
    uVar4 = (int)local_6c - *(int *)(param_2 + 8);
  }
  puVar1 = (uint *)FUN_004e0520((char *)0x0);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)(s_DictionaryOpen_004f5414 + 0xe);
  }
  local_58 = 0x14;
  FUN_004cf628((int)local_14,puVar1);
  local_4c = local_4c + 1;
  local_58 = 8;
  if (uVar4 != 0xffffffff) {
    local_58 = 0x20;
    puVar9 = local_14;
    FUN_004d6118((int)local_24,param_2,0,uVar4 + 1);
    local_4c = local_4c + 1;
    FUN_00436b94((int)local_34,(int)local_24,(int)puVar9);
    local_4c = local_4c + 1;
    FUN_004cf384((int)local_14,(int)local_34);
    local_4c = local_4c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar5 = (int *)(local_2c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043dce1;
      }
      local_78 = local_2c + -0xc;
      local_7c = local_2c + -0xc;
      FUN_004cc0bc();
      local_80 = 0;
      local_84 = local_34;
      local_2c = 0;
    }
LAB_0043dce1:
    local_58 = 8;
    local_4c = local_4c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043dd7a;
      }
      local_88 = local_1c + -0xc;
      local_8c = local_1c + -0xc;
      FUN_004cc0bc();
      local_90 = 0;
      local_94 = local_24;
      local_1c = 0;
    }
  }
LAB_0043dd7a:
  iVar2 = FUN_00408c68(param_1[0x1a],param_1[0x1b]);
  if (iVar2 == 0) {
    FUN_00408c98(param_1[0x1a],param_1[0x1b]);
    (**(code **)(param_1[3] + 0xc4))();
    uVar4 = 0;
  }
  else {
    iVar10 = 0;
    iVar8 = 100;
    iVar2 = param_1[0x1d];
    iVar7 = param_1[0x1c];
    puVar1 = *(uint **)(in_stack_0000000c + 8);
    pCVar6 = local_c;
    iVar3 = FUN_00408edc(param_1[0x1a],param_1[0x1b]);
    uVar4 = FUN_00440d08(param_1 + 0x18,iVar3,pCVar6,puVar1,iVar7,iVar2,iVar8,iVar10);
    uVar4 = uVar4 & 0xff;
  }
  if (uVar4 != 0) {
    FUN_00437928(param_2,&local_9c);
    iVar2 = FUN_004df65c(local_c,*(LPCSTR *)(param_2 + 8));
    if (iVar2 != 0) {
      (**(code **)(param_1[3] + 0xc4))();
      uVar4 = 0;
    }
  }
  if (uVar4 == 0) {
    thunk_FUN_004e0588(local_c);
    local_58 = 0x50;
    FUN_0041b914((int)local_44,param_1 + 0x93);
    local_4c = local_4c + 1;
    local_58 = 0x44;
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    local_4c = local_4c + -1;
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar5 = (int *)(local_3c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0043df06;
      }
      FUN_004cc0bc();
      local_3c = 0;
    }
LAB_0043df06:
    local_58 = 8;
  }
  uVar4 = (uint)(uVar4 != 0);
  local_4c = local_4c + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar2 = *piVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_0043df98;
    }
    FUN_004cc0bc();
  }
LAB_0043df98:
  *in_FS_OFFSET = local_68;
  return uVar4;
}

