// name: FUN_004b6e94
// address: 0x4b6e94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004b6e94(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(param_1[3] + 0x3c))();
  if (cVar1 != '\0') {
    bVar2 = FUN_004b6e50(param_1);
    return bVar2;
  }
  return false;
}

