// name: FUN_004d198c
// address: 0x4d198c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d198c(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_004d0cac(*param_1,0);
  piVar1 = FUN_004d0f5c(param_1 + 2,param_2,param_3 | 8,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_004d1084(*param_1,4);
  }
  return;
}

