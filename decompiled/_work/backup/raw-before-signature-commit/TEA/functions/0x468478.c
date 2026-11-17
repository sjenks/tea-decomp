// name: FUN_00468478
// address: 0x468478
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00468478(int *param_1,int param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1[0x44] + 8 + param_2 * 0x10); iVar1 = iVar1 + 1) {
    hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),
                      *(int *)(*(int *)(param_1[0x44] + 0xc + param_2 * 0x10) + iVar1 * 4));
    ShowWindow(hWnd,param_3);
    EnableWindow(hWnd,param_3);
  }
  return;
}

