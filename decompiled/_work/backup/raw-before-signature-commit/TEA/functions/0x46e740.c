// name: FUN_0046e740
// address: 0x46e740
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046efc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0046e740(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar6;
  char cVar7;
  uint *puVar8;
  uint local_4ec [12];
  undefined4 local_4bc;
  uint local_4b4 [12];
  undefined4 local_484;
  undefined *local_474;
  undefined4 local_464;
  uint *local_454;
  uint *local_444;
  undefined4 local_434;
  uint *local_414;
  uint *local_404;
  uint *local_3f4;
  uint *local_3f0;
  uint *local_3ec;
  LPARAM local_3e8;
  LPARAM local_3e0;
  undefined4 *local_3dc;
  undefined4 *local_3d8;
  LPARAM local_3d4;
  undefined1 local_3ce;
  char local_3cd;
  LPARAM local_3cc;
  LPARAM local_3c8;
  undefined4 *local_3c4;
  LPARAM local_3c0;
  undefined1 local_3b9;
  undefined1 *local_3b8;
  undefined4 local_3b4;
  uint *local_3b0;
  uint *local_3ac;
  uint *local_3a8;
  undefined1 *local_3a4;
  undefined4 local_3a0;
  int local_39c;
  int local_398;
  int *local_394;
  undefined1 *local_390;
  undefined4 local_38c;
  int local_388;
  int local_384;
  int *local_380;
  uint local_36c;
  int local_368;
  int local_364;
  undefined1 *local_360;
  undefined4 local_35c;
  uint *local_358;
  uint *local_354;
  uint *local_350;
  undefined4 *local_34c;
  undefined1 *local_348;
  undefined4 local_344;
  int local_340;
  int local_33c;
  int *local_338;
  int local_334;
  int local_330;
  undefined1 *local_32c;
  undefined *local_328;
  undefined4 local_324;
  LPARAM local_320;
  undefined1 local_319;
  undefined1 *local_318;
  undefined4 local_314;
  int local_310;
  int local_30c;
  int *local_308;
  uint *local_304;
  undefined4 *local_300;
  uint local_2fc;
  undefined1 *local_2f8;
  int *local_2f4;
  uint *local_2f0;
  uint local_2ec;
  uint *local_2e8;
  undefined1 *local_2e4;
  uint *local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  uint local_2d4;
  int local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  int local_2b4;
  int *local_2b0;
  int local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  int local_294;
  undefined4 *local_290;
  uint *local_28c;
  undefined4 *local_288;
  uint local_284;
  undefined1 *local_280;
  int *local_27c;
  uint *local_278;
  uint local_274;
  uint *local_270;
  undefined1 *local_26c;
  uint *local_268;
  undefined4 local_264;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined2 local_248;
  int local_23c;
  undefined4 local_234;
  LPARAM local_230;
  int *local_20c;
  undefined4 local_204;
  int local_200;
  int *local_1dc;
  undefined4 local_1d4 [12];
  undefined4 local_1a4;
  int local_1a0;
  int *local_17c;
  undefined1 local_174 [8];
  int local_16c;
  undefined1 local_164 [8];
  int local_15c;
  undefined4 local_154 [12];
  undefined4 local_124 [12];
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_e4 [8];
  uint *local_dc;
  undefined1 local_d4 [8];
  int local_cc;
  undefined4 local_c4 [12];
  undefined1 local_94 [8];
  uint *local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined4 local_74;
  LPARAM local_70;
  int *local_4c;
  byte local_44 [4];
  int local_40;
  int *local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4fe4c4);
  local_248 = 0x14;
  local_25c = param_1[0x22] + -1;
  local_260 = param_1[0x1b] + local_25c * 0x10;
  local_264 = 0;
  local_c = (uint *)0x0;
  iVar3 = *(int *)(*(int *)(local_260 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    local_274 = *(uint *)(*(int *)(local_260 + 8) + -4);
    local_27c = FUN_004cf7b0(local_14,local_274,local_274);
    local_280 = local_14;
    local_414 = (uint *)(local_27c + 3);
    local_284 = local_274;
    local_288 = *(undefined4 **)(local_260 + 8);
    local_28c = local_414;
    local_278 = local_414;
    local_c = local_414;
    FUN_004dc7d4(local_414,local_288,local_274);
  }
  else {
    local_404 = *(uint **)(local_260 + 8);
    local_26c = local_14;
    local_270 = local_404 + -3;
    local_268 = local_404;
    local_c = local_404;
    if (local_270 != &DAT_00513d58) {
      *local_270 = *local_270 + 1;
    }
  }
  local_23c = local_23c + 1;
  local_248 = 8;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*param_1 + 0x14) + 8);
  }
  local_290 = FUN_004dd744(*(int *)(*param_1 + 0x14),iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64
                           ,0);
  FUN_004734c4((int)local_290,(int)local_14);
  if (param_3 != 0) {
    local_294 = param_3;
    FUN_004d573c((int)local_14,param_3);
  }
  local_298 = 0;
  while( true ) {
    iVar3 = param_1[0x26] - param_1[0x25];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    if ((uint)(iVar3 >> 7) <= local_298) break;
    local_29c = local_298;
    iVar3 = param_1[0x25] + local_298 * 0x80;
    local_2a0 = 0;
    uVar5 = 0;
    while( true ) {
      local_248 = 8;
      iVar4 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      if ((uint)(iVar4 >> 4) <= uVar5) break;
      local_248 = 0x38;
      FUN_00436b94((int)local_84,uVar5 * 0x10 + *(int *)(iVar3 + 0x1c),
                   uVar5 * 0x10 + *(int *)(iVar3 + 0x3c));
      local_23c = local_23c + 1;
      local_248 = 0x2c;
      iVar4 = FUN_00469e1c((int)local_14,(int)local_84,(int *)&local_2a4);
      if ((iVar4 == 0) || (local_2a0 < local_2a4)) {
LAB_0046ea20:
        local_2a0 = local_2a4;
        FUN_004cf384(*(int *)(iVar3 + 0x1c),uVar5 * 0x10 + *(int *)(iVar3 + 0x1c));
        FUN_004cf384(*(int *)(iVar3 + 0x3c),uVar5 * 0x10 + *(int *)(iVar3 + 0x3c));
      }
      else if (local_2a4 == local_2a0) {
        local_2ac = uVar5 * 0x10 + *(int *)(iVar3 + 0x1c);
        local_2a8 = uVar5;
        uVar1 = FUN_004d40d0((int)local_14,0,local_c[-1],*(byte **)(local_2ac + 8),
                             *(uint *)(*(int *)(local_2ac + 8) + -4));
        if (uVar1 == 0) goto LAB_0046ea20;
      }
      local_23c = local_23c + -1;
      if (local_7c != 0) {
        if (*(int *)(local_7c + -0xc) != -1) {
          local_2b0 = (int *)(local_7c + -0xc);
          if (local_2b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_2b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_2b0 = *local_2b0 + -1;
            iVar4 = *local_2b0 + 1;
          }
          if (iVar4 != 0) goto LAB_0046eb05;
        }
        local_2b4 = local_7c + -0xc;
        local_2b8 = local_7c + -0xc;
        FUN_004cc0bc();
        local_2bc = 0;
        local_2c0 = local_84;
        local_7c = 0;
        local_434 = 0;
      }
LAB_0046eb05:
      uVar5 = uVar5 + 1;
    }
    local_298 = local_298 + 1;
  }
  local_2c4 = param_1[0x26];
  local_2c8 = param_1[0x25];
  if (local_2c8 != local_2c4) {
    FUN_00471128(local_2c8,local_2c4,0,FUN_00469f48);
    FUN_0046faf0(local_2c8,local_2c4,FUN_00469f48);
  }
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0xb,0,0);
  *(undefined1 *)(param_1 + 0x86) = 1;
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0x1101,0,-0x10000);
  *(undefined1 *)(param_1 + 0x86) = 0;
  local_2cc = 0;
  local_248 = 0x50;
  FUN_004cb3b4((undefined4 *)local_44,(int)param_1 + 0x166,0xffff0000);
  local_23c = local_23c + 2;
  param_1[0x2c] = 0;
  local_248 = 0x5c;
  FUN_004cb3b4(&local_74,(int)param_1 + 0x166,0xffff0000);
  local_23c = local_23c + 2;
  local_2d0 = 0x7fffffff;
  uVar5 = 0;
  while( true ) {
    local_248 = 8;
    iVar3 = param_1[0x26] - param_1[0x25];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    if ((uint)(iVar3 >> 7) <= uVar5) break;
    iVar4 = param_1[0x25] + uVar5 * 0x80;
    local_248 = 0x74;
    local_2d8 = iVar4 + 0x58;
    local_2dc = 0;
    local_8c = (uint *)0x0;
    iVar3 = *(int *)(*(int *)(iVar4 + 0x60) + -0xc);
    local_2d4 = uVar5;
    if (iVar3 == -1 || iVar3 + 1 < 0) {
      local_2ec = *(uint *)(*(int *)(iVar4 + 0x60) + -4);
      local_2f4 = FUN_004cf7b0(local_94,local_2ec,local_2ec);
      local_2f8 = local_94;
      local_454 = (uint *)(local_2f4 + 3);
      local_2fc = local_2ec;
      local_300 = *(undefined4 **)(local_2d8 + 8);
      local_304 = local_454;
      local_2f0 = local_454;
      local_8c = local_454;
      FUN_004dc7d4(local_454,local_300,local_2ec);
    }
    else {
      local_444 = *(uint **)(iVar4 + 0x60);
      local_2e4 = local_94;
      local_2e8 = local_444 + -3;
      local_2e0 = local_444;
      local_8c = local_444;
      if (local_2e8 != &DAT_00513d58) {
        *local_2e8 = *local_2e8 + 1;
      }
    }
    local_23c = local_23c + 1;
    iVar3 = *(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 != 0) {
      local_248 = 0x8c;
      FUN_00436b94((int)local_d4,*(int *)(iVar4 + 0x1c),*(int *)(iVar4 + 0x3c));
      local_23c = local_23c + 1;
      FUN_004cf384((int)local_94,(int)local_d4);
      local_23c = local_23c + -1;
      if (local_cc != 0) {
        if (*(int *)(local_cc + -0xc) != -1) {
          local_308 = (int *)(local_cc + -0xc);
          if (local_308 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_308 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_308 = *local_308 + -1;
            iVar3 = *local_308 + 1;
          }
          if (iVar3 != 0) goto LAB_0046ef11;
        }
        local_30c = local_cc + -0xc;
        local_310 = local_cc + -0xc;
        FUN_004cc0bc();
        local_314 = 0;
        local_318 = local_d4;
        local_cc = 0;
        local_464 = 0;
      }
    }
LAB_0046ef11:
    local_248 = 0x68;
    if (*(int *)(iVar4 + 0x10) != local_2d0) {
      if (local_2d0 != 0x7fffffff) {
        local_320 = local_70;
        iVar3 = FUN_004a76a8(*local_4c,0x1102,2,local_70);
        local_319 = iVar3 != 0;
      }
      local_2d0 = *(int *)(iVar4 + 0x10);
      local_2cc = 0;
      local_324 = 0;
      local_32c = local_e4;
      local_328 = &DAT_00513d64;
      local_dc = (uint *)&DAT_00513d64;
      local_474 = &DAT_00513d64;
      local_23c = local_23c + 1;
      local_248 = 0xbc;
      uVar2 = FUN_0046c244((int)param_1,iVar4,&local_330,&local_334);
      if ((char)uVar2 != '\0') {
        local_248 = 200;
        FUN_00408cbc(local_f4,local_330,local_334);
        local_23c = local_23c + 1;
        FUN_004cf384((int)local_e4,(int)local_f4);
        local_23c = local_23c + -1;
        if (local_ec != 0) {
          if (*(int *)(local_ec + -0xc) != -1) {
            local_338 = (int *)(local_ec + -0xc);
            if (local_338 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (local_338 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *local_338 = *local_338 + -1;
              iVar3 = *local_338 + 1;
            }
            if (iVar3 != 0) goto LAB_0046f0fa;
          }
          local_33c = local_ec + -0xc;
          local_340 = local_ec + -0xc;
          FUN_004cc0bc();
          local_344 = 0;
          local_348 = local_f4;
          local_ec = 0;
          local_484 = 0;
        }
LAB_0046f0fa:
        local_248 = 0xbc;
      }
      FUN_004cbac4(local_4b4,local_dc,(char *)0x0);
      FUN_004cbb70(local_4b4,0);
      FUN_004cbb84(local_4b4,0);
      FUN_004cbb5c(local_4b4,uVar5);
      local_248 = 0xe0;
      FUN_004cb3b4(local_124,(int)param_1 + 0x166,0xffff0000);
      local_34c = local_124;
      local_23c = local_23c + 4;
      FUN_004cb490(local_154,(int)local_34c,local_4b4,0xffff0002);
      local_23c = local_23c + 2;
      FUN_004cb40c(&local_74,local_154);
      local_23c = local_23c + -2;
      FUN_004cc0cc();
      local_248 = 0xbc;
      local_23c = local_23c + -2;
      FUN_004cc0cc();
      local_23c = local_23c + -1;
      if (local_dc != (uint *)0x0) {
        if (local_dc[-3] != 0xffffffff) {
          local_350 = local_dc + -3;
          if (local_350 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_350 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_350 = *local_350 - 1;
            iVar3 = *local_350 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f2b1;
        }
        local_354 = local_dc + -3;
        local_358 = local_dc + -3;
        FUN_004cc0bc();
        local_35c = 0;
        local_360 = local_e4;
        local_dc = (uint *)0x0;
        local_4bc = 0;
      }
    }
LAB_0046f2b1:
    local_248 = 0x68;
    FUN_004cbac4(local_4ec,local_8c,(char *)0x0);
    local_248 = 0x68;
    FUN_004cbb70(local_4ec,2);
    FUN_004cbb84(local_4ec,3);
    FUN_004cbb5c(local_4ec,uVar5);
    local_248 = 0x110;
    FUN_004cb490(local_c4,(int)&local_74,local_4ec,0xffff0002);
    local_23c = local_23c + 2;
    local_248 = 0x68;
    if (*(int *)(iVar4 + 0x10) == *(int *)(param_1[0x25] + 0x10)) {
LAB_0046f3a1:
      puVar8 = &local_36c;
      local_248 = 0x11c;
      FUN_004cf628((int)local_164,local_8c);
      puVar6 = local_164;
      local_23c = local_23c + 1;
      FUN_004cf628((int)local_174,local_c);
      local_23c = local_23c + 1;
      iVar3 = FUN_00469e1c((int)local_174,(int)puVar6,(int *)puVar8);
      if ((iVar3 == 0) || (local_2cc < local_36c)) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\0';
      }
      local_23c = local_23c + -1;
      if (local_16c != 0) {
        if (*(int *)(local_16c + -0xc) != -1) {
          local_380 = (int *)(local_16c + -0xc);
          if (local_380 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_380 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_380 = *local_380 + -1;
            iVar3 = *local_380 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f4e1;
        }
        local_384 = local_16c + -0xc;
        local_388 = local_16c + -0xc;
        FUN_004cc0bc();
        local_38c = 0;
        local_390 = local_174;
        local_16c = 0;
      }
LAB_0046f4e1:
      local_23c = local_23c + -1;
      if (local_15c != 0) {
        if (*(int *)(local_15c + -0xc) != -1) {
          local_394 = (int *)(local_15c + -0xc);
          if (local_394 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else if (local_394 == &DAT_00513d58) {
            iVar3 = 1;
          }
          else {
            *local_394 = *local_394 + -1;
            iVar3 = *local_394 + 1;
          }
          if (iVar3 != 0) goto LAB_0046f5a5;
        }
        local_398 = local_15c + -0xc;
        local_39c = local_15c + -0xc;
        FUN_004cc0bc();
        local_3a0 = 0;
        local_3a4 = local_164;
        local_15c = 0;
      }
LAB_0046f5a5:
      if (cVar7 != '\0') {
        local_2cc = local_36c;
        FUN_004cb40c((undefined4 *)local_44,local_c4);
        param_1[0x2c] = uVar5;
      }
    }
    else if (param_2 != 0) {
      local_368 = param_2;
      local_364 = iVar4;
      uVar1 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),*(byte **)(iVar4 + 8),
                           *(uint *)(*(int *)(iVar4 + 8) + -4));
      if (uVar1 == 0) goto LAB_0046f3a1;
    }
    local_23c = local_23c + -2;
    FUN_004cc0cc();
    local_248 = 0x68;
    local_23c = local_23c + -1;
    if (local_8c != (uint *)0x0) {
      if (local_8c[-3] != 0xffffffff) {
        local_3a8 = local_8c + -3;
        if (local_3a8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_3a8 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_3a8 = *local_3a8 - 1;
          iVar3 = *local_3a8 + 1;
        }
        if (iVar3 != 0) goto LAB_0046f6af;
      }
      local_3ac = local_8c + -3;
      local_3b0 = local_8c + -3;
      FUN_004cc0bc();
      local_3b4 = 0;
      local_3b8 = local_94;
      local_8c = (uint *)0x0;
    }
LAB_0046f6af:
    uVar5 = uVar5 + 1;
  }
  local_3c0 = local_70;
  iVar3 = FUN_004a76a8(*local_4c,0x1102,2,local_70);
  local_3b9 = iVar3 != 0;
  local_248 = 8;
  iVar3 = FUN_004cbb48(local_44);
  if (iVar3 == -0x10000) {
    local_248 = 0x158;
    local_3c8 = local_40;
    if (local_40 == -0x10000) {
      local_3c8 = 0;
    }
    uVar2 = FUN_004a76a8(*local_1c,0x110a,4,local_3c8);
    FUN_004cb3b4(&local_1a4,local_1c,uVar2);
    local_23c = local_23c + 4;
    local_3c4 = &local_1a4;
    local_3cc = local_1a0;
    if (local_1a0 == -0x10000) {
      local_3cc = 0;
    }
    uVar2 = FUN_004a76a8(*local_17c,0x110a,4,local_3cc);
    FUN_004cb3b4(local_1d4,local_3c4[10],uVar2);
    local_23c = local_23c + 4;
    FUN_004cb40c((undefined4 *)local_44,local_1d4);
    local_23c = local_23c + -2;
    FUN_004cc0cc();
    local_248 = 8;
    local_23c = local_23c + -2;
    FUN_004cc0cc();
  }
  iVar3 = FUN_004cbb48(local_44);
  if ((iVar3 == 0) || (iVar3 = FUN_004cbb48(local_44), iVar3 == -0x10000)) {
    local_3cd = '\0';
  }
  else {
    local_3cd = '\x01';
  }
  if (local_3cd != '\0') {
    local_3d4 = local_40;
    iVar3 = FUN_004a76a8(*local_1c,0x110b,9,local_40);
    local_3ce = iVar3 != 0;
    local_248 = 0x17c;
    FUN_004cb3b4(&local_204,(int)param_1 + 0x166,0xffff0000);
    local_23c = local_23c + 4;
    local_3dc = &local_204;
    local_3e0 = local_200;
    if (local_200 == -0x10000) {
      local_3e0 = 0;
    }
    uVar2 = FUN_004a76a8(*local_1dc,0x110a,4,local_3e0);
    FUN_004cb3b4(&local_234,local_3dc[10],uVar2);
    local_3d8 = &local_234;
    local_23c = local_23c + 4;
    FUN_004a76a8(*local_20c,0x1114,0,local_230);
    local_23c = local_23c + -2;
    FUN_004cc0cc();
    local_248 = 8;
    local_23c = local_23c + -2;
    FUN_004cc0cc();
  }
  FUN_004a76a8(*(int *)((int)param_1 + 0x166),0xb,1,0);
  if (local_3cd != '\0') {
    local_3e8 = local_40;
    FUN_004a76a8(*local_1c,0x1114,0,local_40);
  }
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x166) + 8) + 0x68))();
  local_23c = local_23c + -2;
  FUN_004cc0cc();
  local_23c = local_23c + -2;
  FUN_004cc0cc();
  local_23c = local_23c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_3ec = local_c + -3;
      if (local_3ec == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_3ec == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_3ec = *local_3ec - 1;
        iVar3 = *local_3ec + 1;
      }
      if (iVar3 != 0) goto LAB_0046fae1;
    }
    local_3f0 = local_c + -3;
    local_3f4 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0046fae1:
  *in_FS_OFFSET = local_258;
  return;
}

