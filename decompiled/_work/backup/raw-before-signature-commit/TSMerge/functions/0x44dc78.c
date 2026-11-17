// name: FUN_0044dc78
// address: 0x44dc78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044dc78(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0044dc9c();
  if (param_1 != piVar1) {
    iVar2 = FUN_0044dd10(param_1);
    return iVar2;
  }
  return 1;
}

