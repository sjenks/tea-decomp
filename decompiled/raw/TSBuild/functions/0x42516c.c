// name: FUN_0042516c
// address: 0x42516c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042516c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    return 0;
  }
  if (param_2 == param_1[1]) {
    param_1[1] = *(int *)(param_1[1] + 0x3e);
  }
  else {
    for (iVar1 = param_1[1]; (*(int *)(iVar1 + 0x3e) != 0 && (param_2 != *(int *)(iVar1 + 0x3e)));
        iVar1 = *(int *)(iVar1 + 0x3e)) {
    }
    if (*(int *)(iVar1 + 0x3e) == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x3e) = *(undefined4 *)(*(int *)(iVar1 + 0x3e) + 0x3e);
  }
  param_1[2] = param_1[2] + -1;
  (**(code **)(*param_1 + 0x14))();
  return param_2;
}

