// name: FUN_00435718
// address: 0x435718
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __stdcall FUN_00435718(void)

{
  bool bVar1;
  HWND hWnd;
  uint uVar2;
  PHKEY ppHVar3;
  LSTATUS LVar4;
  undefined *puVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  BYTE local_c4 [128];
  DWORD local_44 [6];
  undefined2 local_2c;
  int local_20;
  HKEY local_18 [5];
  
  FUN_00467ba8(0x47e1ca);
  uVar2 = DAT_0047e1b0;
  if (DAT_0047e1ac == '\0') {
    DAT_0047e1ac = '\x01';
    if (DAT_0047e1b8 == 0) {
      DAT_0047e1b4 = RegisterWindowMessageA(s_MSH_SCROLL_LINES_MSG_0047e250);
      if (DAT_0047e1b4 == 0) {
        DAT_0047e1b8 = 1;
      }
      else {
        DAT_0047e1b8 = 2;
      }
    }
    if (((DAT_0047e1b8 == 2) &&
        (hWnd = FindWindowA(s_MouseZ_0047e265,s_Magellan_MSWHEEL_0047e26c), hWnd != (HWND)0x0)) &&
       (DAT_0047e1b4 != 0)) {
      uVar2 = SendMessageA(hWnd,DAT_0047e1b4,0,0);
      DAT_0047e1b0 = uVar2;
      *in_FS_OFFSET = local_44[2];
      return uVar2;
    }
    DAT_0047e1b0 = 3;
    bVar1 = FUN_0041b9e4();
    if (bVar1) {
      puVar5 = FUN_0041b958();
      if (*(int *)(puVar5 + 0x10) != 1) {
        SystemParametersInfoA(0x68,0,&DAT_0047e1b0,0);
      }
    }
    else {
      local_44[1] = 0x80;
      local_2c = 8;
      ppHVar3 = FUN_0041bbd0(local_18,(HKEY)0x80000001,(uint *)s_Control_Panel_Desktop_0047e27d,
                             0xf003f,0);
      local_20 = local_20 + 1;
      LVar4 = RegQueryValueExA(*ppHVar3,s_WheelScrollLines_0047e293,(LPDWORD)0x0,local_44,local_c4,
                               local_44 + 1);
      cVar6 = LVar4 != 0;
      local_20 = local_20 + -1;
      FUN_0041bd68((int *)local_18,2);
      if (cVar6 != '\0') {
        DAT_0047e1b0 = FUN_0046f444((char *)local_c4,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0047e1b0;
    *in_FS_OFFSET = local_44[2];
  }
  else {
    *in_FS_OFFSET = local_44[2];
  }
  return uVar2;
}

