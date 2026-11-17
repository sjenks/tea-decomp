// name: FUN_0043b1fc
// address: 0x43b1fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0043b1fc(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(param_1[3] + 0x3c))();
  if (cVar1 != '\0') {
    bVar2 = FUN_0043b1b8(param_1);
    return bVar2;
  }
  return false;
}

