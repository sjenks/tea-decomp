// name: FUN_0045ea30
// address: 0x45ea30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045ea30(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_0045b17c();
  piVar2 = &local_c;
  local_8 = (**(code **)(*param_1 + 0x1c))();
  bVar1 = FUN_0045bde4(&local_8,piVar2);
  if (bVar1) {
    FUN_0045b17c();
  }
  else {
    FUN_0045bf54(param_1);
  }
  return;
}

