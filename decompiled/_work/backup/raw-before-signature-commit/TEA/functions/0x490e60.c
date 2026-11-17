// name: FUN_00490e60
// address: 0x490e60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_00490e60(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_5[1] != 0) {
    piVar3 = param_4 + 1;
    if ((param_7 != 0) || (param_6 == 1)) {
      for (; (*piVar3 != 0 && (param_7 != *piVar3)); piVar3 = (int *)(*piVar3 + 0x3e)) {
      }
    }
    if ((param_6 == 1) && (*piVar3 != 0)) {
      piVar3 = (int *)(*piVar3 + 0x3e);
    }
    iVar2 = param_5[1];
    while (iVar1 = iVar2, iVar1 != 0) {
      (**(code **)(*param_5 + 0x14))();
      (**(code **)(*param_4 + 0x10))();
      param_1 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x3e);
    }
    *(int *)(param_1 + 0x3e) = *piVar3;
    *piVar3 = param_5[1];
    param_4[2] = param_4[2] + param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
  }
  return;
}

