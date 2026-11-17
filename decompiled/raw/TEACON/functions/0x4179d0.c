// name: FUN_004179d0
// address: 0x4179d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004179d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004179f4();
  if (param_1 != piVar1) {
    iVar2 = FUN_00417a68(param_1);
    return iVar2;
  }
  return 1;
}

