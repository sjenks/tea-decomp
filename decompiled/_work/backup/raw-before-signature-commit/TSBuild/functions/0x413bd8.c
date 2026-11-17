// name: FUN_00413bd8
// address: 0x413bd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00413bd8(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  FUN_00467ba8(0x476838);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x18) - iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if ((uint)(iVar2 >> 4) < param_3) {
      iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      local_3c = iVar1 >> 4;
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      iVar1 = FUN_00456840();
      if (iVar1 == 0) {
        local_1c = 8;
        local_8 = &PTR_FUN_00476b30;
        local_10 = local_10 + 2;
        FUN_00471ae8((uint *)&DAT_0040eb28,&local_8,0,&LAB_0040eb80,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0041262c(*(int *)(param_1 + 4),param_2,iVar1);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_00413eac((iVar2 >> 4) * 0x10 + iVar1,param_3,param_4);
      iVar2 = param_2 - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_0041262c(param_2,*(int *)(param_1 + 8),((iVar2 >> 4) + param_3) * 0x10 + iVar1);
      local_1c = 0;
      iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      FUN_00414020(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
      FUN_0045680c();
      *(int *)(param_1 + 0x18) = local_38 * 0x10 + iVar1;
      *(uint *)(param_1 + 8) = (iVar2 >> 4) * 0x10 + iVar1 + param_3 * 0x10;
      *(int *)(param_1 + 4) = iVar1;
    }
    else {
      iVar2 = iVar1 - param_2;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      if (param_3 < (uint)(iVar2 >> 4)) {
        FUN_0041262c(iVar1 + param_3 * -0x10,iVar1,iVar1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        FUN_004125fc(param_2,iVar1 + param_3 * -0x10,iVar1);
        FUN_00413e80(param_2,param_3 * 0x10 + param_2,param_4);
      }
      else {
        iVar2 = iVar1 - param_2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        iVar2 = param_3 - (iVar2 >> 4);
        FUN_00413eac(iVar1,iVar2,param_4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2 * 0x10;
        FUN_0041262c(param_2,iVar1,param_3 * 0x10 + param_2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar2) * 0x10;
        FUN_00413e80(param_2,iVar1,param_4);
      }
    }
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

