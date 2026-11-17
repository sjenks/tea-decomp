// name: FUN_004b1098
// address: 0x4b1098
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b1098(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0050d01c;
    if ((*param_1 != 0) && (*(char *)((int)param_1 + 0x1f) == '\0')) {
      GlobalUnlock((HGLOBAL)*param_1);
      if ((char)param_1[1] != '\0') {
        GlobalFree((HGLOBAL)*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

