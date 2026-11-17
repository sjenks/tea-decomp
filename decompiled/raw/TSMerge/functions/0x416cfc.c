// name: FUN_00416cfc
// address: 0x416cfc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416cfc(undefined4 *param_1)

{
  HPALETTE pHVar1;
  
  if (*(int *)((int)param_1 + 0x15) != 0) {
    pHVar1 = SelectPalette((HDC)*param_1,*(HPALETTE *)((int)param_1 + 0x15),0);
    FUN_0041d184((uint)pHVar1);
    *(undefined4 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

