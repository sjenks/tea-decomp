// name: FUN_0048dabc
// address: 0x48dabc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048dabc(undefined4 *param_1)

{
  HPALETTE pHVar1;
  
  if (*(int *)((int)param_1 + 0x15) != 0) {
    pHVar1 = SelectPalette((HDC)*param_1,*(HPALETTE *)((int)param_1 + 0x15),0);
    FUN_00493eb4((uint)pHVar1);
    *(undefined4 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

