// name: FUN_00418cec
// address: 0x418cec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418cec(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_004181e8();
  piVar2 = &local_c;
  local_8 = FUN_00418d30(param_1);
  bVar1 = FUN_00418bc0(&local_8,piVar2);
  if (bVar1) {
    FUN_004181e8();
  }
  else {
    FUN_00418c90(param_1);
  }
  return;
}

