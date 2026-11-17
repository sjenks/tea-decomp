// name: FUN_004348d4
// address: 0x4348d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004348d4(int *param_1,LPMSG param_2)

{
  bool bVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND pHVar2;
  BOOL BVar3;
  
  bVar1 = FUN_0042afd4(*param_1,param_2);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (*(int *)(*param_1 + 0xc) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent(*(HWND *)(*param_1 + 0xc));
    }
    if ((((hWnd != (HWND)0x0) && (hWnd_00 = GetParent(hWnd), hWnd_00 != (HWND)0x0)) &&
        (pHVar2 = (HWND)SendMessageA(hWnd_00,0x229,0,0), hWnd == pHVar2)) &&
       (BVar3 = TranslateMDISysAccel(hWnd_00,param_2), BVar3 != 0)) {
      return true;
    }
    BVar3 = IsDialogMessageA(*(HWND *)(*param_1 + 0xc),param_2);
    bVar1 = BVar3 != 0;
  }
  return bVar1;
}

