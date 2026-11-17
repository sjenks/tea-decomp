// name: FUN_00436a84
// address: 0x436a84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00436a84(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    piVar2 = (int *)(param_2 * 0x10 + param_1);
    if ((param_3 == piVar2[2]) && (param_4 == *piVar2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

