// name: FUN_004c48a4
// address: 0x4c48a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004c48a4(int *param_1,int param_2)

{
  LPSTR lpString;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x510e88);
  param_1[6] = param_2;
  if (0 < param_1[6]) {
    FUN_004dc9f4(*(uint **)(*param_1 + 0x10));
    lpString = (LPSTR)FUN_004cc180();
    wsprintfA(lpString,*(LPCSTR *)(*param_1 + 0x10),param_1[6]);
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
    FUN_004cc0cc();
  }
  hWnd = GetDlgItem(*(HWND *)(*(int *)(*param_1 + 0x14) + 0xc),-1);
  if (0 < param_1[6]) {
    FUN_004a7aa0(*param_1,(HWND)0x0,0,0,0,0,0x53);
    if (hWnd != (HWND)0x0) {
      ShowWindow(hWnd,0);
    }
    UpdateWindow(*(HWND *)(*param_1 + 0xc));
  }
  *in_FS_OFFSET = local_2c;
  return 0;
}

