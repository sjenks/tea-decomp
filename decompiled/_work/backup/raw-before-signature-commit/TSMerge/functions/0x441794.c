// name: FUN_00441794
// address: 0x441794
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HICON __stdcall FUN_00441794(void)

{
  HICON pHVar1;
  WNDCLASSA local_2c;
  
  if (DAT_0046ea3c == (HICON)0x0) {
    FUN_00455a40(&local_2c.style,0,0x28);
    local_2c.hInstance = *(HINSTANCE *)(DAT_00470a60 + 8);
    local_2c.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_2c.lpszClassName = s_IconSnarfer_0046ea40;
    local_2c.lpfnWndProc = DefWindowProcA;
    RegisterClassA(&local_2c);
    GetClassInfoA(*(HINSTANCE *)(DAT_00470a60 + 8),s_IconSnarfer_0046ea40,&local_2c);
    DAT_0046ea3c = local_2c.hIcon;
    UnregisterClassA(s_IconSnarfer_0046ea40,*(HINSTANCE *)(DAT_00470a60 + 8));
  }
  pHVar1 = DAT_0046ea3c;
  if (DAT_0046ea3c == (HICON)0x0) {
    pHVar1 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  return pHVar1;
}

