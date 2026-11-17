// name: FUN_0043e02c
// address: 0x43e02c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043e02c(int *param_1,char param_2)

{
  HWND hWnd;
  
  if (param_2 == '\0') {
    hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),2);
    SetFocus(hWnd);
  }
  (**(code **)(*(int *)(param_1[100] + 8) + 0x60))();
  (**(code **)(*(int *)(param_1[0xc0] + 8) + 0x60))();
  return;
}

