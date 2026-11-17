// name: FUN_004684d4
// address: 0x4684d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004684d4(int *param_1,byte param_2)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  
  iVar1 = FUN_004a76a8(param_1[0x18],0x130b,0,0);
  for (iVar2 = 0; iVar2 < *(int *)(param_1[0x44] + 8 + iVar1 * 0x10); iVar2 = iVar2 + 1) {
    hWnd = GetDlgItem(*(HWND *)(*param_1 + 0xc),
                      *(int *)(*(int *)(param_1[0x44] + 0xc + iVar1 * 0x10) + iVar2 * 4));
    EnableWindow(hWnd,(uint)param_2);
  }
  return;
}

