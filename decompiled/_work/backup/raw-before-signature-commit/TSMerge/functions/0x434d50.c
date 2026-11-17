// name: FUN_00434d50
// address: 0x434d50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434d50(int *param_1,LPCDLGTEMPLATEA param_2)

{
  HWND pHVar1;
  
  if ((*(byte *)(*param_1 + 0x76) & 0xf) == 0) {
    if (*(int *)(*param_1 + 0x14) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
    }
    pHVar1 = CreateDialogParamA(*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),(LPCSTR)param_2,pHVar1
                                ,FUN_00434bec,param_1[5]);
  }
  else {
    if (*(int *)(*param_1 + 0x14) == 0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(*param_1 + 0x14) + 0xc);
    }
    pHVar1 = CreateDialogIndirectParamA
                       (*(HINSTANCE *)(*(int *)(*param_1 + 0x70) + 8),param_2,pHVar1,FUN_00434bec,
                        param_1[5]);
  }
  *(HWND *)(*param_1 + 0xc) = pHVar1;
  return;
}

