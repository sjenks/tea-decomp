// name: FUN_004649b0
// address: 0x4649b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004649b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fbd00);
  *(undefined4 *)(param_1 + 8) = 0;
  if (DAT_0051a848[-3] == -1 || DAT_0051a848[-3] + 1 < 0) {
    uVar1 = DAT_0051a848[-1];
    piVar2 = FUN_004cf7b0(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar2 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),DAT_0051a848,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = DAT_0051a848;
    piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar2 != &DAT_00513d58) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

