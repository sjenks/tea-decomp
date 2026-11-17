// name: FUN_0042a4f6
// address: 0x42a4f6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042a4f6(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_1[1] == param_2[1]) && ((*param_1 == -1 || (*param_1 == *param_2)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

