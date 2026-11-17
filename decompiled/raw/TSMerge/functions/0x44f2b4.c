// name: FUN_0044f2b4
// address: 0x44f2b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f2b4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_0044e520();
  piVar2 = &local_c;
  local_8 = FUN_0044f2f8(param_1);
  bVar1 = FUN_0044f188(&local_8,piVar2);
  if (bVar1) {
    FUN_0044e520();
  }
  else {
    FUN_0044f258(param_1);
  }
  return;
}

