// name: FUN_004d4080
// address: 0x4d4080
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d4080(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_004d0a2c();
  piVar2 = &local_c;
  local_8 = (**(code **)(*param_1 + 0x1c))();
  bVar1 = FUN_004d1694(&local_8,piVar2);
  if (bVar1) {
    FUN_004d0a2c();
  }
  else {
    FUN_004d1804(param_1);
  }
  return;
}

