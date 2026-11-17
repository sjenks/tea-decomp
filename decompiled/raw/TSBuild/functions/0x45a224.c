// name: FUN_0045a224
// address: 0x45a224
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_0045a224(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined1 local_280 [240];
  undefined1 local_190 [240];
  int local_a0;
  int *local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [8];
  uint local_84;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined2 local_68;
  int local_5c;
  undefined1 local_54 [16];
  undefined4 local_44 [6];
  undefined1 local_2c [16];
  undefined4 local_1c [6];
  
  FUN_00467ba8(0x485ee8);
  uVar1 = FUN_004591bc(param_1);
  if ((uVar1 < param_2) || (param_5 < param_6)) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    puVar10 = &LAB_004021bc;
    uVar9 = 0;
    local_68 = 0x14;
    FUN_00459238(local_80);
    uVar1 = FUN_004591bc(param_1);
    if (param_5 < uVar1) {
      FUN_004591bc(param_1);
    }
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_190,PTR_s_string_index_out_of_range_in_fun_00488a60);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    FUN_00459d78((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a61c(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_0040473c((int)local_2c,2);
    local_68 = 8;
    FUN_00471ae8((uint *)&DAT_00402160,local_1c,uVar9,puVar10,uVar11,uVar12,uVar13,uVar14);
  }
  iVar4 = FUN_004591bc(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  uVar1 = param_5 - param_6;
  if (param_7 < uVar1) {
    uVar1 = param_7;
  }
  iVar4 = FUN_004591bc(param_1);
  if (DAT_00485f20 - uVar1 <= iVar4 - local_84) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    puVar10 = &LAB_00402064;
    uVar9 = 0;
    local_68 = 0x2c;
    FUN_00459238(local_8c);
    FUN_004591bc(param_1);
    puVar2 = FUN_004670cc(local_280,PTR_s_resulting_length_is_invalid_in_f_00488a5c);
    puVar3 = (uint *)FUN_00459ce4(puVar2);
    FUN_00459d78((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0045a664(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_0040473c((int)local_54,2);
    local_68 = 0x20;
    FUN_00471ae8((uint *)&DAT_00402008,local_44,uVar9,puVar10,uVar11,uVar12,uVar13,uVar14);
  }
  iVar4 = FUN_004591bc(param_1);
  local_90 = (iVar4 - local_84) + uVar1;
  if (local_90 == 0) {
    FUN_00458fdc(param_1);
    piVar5 = FUN_004590c4();
    FUN_00459b44(piVar5);
    puVar6 = FUN_004590c4();
    local_94 = FUN_0045a1f0((int)puVar6);
    FUN_004591e0((int)local_290,param_1,&local_94);
    goto LAB_0045a601;
  }
  iVar4 = FUN_004591bc(param_1);
  local_98 = (iVar4 - local_84) - param_2;
  piVar5 = (int *)FUN_00459080(param_1);
  iVar4 = FUN_00459094(piVar5);
  if ((iVar4 < 2) && (uVar11 = FUN_0045a6cc(param_1), local_90 <= uVar11)) {
    if ((param_4 != 0) && (uVar11 = FUN_0045a6f0(param_1), uVar11 <= param_4)) {
      iVar4 = FUN_0045a6f0(param_1);
      iVar7 = FUN_004591bc(param_1);
      if (param_4 < (uint)(iVar4 + iVar7)) goto LAB_0045a4c0;
    }
    if (local_98 != 0) {
      uVar11 = local_98;
      iVar4 = FUN_00459074(param_1);
      puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
      iVar4 = FUN_00459074(param_1);
      FUN_0045a6ac((undefined4 *)(iVar4 + param_2 + uVar1),puVar6,uVar11);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)(param_4 + param_6);
      iVar4 = FUN_00459074(param_1);
      FUN_0045a6ac((undefined4 *)(iVar4 + param_2),puVar6,uVar1);
    }
    iVar4 = FUN_00459080(param_1);
    uVar1 = local_90;
    *(uint *)(iVar4 + 8) = local_90;
    iVar4 = FUN_00459074(param_1);
    puVar2 = (undefined1 *)(iVar4 + uVar1);
    uVar9 = FUN_0045a1ec();
    *puVar2 = (char)uVar9;
  }
  else {
LAB_0045a4c0:
    local_9c = FUN_00459f00(param_1,local_90,local_90);
    if (param_2 != 0) {
      uVar11 = param_2;
      puVar6 = (undefined4 *)FUN_00459074(param_1);
      puVar8 = (undefined4 *)FUN_0045a1f0((int)local_9c);
      FUN_00459ea8(puVar8,puVar6,uVar11);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)(param_4 + param_6);
      uVar11 = uVar1;
      iVar4 = FUN_0045a1f0((int)local_9c);
      FUN_00459ea8((undefined4 *)(iVar4 + param_2),puVar6,uVar11);
    }
    if (local_98 != 0) {
      uVar11 = local_98;
      iVar4 = FUN_00459074(param_1);
      puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
      iVar4 = FUN_0045a1f0((int)local_9c);
      FUN_00459ea8((undefined4 *)(iVar4 + param_2 + uVar1),puVar6,uVar11);
    }
    FUN_00458fdc(param_1);
    local_a0 = FUN_0045a1f0((int)local_9c);
    FUN_004591e0((int)local_2a0,param_1,&local_a0);
  }
LAB_0045a601:
  iVar4 = FUN_00459074(param_1);
  *in_FS_OFFSET = local_78;
  return iVar4 + param_2;
}

