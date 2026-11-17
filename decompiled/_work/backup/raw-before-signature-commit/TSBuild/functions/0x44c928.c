// name: FUN_0044c928
// address: 0x44c928
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __stdcall FUN_0044c928(void)

{
  HICON pHVar1;
  WNDCLASSA local_2c;
  
  if (DAT_00482818 == (HICON)0x0) {
    FUN_004675f0(&local_2c.style,0,0x28);
    local_2c.hInstance = *(HINSTANCE *)(DAT_00484890 + 8);
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = s_IconSnarfer_0048281c;
    local_2c.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&local_2c);
    GetClassInfoA(*(HINSTANCE *)(DAT_00484890 + 8),s_IconSnarfer_0048281c,&local_2c);
    DAT_00482818 = local_2c.hIcon;
    UnregisterClassA(s_IconSnarfer_0048281c,*(HINSTANCE *)(DAT_00484890 + 8));
  }
  pHVar1 = DAT_00482818;
  if (DAT_00482818 == (HICON)0x0) {
    pHVar1 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return pHVar1;
}

