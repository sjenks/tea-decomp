// name: FUN_00422224
// address: 0x422224
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00422224(int *param_1,int *param_2,LPSIZE param_3)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  int x;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetViewportExtEx((HDC)*param_1,*param_2,param_2[1],param_3);
  }
  iVar1 = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = SetViewportExtEx(hdc,x,iVar1,param_3);
  return BVar2 != 0;
}

