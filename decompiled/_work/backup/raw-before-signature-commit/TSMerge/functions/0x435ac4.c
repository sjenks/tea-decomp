// name: FUN_00435ac4
// address: 0x435ac4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00435ac4(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  
  GlobalSize((HGLOBAL)*param_1);
  if ((param_3 != '\0') && (cVar1 = (**(code **)*param_2)(), cVar1 == '\0')) {
    return false;
  }
  cVar1 = (**(code **)*param_2)();
  return cVar1 != '\0';
}

