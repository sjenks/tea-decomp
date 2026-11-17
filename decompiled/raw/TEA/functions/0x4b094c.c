// name: FUN_004b094c
// address: 0x4b094c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b094c(int *param_1)

{
  HWND pHVar1;
  
  if ((*(byte *)(*param_1 + 0x76) & 0x20) != 0) {
    FUN_004a6f9c(*param_1);
    return;
  }
  if ((*(byte *)(*param_1 + 0x76) & 0xf) != 0) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
    }
    DialogBoxIndirectParamA
              (*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCDLGTEMPLATEA)param_1[4],pHVar1,
               FUN_004b070c,param_1[5]);
    return;
  }
  if (*(int *)(*param_1 + 0x14) == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  DialogBoxParamA(*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_1[4],pHVar1,
                  FUN_004b070c,param_1[5]);
  return;
}

