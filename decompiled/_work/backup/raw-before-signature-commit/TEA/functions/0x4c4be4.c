// name: FUN_004c4be4
// address: 0x4c4be4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c4be4(int *param_1)

{
  HMENU hMenu;
  undefined4 *in_FS_OFFSET;
  UINT uIDEnableItem;
  UINT uEnable;
  undefined4 local_28;
  
  FUN_004dce64(0x510fc8);
  FUN_004b0b44(param_1);
  uEnable = 1;
  uIDEnableItem = 0xf060;
  hMenu = GetSystemMenu(*(HWND *)(*param_1 + 0xc),0);
  EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  *in_FS_OFFSET = local_28;
  return;
}

