// name: FUN_0040a4c0
// address: 0x40a4c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_0040a4c0(int param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_80;
  uint local_7c [3];
  int *local_70;
  int *local_6c;
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
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  undefined1 local_18 [8];
  int *local_10;
  undefined4 local_8;
  
  FUN_00455f04(0x462ccc);
  if ((param_4 == 0) || (param_5 == 0)) {
    *in_FS_OFFSET = local_3c;
    return local_3c;
  }
  if (param_4 + param_5 != 2) {
    FUN_00409bd4(local_7c,0);
    FUN_00409bd4(&local_80,0);
    if ((int)param_5 < (int)param_4) {
      local_7c[0] = (int)param_4 >> 1;
      if ((int)local_7c[0] < 0) {
        local_7c[0] = local_7c[0] + ((param_4 & 1) != 0);
      }
      iVar5 = param_1 + local_7c[0] * 0x10;
      iVar2 = FUN_00409be4(param_2,param_3,iVar5,param_6);
      iVar3 = iVar2 - param_2;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      local_80 = iVar3 >> 4;
    }
    else {
      local_80 = (int)param_5 >> 1;
      if ((int)local_80 < 0) {
        local_80 = local_80 + ((param_5 & 1) != 0);
      }
      iVar2 = param_2 + local_80 * 0x10;
      iVar5 = FUN_00409cb8(param_1,param_2,iVar2,param_6);
      iVar3 = iVar5 - param_1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      local_7c[0] = iVar3 >> 4;
    }
    if ((param_2 != iVar5) && (param_2 != iVar2)) {
      FUN_00409e44(iVar5,param_2,iVar2);
    }
    iVar3 = iVar5 + local_80 * 0x10;
    FUN_0040a4c0(param_1,iVar5,iVar3,local_7c[0],local_80,param_6);
    uVar6 = FUN_0040a4c0(iVar3,iVar2,param_3,param_4 - local_7c[0],param_5 - local_80,param_6);
    *in_FS_OFFSET = local_3c;
    return uVar6;
  }
  cVar1 = (**(code **)*param_6)();
  if (cVar1 == '\0') {
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar7 = &LAB_00409830;
    uVar6 = 0;
    local_2c = 8;
    FUN_00409794(&local_8);
    local_20 = local_20 + 2;
    FUN_0045ed74((uint *)&DAT_004097d4,&local_8,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
  }
  iVar2 = FUN_00405984(param_2,param_1);
  if (0 < iVar2) {
    local_2c = 0x20;
    local_40 = 0;
    local_10 = (int *)0x0;
    iVar2 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (iVar2 == -1 || iVar2 + 1 < 0) {
      local_50 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_58 = FUN_0044d2a4(local_18,local_50,local_50);
      local_5c = local_18;
      local_68 = local_58 + 3;
      local_60 = local_50;
      local_64 = *(undefined4 **)(param_1 + 8);
      local_54 = local_68;
      local_10 = local_68;
      FUN_004559d0(local_68,local_64,local_50);
    }
    else {
      local_44 = *(int **)(param_1 + 8);
      local_48 = local_18;
      local_4c = local_44 + -3;
      local_10 = local_44;
      if (local_4c != &DAT_00471d5c) {
        *local_4c = *local_4c + 1;
      }
    }
    local_20 = local_20 + 1;
    FUN_0044ce78(param_1,param_2);
    FUN_0044ce78(param_2,(int)local_18);
    local_20 = local_20 + -1;
    if (local_10 != (int *)0x0) {
      if (local_10[-3] != -1) {
        piVar4 = local_10 + -3;
        if (piVar4 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar4 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar2 = *piVar4 + 1;
        }
        if (iVar2 != 0) goto LAB_0040a6c6;
      }
      local_6c = local_10 + -3;
      local_70 = local_10 + -3;
      FUN_0044b2cc();
    }
  }
LAB_0040a6c6:
  *in_FS_OFFSET = local_3c;
  return local_3c;
}

