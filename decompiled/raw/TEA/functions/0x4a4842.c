// name: FUN_004a4842
// address: 0x4a4842
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a4842(int *param_1,int *param_2)

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

