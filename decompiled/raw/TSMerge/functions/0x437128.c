// name: FUN_00437128
// address: 0x437128
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00437128(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46c804);
  iVar1 = FUN_0043680c(param_1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar4 = iVar1 << 2;
    iVar3 = FUN_0044b390();
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))
                      (iVar3,*(int *)(param_1 + 8),iVar4,param_1,iVar3,iVar1,param_2);
    if (1 < iVar1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 100))();
    }
    if (iVar1 < 1) {
      uVar2 = 0;
      FUN_0044b2dc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      uVar2 = FUN_004371f8(param_1,param_2,*(int **)(iVar3 + -4 + iVar1 * 4));
      FUN_0044b2dc();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}

