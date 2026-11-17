// name: FUN_004106d0
// address: 0x4106d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004106d0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_8c;
  int local_7c;
  int local_6c;
  int local_5c;
  int *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_7;
  local_6c = *(int *)(param_2[9] + 8);
  local_5c = local_6c;
  local_8 = local_6c;
  if (local_6c == param_5) {
    if (param_2[10] != 0) {
      local_c = param_5;
      local_10 = param_5 + 0x10;
      local_14 = param_7;
      local_18 = FUN_00417698(*(byte **)(param_7 + 8),*(int *)(*(int *)(param_7 + 8) + -4),
                              *(byte **)(param_5 + 0x18),*(int *)(*(int *)(param_5 + 0x18) + -4));
      if (local_18 == 0) {
        uVar2 = FUN_0045ea80(local_14,0,*(uint *)(*(int *)(local_14 + 8) + -4),
                             *(byte **)(local_10 + 8),*(uint *)(*(int *)(local_10 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_18 < 0;
      }
      if (bVar3) {
        FUN_00410acc((int)param_1,param_2,param_5,param_5,iVar1);
        return param_1;
      }
    }
    FUN_00410e14(&local_ec,param_2,iVar1);
    *param_1 = local_ec;
    param_1[1] = local_e8;
    param_1[2] = local_e4;
  }
  else {
    local_8c = param_2[9];
    local_7c = local_8c;
    local_1c = local_8c;
    if (local_8c == param_5) {
      local_20 = param_7;
      local_24 = *(int *)(param_2[9] + 0xc);
      local_28 = local_24 + 0x10;
      local_2c = FUN_00417698(*(byte **)(local_24 + 0x18),*(int *)(*(int *)(local_24 + 0x18) + -4),
                              *(byte **)(param_7 + 8),*(int *)(*(int *)(param_7 + 8) + -4));
      if (local_2c == 0) {
        uVar2 = FUN_0045ea80(local_28,0,*(uint *)(*(int *)(local_28 + 8) + -4),
                             *(byte **)(local_20 + 8),*(uint *)(*(int *)(local_20 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_2c < 0;
      }
      if (bVar3) {
        FUN_00410acc((int)param_1,param_2,0,*(int *)(param_2[9] + 0xc),iVar1);
      }
      else {
        FUN_00410e14(&local_d4,param_2,iVar1);
        *param_1 = local_d4;
        param_1[1] = local_d0;
        param_1[2] = local_cc;
      }
    }
    else {
      local_30 = (undefined4 *)FUN_004110fc((int)&param_3);
      local_a4 = *local_30;
      local_a0 = local_30[1];
      local_9c = local_30[2];
      local_34 = iVar1;
      local_3c = local_9c + 0x10;
      local_38 = local_9c;
      local_40 = FUN_00417698(*(byte **)(local_9c + 0x18),*(int *)(*(int *)(local_9c + 0x18) + -4),
                              *(byte **)(iVar1 + 8),*(int *)(*(int *)(iVar1 + 8) + -4));
      if (local_40 == 0) {
        uVar2 = FUN_0045ea80(local_3c,0,*(uint *)(*(int *)(local_3c + 8) + -4),
                             *(byte **)(local_34 + 8),*(uint *)(*(int *)(local_34 + 8) + -4));
        if ((int)uVar2 < 0) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
      }
      else {
        bVar3 = local_40 < 0;
      }
      if (bVar3) {
        local_44 = param_5;
        local_48 = param_5 + 0x10;
        local_4c = iVar1;
        local_50 = FUN_00417698(*(byte **)(iVar1 + 8),*(int *)(*(int *)(iVar1 + 8) + -4),
                                *(byte **)(param_5 + 0x18),*(int *)(*(int *)(param_5 + 0x18) + -4));
        if (local_50 == 0) {
          uVar2 = FUN_0045ea80(local_4c,0,*(uint *)(*(int *)(local_4c + 8) + -4),
                               *(byte **)(local_48 + 8),*(uint *)(*(int *)(local_48 + 8) + -4));
          if ((int)uVar2 < 0) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = local_50 < 0;
        }
        if (bVar3) {
          local_54 = (int *)(local_9c + 0xc);
          if (*local_54 == 0) {
            FUN_00410acc((int)param_1,param_2,0,local_9c,iVar1);
            return param_1;
          }
          FUN_00410acc((int)param_1,param_2,param_5,param_5,iVar1);
          return param_1;
        }
      }
      FUN_00410e14(&local_bc,param_2,iVar1);
      *param_1 = local_bc;
      param_1[1] = local_b8;
      param_1[2] = local_b4;
    }
  }
  return param_1;
}

