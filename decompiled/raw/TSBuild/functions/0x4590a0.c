// name: FUN_004590a0
// address: 0x4590a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004590a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_004590c4();
  if (param_1 != piVar1) {
    iVar2 = FUN_00459134(param_1);
    return iVar2;
  }
  return 1;
}

