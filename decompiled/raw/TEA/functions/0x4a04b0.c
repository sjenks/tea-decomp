// name: FUN_004a04b0
// address: 0x4a04b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a04b0(int *param_1)

{
  int iVar1;
  HDC pHVar2;
  int iVar3;
  uint in_stack_00000014;
  undefined4 local_10;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetBkMode((HDC)*param_1,1);
  }
  iVar1 = 1;
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  iVar1 = SetBkMode(pHVar2,iVar1);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  if ((in_stack_00000014 & 0x400) == 0) {
    (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
    local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  }
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  iVar3 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar3 != *param_1) {
    SetBkMode((HDC)*param_1,iVar1);
  }
  pHVar2 = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  SetBkMode(pHVar2,iVar1);
  return local_10;
}

