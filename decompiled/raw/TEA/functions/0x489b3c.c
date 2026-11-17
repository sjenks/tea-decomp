// name: FUN_00489b3c
// address: 0x489b3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00489b3c(int *param_1)

{
  char cVar1;
  
  FUN_0049072c();
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

