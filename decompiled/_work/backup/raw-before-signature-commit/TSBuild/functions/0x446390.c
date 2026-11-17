// name: FUN_00446390
// address: 0x446390
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00446390(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(param_1[3] + 0x3c))();
  if (cVar1 != '\0') {
    bVar2 = FUN_0044634c(param_1);
    return bVar2;
  }
  return false;
}

