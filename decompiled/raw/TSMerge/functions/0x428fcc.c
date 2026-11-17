// name: FUN_00428fcc
// address: 0x428fcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_00428fcc(undefined4 param_1,uint *param_2,UINT param_3)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_444 [248];
  undefined4 local_34c;
  int *local_33c;
  undefined1 local_324 [248];
  undefined4 local_22c;
  undefined4 local_21c;
  int local_20c;
  int local_208;
  undefined1 *local_204;
  undefined4 local_200;
  LPCSTR local_1fc;
  LPCSTR local_1f8;
  int *local_1f4;
  uint local_1f0;
  undefined1 local_1e9;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  int *local_1e0;
  int *local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  uint local_1cc;
  undefined1 *local_1c8;
  int *local_1c4;
  int *local_1c0;
  uint local_1bc;
  int *local_1b8;
  undefined1 *local_1b4;
  int *local_1b0;
  undefined4 local_1ac;
  uint *local_1a0;
  uint local_19c;
  uint local_198;
  undefined1 local_191;
  uint local_190;
  undefined1 *local_18c;
  undefined4 local_188;
  int *local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  uint local_170;
  undefined1 *local_16c;
  int *local_168;
  int *local_164;
  uint local_160;
  int *local_15c;
  undefined1 *local_158;
  int *local_154;
  undefined4 local_150;
  uint *local_144;
  uint local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int *local_12c;
  undefined1 *local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  int *local_110;
  undefined4 *local_104;
  uint local_100;
  undefined4 *local_f4;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int *local_bc;
  undefined **local_b4 [2];
  undefined1 local_ac [8];
  int *local_a4;
  undefined1 local_9c [8];
  int *local_94;
  undefined **local_8c [2];
  undefined1 local_84 [8];
  int *local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  undefined1 local_24 [8];
  LPCSTR local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00455f04(0x46a03c);
  uVar1 = FUN_0044b070();
  if (0x20 < uVar1) goto LAB_00429aa9;
  local_d8 = 0x14;
  FUN_0044d11c((int)local_14,(uint *)&DAT_004699fe);
  local_cc = local_cc + 1;
  local_d8 = 0x20;
  iVar4 = local_c;
  puVar2 = FUN_00410b08();
  local_f4 = FUN_00410e2c(local_3c,puVar2,iVar4);
  local_cc = local_cc + 1;
  FUN_0044d11c((int)local_24,(uint *)local_f4[1]);
  FUN_00410ec0((int)local_3c,2);
  local_d8 = 8;
  if (*(int *)(local_1c + -4) != 0) {
    FUN_0044ce78((int)local_14,(int)local_24);
    local_100 = *(uint *)(local_c + -4);
    pcVar3 = FUN_00455bf0((uint *)s__shell_open_command_00469a03);
    FUN_0044d5c8((int)local_14,local_100,0,0x469a03,(uint)pcVar3,0,(uint)pcVar3);
    local_d8 = 0x2c;
    iVar4 = local_c;
    puVar2 = FUN_00410b08();
    local_104 = FUN_00410e2c(local_54,puVar2,iVar4);
    local_cc = local_cc + 1;
    FUN_0044cf10((int)local_24,(uint *)local_104[1]);
    local_cc = local_cc + -1;
    FUN_00410ec0((int)local_54,2);
    if (*(int *)(local_1c + -4) != 0) {
      local_d8 = 0x44;
      iVar4 = FUN_0044d11c((int)local_64,(uint *)&DAT_00469a17);
      local_cc = local_cc + 1;
      uVar1 = FUN_00452cd8((int)local_24,*(byte **)(iVar4 + 8),0,*(int *)(*(int *)(iVar4 + 8) + -4))
      ;
      local_cc = local_cc + -1;
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          local_110 = (int *)(local_5c + -0xc);
          if (local_110 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else if (local_110 == &DAT_00471d5c) {
            iVar4 = 1;
          }
          else {
            *local_110 = *local_110 + -1;
            iVar4 = *local_110 + 1;
          }
          if (iVar4 != 0) goto LAB_00429218;
        }
        local_114 = local_5c + -0xc;
        local_118 = local_5c + -0xc;
        FUN_0044b2cc();
        local_11c = 0;
        local_5c = 0;
        local_120 = local_64;
        local_21c = 0;
      }
LAB_00429218:
      local_d8 = 0x38;
      if (uVar1 == 0xffffffff) {
        local_d8 = 0x5c;
        iVar4 = FUN_0044d11c((int)local_74,(uint *)&DAT_00469a1c);
        local_cc = local_cc + 1;
        uVar1 = FUN_00452cd8((int)local_24,*(byte **)(iVar4 + 8),0,
                             *(int *)(*(int *)(iVar4 + 8) + -4));
        local_cc = local_cc + -1;
        if (local_6c != 0) {
          if (*(int *)(local_6c + -0xc) != -1) {
            local_12c = (int *)(local_6c + -0xc);
            if (local_12c == &DAT_00471d5c) {
              iVar4 = 1;
            }
            else if (local_12c == &DAT_00471d5c) {
              iVar4 = 1;
            }
            else {
              *local_12c = *local_12c + -1;
              iVar4 = *local_12c + 1;
            }
            if (iVar4 != 0) goto LAB_0042930e;
          }
          local_130 = local_6c + -0xc;
          local_134 = local_6c + -0xc;
          FUN_0044b2cc();
          local_138 = 0;
          local_6c = 0;
          local_13c = local_74;
          local_22c = 0;
        }
LAB_0042930e:
        local_d8 = 0x38;
        if (uVar1 != 0xffffffff) {
          local_140 = DAT_00471f90;
          if (*(uint *)(local_1c + -4) < uVar1) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar2 = &LAB_00403038;
            uVar6 = 0;
            local_d8 = 0x80;
            local_144 = (uint *)FUN_00455640(local_324,
                                             PTR_s_string_index_out_of_range_in_fun_00474074);
            FUN_0044d11c((int)local_9c,local_144);
            local_cc = local_cc + 2;
            local_8c[0] = &PTR_FUN_00461ffc;
            local_150 = 0;
            local_7c = (int *)0x0;
            local_d8 = 0x8c;
            if (local_94[-3] == -1 || local_94[-3] + 1 < 0) {
              local_160 = local_94[-1];
              local_168 = FUN_0044d2a4(local_84,local_160,local_160);
              local_33c = local_168 + 3;
              local_16c = local_84;
              local_170 = local_160;
              local_174 = local_94;
              local_178 = local_33c;
              local_164 = local_33c;
              local_7c = local_33c;
              FUN_004559d0(local_33c,local_94,local_160);
            }
            else {
              local_154 = local_94;
              local_7c = local_94;
              local_158 = local_84;
              local_15c = local_94 + -3;
              if (local_15c != &DAT_00471d5c) {
                *local_15c = *local_15c + 1;
              }
            }
            local_d8 = 0x80;
            local_8c[0] = &PTR_FUN_00461fd4;
            local_cc = local_cc + 2;
            if (local_94 != (int *)0x0) {
              if (local_94[-3] != -1) {
                local_17c = local_94 + -3;
                if (local_17c == &DAT_00471d5c) {
                  iVar4 = 1;
                }
                else if (local_17c == &DAT_00471d5c) {
                  iVar4 = 1;
                }
                else {
                  *local_17c = *local_17c + -1;
                  iVar4 = *local_17c + 1;
                }
                if (iVar4 != 0) goto LAB_0042959c;
              }
              local_180 = local_94 + -3;
              local_184 = local_94 + -3;
              FUN_0044b2cc();
              local_188 = 0;
              local_94 = (int *)0x0;
              local_18c = local_9c;
              local_34c = 0;
            }
LAB_0042959c:
            local_d8 = 0x74;
            FUN_0045ed74((uint *)&DAT_00402fdc,local_8c,uVar6,puVar2,uVar7,uVar8,uVar9,uVar10);
          }
          local_190 = *(int *)(local_1c + -4) - uVar1;
          local_191 = 0;
          local_198 = local_190;
          if (local_140 < local_190) {
            local_198 = local_140;
          }
          FUN_0044d5c8((int)local_24,uVar1,local_198,(uint)&local_191,0,0,0);
        }
      }
      else {
        local_19c = DAT_00471f90;
        if (*(uint *)(local_1c + -4) < uVar1) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar2 = &LAB_00403038;
          uVar6 = 0;
          local_d8 = 0xbc;
          local_1a0 = (uint *)FUN_00455640(local_444,PTR_s_string_index_out_of_range_in_fun_00474074
                                          );
          FUN_0044d11c((int)local_c4,local_1a0);
          local_cc = local_cc + 2;
          local_b4[0] = &PTR_FUN_00461ffc;
          local_1ac = 0;
          local_a4 = (int *)0x0;
          local_d8 = 200;
          if (local_bc[-3] == -1 || local_bc[-3] + 1 < 0) {
            local_1bc = local_bc[-1];
            local_1c4 = FUN_0044d2a4(local_ac,local_1bc,local_1bc);
            local_1d4 = local_1c4 + 3;
            local_1c8 = local_ac;
            local_1cc = local_1bc;
            local_1d0 = local_bc;
            local_1c0 = local_1d4;
            local_a4 = local_1d4;
            FUN_004559d0(local_1d4,local_bc,local_1bc);
          }
          else {
            local_1b0 = local_bc;
            local_a4 = local_bc;
            local_1b4 = local_ac;
            local_1b8 = local_bc + -3;
            if (local_1b8 != &DAT_00471d5c) {
              *local_1b8 = *local_1b8 + 1;
            }
          }
          local_d8 = 0xbc;
          local_b4[0] = &PTR_FUN_00461fd4;
          local_cc = local_cc + 2;
          if (local_bc != (int *)0x0) {
            if (local_bc[-3] != -1) {
              local_1d8 = local_bc + -3;
              if (local_1d8 == &DAT_00471d5c) {
                iVar4 = 1;
              }
              else if (local_1d8 == &DAT_00471d5c) {
                iVar4 = 1;
              }
              else {
                *local_1d8 = *local_1d8 + -1;
                iVar4 = *local_1d8 + 1;
              }
              if (iVar4 != 0) goto LAB_004298a6;
            }
            local_1dc = local_bc + -3;
            local_1e0 = local_bc + -3;
            FUN_0044b2cc();
            local_1e4 = 0;
            local_bc = (int *)0x0;
            local_1e8 = local_c4;
          }
LAB_004298a6:
          local_d8 = 0xb0;
          FUN_0045ed74((uint *)&DAT_00402fdc,local_b4,uVar6,puVar2,uVar7,uVar8,uVar9,uVar10);
        }
        uVar7 = *(int *)(local_1c + -4) - uVar1;
        local_1e9 = 0;
        if (local_19c < uVar7) {
          uVar7 = local_19c;
        }
        FUN_0044d5c8((int)local_24,uVar1,uVar7,(uint)&local_1e9,0,0,0);
      }
      uVar1 = *(uint *)(local_1c + -4);
      pcVar3 = FUN_00455bf0((uint *)&DAT_00469a42);
      FUN_0044d5c8((int)local_24,uVar1,0,0x469a42,(uint)pcVar3,0,(uint)pcVar3);
      local_1f0 = *(uint *)(local_1c + -4);
      pcVar3 = FUN_00455bf0(param_2);
      FUN_0044d5c8((int)local_24,local_1f0,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
      uVar1 = WinExec(local_1c,param_3);
      local_d8 = 8;
    }
  }
  local_cc = local_cc + -1;
  if (local_1c != (LPCSTR)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_1f4 = (int *)(local_1c + -0xc);
      if (local_1f4 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (local_1f4 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *local_1f4 = *local_1f4 + -1;
        iVar4 = *local_1f4 + 1;
      }
      if (iVar4 != 0) goto LAB_00429a0b;
    }
    local_1f8 = local_1c + -0xc;
    local_1fc = local_1c + -0xc;
    FUN_0044b2cc();
    local_200 = 0;
    local_1c = (LPCSTR)0x0;
    local_204 = local_24;
  }
LAB_00429a0b:
  local_d8 = 8;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00429aa9;
    }
    local_208 = local_c + -0xc;
    local_20c = local_c + -0xc;
    FUN_0044b2cc();
  }
LAB_00429aa9:
  *in_FS_OFFSET = local_e8;
  return uVar1;
}

