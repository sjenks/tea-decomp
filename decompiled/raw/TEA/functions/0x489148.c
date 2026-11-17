// name: FUN_00489148
// address: 0x489148
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00489148(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  FUN_0048febc(param_1,param_2);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_004906a0((int)param_1,&local_30);
  if (param_1[0x12] == 0) {
    local_18 = (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x2c))();
    local_20 = *(int *)(local_18 + 0x15);
    local_1c = *(undefined4 *)(local_18 + 0x19);
    piVar1 = &local_20;
  }
  else {
    local_14 = *(int *)(param_1[0x12] + 0x15);
    local_10 = *(undefined4 *)(param_1[0x12] + 0x19);
    piVar1 = &local_14;
  }
  iVar4 = piVar1[1];
  uVar2 = (local_28 - local_30) - *piVar1;
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  param_1[0x13] = iVar3 + local_30;
  uVar2 = (local_24 - local_2c) - iVar4;
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  param_1[0x14] = iVar4 + local_2c;
  return;
}

