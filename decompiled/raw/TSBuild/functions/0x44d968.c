// name: FUN_0044d968
// address: 0x44d968
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044d968(int *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  FUN_00436428(*param_1);
  if (*(int *)((int)param_1 + 0x11) == 0) {
    hWnd = (HWND)(**(code **)(param_1[3] + 0x24))();
    if (hWnd != (HWND)0x0) {
      BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),hWnd);
      if (BVar1 != 0) {
        *(HWND *)((int)param_1 + 0x11) = hWnd;
      }
    }
  }
  if (*(int *)((int)param_1 + 0x11) != 0) {
    BVar1 = IsWindow(*(HWND *)((int)param_1 + 0x11));
    if (BVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x11) = 0;
    }
    else {
      SetFocus(*(HWND *)((int)param_1 + 0x11));
    }
  }
  return;
}

