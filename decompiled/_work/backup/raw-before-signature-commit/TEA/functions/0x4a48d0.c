// name: FUN_004a48d0
// address: 0x4a48d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __stdcall FUN_004a48d0(void)

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
  
  FUN_004dce64(0x50ac0e);
  uVar2 = DAT_0050abf4;
  if (DAT_0050abf0 == '\0') {
    DAT_0050abf0 = '\x01';
    if (DAT_0050abfc == 0) {
      DAT_0050abf8 = RegisterWindowMessageA(s_MSH_SCROLL_LINES_MSG_0050ac94);
      if (DAT_0050abf8 == 0) {
        DAT_0050abfc = 1;
      }
      else {
        DAT_0050abfc = 2;
      }
    }
    if (((DAT_0050abfc == 2) &&
        (hWnd = FindWindowA(s_MouseZ_0050aca9,s_Magellan_MSWHEEL_0050acb0), hWnd != (HWND)0x0)) &&
       (DAT_0050abf8 != 0)) {
      uVar2 = SendMessageA(hWnd,DAT_0050abf8,0,0);
      DAT_0050abf4 = uVar2;
      *in_FS_OFFSET = local_44[2];
      return uVar2;
    }
    DAT_0050abf4 = 3;
    bVar1 = FUN_004875a8();
    if (bVar1) {
      puVar5 = FUN_0048751c();
      if (*(int *)(puVar5 + 0x10) != 1) {
        SystemParametersInfoA(0x68,0,&DAT_0050abf4,0);
      }
    }
    else {
      local_44[1] = 0x80;
      local_2c = 8;
      ppHVar3 = FUN_00487794(local_18,(HKEY)0x80000001,(uint *)s_Control_Panel_Desktop_0050acc1,
                             0xf003f,0);
      local_20 = local_20 + 1;
      LVar4 = RegQueryValueExA(*ppHVar3,s_WheelScrollLines_0050acd7,(LPDWORD)0x0,local_44,local_c4,
                               local_44 + 1);
      cVar6 = LVar4 != 0;
      local_20 = local_20 + -1;
      FUN_0048792c((int *)local_18,2);
      if (cVar6 != '\0') {
        DAT_0050abf4 = FUN_004e532c((char *)local_c4,(int *)0x0,10);
      }
    }
    uVar2 = DAT_0050abf4;
    *in_FS_OFFSET = local_44[2];
  }
  else {
    *in_FS_OFFSET = local_44[2];
  }
  return uVar2;
}

