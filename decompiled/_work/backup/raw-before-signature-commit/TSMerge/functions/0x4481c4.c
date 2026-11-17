// name: FUN_004481c4
// address: 0x4481c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004481c4(int *param_1)

{
  BOOL BVar1;
  HWND hWnd;
  HWND pHVar2;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar1 == 0)) {
    hWnd = GetFocus();
    pHVar2 = GetActiveWindow();
    if ((pHVar2 != *(HWND *)(*param_1 + 0xc)) && (hWnd != *(HWND *)(*param_1 + 0xc))) {
      IsChild(*(HWND *)(*param_1 + 0xc),hWnd);
    }
    FUN_0044949c(param_1);
  }
  return 0;
}

