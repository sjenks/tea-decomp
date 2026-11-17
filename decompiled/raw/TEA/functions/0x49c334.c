// name: FUN_0049c334
// address: 0x49c334
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049c334(undefined4 *param_1)

{
  HDC pHVar1;
  int iVar2;
  tagPOINT *ptVar3;
  tagPOINT local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagSIZE local_24;
  int local_1c;
  int local_18;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  local_14.x = 0;
  local_14.y = 0;
  ptVar3 = &local_14;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetViewportOrgEx(pHVar1,ptVar3);
  local_c = local_14.x;
  local_8 = local_14.y;
  FUN_0049bca0(&local_1c,*(int *)((int)param_1 + 0x35));
  local_24.cx = 0;
  local_24.cy = 0;
  GetViewportExtEx((HDC)*param_1,&local_24);
  iVar2 = MulDiv(local_8,local_24.cy,local_18);
  local_2c = MulDiv(local_c,local_24.cx,local_1c);
  local_3c.x = 0;
  local_3c.y = 0;
  ptVar3 = &local_3c;
  local_28 = iVar2;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetWindowOrgEx(pHVar1,ptVar3);
  local_34 = local_3c.x;
  local_30 = local_3c.y;
  SetWindowOrgEx((HDC)*param_1,local_3c.x,local_3c.y,(LPPOINT)0x0);
  SetViewportOrgEx((HDC)*param_1,local_2c,local_28,(LPPOINT)0x0);
  return;
}

