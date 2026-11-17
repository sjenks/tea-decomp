// name: FUN_00416760
// address: 0x416760
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00416760(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00416784();
  if (param_1 != piVar1) {
    iVar2 = FUN_004167f4(param_1);
    return iVar2;
  }
  return 1;
}

