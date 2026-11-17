// name: FUN_0048d9c0
// address: 0x48d9c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048d9c0(undefined4 *param_1,uint *param_2,byte param_3)

{
  HPALETTE pHVar1;
  
  pHVar1 = SelectPalette((HDC)*param_1,(HPALETTE)*param_2,(uint)param_3);
  if (pHVar1 != (HPALETTE)0x0) {
    FUN_00493e88(*param_2);
    if ((HPALETTE)0x1 < pHVar1) {
      if (*(int *)((int)param_1 + 0x15) == 0) {
        *(HPALETTE *)((int)param_1 + 0x15) = pHVar1;
      }
      else {
        FUN_00493eb4((uint)pHVar1);
      }
    }
  }
  return;
}

