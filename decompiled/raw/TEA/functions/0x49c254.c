// name: FUN_0049c254
// address: 0x49c254
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049c254(undefined4 *param_1)

{
  HDC pHVar1;
  int y;
  int x;
  tagSIZE *ptVar2;
  tagSIZE local_34;
  int local_2c;
  int local_28;
  tagSIZE local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagSIZE local_c;
  
  local_c.cx = 0;
  local_c.cy = 0;
  GetViewportExtEx((HDC)*param_1,&local_c);
  FUN_0049bca0(&local_14,*(int *)((int)param_1 + 0x35));
  local_24.cx = 0;
  local_24.cy = 0;
  ptVar2 = &local_24;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetViewportExtEx(pHVar1,ptVar2);
  local_1c = local_24.cx;
  local_18 = local_24.cy;
  local_34.cx = 0;
  local_34.cy = 0;
  ptVar2 = &local_34;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetWindowExtEx(pHVar1,ptVar2);
  local_2c = local_34.cx;
  local_28 = local_34.cy;
  y = MulDiv(local_10,local_34.cy,local_18);
  x = MulDiv(local_14,local_2c,local_1c);
  SetMapMode((HDC)*param_1,8);
  SetWindowExtEx((HDC)*param_1,x,y,(LPSIZE)0x0);
  SetViewportExtEx((HDC)*param_1,local_c.cx,local_c.cy,(LPSIZE)0x0);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x68))();
  return;
}

