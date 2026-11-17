// name: FUN_00470c7c
// address: 0x470c7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00470c7c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0048aa5c;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}

