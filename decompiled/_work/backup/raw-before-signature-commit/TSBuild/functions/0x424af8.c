// name: FUN_00424af8
// address: 0x424af8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424af8(int param_1)

{
  POINT Point;
  int *piVar1;
  BOOL BVar2;
  HWND hWndTo;
  HWND local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagPOINT local_c;
  
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
  if (piVar1 != (int *)0x0) {
    BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (BVar2 != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      Point.y = local_c.y;
      Point.x = local_c.x;
      hWndTo = WindowFromPoint(Point);
      if (hWndTo == (HWND)0x0) {
        hWndTo = GetDesktopWindow();
      }
      else {
        MapWindowPoints((HWND)0x0,hWndTo,&local_c,1);
      }
      local_24 = 0x200;
      local_20 = 0;
      local_1c = CONCAT22((undefined2)local_c.y,(undefined2)local_c.x);
      local_28 = hWndTo;
      FUN_00438338(*piVar1,0x407,0,(LPARAM)&local_28);
    }
  }
  if ((*(char *)(param_1 + 0x39) != '\0') &&
     (*(undefined1 *)(param_1 + 0x39) = 0, (DAT_0047b01c & 1) != 0)) {
    FUN_0042477c(param_1);
  }
  return;
}

