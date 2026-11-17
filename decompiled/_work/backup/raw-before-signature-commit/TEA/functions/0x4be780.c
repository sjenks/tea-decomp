// name: FUN_004be780
// address: 0x4be780
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __cdecl FUN_004be780(int *param_1)

{
  HICON pHVar1;
  
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    pHVar1 = (HICON)FUN_004a5774(*param_1);
  }
  else {
    pHVar1 = (HICON)FUN_004c1e90();
    if (pHVar1 == (HICON)0x0) {
      pHVar1 = FUN_004bd700();
      return pHVar1;
    }
  }
  return pHVar1;
}

