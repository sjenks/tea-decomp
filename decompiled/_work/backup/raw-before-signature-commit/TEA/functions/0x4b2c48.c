// name: FUN_004b2c48
// address: 0x4b2c48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b2c48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50d520);
  iVar1 = FUN_004b232c(param_1,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    *in_FS_OFFSET = local_2c;
  }
  else {
    iVar4 = iVar1 << 2;
    iVar3 = FUN_004cc180();
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))
                      (iVar3,*(int *)(param_1 + 8),iVar4,param_1,iVar3,iVar1,param_2);
    if (1 < iVar1) {
      iVar1 = (**(code **)(*(int *)(param_1 + 8) + 100))();
    }
    if (iVar1 < 1) {
      uVar2 = 0;
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
    else {
      uVar2 = FUN_004b2d18(param_1,param_2,*(int **)(iVar3 + -4 + iVar1 * 4));
      FUN_004cc0cc();
      *in_FS_OFFSET = local_2c;
    }
  }
  return uVar2;
}

