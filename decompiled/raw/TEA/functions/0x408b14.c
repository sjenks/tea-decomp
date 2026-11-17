// name: FUN_00408b14
// address: 0x408b14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00408b14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  return iVar1 >> 2;
}

