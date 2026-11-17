// name: FUN_004220c0
// address: 0x4220c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

COLORREF * __cdecl FUN_004220c0(COLORREF *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  COLORREF CVar3;
  
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    uVar2 = FUN_00420364(param_3);
    SetBkColor((HDC)*param_2,uVar2);
  }
  uVar2 = FUN_00420364(param_3);
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))
                       (uVar2,*(int *)((int)param_2 + 5),param_3,param_2);
  CVar3 = SetBkColor(hdc,uVar2);
  *param_1 = CVar3;
  return param_1;
}

