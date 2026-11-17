// name: FUN_0045a8d4
// address: 0x45a8d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045a8d4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0045a8f8();
  if (param_1 != piVar1) {
    iVar2 = FUN_0045a96c(param_1);
    return iVar2;
  }
  return 1;
}

