// name: FUN_004915d4
// address: 0x4915d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004915d4(int *param_1,int param_2)

{
  int *piVar1;
  POINT Point;
  HWND pHVar2;
  tagPOINT local_c;
  
  if ((param_2 == 0) && (param_1[9] != 0)) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    Point.y = local_c.y;
    Point.x = local_c.x;
    pHVar2 = WindowFromPoint(Point);
    if (pHVar2 != *(HWND *)(*param_1 + 0xc)) {
      FUN_004a6094(*param_1,0x200,0,0xffffffff);
    }
  }
  for (piVar1 = (int *)param_1[2]; piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x10))();
  }
  FUN_004a5554(*param_1,param_2);
  return;
}

