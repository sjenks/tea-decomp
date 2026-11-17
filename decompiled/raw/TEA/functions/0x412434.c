// name: FUN_00412434
// address: 0x412434
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00412434(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ecb80);
  iVar3 = param_3 * 0x10 + param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
    piVar4 = FUN_004cf7b0(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

