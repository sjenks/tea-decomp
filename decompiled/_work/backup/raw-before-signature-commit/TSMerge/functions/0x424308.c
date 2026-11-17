// name: FUN_00424308
// address: 0x424308
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00424308(int param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  tagPOINT local_c;
  
  (**(code **)(*(int *)(param_1 + 8) + 0x10))();
  *(undefined4 *)(param_1 + 0x93) = 0xfffffffe;
  local_c.x = 0;
  local_c.y = 0;
  GetCursorPos(&local_c);
  TrackPopupMenu(*(HMENU *)(param_1 + 0x8a),0,local_c.x,local_c.y,0,*(HWND *)(param_1 + 0xc),
                 (RECT *)0x0);
  BVar1 = IsWindow(*(HWND *)(param_1 + 0xc));
  if (BVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_004217e8((int *)(*(int *)(param_1 + 0x6c) + 0x11));
    uVar2 = *(undefined4 *)(param_1 + 0x93);
  }
  return uVar2;
}

