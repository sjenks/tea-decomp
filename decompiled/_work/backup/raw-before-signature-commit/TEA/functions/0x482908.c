// name: FUN_00482908
// address: 0x482908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00482908(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5031cc);
  iVar3 = FUN_004828bc(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),param_2);
  iVar5 = iVar3 - *(int *)(param_1 + 0x14);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x28)) {
      FUN_0040e240(param_1 + 0x10,*(int *)(param_1 + 0x18),param_2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
        iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
        if (iVar1 == -1 || iVar1 + 1 < 0) {
          uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
          piVar4 = FUN_004cf7b0(iVar3,uVar2,uVar2);
          *(int **)(iVar3 + 8) = piVar4 + 3;
          FUN_004dc7d4(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
        }
        else {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
          piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (piVar4 != &DAT_00513d58) {
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x10;
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar5 >> 4;
}

