// name: FUN_004d0184
// address: 0x4d0184
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d0184(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004d01a8();
  if (param_1 != piVar1) {
    iVar2 = FUN_004d021c(param_1);
    return iVar2;
  }
  return 1;
}

