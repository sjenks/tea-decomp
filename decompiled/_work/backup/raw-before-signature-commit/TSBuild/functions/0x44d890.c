// name: FUN_0044d890
// address: 0x44d890
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __cdecl FUN_0044d890(int *param_1)

{
  HICON pHVar1;
  
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    pHVar1 = (HICON)FUN_00436428(*param_1);
  }
  else {
    pHVar1 = (HICON)FUN_00450270();
    if (pHVar1 == (HICON)0x0) {
      pHVar1 = FUN_0044c928();
      return pHVar1;
    }
  }
  return pHVar1;
}

