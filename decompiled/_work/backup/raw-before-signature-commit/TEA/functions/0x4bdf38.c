// name: FUN_004bdf38
// address: 0x4bdf38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HWND __cdecl FUN_004bdf38(int *param_1)

{
  HWND hWnd;
  int iVar1;
  BOOL BVar2;
  
  hWnd = GetFocus();
  iVar1 = (**(code **)(param_1[3] + 0x18))();
  if (((hWnd == (HWND)0x0) || (iVar1 == 0)) ||
     (BVar2 = IsChild(*(HWND *)(iVar1 + 0xc),hWnd), BVar2 == 0)) {
    if (iVar1 == 0) {
      if ((hWnd == (HWND)0x0) || (BVar2 = IsChild(*(HWND *)(*param_1 + 0xc),hWnd), BVar2 == 0)) {
        if (*(int *)((int)param_1 + 0x11) == 0) {
          hWnd = *(HWND *)(*param_1 + 0xc);
        }
        else {
          hWnd = *(HWND *)((int)param_1 + 0x11);
        }
      }
    }
    else {
      hWnd = *(HWND *)(iVar1 + 0xc);
    }
  }
  return hWnd;
}

