// name: FUN_00412790
// address: 0x412790
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00412790(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  int local_30;
  undefined4 local_28 [2];
  int local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 4);
  while (iVar2 != 0) {
    local_c = iVar2;
    uVar1 = FUN_0045ea80(iVar2 + 0x10,0,*(uint *)(*(int *)(iVar2 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_8 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  local_20 = local_8;
  local_10 = *(int *)(param_2 + 0x24);
  local_30 = local_10;
  if (local_10 != local_8) {
    local_14 = local_8;
    uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(local_8 + 0x18),
                         *(uint *)(*(int *)(local_8 + 0x18) + -4));
    if (-1 < (int)uVar1) {
      puVar3 = local_28;
      goto LAB_0041286b;
    }
  }
  puVar3 = local_48;
  local_18 = *(undefined4 *)(param_2 + 0x24);
  local_40 = *(undefined4 *)(param_2 + 0x24);
LAB_0041286b:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  return param_1;
}

