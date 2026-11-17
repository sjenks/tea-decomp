// name: FUN_004206b0
// address: 0x4206b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004206b0(int param_1)

{
  HDC hdc;
  HDC pHVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar2 * 5) == 0) {
      hdc = GetWindowDC((HWND)0x0);
      pHVar1 = CreateCompatibleDC(hdc);
      *(HDC *)(param_1 + iVar2 * 5) = pHVar1;
      ReleaseDC((HWND)0x0,hdc);
    }
    if (*(char *)(param_1 + 4 + iVar2 * 5) == '\0') break;
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 4 + iVar2 * 5) = 1;
  return *(undefined4 *)(param_1 + iVar2 * 5);
}

