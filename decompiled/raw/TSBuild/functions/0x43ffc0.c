// name: FUN_0043ffc0
// address: 0x43ffc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043ffc0(int *param_1)

{
  HWND pHVar1;
  
  if ((*(byte *)(*param_1 + 0x76) & 0x20) != 0) {
    FUN_00437c2c(*param_1);
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
               FUN_0043fd80,param_1[5]);
    return;
  }
  if (*(int *)(*param_1 + 0x14) == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  DialogBoxParamA(*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_1[4],pHVar1,
                  FUN_0043fd80,param_1[5]);
  return;
}

