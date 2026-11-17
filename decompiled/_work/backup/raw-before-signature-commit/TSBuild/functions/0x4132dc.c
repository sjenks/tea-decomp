// name: FUN_004132dc
// address: 0x4132dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004132dc(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = param_2[9];
  iVar2 = *(int *)(local_8 + 4);
  bVar3 = true;
  while (iVar2 != 0) {
    local_10 = param_3;
    local_c = iVar2;
    local_8 = iVar2;
    uVar1 = FUN_0045ea80(param_3,0,*(uint *)(*(int *)(param_3 + 8) + -4),*(byte **)(iVar2 + 0x18),
                         *(uint *)(*(int *)(iVar2 + 0x18) + -4));
    bVar3 = (int)uVar1 < 0;
    if (bVar3) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if ((char)param_2[0xb] == '\0') {
    local_50 = local_8;
    if (bVar3) {
      local_60 = *(int *)(param_2[9] + 8);
      if (local_60 == local_8) {
        local_12 = 1;
        FUN_0041354c((int)&local_90,param_2,0,local_8,param_3);
        *param_1 = local_90;
        param_1[1] = local_8c;
        param_1[2] = local_88;
        *(undefined1 *)(param_1 + 4) = local_12;
        return param_1;
      }
      FUN_00413a0c((int)&local_58);
    }
    local_18 = local_50;
    local_1c = local_50 + 0x10;
    uVar1 = FUN_0045ea80(local_1c,0,*(uint *)(*(int *)(local_50 + 0x18) + -4),
                         *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4));
    if ((int)uVar1 < 0) {
      local_1d = 1;
      FUN_0041354c((int)&local_b8,param_2,0,local_8,param_3);
      *param_1 = local_b8;
      param_1[1] = local_b4;
      param_1[2] = local_b0;
      *(undefined1 *)(param_1 + 4) = local_1d;
    }
    else {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    local_11 = 1;
    FUN_0041354c((int)&local_48,param_2,0,local_8,param_3);
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
    *(undefined1 *)(param_1 + 4) = local_11;
  }
  return param_1;
}

