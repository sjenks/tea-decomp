// name: FUN_0041ae00
// address: 0x41ae00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ae00(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  FUN_00418e38((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  local_1c = 0;
  local_18 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = FUN_0044b5d4((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,FUN_0041a9e0);
  FUN_0044b2dc();
  param_2[2] = (int)piVar1;
  if (*(char *)(param_1 + 0x33) == '\0') {
    local_20 = 0;
  }
  else {
    iVar5 = 0;
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0;
        piVar1 = *(int **)((int)piVar1 + 0x3e)) {
      if (*(char *)((int)piVar1 + 5) == '\0') {
        local_28 = 0;
        local_24 = 0;
        (**(code **)(*piVar1 + 8))();
        iVar5 = iVar5 + local_28;
      }
      if (*(int *)((int)piVar1 + 0x3e) != 0) {
        local_30 = 0;
        local_2c = 0;
        (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
        iVar5 = iVar5 + local_30;
      }
    }
    local_34 = 0;
    local_38 = ((local_68 - local_70) - iVar5) / (int)(uint)*(byte *)(param_1 + 0x33);
    if (local_38 < 1) {
      piVar1 = &local_34;
    }
    else {
      piVar1 = &local_38;
    }
    local_20 = *piVar1;
  }
  local_3c = local_8;
  local_40 = local_10;
  local_44 = 0;
  iVar5 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    local_4c = 0;
    local_48 = 0;
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(param_2[2] + iVar5 * 0x10) = local_4c;
    *(int *)(param_2[2] + 4 + iVar5 * 0x10) = local_48;
    if (local_48 < local_44) {
      piVar2 = &local_44;
    }
    else {
      piVar2 = &local_48;
    }
    local_44 = *piVar2;
    iVar5 = iVar5 + 1;
  }
  iVar6 = 0;
  for (iVar5 = *(int *)(param_1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3e)) {
    local_50 = (int *)(iVar5 + 10);
    piVar1 = (int *)(iVar5 + 10);
    piVar2 = &local_80;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
    }
    local_54 = *(int *)(param_2[2] + 4 + iVar6 * 0x10);
    iVar3 = *(int *)(param_2[2] + iVar6 * 0x10);
    local_58 = iVar3;
    local_80 = local_3c;
    iVar4 = local_44 - local_54 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((local_44 - local_54 & 1U) != 0);
    }
    local_7c = iVar4 + local_40;
    if (*(char *)(iVar5 + 5) == '\0') {
      local_78 = local_3c + iVar3;
    }
    else {
      if (iVar3 < local_20) {
        iVar3 = local_20;
      }
      local_78 = iVar3 + local_3c;
    }
    local_74 = iVar4 + local_40 + local_54;
    piVar1 = &local_80;
    piVar2 = (int *)(param_2[2] + iVar6 * 0x10);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
    }
    local_60 = local_78;
    local_3c = local_78;
    if (*(int *)(iVar5 + 0x3e) != 0) {
      local_5c = 0;
      (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
      local_3c = local_60;
    }
    if (*param_2 < local_78 + local_c) {
      local_78 = local_78 + local_c;
    }
    else {
      local_78 = *param_2;
    }
    *param_2 = local_78;
    if (param_2[1] < local_74 + local_14) {
      local_74 = local_74 + local_14;
    }
    else {
      local_74 = param_2[1];
    }
    param_2[1] = local_74;
    iVar6 = iVar6 + 1;
  }
  return;
}

