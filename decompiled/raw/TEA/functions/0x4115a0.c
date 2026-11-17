// name: @MsgHookProc$qqsiuil
// address: 0x4115a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall _MsgHookProc_qqsiuil(int param_1,undefined4 param_2,undefined4 *param_3)

{
  SHORT SVar1;
  uint uVar2;
  HWND pHVar3;
  HWND hWnd;
  
                    /* 0x115a0  2  @MsgHookProc$qqsiuil */
  if ((-1 < param_1) && (param_3 != (undefined4 *)0x0)) {
    if (param_1 == 0) {
      if ((param_3[1] == 0x100) &&
         ((param_3[2] == 0x70 || ((param_3[2] == 9 && (SVar1 = GetKeyState(0x11), SVar1 < 0)))))) {
        hWnd = (HWND)0x0;
        pHVar3 = (HWND)*param_3;
        while ((pHVar3 != (HWND)0x0 &&
               (uVar2 = GetWindowLongA(pHVar3,-0x10), hWnd = pHVar3, (uVar2 & 0x40000000) != 0))) {
          pHVar3 = (HWND)GetWindowLongA(pHVar3,-8);
        }
        if ((hWnd != (HWND)0x0) && (uVar2 = GetWindowLongA(hWnd,-0x10), (uVar2 & 0x80000000) != 0))
        {
          PostMessageA(hWnd,DAT_0051ac78,param_3[2],0);
          return 1;
        }
      }
    }
    else if (((param_1 == 2) && (param_3[1] == 0x100)) && (param_3[2] == 0x70)) {
      PostMessageA(DAT_0051ac8c,DAT_0051ac78,2,0);
    }
  }
  return 0;
}

