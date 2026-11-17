// name: FUN_0042c154
// address: 0x42c154
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LRESULT __cdecl FUN_0042c154(int param_1,int param_2,LPARAM param_3)

{
  SHORT SVar1;
  uint uVar2;
  HWND hWnd;
  LRESULT LVar3;
  uint uVar4;
  
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0;
  }
  if (DAT_0046a3cf == '\0') {
    DAT_00477059 = GetDesktopWindow();
    DAT_0046a3cf = DAT_0046a3cf + '\x01';
  }
  hWnd = GetFocus();
  if (hWnd == (HWND)0x0) {
    LVar3 = FUN_0042d1a4(param_1,0x20a,param_2 << 0x10 | uVar2 | uVar4,param_3);
  }
  else {
    do {
      LVar3 = SendMessageA(hWnd,0x20a,param_2 << 0x10 | uVar2 | uVar4,param_3);
      hWnd = GetParent(hWnd);
      if (LVar3 != 0) {
        return LVar3;
      }
      if (hWnd == (HWND)0x0) {
        return 0;
      }
      LVar3 = 0;
    } while (hWnd != DAT_00477059);
  }
  return LVar3;
}

