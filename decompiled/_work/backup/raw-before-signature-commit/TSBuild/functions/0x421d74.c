// name: FUN_00421d74
// address: 0x421d74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421d74(undefined4 *param_1,uint *param_2,byte param_3)

{
  HPALETTE pHVar1;
  
  pHVar1 = SelectPalette((HDC)*param_1,(HPALETTE)*param_2,(uint)param_3);
  if (pHVar1 != (HPALETTE)0x0) {
    FUN_004282cc(*param_2);
    if ((HPALETTE)0x1 < pHVar1) {
      if (*(int *)((int)param_1 + 0x15) == 0) {
        *(HPALETTE *)((int)param_1 + 0x15) = pHVar1;
      }
      else {
        FUN_004282f8((uint)pHVar1);
      }
    }
  }
  return;
}

