// name: FUN_00454478
// address: 0x454478
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00454478(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_00454524(param_1,param_2[1]);
  (**(code **)*param_2)();
  iVar1 = param_2[1];
  if (iVar1 < 0x31d9) {
    if (iVar1 != 0x31d8) {
      if ((iVar1 != 0x2e54) && (iVar1 != 0x2e5e)) {
        return;
      }
      (**(code **)(*param_2 + 8))();
      return;
    }
  }
  else if (iVar1 != 0x31e2) {
    if (iVar1 != 0x3a16) {
      return;
    }
    (**(code **)(*param_2 + 8))();
    return;
  }
  (**(code **)(*param_2 + 8))();
  return;
}

