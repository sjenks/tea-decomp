// name: FUN_0041ca1c
// address: 0x41ca1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0041ca8a) */
/* WARNING: Removing unreachable block (ram,0x0041cada) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_0041ca1c(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_418 [248];
  undefined4 local_320;
  int *local_310;
  int *local_300;
  undefined1 local_2f8 [264];
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  char *local_1e0;
  char *local_1dc;
  undefined4 *local_1d0;
  undefined4 *local_1cc;
  int *local_1c8;
  undefined1 *local_1c4;
  undefined4 local_1c0;
  char *local_1bc;
  char *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  uint local_1ac;
  int local_1a8;
  int *local_1a4;
  int *local_1a0;
  uint local_19c;
  int *local_198;
  int local_194;
  undefined4 *local_190;
  undefined4 local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  int local_180;
  int local_17c;
  int *local_178;
  uint local_174;
  undefined1 local_170 [4];
  uint local_16c;
  undefined1 *local_168;
  undefined4 local_164;
  int *local_160;
  int *local_15c;
  int *local_158;
  int *local_154;
  int *local_150;
  uint local_14c;
  undefined1 *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  int *local_138;
  undefined1 *local_134;
  int *local_130;
  undefined4 local_12c;
  uint *local_120;
  uint local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  uint local_fc;
  undefined1 *local_f8;
  int *local_f4;
  int *local_f0;
  uint local_ec;
  int *local_e8;
  undefined1 *local_e4;
  int *local_e0;
  undefined4 local_dc;
  uint *local_d0;
  uint local_cc;
  char *local_c8;
  int local_c4;
  char *local_c0;
  undefined1 local_b9;
  uint local_b8;
  undefined1 *local_b4;
  undefined *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_98;
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
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
  char *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4ef00c);
  local_ac = 0;
  local_b4 = local_14;
  local_b0 = &DAT_00513d64;
  local_c = (undefined4 *)&DAT_00513d64;
  local_1f0 = &DAT_00513d64;
  local_8c = local_8c + 1;
  local_b8 = 0;
LAB_0041caa1:
  do {
    local_98 = 0x38;
    FUN_004d6118((int)local_24,param_2,local_b8,DAT_005140ac);
    local_8c = local_8c + 1;
    local_98 = 0x2c;
    local_b9 = 0x3b;
    local_c4 = *(int *)(local_1c + -4);
    local_c8 = local_1c;
    local_c0 = thunk_FUN_004dc794(local_1c,';',local_c4);
    uVar3 = DAT_005140ac;
    if (local_c0 != (char *)0x0) {
      uVar3 = (int)local_c0 - (int)local_1c;
    }
    if (uVar3 != 0xffffffff) {
      local_cc = uVar3;
      if (DAT_005140ac - 0xe < uVar3) {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        puVar6 = &LAB_00408370;
        uVar5 = 0;
        local_98 = 0x50;
        local_d0 = (uint *)FUN_004dc320(local_2f8,PTR_s_invalid_string_size_parameter_in_00516d20);
        FUN_004cf628((int)local_64,local_d0);
        local_8c = local_8c + 2;
        local_3c[0] = &PTR_FUN_004ecaac;
        local_dc = 0;
        local_2c = (int *)0x0;
        local_98 = 0x5c;
        if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
          local_ec = local_5c[-1];
          local_f4 = FUN_004cf7b0(local_34,local_ec,local_ec);
          local_f8 = local_34;
          local_310 = local_f4 + 3;
          local_fc = local_ec;
          local_100 = local_5c;
          local_104 = local_310;
          local_f0 = local_310;
          local_2c = local_310;
          FUN_004dc7d4(local_310,local_5c,local_ec);
        }
        else {
          local_e4 = local_34;
          local_e0 = local_5c;
          local_2c = local_5c;
          local_300 = local_5c;
          local_e8 = local_5c + -3;
          if (local_e8 != &DAT_00513d58) {
            *local_e8 = *local_e8 + 1;
          }
        }
        local_98 = 0x50;
        local_3c[0] = &PTR_FUN_004ecac0;
        local_8c = local_8c + 2;
        if (local_5c != (int *)0x0) {
          if (local_5c[-3] != -1) {
            local_108 = local_5c + -3;
            if (local_108 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_108 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_108 = *local_108 + -1;
              iVar2 = *local_108 + 1;
            }
            if (iVar2 != 0) goto LAB_0041cda3;
          }
          local_10c = local_5c + -3;
          local_110 = local_5c + -3;
          FUN_004cc0bc();
          local_114 = 0;
          local_118 = local_64;
          local_5c = (int *)0x0;
          local_320 = 0;
        }
LAB_0041cda3:
        local_98 = 0x44;
        FUN_004e7cc4((uint *)&DAT_00408314,local_3c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
      }
      if (local_cc < *(uint *)(local_1c + -4)) {
        local_11c = *(int *)(local_1c + -4) - local_cc;
        if (*(uint *)(local_1c + -4) < local_cc) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_004084c8;
          uVar5 = 0;
          local_98 = 0x80;
          local_120 = (uint *)FUN_004dc320(local_418,PTR_s_string_index_out_of_range_in_fun_00516d2c
                                          );
          FUN_004cf628((int)local_74,local_120);
          local_8c = local_8c + 2;
          local_54[0] = &PTR_FUN_004ecaac;
          local_12c = 0;
          local_44 = (int *)0x0;
          local_98 = 0x8c;
          if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
            local_13c = local_6c[-1];
            local_144 = FUN_004cf7b0(local_4c,local_13c,local_13c);
            local_148 = local_4c;
            local_154 = local_144 + 3;
            local_14c = local_13c;
            local_150 = local_6c;
            local_140 = local_154;
            local_44 = local_154;
            FUN_004dc7d4(local_154,local_6c,local_13c);
          }
          else {
            local_134 = local_4c;
            local_130 = local_6c;
            local_44 = local_6c;
            local_138 = local_6c + -3;
            if (local_138 != &DAT_00513d58) {
              *local_138 = *local_138 + 1;
            }
          }
          local_98 = 0x80;
          local_54[0] = &PTR_FUN_004eca98;
          local_8c = local_8c + 2;
          if (local_6c != (int *)0x0) {
            if (local_6c[-3] != -1) {
              local_158 = local_6c + -3;
              if (local_158 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_158 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_158 = *local_158 + -1;
                iVar2 = *local_158 + 1;
              }
              if (iVar2 != 0) goto LAB_0041d038;
            }
            local_15c = local_6c + -3;
            local_160 = local_6c + -3;
            FUN_004cc0bc();
            local_164 = 0;
            local_168 = local_74;
            local_6c = (int *)0x0;
          }
LAB_0041d038:
          local_98 = 0x44;
          FUN_004e7cc4((uint *)&DAT_0040846c,local_54,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        local_16c = *(int *)(local_1c + -4) - local_cc;
        local_170[0] = 0;
        local_174 = local_16c;
        if (local_11c < local_16c) {
          local_174 = local_11c;
        }
        FUN_004cfad4((int)local_24,local_cc,local_174,(uint)local_170,0,0,0);
      }
      else {
        FUN_004d5c40((int)local_24,*(uint *)(local_1c + -4),0,local_cc - *(int *)(local_1c + -4),0);
      }
      pcVar1 = local_1c + -0xc;
      if (pcVar1 != (char *)&DAT_00513d58) {
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
    }
    local_98 = 0xb0;
    FUN_00436e14((int)local_84,(int)local_24);
    local_8c = local_8c + 1;
    FUN_004d573c((int)local_14,(int)local_84);
    local_8c = local_8c + -1;
    if (local_7c != 0) {
      if (*(int *)(local_7c + -0xc) != -1) {
        local_178 = (int *)(local_7c + -0xc);
        if (local_178 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_178 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_178 = *local_178 + -1;
          iVar2 = *local_178 + 1;
        }
        if (iVar2 != 0) goto LAB_0041d1b7;
      }
      local_17c = local_7c + -0xc;
      local_180 = local_7c + -0xc;
      FUN_004cc0bc();
      local_184 = 0;
      local_188 = local_84;
      local_7c = 0;
    }
LAB_0041d1b7:
    local_98 = 0x2c;
    if (uVar3 == 0xffffffff) break;
    FUN_004d5c40((int)local_14,local_c[-1],0,1,0x3b);
    local_b8 = local_b8 + uVar3 + 1;
    local_8c = local_8c + -1;
    if (local_1c != (char *)0x0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar4 = (int *)(local_1c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar2 = *piVar4 + 1;
        }
        if (iVar2 != 0) goto LAB_0041caa1;
      }
      local_1dc = local_1c + -0xc;
      local_1e0 = local_1c + -0xc;
      FUN_004cc0bc();
      local_1e4 = 0;
      local_1c = (char *)0x0;
      local_1e8 = local_24;
    }
  } while( true );
  local_98 = 200;
  local_18c = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    local_19c = local_c[-1];
    local_1a4 = FUN_004cf7b0(param_1,local_19c,local_19c);
    local_1a0 = local_1a4 + 3;
    *(int **)(param_1 + 8) = local_1a0;
    local_1a8 = param_1;
    local_1ac = local_19c;
    local_1b0 = local_c;
    local_1b4 = *(undefined4 **)(param_1 + 8);
    FUN_004dc7d4(local_1b4,local_c,local_19c);
  }
  else {
    local_190 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_194 = param_1;
    local_198 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_198 != &DAT_00513d58) {
      *local_198 = *local_198 + 1;
    }
  }
  local_98 = 0xe0;
  if (local_1c != (char *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0041d37f;
    }
    local_1b8 = local_1c + -0xc;
    local_1bc = local_1c + -0xc;
    FUN_004cc0bc();
    local_1c0 = 0;
    local_1c = (char *)0x0;
    local_1c4 = local_24;
  }
LAB_0041d37f:
  local_8c = local_8c + -1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      local_1c8 = local_c + -3;
      if (local_1c8 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_1c8 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_1c8 = *local_1c8 + -1;
        iVar2 = *local_1c8 + 1;
      }
      if (iVar2 != 0) goto LAB_0041d42e;
    }
    local_1cc = local_c + -3;
    local_1d0 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0041d42e:
  *in_FS_OFFSET = local_a8;
  return param_1;
}

