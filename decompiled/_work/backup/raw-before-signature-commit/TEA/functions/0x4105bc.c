// name: FUN_004105bc
// address: 0x4105bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004105bc(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if (*param_1 < *param_3) {
      *param_5 = *param_1;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
    }
    else if (*param_3 < *param_1) {
      *param_5 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
    }
    else {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_5 = iVar1;
      param_5 = param_5 + 1;
      param_3 = param_3 + 1;
    }
  }
  puVar2 = FUN_00410598(param_1,param_2,param_5);
  FUN_00410598(param_3,param_4,puVar2);
  return;
}

