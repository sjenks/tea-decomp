// name: FUN_0042bdec
// address: 0x42bdec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bdec(int param_1)

{
  BOOL BVar1;
  uint uVar2;
  tagRECT local_14;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0xc));
  if (BVar1 == 0) {
    BVar1 = IsZoomed(*(HWND *)(param_1 + 0xc));
    if (BVar1 == 0) {
      local_14.left = 0;
      local_14.top = 0;
      local_14.right = 0;
      local_14.bottom = 0;
      FUN_0042d52c(param_1,&local_14);
      uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xc),-0x10);
      if ((((uVar2 & 0x40000000) == 0x40000000) && (*(int *)(param_1 + 0x14) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0)) {
        ScreenToClient(*(HWND *)(*(int *)(param_1 + 0x14) + 0xc),(LPPOINT)&local_14);
      }
      *(LONG *)(param_1 + 0x20) = local_14.left;
      *(LONG *)(param_1 + 0x24) = local_14.top;
    }
  }
  FUN_0042b294(param_1);
  return;
}

