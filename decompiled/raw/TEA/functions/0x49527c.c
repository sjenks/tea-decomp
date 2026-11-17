// name: FUN_0049527c
// address: 0x49527c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049527c(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  
  FUN_004a6214(*param_1,param_2);
  if (param_2 != 1) {
    if ((param_1[4] == *param_3) && (param_1[5] == param_3[1])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1[4] = *param_3;
      param_1[5] = param_3[1];
      (**(code **)(param_1[3] + 4))();
    }
  }
  return;
}

