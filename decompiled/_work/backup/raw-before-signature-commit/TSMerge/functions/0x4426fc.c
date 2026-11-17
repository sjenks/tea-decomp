// name: FUN_004426fc
// address: 0x4426fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __cdecl FUN_004426fc(int *param_1)

{
  HICON pHVar1;
  
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    pHVar1 = (HICON)FUN_0042b294(*param_1);
  }
  else {
    pHVar1 = (HICON)FUN_004450dc();
    if (pHVar1 == (HICON)0x0) {
      pHVar1 = FUN_00441794();
      return pHVar1;
    }
  }
  return pHVar1;
}

