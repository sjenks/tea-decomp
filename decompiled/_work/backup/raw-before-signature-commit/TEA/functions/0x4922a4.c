// name: FUN_004922a4
// address: 0x4922a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004922a4(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3e;
  bool local_3d;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar7 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  local_c = 0;
  local_8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar2 = FUN_004cc3c4((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,FUN_004918cc);
  FUN_004cc0cc();
  param_2[2] = (int)piVar2;
  FUN_0048fbc8((int *)(param_1 + 0x28),&local_10,&local_14,&local_18,&local_1c,
               (uint)*(byte *)(param_1 + 0x30));
  local_20 = local_10;
  local_24 = local_18;
  local_28 = *(int *)(param_1 + 0x40) - local_14;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)((int)piVar2 + 0x3e)
      ) {
    local_30 = 0;
    local_2c = 0;
    (**(code **)(*piVar2 + 8))();
    local_34 = local_20 + local_30 + local_14;
    if (local_34 < local_28) {
      piVar3 = &local_28;
    }
    else {
      piVar3 = &local_34;
    }
    local_28 = *piVar3;
  }
  local_3d = false;
  local_3e = '\0';
  iVar5 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_38 = *(int **)(param_1 + 8);
  local_3c = *(int **)(param_1 + 8);
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)((int)piVar2 + 0x3e)
      ) {
    *(ushort *)((int)piVar2 + 0x42) = *(ushort *)((int)piVar2 + 0x42) & 0xfffb;
    local_58 = 0;
    local_54 = 0;
    (**(code **)(*piVar2 + 8))();
    local_5c = (int *)((int)piVar2 + 10);
    piVar3 = (int *)((int)piVar2 + 10);
    piVar6 = &local_88;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_88 = local_20;
    local_80 = local_20 + local_58;
    local_84 = 0;
    local_7c = local_54;
    if ((((local_28 < local_80) || (local_3e != '\0')) && (piVar2 != local_38)) &&
       ((*(byte *)((int)piVar2 + 0x42) & 2) != 0)) {
      *(ushort *)((int)local_3c + 0x42) = *(ushort *)((int)local_3c + 0x42) | 4;
      if (*param_2 < *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14) {
        iVar5 = *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14;
      }
      else {
        iVar5 = *param_2;
      }
      *param_2 = iVar5;
      FUN_004921d4(param_1,local_44,(int)local_38,(int)local_3c,local_24,(int)param_2,&local_50);
      piVar2 = local_3c;
      local_3d = (*(byte *)((int)local_3c + 0x42) & 2) != 0;
      local_20 = local_10;
      local_24 = local_24 + local_50;
      if (!local_3d) {
        local_24 = local_24 + *(int *)(param_1 + 0x44);
      }
      puVar1 = (undefined4 *)((int)local_3c + 0x3e);
      local_3c = (int *)*puVar1;
      local_38 = (int *)*puVar1;
      local_44 = local_4c + 1;
      local_3e = '\0';
      iVar5 = local_4c;
    }
    else {
      piVar3 = &local_88;
      piVar6 = (int *)(param_2[2] + iVar5 * 0x10);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      if ((*(byte *)((int)piVar2 + 0x42) & 2) == 0) {
        local_3c = piVar2;
        local_4c = iVar5;
        if (local_3d != false) {
          local_3e = '\x01';
        }
      }
      else if ((*(byte *)((int)local_3c + 0x42) & 2) == 0) {
        if ((*(int *)((int)piVar2 + 0x3e) == 0) ||
           ((*(byte *)(*(int *)((int)piVar2 + 0x3e) + 0x42) & 2) == 0)) {
          local_48 = iVar5;
        }
      }
      else {
        local_48 = iVar5;
        local_3c = piVar2;
        local_4c = iVar5;
      }
      local_20 = local_80;
      if (*(int *)((int)piVar2 + 0x3e) != 0) {
        local_60 = 0;
        local_64 = local_80;
        (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
        local_20 = local_64;
      }
    }
    iVar5 = iVar5 + 1;
  }
  local_68 = *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14;
  piVar2 = param_2;
  if (*param_2 < local_68) {
    piVar2 = &local_68;
  }
  *param_2 = *piVar2;
  FUN_004921d4(param_1,local_44,(int)local_38,0,local_24,(int)param_2,&local_50);
  param_2[1] = param_2[1] + local_1c;
  return;
}

