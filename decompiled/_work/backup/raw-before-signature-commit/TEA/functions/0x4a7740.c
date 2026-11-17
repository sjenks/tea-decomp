// name: FUN_004a7740
// address: 0x4a7740
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a7740(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  HWND hWnd;
  HWND pHVar1;
  
  hWnd = GetWindow(*(HWND *)(param_1 + 0xc),5);
  while (hWnd != (HWND)0x0) {
    pHVar1 = GetWindow(hWnd,2);
    SendMessageA(hWnd,param_2,param_3,param_4);
    hWnd = pHVar1;
  }
  return;
}

