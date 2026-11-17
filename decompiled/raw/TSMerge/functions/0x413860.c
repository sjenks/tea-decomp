// name: FUN_00413860
// address: 0x413860
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413860(int *param_1)

{
  char cVar1;
  
  FUN_0041997c();
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

