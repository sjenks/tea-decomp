// name: FUN_00451d38
// address: 0x451d38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00451d38(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  
  FUN_00455f04(0x472bb0);
  uVar1 = FUN_0044cbb0(param_1);
  if (uVar1 < param_2) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_00403038;
    uVar8 = 0;
    local_68 = 0x14;
    FUN_0044cc2c(local_80);
    FUN_0044cbb0(param_1);
    puVar2 = FUN_00455640(local_190,PTR_s_string_index_out_of_range_in_fun_00474074);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    FUN_0044d11c((int)local_2c,puVar3);
    local_5c = local_5c + 1;
    FUN_0044d9c0(local_1c,(int)local_2c);
    local_5c = local_5c + 3;
    FUN_004052c4((int)local_2c,2);
    local_68 = 8;
    FUN_0045ed74((uint *)&DAT_00402fdc,local_1c,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_0044cbb0(param_1);
  local_84 = iVar4 - param_2;
  if (param_3 < local_84) {
    local_84 = param_3;
  }
  iVar4 = FUN_0044cbb0(param_1);
  if (DAT_00471f90 - param_4 <= iVar4 - local_84) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar1 = 1;
    puVar9 = &LAB_00402ee0;
    uVar8 = 0;
    local_68 = 0x2c;
    FUN_0044cc2c(local_8c);
    FUN_0044cbb0(param_1);
    puVar2 = FUN_00455640(local_280,PTR_s_resulting_length_is_invalid_in_f_00474070);
    puVar3 = (uint *)FUN_0044d088(puVar2);
    FUN_0044d11c((int)local_54,puVar3);
    local_5c = local_5c + 1;
    FUN_0044da08(local_44,(int)local_54);
    local_5c = local_5c + 3;
    FUN_004052c4((int)local_54,2);
    local_68 = 0x20;
    FUN_0045ed74((uint *)&DAT_00402e84,local_44,uVar8,puVar9,uVar1,uVar10,uVar11,uVar12);
  }
  iVar4 = FUN_0044cbb0(param_1);
  local_90 = (iVar4 - local_84) + param_4;
  if (local_90 == 0) {
    FUN_0044c9d0(param_1);
    piVar5 = FUN_0044cab8();
    FUN_0044cee8(piVar5);
    puVar6 = FUN_0044cab8();
    local_94 = FUN_0044d594((int)puVar6);
    FUN_0044cbd4((int)local_290,param_1,&local_94);
  }
  else {
    iVar4 = FUN_0044cbb0(param_1);
    local_98 = (iVar4 - local_84) - param_2;
    piVar5 = (int *)FUN_0044ca74(param_1);
    iVar4 = FUN_0044ca88(piVar5);
    if ((iVar4 < 2) && (uVar1 = FUN_0044da70(param_1), local_90 <= uVar1)) {
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_0044ca68(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_0044ca68(param_1);
        FUN_0044da50((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      if (param_4 != 0) {
        iVar4 = FUN_0044ca68(param_1);
        FUN_004520bc((undefined4 *)(iVar4 + param_2),param_4,param_5);
      }
      iVar4 = FUN_0044ca74(param_1);
      uVar1 = local_90;
      *(uint *)(iVar4 + 8) = local_90;
      iVar4 = FUN_0044ca68(param_1);
      puVar2 = (undefined1 *)(iVar4 + uVar1);
      uVar8 = FUN_0044d590();
      *puVar2 = (char)uVar8;
    }
    else {
      local_9c = FUN_0044d2a4(param_1,local_90,local_90);
      if (param_2 != 0) {
        uVar1 = param_2;
        puVar6 = (undefined4 *)FUN_0044ca68(param_1);
        puVar7 = (undefined4 *)FUN_0044d594((int)local_9c);
        FUN_0044d24c(puVar7,puVar6,uVar1);
      }
      if (param_4 != 0) {
        uVar1 = param_4;
        iVar4 = FUN_0044d594((int)local_9c);
        FUN_004520bc((undefined4 *)(iVar4 + param_2),uVar1,param_5);
      }
      if (local_98 != 0) {
        uVar1 = local_98;
        iVar4 = FUN_0044ca68(param_1);
        puVar6 = (undefined4 *)(iVar4 + param_2 + param_3);
        iVar4 = FUN_0044d594((int)local_9c);
        FUN_0044d24c((undefined4 *)(iVar4 + param_2 + param_4),puVar6,uVar1);
      }
      FUN_0044c9d0(param_1);
      local_a0 = FUN_0044d594((int)local_9c);
      FUN_0044cbd4((int)local_2a0,param_1,&local_a0);
    }
  }
  *in_FS_OFFSET = local_78;
  return param_1;
}

