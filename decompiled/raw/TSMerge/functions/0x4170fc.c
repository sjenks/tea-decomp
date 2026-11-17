// name: FUN_004170fc
// address: 0x4170fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl
FUN_004170fc(int *param_1,int param_2,int param_3,int param_4,int param_5,LPSIZE param_6)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    ScaleViewportExtEx((HDC)*param_1,param_2,param_3,param_4,param_5,param_6);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = ScaleViewportExtEx(hdc,param_2,param_3,param_4,param_5,param_6);
  return BVar2 != 0;
}

