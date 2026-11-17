// name: FUN_00422158
// address: 0x422158
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422158(int *param_1,int param_2)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetMapMode((HDC)*param_1,param_2);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  SetMapMode(hdc,param_2);
  return;
}

