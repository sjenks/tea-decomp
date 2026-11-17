// name: FUN_00417a4c
// address: 0x417a4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00417a4c(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x4667a0);
  *param_1 = &PTR_FUN_00461fe8;
  *param_1 = &PTR_FUN_004668c4;
  _DAT_0046677c = _DAT_0046677c + 1;
  iVar3 = FUN_0044b300();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = FUN_0044d2a4(iVar3,uVar2,uVar2);
      *(int **)(iVar3 + 8) = piVar4 + 3;
      FUN_004559d0(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
      if (piVar4 != &DAT_00471d5c) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  param_1[1] = iVar3;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

