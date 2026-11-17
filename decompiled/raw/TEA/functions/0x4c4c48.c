// name: FUN_004c4c48
// address: 0x4c4c48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c4c48(int *param_1)

{
  HWND hWnd;
  
  DAT_00510fdc = param_1[6];
  hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),2);
  if (hWnd != (HWND)0x0) {
    EnableWindow(hWnd,0);
  }
  return;
}

