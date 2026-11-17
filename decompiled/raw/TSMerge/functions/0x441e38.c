// name: FUN_00441e38
// address: 0x441e38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00441e38(int *param_1,int param_2)

{
  HWND pHVar1;
  uint uVar2;
  BOOL BVar3;
  HMENU hMenu;
  
  if (param_2 == 0) {
    pHVar1 = GetFocus();
    if (pHVar1 != (HWND)0x0) {
      uVar2 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
      if ((uVar2 & 0x40000000) == 0) {
        BVar3 = IsWindow(*(HWND *)(*param_1 + 0xc));
        if (BVar3 != 0) {
          hMenu = GetMenu(*(HWND *)(*param_1 + 0xc));
          BVar3 = IsMenu(hMenu);
          if (BVar3 != 0) {
            FUN_0042bbb4(*param_1,0x117,hMenu,0);
          }
        }
      }
    }
  }
  FUN_0042b074(*param_1,param_2);
  return;
}

