// name: FUN_004ce950
// address: 0x4ce950
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004ce950(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_004ce974();
  if (param_1 != piVar1) {
    iVar2 = FUN_004ce9e4(param_1);
    return iVar2;
  }
  return 1;
}

