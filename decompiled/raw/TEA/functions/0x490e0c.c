// name: FUN_00490e0c
// address: 0x490e0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00490e0c(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  if ((param_4 != 0) || (param_3 == 1)) {
    for (; (*piVar1 != 0 && (param_4 != *piVar1)); piVar1 = (int *)(*piVar1 + 0x3e)) {
    }
  }
  if ((param_3 == 1) && (*piVar1 != 0)) {
    piVar1 = (int *)(*piVar1 + 0x3e);
  }
  *(int *)(param_2 + 0x3e) = *piVar1;
  *piVar1 = param_2;
  param_1[2] = param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))();
  return;
}

