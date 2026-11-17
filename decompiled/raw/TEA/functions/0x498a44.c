// name: FUN_00498a44
// address: 0x498a44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00498a44(int *param_1,int param_2)

{
  SHORT SVar1;
  
  FUN_0048fe44(param_1,param_2);
  SVar1 = GetKeyState(param_1[0x18]);
  if ((((param_1[0x18] == 0x91) || (param_1[0x18] == 0x2d)) || (param_1[0x18] == 0x90)) ||
     (param_1[0x18] == 0x14)) {
    if (((int)SVar1 & 1U) == 0) {
      (**(code **)(*param_1 + 4))();
    }
    else {
      (**(code **)(*param_1 + 4))();
    }
  }
  else if (((int)SVar1 & 0x80000000U) == 0) {
    (**(code **)(*param_1 + 4))();
  }
  else {
    (**(code **)(*param_1 + 4))();
  }
  return 0;
}

