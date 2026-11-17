// name: FUN_00401d58
// address: 0x401d58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00401d58(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_790 [248];
  undefined4 local_698;
  int *local_688;
  undefined1 local_670 [248];
  int *local_578;
  int *local_568;
  undefined4 local_558;
  int *local_548;
  undefined1 local_530 [248];
  undefined4 local_438;
  int *local_428;
  undefined1 local_410 [248];
  undefined4 local_318;
  int *local_308;
  int *local_304;
  int *local_300;
  LPCSTR local_2fc;
  int *local_2f8;
  uint local_2f4;
  undefined1 local_2ed [41];
  uint local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  int *local_2b8;
  int *local_2b4;
  int *local_2b0;
  int *local_2ac;
  int *local_2a8;
  uint local_2a4;
  undefined1 *local_2a0;
  int *local_29c;
  int *local_298;
  uint local_294;
  int *local_290;
  undefined1 *local_28c;
  int *local_288;
  undefined4 local_284;
  uint *local_278;
  uint local_274;
  undefined1 *local_270;
  undefined4 local_26c;
  int *local_268;
  int *local_264;
  int *local_260;
  int *local_25c;
  int *local_258;
  uint local_254;
  undefined1 *local_250;
  int *local_24c;
  int *local_248;
  uint local_244;
  int *local_240;
  undefined1 *local_23c;
  int *local_238;
  undefined4 local_234;
  uint *local_228;
  int *local_224;
  undefined4 *local_220;
  uint local_21c;
  undefined1 *local_218;
  int *local_214;
  int *local_210;
  undefined1 *local_20c;
  int *local_208;
  uint local_204;
  undefined1 local_1fd [105];
  uint local_194;
  undefined1 *local_190;
  undefined4 local_18c;
  int *local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  uint local_174;
  undefined1 *local_170;
  int *local_16c;
  int *local_168;
  uint local_164;
  int *local_160;
  undefined1 *local_15c;
  int *local_158;
  undefined4 local_154;
  uint *local_148;
  uint local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  uint local_124;
  undefined1 *local_120;
  int *local_11c;
  int *local_118;
  uint local_114;
  int *local_110;
  undefined1 *local_10c;
  int *local_108;
  undefined4 local_104;
  uint *local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int *local_bc;
  undefined1 local_b4 [8];
  int *local_ac;
  undefined **local_a4 [2];
  undefined1 local_9c [8];
  int *local_94;
  undefined **local_8c [2];
  undefined1 local_84 [8];
  int *local_7c;
  undefined1 local_74 [8];
  int *local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined **local_3c [2];
  undefined1 local_34 [8];
  int *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00455f04(0x461bd4);
  FUN_00435024(param_1);
  param_1[0x378] = 0;
  param_1[0x379] = 8;
  DVar1 = GetTickCount();
  param_1[0x37a] = DVar1;
  param_1[0x37b] = 0;
  FUN_0040c154((int)(param_1 + 0x37c));
  local_d8 = 8;
  FUN_0040e050((int)local_24);
  local_cc = local_cc + 1;
  FUN_0044ce78(0x47689c,(int)local_24);
  local_cc = local_cc + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
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
      if (iVar2 != 0) goto LAB_00401e5a;
    }
    local_ec = local_1c + -0xc;
    FUN_0044b2cc();
    local_f0 = 0;
    local_f4 = local_24;
    local_1c = 0;
    local_318 = 0;
  }
LAB_00401e5a:
  if (*(int *)(DAT_004768a4 + -4) != 0) {
    uVar5 = *(int *)(DAT_004768a4 + -4) - 1;
    if (DAT_00471f90 - 0xe < uVar5) {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00402ee0;
      uVar6 = 0;
      local_d8 = 0x2c;
      local_f8 = (uint *)FUN_00455640(local_410,PTR_s_invalid_string_size_parameter_in_00474068);
      FUN_0044d11c((int)local_64,local_f8);
      local_cc = local_cc + 2;
      local_3c[0] = &PTR_FUN_00461ffc;
      local_104 = 0;
      local_2c = (int *)0x0;
      local_d8 = 0x38;
      if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
        local_114 = local_5c[-1];
        local_11c = FUN_0044d2a4(local_34,local_114,local_114);
        local_120 = local_34;
        local_428 = local_11c + 3;
        local_124 = local_114;
        local_128 = local_5c;
        local_12c = local_428;
        local_118 = local_428;
        local_2c = local_428;
        FUN_004559d0(local_428,local_5c,local_114);
      }
      else {
        local_10c = local_34;
        local_108 = local_5c;
        local_2c = local_5c;
        local_110 = local_5c + -3;
        if (local_110 != &DAT_00471d5c) {
          *local_110 = *local_110 + 1;
        }
      }
      local_d8 = 0x2c;
      local_3c[0] = &PTR_FUN_00462010;
      local_cc = local_cc + 2;
      if (local_5c != (int *)0x0) {
        if (local_5c[-3] != -1) {
          local_130 = local_5c + -3;
          if (local_130 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_130 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar2 = *local_130 + 1;
          }
          if (iVar2 != 0) goto LAB_004020e8;
        }
        local_134 = local_5c + -3;
        local_138 = local_5c + -3;
        FUN_0044b2cc();
        local_13c = 0;
        local_140 = local_64;
        local_5c = (int *)0x0;
        local_438 = 0;
      }
LAB_004020e8:
      local_d8 = 0x20;
      FUN_0045ed74((uint *)&DAT_00402e84,local_3c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    if (uVar5 < *(uint *)(DAT_004768a4 + -4)) {
      local_144 = *(int *)(DAT_004768a4 + -4) - uVar5;
      if (*(uint *)(DAT_004768a4 + -4) < uVar5) {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar7 = &LAB_00403038;
        uVar6 = 0;
        local_d8 = 0x5c;
        local_148 = (uint *)FUN_00455640(local_530,PTR_s_string_index_out_of_range_in_fun_00474074);
        FUN_0044d11c((int)local_74,local_148);
        local_cc = local_cc + 2;
        local_54[0] = &PTR_FUN_00461ffc;
        local_154 = 0;
        local_44 = (int *)0x0;
        local_d8 = 0x68;
        if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
          local_164 = local_6c[-1];
          local_16c = FUN_0044d2a4(local_4c,local_164,local_164);
          local_170 = local_4c;
          local_548 = local_16c + 3;
          local_174 = local_164;
          local_178 = local_6c;
          local_17c = local_548;
          local_168 = local_548;
          local_44 = local_548;
          FUN_004559d0(local_548,local_6c,local_164);
        }
        else {
          local_15c = local_4c;
          local_158 = local_6c;
          local_44 = local_6c;
          local_160 = local_6c + -3;
          if (local_160 != &DAT_00471d5c) {
            *local_160 = *local_160 + 1;
          }
        }
        local_d8 = 0x5c;
        local_54[0] = &PTR_FUN_00461fd4;
        local_cc = local_cc + 2;
        if (local_6c != (int *)0x0) {
          if (local_6c[-3] != -1) {
            local_180 = local_6c + -3;
            if (local_180 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_180 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_180 = *local_180 + -1;
              iVar2 = *local_180 + 1;
            }
            if (iVar2 != 0) goto LAB_00402396;
          }
          local_184 = local_6c + -3;
          local_188 = local_6c + -3;
          FUN_0044b2cc();
          local_18c = 0;
          local_190 = local_74;
          local_6c = (int *)0x0;
          local_558 = 0;
        }
LAB_00402396:
        local_d8 = 0x20;
        FUN_0045ed74((uint *)&DAT_00402fdc,local_54,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
      }
      local_194 = *(int *)(DAT_004768a4 + -4) - uVar5;
      local_1fd[0] = 0;
      local_204 = local_194;
      if (local_144 < local_194) {
        local_204 = local_144;
      }
      FUN_0044d5c8(0x47689c,uVar5,local_204,(uint)local_1fd,0,0,0);
    }
    else {
      FUN_00451d38(0x47689c,*(uint *)(DAT_004768a4 + -4),0,uVar5 - *(int *)(DAT_004768a4 + -4),0);
    }
    if ((undefined4 *)(DAT_004768a4 + -0xc) != &DAT_00471d5c) {
      *(undefined4 *)(DAT_004768a4 + -0xc) = 0;
    }
  }
  iVar2 = thunk_FUN_00456df4((LPCSTR)param_1[900],0);
  if (iVar2 == 0) {
    SetWindowTextA(*(HWND *)(param_1[0x1c0] + 0xc),(LPCSTR)param_1[900]);
  }
  iVar2 = thunk_FUN_00456df4((LPCSTR)param_1[0x388],0);
  if (iVar2 == 0) {
    SetWindowTextA(*(HWND *)(*(int *)((int)param_1 + 0x7b2) + 0xc),(LPCSTR)param_1[0x388]);
  }
  local_d8 = 0x98;
  local_c = (int *)0x0;
  if (*(int *)(param_1[0x38c] + -0xc) == -1 || *(int *)(param_1[0x38c] + -0xc) + 1 < 0) {
    uVar5 = *(uint *)(param_1[0x38c] + -4);
    local_214 = FUN_0044d2a4(local_14,uVar5,uVar5);
    local_218 = local_14;
    local_578 = local_214 + 3;
    local_220 = (undefined4 *)param_1[0x38c];
    local_224 = local_578;
    local_21c = uVar5;
    local_210 = local_578;
    local_c = local_578;
    FUN_004559d0(local_578,local_220,uVar5);
  }
  else {
    local_568 = (int *)param_1[0x38c];
    local_20c = local_14;
    piVar4 = local_568 + -3;
    local_208 = local_568;
    local_c = local_568;
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_cc = local_cc + 1;
  local_d8 = 0x8c;
  uVar5 = DAT_00471f90;
  if ((uint)local_c[-1] < DAT_00471f90) {
    uVar5 = local_c[-1];
  }
  pcVar3 = FUN_00403134((char *)local_c,'\\',uVar5);
  uVar5 = DAT_00471f90;
  if (pcVar3 != (char *)0x0) {
    uVar5 = (int)pcVar3 - (int)local_c;
  }
  if (uVar5 != DAT_00471f90) {
    if (DAT_00471f90 - 0xe < uVar5) {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 1;
      puVar7 = &LAB_00402ee0;
      uVar6 = 0;
      local_d8 = 0xbc;
      local_228 = (uint *)FUN_00455640(local_670,PTR_s_invalid_string_size_parameter_in_00474068);
      FUN_0044d11c((int)local_b4,local_228);
      local_cc = local_cc + 2;
      local_8c[0] = &PTR_FUN_00461ffc;
      local_234 = 0;
      local_7c = (int *)0x0;
      local_d8 = 200;
      if (local_ac[-3] == -1 || local_ac[-3] + 1 < 0) {
        local_244 = local_ac[-1];
        local_24c = FUN_0044d2a4(local_84,local_244,local_244);
        local_250 = local_84;
        local_688 = local_24c + 3;
        local_254 = local_244;
        local_258 = local_ac;
        local_25c = local_688;
        local_248 = local_688;
        local_7c = local_688;
        FUN_004559d0(local_688,local_ac,local_244);
      }
      else {
        local_23c = local_84;
        local_238 = local_ac;
        local_7c = local_ac;
        local_240 = local_ac + -3;
        if (local_240 != &DAT_00471d5c) {
          *local_240 = *local_240 + 1;
        }
      }
      local_d8 = 0xbc;
      local_8c[0] = &PTR_FUN_00462010;
      local_cc = local_cc + 2;
      if (local_ac != (int *)0x0) {
        if (local_ac[-3] != -1) {
          local_260 = local_ac + -3;
          if (local_260 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_260 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_260 = *local_260 + -1;
            iVar2 = *local_260 + 1;
          }
          if (iVar2 != 0) goto LAB_0040286d;
        }
        local_264 = local_ac + -3;
        local_268 = local_ac + -3;
        FUN_0044b2cc();
        local_26c = 0;
        local_270 = local_b4;
        local_ac = (int *)0x0;
        local_698 = 0;
      }
LAB_0040286d:
      local_d8 = 0xb0;
      FUN_0045ed74((uint *)&DAT_00402e84,local_8c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
    }
    if (uVar5 < (uint)local_c[-1]) {
      local_274 = local_c[-1] - uVar5;
      if ((uint)local_c[-1] < uVar5) {
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar7 = &LAB_00403038;
        uVar6 = 0;
        local_d8 = 0xec;
        local_278 = (uint *)FUN_00455640(local_790,PTR_s_string_index_out_of_range_in_fun_00474074);
        FUN_0044d11c((int)local_c4,local_278);
        local_cc = local_cc + 2;
        local_a4[0] = &PTR_FUN_00461ffc;
        local_284 = 0;
        local_94 = (int *)0x0;
        local_d8 = 0xf8;
        if (local_bc[-3] == -1 || local_bc[-3] + 1 < 0) {
          local_294 = local_bc[-1];
          local_29c = FUN_0044d2a4(local_9c,local_294,local_294);
          local_2a0 = local_9c;
          local_2ac = local_29c + 3;
          local_2a4 = local_294;
          local_2a8 = local_bc;
          local_298 = local_2ac;
          local_94 = local_2ac;
          FUN_004559d0(local_2ac,local_bc,local_294);
        }
        else {
          local_28c = local_9c;
          local_288 = local_bc;
          local_94 = local_bc;
          local_290 = local_bc + -3;
          if (local_290 != &DAT_00471d5c) {
            *local_290 = *local_290 + 1;
          }
        }
        local_d8 = 0xec;
        local_a4[0] = &PTR_FUN_00461fd4;
        local_cc = local_cc + 2;
        if (local_bc != (int *)0x0) {
          if (local_bc[-3] != -1) {
            local_2b0 = local_bc + -3;
            if (local_2b0 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_2b0 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_2b0 = *local_2b0 + -1;
              iVar2 = *local_2b0 + 1;
            }
            if (iVar2 != 0) goto LAB_00402b57;
          }
          local_2b4 = local_bc + -3;
          local_2b8 = local_bc + -3;
          FUN_0044b2cc();
          local_2bc = 0;
          local_2c0 = local_c4;
          local_bc = (int *)0x0;
        }
LAB_00402b57:
        local_d8 = 0xb0;
        FUN_0045ed74((uint *)&DAT_00402fdc,local_a4,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
      }
      local_2c4 = local_c[-1] - uVar5;
      local_2ed[0] = 0;
      local_2f4 = local_2c4;
      if (local_274 < local_2c4) {
        local_2f4 = local_274;
      }
      FUN_0044d5c8((int)local_14,uVar5,local_2f4,(uint)local_2ed,0,0,0);
    }
    else {
      FUN_00451d38((int)local_14,local_c[-1],0,uVar5 - local_c[-1],0);
    }
    local_2f8 = local_c + -3;
    if (local_2f8 != &DAT_00471d5c) {
      *local_2f8 = 0;
    }
  }
  iVar2 = thunk_FUN_00456df4((LPCSTR)local_c,0);
  if (iVar2 == 0) {
    local_2fc = (LPCSTR)param_1[0x38c];
    SetWindowTextA(*(HWND *)(param_1[0x219] + 0xc),local_2fc);
  }
  param_1[0x376] = param_1[0x380];
  FUN_004321c4(param_1 + 8,(uint)(param_1[0x376] == 0));
  FUN_004321c4(param_1 + 0x34,(uint)(param_1[0x376] == 2));
  FUN_004321c4(param_1 + 0x60,(uint)(param_1[0x376] == 1));
  FUN_004321c4(param_1 + 0x8c,(uint)(param_1[0x376] == 3));
  FUN_004321c4(param_1 + 0xb8,(uint)(param_1[0x376] == 4));
  param_1[0x377] = param_1[0x381];
  FUN_004321c4(param_1 + 0xe4,(uint)(param_1[0x377] == 0));
  FUN_004321c4(param_1 + 0x110,(uint)(param_1[0x377] == 1));
  FUN_004321c4(param_1 + 0x13c,(uint)(param_1[0x377] == 2));
  FUN_004321c4(param_1 + 0x168,(uint)(param_1[0x377] == 3));
  FUN_004321c4(param_1 + 0x194,(uint)(param_1[0x377] == 4));
  FUN_00403920((int)param_1);
  local_cc = local_cc + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_300 = local_c + -3;
      if (local_300 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (local_300 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *local_300 = *local_300 + -1;
        iVar2 = *local_300 + 1;
      }
      if (iVar2 != 0) goto LAB_00402e65;
    }
    local_304 = local_c + -3;
    local_308 = local_c + -3;
    FUN_0044b2cc();
  }
LAB_00402e65:
  *in_FS_OFFSET = local_e8;
  return;
}

