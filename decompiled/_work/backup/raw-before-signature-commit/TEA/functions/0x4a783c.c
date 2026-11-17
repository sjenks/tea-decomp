// name: FUN_004a783c
// address: 0x4a783c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a783c(int param_1,char param_2)

{
  LONG LVar1;
  HWND hWnd;
  tagRECT local_14;
  
  if (((*(byte *)(param_1 + 0x74) & 4) != 0) || (param_2 != '\0')) {
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
    *(LONG *)(param_1 + 0x18) = LVar1;
    LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x14);
    *(LONG *)(param_1 + 0x1c) = LVar1;
  }
  local_14.left = 0;
  local_14.top = 0;
  local_14.right = 0;
  local_14.bottom = 0;
  FUN_004a7a30(param_1,&local_14);
  *(LONG *)(param_1 + 0x2c) = local_14.bottom - local_14.top;
  *(LONG *)(param_1 + 0x28) = local_14.right - local_14.left;
  if (*(int *)(param_1 + 0xc) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = GetParent(*(HWND *)(param_1 + 0xc));
  }
  if (((*(byte *)(param_1 + 0x1b) & 0x40) != 0) && (hWnd != (HWND)0x0)) {
    ScreenToClient(hWnd,(LPPOINT)&local_14);
  }
  *(LONG *)(param_1 + 0x20) = local_14.left;
  *(LONG *)(param_1 + 0x24) = local_14.top;
  LVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0xc);
  *(LONG *)(param_1 + 0x34) = LVar1;
  return;
}

