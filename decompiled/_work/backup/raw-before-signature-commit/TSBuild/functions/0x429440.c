// name: FUN_00429440
// address: 0x429440
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429440(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  
  FUN_00436ec8(*param_1,param_2);
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

