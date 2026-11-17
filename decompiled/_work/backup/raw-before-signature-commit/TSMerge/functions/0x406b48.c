// name: FUN_00406b48
// address: 0x406b48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00406b48(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5
                  )

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_13c8 [248];
  undefined4 local_12d0;
  undefined1 local_12c8 [248];
  undefined4 local_11d0;
  undefined1 local_11c8 [452];
  undefined4 uStack_1004;
  undefined4 local_dd0;
  undefined1 local_dc8 [248];
  undefined4 local_cd0;
  undefined1 local_cc8 [248];
  undefined4 local_bd0;
  undefined1 local_bc8 [248];
  undefined4 local_ad0;
  undefined1 local_ac8 [248];
  undefined4 local_9d0;
  undefined1 local_9c8 [248];
  undefined4 local_8d0;
  undefined1 local_8c8 [248];
  undefined4 local_7d0;
  undefined1 local_7c8 [248];
  undefined4 local_6d0;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  undefined1 local_5c8 [252];
  undefined1 *local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  int local_4c0;
  int *local_4bc;
  uint *local_4b0;
  undefined1 *local_4ac;
  undefined4 local_4a8;
  int local_4a4;
  int local_4a0;
  int *local_49c;
  uint *local_490;
  undefined1 *local_48c;
  undefined4 local_488;
  int local_484;
  int local_480;
  int *local_47c;
  uint *local_470;
  uint local_46c;
  uint local_468;
  int local_464;
  uint local_460;
  undefined1 *local_3ec;
  undefined4 local_3e8;
  int local_3e4;
  int local_3e0;
  int *local_3dc;
  uint *local_3d0;
  undefined1 *local_3cc;
  undefined4 local_3c8;
  int local_3c4;
  int local_3c0;
  int *local_3bc;
  uint *local_3b0;
  undefined1 *local_3ac;
  undefined4 local_3a8;
  int local_3a4;
  int local_3a0;
  uint *local_394;
  uint local_390;
  undefined1 *local_38c;
  undefined4 local_388;
  int local_384;
  int local_380;
  int *local_37c;
  uint *local_370;
  undefined1 *local_36c;
  undefined4 local_368;
  int local_364;
  int local_360;
  int *local_35c;
  uint *local_350;
  undefined1 *local_34c;
  undefined4 local_348;
  int local_344;
  int local_340;
  uint *local_334;
  uint local_330;
  byte local_329;
  uint local_328;
  undefined4 local_324;
  int local_320;
  byte local_319;
  uint local_318;
  byte local_311;
  uint local_310;
  int local_30c;
  undefined1 *local_308;
  undefined4 local_304;
  int local_300;
  int local_2fc;
  int *local_2f8;
  uint *local_2ec;
  undefined1 *local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  int local_2dc;
  int *local_2d8;
  uint *local_2cc;
  undefined1 *local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  int local_2bc;
  int *local_2b8;
  uint *local_2ac;
  uint local_2a8;
  uint local_2a4;
  undefined4 local_2a0;
  undefined2 local_290;
  int local_284;
  undefined1 local_27c [8];
  int local_274;
  undefined1 local_26c [8];
  int local_264;
  undefined1 local_25c [8];
  int local_254;
  undefined4 local_24c [6];
  undefined4 local_234 [6];
  undefined4 local_21c [36];
  undefined1 local_18c [8];
  int local_184;
  undefined1 local_17c [8];
  int local_174;
  undefined1 local_16c [8];
  int local_164;
  undefined1 local_15c [8];
  int local_154;
  undefined1 local_14c [8];
  int local_144;
  undefined1 local_13c [8];
  int local_134;
  undefined4 local_12c [6];
  undefined4 local_114 [6];
  undefined4 local_fc [6];
  undefined4 local_e4 [6];
  undefined4 local_cc [6];
  undefined4 local_b4 [6];
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined4 local_6c [6];
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  int *local_24;
  char local_20;
  
  uStack_1004 = param_1;
  FUN_00455f04(0x462764);
  local_2a4 = 0;
  local_290 = 0x14;
  local_24 = param_4;
  if (*(int *)(*param_4 + 0x28) != 0) {
    FUN_0044f200(*(int **)(*param_4 + 0x28));
  }
  if (DAT_00473200 != '\0') {
    if (param_4 == (int *)&DAT_004774f8) {
      FUN_004577dc((int *)&DAT_004746a0);
    }
    if (param_4 == &DAT_00477538) {
      FUN_004577dc((int *)&DAT_004746b8);
    }
  }
  if ((*(int *)(*param_4 + 0x24) != 0) && ((*(byte *)(*(int *)(*param_4 + 0x24) + 4) & 1) != 0)) {
    (**(code **)(**(int **)(*param_4 + 0x24) + 0xc))();
  }
  local_20 = *(int *)(*param_4 + 0x30) == 0;
  if (!(bool)local_20) {
    iVar3 = *param_4;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_2a8 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x20;
        local_2ac = (uint *)FUN_00455640(local_5c8,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = FUN_0044d11c((int)local_7c,local_2ac);
        local_284 = local_284 + 1;
        FUN_0045336c(local_3c,iVar2);
        local_284 = local_284 + 2;
        if (local_74 != 0) {
          if (*(int *)(local_74 + -0xc) != -1) {
            local_2b8 = (int *)(local_74 + -0xc);
            if (local_2b8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_2b8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_2b8 = *local_2b8 + -1;
              iVar2 = *local_2b8 + 1;
            }
            if (iVar2 != 0) goto LAB_00406d85;
          }
          local_2bc = local_74 + -0xc;
          local_2c0 = local_74 + -0xc;
          FUN_0044b2cc();
          local_2c4 = 0;
          local_2c8 = local_7c;
          local_74 = 0;
          local_5d0 = 0;
        }
LAB_00406d85:
        local_290 = 0x14;
        FUN_0045ed74((uint *)&DAT_00408678,local_3c,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x38;
        local_2cc = (uint *)FUN_00455640(local_6c8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = FUN_0044d11c((int)local_8c,local_2cc);
        local_284 = local_284 + 1;
        FUN_0045336c(local_54,iVar2);
        local_284 = local_284 + 2;
        if (local_84 != 0) {
          if (*(int *)(local_84 + -0xc) != -1) {
            local_2d8 = (int *)(local_84 + -0xc);
            if (local_2d8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_2d8 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_2d8 = *local_2d8 + -1;
              iVar2 = *local_2d8 + 1;
            }
            if (iVar2 != 0) goto LAB_00406ed8;
          }
          local_2dc = local_84 + -0xc;
          local_2e0 = local_84 + -0xc;
          FUN_0044b2cc();
          local_2e4 = 0;
          local_2e8 = local_8c;
          local_84 = 0;
          local_6d0 = 0;
        }
LAB_00406ed8:
        local_290 = 0x14;
        FUN_0045ed74((uint *)&DAT_00408678,local_54,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x50;
        local_2ec = (uint *)FUN_00455640(local_7c8,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = FUN_0044d11c((int)local_9c,local_2ec);
        local_284 = local_284 + 1;
        FUN_0045336c(local_6c,iVar3);
        local_284 = local_284 + 2;
        if (local_94 != 0) {
          if (*(int *)(local_94 + -0xc) != -1) {
            local_2f8 = (int *)(local_94 + -0xc);
            if (local_2f8 == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (local_2f8 == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *local_2f8 = *local_2f8 + -1;
              iVar3 = *local_2f8 + 1;
            }
            if (iVar3 != 0) goto LAB_0040703d;
          }
          local_2fc = local_94 + -0xc;
          local_300 = local_94 + -0xc;
          FUN_0044b2cc();
          local_304 = 0;
          local_308 = local_9c;
          local_94 = 0;
          local_7d0 = 0;
        }
LAB_0040703d:
        local_290 = 0x14;
        FUN_0045ed74((uint *)&DAT_00408678,local_6c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  local_284 = local_284 + 1;
  local_290 = 0x68;
  if (local_20 != '\0') {
    local_30c = *(int *)(*(int *)(param_5 + 8) + -4);
    iVar3 = *(int *)(*param_4 + 0xc) - local_30c;
    if (((*(byte *)(*param_4 + 4) & 0xb0) == 0) || ((*(byte *)(*param_4 + 4) & 0x80) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_00407117;
        local_311 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_311;
          local_310 = (uint)local_311;
        }
        else {
          local_310 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_310 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_00407117:
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x10) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_004071a9;
        local_319 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_319;
          local_318 = (uint)local_319;
        }
        else {
          local_318 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_318 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_004071a9:
    if (((*(int *)(*param_4 + 0x30) == 0) && (local_30c != 0)) && (*(int *)(*param_4 + 0x24) != 0))
    {
      local_320 = local_30c;
      local_324 = *(undefined4 *)(param_5 + 8);
      iVar2 = (**(code **)(**(int **)(*param_4 + 0x24) + 0x2c))();
      if (iVar2 != local_30c) {
        local_2a4 = 1;
      }
    }
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x20) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_004072ab;
        local_329 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_329;
          local_328 = (uint)local_329;
        }
        else {
          local_328 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_328 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_004072ab:
    *(undefined4 *)(*param_4 + 0xc) = 0;
  }
  local_284 = local_284 + -1;
  if (((*(byte *)(*local_24 + 5) & 0x20) != 0) &&
     (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_330 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x80;
        local_334 = (uint *)FUN_00455640(local_8c8,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = FUN_0044d11c((int)local_13c,local_334);
        local_284 = local_284 + 1;
        FUN_0045336c(local_b4,iVar2);
        local_284 = local_284 + 2;
        if (local_134 != 0) {
          if (*(int *)(local_134 + -0xc) != -1) {
            piVar4 = (int *)(local_134 + -0xc);
            if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_00407446;
          }
          local_340 = local_134 + -0xc;
          local_344 = local_134 + -0xc;
          FUN_0044b2cc();
          local_348 = 0;
          local_34c = local_13c;
          local_134 = 0;
          local_8d0 = 0;
        }
LAB_00407446:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_b4,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0x98;
        local_350 = (uint *)FUN_00455640(local_9c8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = FUN_0044d11c((int)local_14c,local_350);
        local_284 = local_284 + 1;
        FUN_0045336c(local_cc,iVar2);
        local_284 = local_284 + 2;
        if (local_144 != 0) {
          if (*(int *)(local_144 + -0xc) != -1) {
            local_35c = (int *)(local_144 + -0xc);
            if (local_35c == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_35c == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_35c = *local_35c + -1;
              iVar2 = *local_35c + 1;
            }
            if (iVar2 != 0) goto LAB_004075b1;
          }
          local_360 = local_144 + -0xc;
          local_364 = local_144 + -0xc;
          FUN_0044b2cc();
          local_368 = 0;
          local_36c = local_14c;
          local_144 = 0;
          local_9d0 = 0;
        }
LAB_004075b1:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_cc,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0xb0;
        local_370 = (uint *)FUN_00455640(local_ac8,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = FUN_0044d11c((int)local_15c,local_370);
        local_284 = local_284 + 1;
        FUN_0045336c(local_e4,iVar3);
        local_284 = local_284 + 2;
        if (local_154 != 0) {
          if (*(int *)(local_154 + -0xc) != -1) {
            local_37c = (int *)(local_154 + -0xc);
            if (local_37c == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (local_37c == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *local_37c = *local_37c + -1;
              iVar3 = *local_37c + 1;
            }
            if (iVar3 != 0) goto LAB_0040771c;
          }
          local_380 = local_154 + -0xc;
          local_384 = local_154 + -0xc;
          FUN_0044b2cc();
          local_388 = 0;
          local_38c = local_15c;
          local_154 = 0;
          local_ad0 = 0;
        }
LAB_0040771c:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_e4,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  if ((DAT_00473200 != '\0') &&
     (((local_24 == (int *)&DAT_004774f8 || (local_24 == &DAT_00477538)) &&
      (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)))) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_390 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 200;
        local_394 = (uint *)FUN_00455640(local_bc8,PTR_s_iostream_object_has_failbit_set_00473194);
        iVar2 = FUN_0044d11c((int)local_16c,local_394);
        local_284 = local_284 + 1;
        FUN_0045336c(local_fc,iVar2);
        local_284 = local_284 + 2;
        if (local_164 != 0) {
          if (*(int *)(local_164 + -0xc) != -1) {
            piVar4 = (int *)(local_164 + -0xc);
            if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (piVar4 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *piVar4 = *piVar4 + -1;
              iVar2 = *piVar4 + 1;
            }
            if (iVar2 != 0) goto LAB_004078e7;
          }
          local_3a0 = local_164 + -0xc;
          local_3a4 = local_164 + -0xc;
          FUN_0044b2cc();
          local_3a8 = 0;
          local_3ac = local_16c;
          local_164 = 0;
          local_bd0 = 0;
        }
LAB_004078e7:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_fc,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0xe0;
        local_3b0 = (uint *)FUN_00455640(local_cc8,PTR_s_iostream_object_has_badbit_set_00473198);
        iVar2 = FUN_0044d11c((int)local_17c,local_3b0);
        local_284 = local_284 + 1;
        FUN_0045336c(local_114,iVar2);
        local_284 = local_284 + 2;
        if (local_174 != 0) {
          if (*(int *)(local_174 + -0xc) != -1) {
            local_3bc = (int *)(local_174 + -0xc);
            if (local_3bc == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_3bc == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_3bc = *local_3bc + -1;
              iVar2 = *local_3bc + 1;
            }
            if (iVar2 != 0) goto LAB_00407a52;
          }
          local_3c0 = local_174 + -0xc;
          local_3c4 = local_174 + -0xc;
          FUN_0044b2cc();
          local_3c8 = 0;
          local_3cc = local_17c;
          local_174 = 0;
          local_cd0 = 0;
        }
LAB_00407a52:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_114,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_004086e0;
        uVar5 = 0;
        local_290 = 0xf8;
        local_3d0 = (uint *)FUN_00455640(local_dc8,PTR_s_iostream_object_has_eofbit_set_0047319c);
        iVar3 = FUN_0044d11c((int)local_18c,local_3d0);
        local_284 = local_284 + 1;
        FUN_0045336c(local_12c,iVar3);
        local_284 = local_284 + 2;
        if (local_184 != 0) {
          if (*(int *)(local_184 + -0xc) != -1) {
            local_3dc = (int *)(local_184 + -0xc);
            if (local_3dc == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else if (local_3dc == &DAT_00471d5c) {
              iVar3 = 1;
            }
            else {
              *local_3dc = *local_3dc + -1;
              iVar3 = *local_3dc + 1;
            }
            if (iVar3 != 0) goto LAB_00407bbd;
          }
          local_3e0 = local_184 + -0xc;
          local_3e4 = local_184 + -0xc;
          FUN_0044b2cc();
          local_3e8 = 0;
          local_3ec = local_18c;
          local_184 = 0;
          local_dd0 = 0;
        }
LAB_00407bbd:
        local_290 = 0x74;
        FUN_0045ed74((uint *)&DAT_00408678,local_12c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  if (local_2a4 == 0) goto LAB_00408660;
  local_460 = local_2a4;
  local_464 = *param_4;
  local_468 = *(uint *)(local_464 + 0x30) | local_2a4;
  local_46c = local_468;
  if (*(int *)(local_464 + 0x24) == 0) {
    local_46c = local_468 | 1;
    *(uint *)(local_464 + 0x30) = *(uint *)(local_464 + 0x30) | 1;
  }
  *(uint *)(local_464 + 0x30) = local_46c;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34)) == 0) goto LAB_00408660;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 4) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar6 = &LAB_004086e0;
    uVar5 = 0;
    local_290 = 0x17c;
    local_470 = (uint *)FUN_00455640(local_11c8,PTR_s_iostream_object_has_failbit_set_00473194);
    iVar3 = FUN_0044d11c((int)local_25c,local_470);
    local_284 = local_284 + 1;
    FUN_0045336c(local_21c,iVar3);
    local_284 = local_284 + 2;
    if (local_254 != 0) {
      if (*(int *)(local_254 + -0xc) != -1) {
        local_47c = (int *)(local_254 + -0xc);
        if (local_47c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else if (local_47c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else {
          *local_47c = *local_47c + -1;
          iVar3 = *local_47c + 1;
        }
        if (iVar3 != 0) goto LAB_0040833d;
      }
      local_480 = local_254 + -0xc;
      local_484 = local_254 + -0xc;
      FUN_0044b2cc();
      local_488 = 0;
      local_48c = local_25c;
      local_254 = 0;
      local_11d0 = 0;
    }
LAB_0040833d:
    local_290 = 0x170;
    FUN_0045ed74((uint *)&DAT_00408678,local_21c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 1) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar6 = &LAB_004086e0;
    uVar5 = 0;
    local_290 = 0x194;
    local_490 = (uint *)FUN_00455640(local_12c8,PTR_s_iostream_object_has_badbit_set_00473198);
    iVar3 = FUN_0044d11c((int)local_26c,local_490);
    local_284 = local_284 + 1;
    FUN_0045336c(local_234,iVar3);
    local_284 = local_284 + 2;
    if (local_264 != 0) {
      if (*(int *)(local_264 + -0xc) != -1) {
        local_49c = (int *)(local_264 + -0xc);
        if (local_49c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else if (local_49c == &DAT_00471d5c) {
          iVar3 = 1;
        }
        else {
          *local_49c = *local_49c + -1;
          iVar3 = *local_49c + 1;
        }
        if (iVar3 != 0) goto LAB_004084c0;
      }
      local_4a0 = local_264 + -0xc;
      local_4a4 = local_264 + -0xc;
      FUN_0044b2cc();
      local_4a8 = 0;
      local_4ac = local_26c;
      local_264 = 0;
      local_12d0 = 0;
    }
LAB_004084c0:
    local_290 = 0x170;
    FUN_0045ed74((uint *)&DAT_00408678,local_234,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 2) == 0) goto LAB_00408660;
  *(uint *)(local_464 + 0x30) = local_46c;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar6 = &LAB_004086e0;
  uVar5 = 0;
  local_290 = 0x1ac;
  local_4b0 = (uint *)FUN_00455640(local_13c8,PTR_s_iostream_object_has_eofbit_set_0047319c);
  iVar3 = FUN_0044d11c((int)local_27c,local_4b0);
  local_284 = local_284 + 1;
  FUN_0045336c(local_24c,iVar3);
  local_284 = local_284 + 2;
  if (local_274 != 0) {
    if (*(int *)(local_274 + -0xc) != -1) {
      local_4bc = (int *)(local_274 + -0xc);
      if (local_4bc == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (local_4bc == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *local_4bc = *local_4bc + -1;
        iVar3 = *local_4bc + 1;
      }
      if (iVar3 != 0) goto LAB_00408643;
    }
    local_4c0 = local_274 + -0xc;
    local_4c4 = local_274 + -0xc;
    FUN_0044b2cc();
    local_4c8 = 0;
    local_4cc = local_27c;
    local_274 = 0;
  }
LAB_00408643:
  local_290 = 0x170;
  FUN_0045ed74((uint *)&DAT_00408678,local_24c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
LAB_00408660:
  *in_FS_OFFSET = local_2a0;
  return param_4;
}

