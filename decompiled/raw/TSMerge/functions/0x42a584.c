// name: FUN_0042a584
// address: 0x42a584
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __stdcall FUN_0042a584(void)

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
  
  FUN_00455f04(0x46a3ee);
  uVar2 = DAT_0046a3d4;
  if (DAT_0046a3d0 == '\0') {
    DAT_0046a3d0 = '\x01';
    if (DAT_0046a3dc == 0) {
      DAT_0046a3d8 = RegisterWindowMessageA(s_MSH_SCROLL_LINES_MSG_0046a474);
      if (DAT_0046a3d8 == 0) {
        DAT_0046a3dc = 1;
      }
      else {
        DAT_0046a3dc = 2;
      }
    }
    if (((DAT_0046a3dc == 2) &&
        (hWnd = FindWindowA(s_MouseZ_0046a489,s_Magellan_MSWHEEL_0046a490), hWnd != (HWND)0x0)) &&
       (DAT_0046a3d8 != 0)) {
      uVar2 = SendMessageA(hWnd,DAT_0046a3d8,0,0);
      DAT_0046a3d4 = uVar2;
      *in_FS_OFFSET = local_44[2];
      return uVar2;
    }
    DAT_0046a3d4 = 3;
    bVar1 = FUN_004109c0();
    if (bVar1) {
      puVar5 = FUN_00410934();
      if (*(int *)(puVar5 + 0x10) != 1) {
        SystemParametersInfoA(0x68,0,&DAT_0046a3d4,0);
      }
    }
    else {
      local_44[1] = 0x80;
      local_2c = 8;
      ppHVar3 = FUN_00410bac(local_18,(HKEY)0x80000001,(uint *)s_Control_Panel_Desktop_0046a4a1,
                             0xf003f,0);
      local_20 = local_20 + 1;
      LVar4 = RegQueryValueExA(*ppHVar3,s_WheelScrollLines_0046a4b7,(LPDWORD)0x0,local_44,local_c4,
                               local_44 + 1);
      cVar6 = LVar4 != 0;
      local_20 = local_20 + -1;
      FUN_00410d44((int *)local_18,2);
      if (cVar6 != '\0') {
        DAT_0046a3d4 = FUN_0045c908((char *)local_c4,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0046a3d4;
    *in_FS_OFFSET = local_44[2];
  }
  else {
    *in_FS_OFFSET = local_44[2];
  }
  return uVar2;
}

