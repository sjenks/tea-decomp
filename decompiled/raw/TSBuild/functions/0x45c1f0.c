// name: FUN_0045c1f0
// address: 0x45c1f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045c1f0(int *param_1,LPCSTR param_2,uint param_3,uint param_4)

{
  int *piVar1;
  
  FUN_0045b3fc(*param_1,0);
  piVar1 = FUN_0045b6ac(param_1 + 2,param_2,param_3 | 8,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_0045b7d4(*param_1,4);
  }
  return;
}

