// name: FUN_004e6b64
// address: 0x4e6b64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004e6b64(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00518db4;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}

