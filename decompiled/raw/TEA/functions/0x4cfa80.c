// name: FUN_004cfa80
// address: 0x4cfa80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cfa80(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    *param_1 = param_2 + -1;
  }
  return;
}

