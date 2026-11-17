// name: FUN_004153ec
// address: 0x4153ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004153ec(int param_1,int param_2,int param_3,int param_4)

{
  HMONITOR hMonitor;
  BOOL BVar1;
  int iVar2;
  tagMONITORINFO local_3c;
  RECT local_14;
  
  if ((0 < param_3) && (0 < param_4)) {
    local_14.left = param_1;
    local_14.right = param_3 + param_1;
    local_14.top = param_2;
    local_14.bottom = param_4 + param_2;
    hMonitor = MonitorFromRect(&local_14,2);
    if (hMonitor != (HMONITOR)0x0) {
      local_3c.cbSize = 0x28;
      BVar1 = GetMonitorInfoA(hMonitor,&local_3c);
      if (BVar1 != 0) {
        if (param_3 < 0) {
          param_3 = param_3 + 7;
        }
        if (local_14.left < local_3c.rcWork.right - (param_3 >> 3)) {
          iVar2 = param_4;
          if (param_4 < 0) {
            iVar2 = param_4 + 7;
          }
          if ((local_14.top < local_3c.rcWork.bottom - (iVar2 >> 3)) &&
             ((param_3 >> 3) + local_3c.rcWork.left < local_14.right)) {
            if (param_4 < 0) {
              param_4 = param_4 + 7;
            }
            if ((param_4 >> 3) + local_3c.rcWork.top < local_14.bottom) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

