// name: FUN_004bd700
// address: 0x4bd700
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __stdcall FUN_004bd700(void)

{
  HICON pHVar1;
  WNDCLASSA local_2c;
  
  if (DAT_0050f7d0 == (HICON)0x0) {
    FUN_004dc844(&local_2c.style,0,0x28);
    local_2c.hInstance = *(HINSTANCE *)(DAT_00512a1c + 8);
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = s_IconSnarfer_0050f7d4;
    local_2c.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&local_2c);
    GetClassInfoA(*(HINSTANCE *)(DAT_00512a1c + 8),s_IconSnarfer_0050f7d4,&local_2c);
    DAT_0050f7d0 = local_2c.hIcon;
    UnregisterClassA(s_IconSnarfer_0050f7d4,*(HINSTANCE *)(DAT_00512a1c + 8));
  }
  pHVar1 = DAT_0050f7d0;
  if (DAT_0050f7d0 == (HICON)0x0) {
    pHVar1 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return pHVar1;
}

