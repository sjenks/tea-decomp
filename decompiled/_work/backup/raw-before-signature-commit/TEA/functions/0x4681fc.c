// name: FUN_004681fc
// address: 0x4681fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004681fc(int param_1,undefined4 param_2,LPARAM param_3)

{
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    hWnd = (HWND)FUN_004a76a8(*(int *)(param_1 + 0x60),0x132d,0,0);
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x407,0,param_3);
    }
  }
  return;
}

