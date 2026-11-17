// name: FUN_0041e884
// address: 0x41e884
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e884(int *param_1)

{
  char cVar1;
  
  FUN_00424af0();
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if ((*(byte *)((int)param_1 + 0x56) & 2) == 0) {
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 100))();
    }
  }
  else if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x68))();
  }
  return;
}

