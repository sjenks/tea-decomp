// name: FUN_0044f480
// address: 0x44f480
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f480(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0044e7a0(*param_1,0);
  piVar1 = FUN_0044ea50(param_1 + 2,param_2,param_3 | 8,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0044eb78(*param_1,4);
  }
  return;
}

