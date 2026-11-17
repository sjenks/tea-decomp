// name: FUN_00407734
// address: 0x407734
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004078bf) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl FUN_00407734(uint *param_1)

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
  undefined1 local_2f8 [248];
  int *local_200;
  int *local_1e0;
  int *local_1dc;
  undefined1 *local_1d8;
  undefined4 local_1d4;
  int *local_1d0;
  int *local_1cc;
  undefined1 *local_1c8;
  undefined4 local_1c4;
  int *local_1c0;
  int *local_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  undefined4 *local_1a0;
  undefined4 *local_19c;
  int *local_198;
  uint local_194;
  undefined1 local_18d;
  uint local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  uint local_16c;
  undefined1 *local_168;
  int *local_164;
  int *local_160;
  uint local_15c;
  int *local_158;
  undefined1 *local_154;
  int *local_150;
  undefined4 local_14c;
  uint *local_140;
  uint local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  int *local_124;
  int *local_120;
  uint local_11c;
  undefined1 *local_118;
  int *local_114;
  int *local_110;
  uint local_10c;
  int *local_108;
  undefined1 *local_104;
  int *local_100;
  undefined4 local_fc;
  uint *local_f0;
  int *local_ec;
  int local_e8;
  undefined1 local_e1;
  uint local_e0;
  int *local_dc;
  int *local_d8;
  uint local_d4;
  undefined1 *local_d0;
  int *local_cc;
  int *local_c8;
  undefined1 *local_c4;
  int *local_c0;
  undefined4 *local_bc;
  undefined4 local_b0;
  undefined2 local_a0;
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  int *local_7c;
  undefined1 local_78 [8];
  int *local_70;
  undefined1 local_68 [8];
  int *local_60;
  undefined **local_58 [2];
  undefined1 local_50 [8];
  int *local_48;
  undefined **local_40 [2];
  undefined1 local_38 [8];
  int *local_30;
  undefined1 local_28 [8];
  int *local_20;
  undefined4 *local_18;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_004dce64(0x4eb5f4);
  local_a0 = 8;
  FUN_004cf628((int)local_14,param_1);
  local_94 = local_94 + 1;
  local_a0 = 0x14;
  local_18 = (undefined4 *)FUN_004cc0f0();
  if (local_18 != (undefined4 *)0x0) {
    local_a0 = 0x2c;
    FUN_004075e4(local_18,param_1);
  }
  local_a0 = 0x14;
  local_bc = local_18;
  if ((char)*param_1 != '\0') {
LAB_004077d5:
    do {
      local_a0 = 0x44;
      local_20 = (int *)0x0;
      if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
        uVar3 = local_c[-1];
        local_cc = FUN_004cf7b0(local_28,uVar3,uVar3);
        local_200 = local_cc + 3;
        local_d8 = local_c;
        local_dc = local_200;
        local_d4 = uVar3;
        local_d0 = local_28;
        local_c8 = local_200;
        local_20 = local_200;
        FUN_004dc7d4(local_200,local_c,uVar3);
      }
      else {
        local_c0 = local_c;
        local_20 = local_c;
        piVar4 = local_c + -3;
        local_c4 = local_28;
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_94 = local_94 + 1;
      local_a0 = 0x38;
      local_e1 = 0x3b;
      local_e8 = local_20[-1];
      local_ec = local_20;
      pcVar1 = thunk_FUN_004dc794((char *)local_20,';',local_e8);
      uVar3 = DAT_005140ac;
      if (pcVar1 != (char *)0x0) {
        uVar3 = (int)pcVar1 - (int)local_20;
      }
      local_e0 = uVar3;
      if (uVar3 != 0xffffffff) {
        if (DAT_005140ac - 0xe < uVar3) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_00408370;
          uVar5 = 0;
          local_a0 = 0x68;
          local_f0 = (uint *)FUN_004dc320(local_2f8,PTR_s_invalid_string_size_parameter_in_00516d20)
          ;
          FUN_004cf628((int)local_68,local_f0);
          local_94 = local_94 + 2;
          local_40[0] = &PTR_FUN_004ecaac;
          local_fc = 0;
          local_30 = (int *)0x0;
          local_a0 = 0x74;
          if (local_60[-3] == -1 || local_60[-3] + 1 < 0) {
            local_10c = local_60[-1];
            local_114 = FUN_004cf7b0(local_38,local_10c,local_10c);
            local_118 = local_38;
            local_310 = local_114 + 3;
            local_11c = local_10c;
            local_120 = local_60;
            local_124 = local_310;
            local_110 = local_310;
            local_30 = local_310;
            FUN_004dc7d4(local_310,local_60,local_10c);
          }
          else {
            local_104 = local_38;
            local_100 = local_60;
            local_30 = local_60;
            local_300 = local_60;
            local_108 = local_60 + -3;
            if (local_108 != &DAT_00513d58) {
              *local_108 = *local_108 + 1;
            }
          }
          local_a0 = 0x68;
          local_40[0] = &PTR_FUN_004ecac0;
          local_94 = local_94 + 2;
          if (local_60 != (int *)0x0) {
            if (local_60[-3] != -1) {
              local_128 = local_60 + -3;
              if (local_128 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_128 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_128 = *local_128 + -1;
                iVar2 = *local_128 + 1;
              }
              if (iVar2 != 0) goto LAB_00407b97;
            }
            local_12c = local_60 + -3;
            local_130 = local_60 + -3;
            FUN_004cc0bc();
            local_134 = 0;
            local_138 = local_68;
            local_60 = (int *)0x0;
            local_320 = 0;
          }
LAB_00407b97:
          local_a0 = 0x5c;
          FUN_004e7cc4((uint *)&DAT_00408314,local_40,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if (uVar3 < (uint)local_20[-1]) {
          local_13c = local_20[-1] - uVar3;
          if ((uint)local_20[-1] < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_004084c8;
            uVar5 = 0;
            local_a0 = 0x98;
            local_140 = (uint *)FUN_004dc320(local_418,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            FUN_004cf628((int)local_78,local_140);
            local_94 = local_94 + 2;
            local_58[0] = &PTR_FUN_004ecaac;
            local_14c = 0;
            local_48 = (int *)0x0;
            local_a0 = 0xa4;
            if (local_70[-3] == -1 || local_70[-3] + 1 < 0) {
              local_15c = local_70[-1];
              local_164 = FUN_004cf7b0(local_50,local_15c,local_15c);
              local_168 = local_50;
              local_174 = local_164 + 3;
              local_16c = local_15c;
              local_170 = local_70;
              local_160 = local_174;
              local_48 = local_174;
              FUN_004dc7d4(local_174,local_70,local_15c);
            }
            else {
              local_154 = local_50;
              local_150 = local_70;
              local_48 = local_70;
              local_158 = local_70 + -3;
              if (local_158 != &DAT_00513d58) {
                *local_158 = *local_158 + 1;
              }
            }
            local_a0 = 0x98;
            local_58[0] = &PTR_FUN_004eca98;
            local_94 = local_94 + 2;
            if (local_70 != (int *)0x0) {
              if (local_70[-3] != -1) {
                local_178 = local_70 + -3;
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
                if (iVar2 != 0) goto LAB_00407e39;
              }
              local_17c = local_70 + -3;
              local_180 = local_70 + -3;
              FUN_004cc0bc();
              local_184 = 0;
              local_188 = local_78;
              local_70 = (int *)0x0;
            }
LAB_00407e39:
            local_a0 = 0x5c;
            FUN_004e7cc4((uint *)&DAT_0040846c,local_58,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          local_18c = local_20[-1] - uVar3;
          local_18d = 0;
          local_194 = local_18c;
          if (local_13c < local_18c) {
            local_194 = local_13c;
          }
          FUN_004cfad4((int)local_28,uVar3,local_194,(uint)&local_18d,0,0,0);
        }
        else {
          FUN_004d5c40((int)local_28,local_20[-1],0,uVar3 - local_20[-1],0);
        }
        if (local_20 + -3 != &DAT_00513d58) {
          local_20[-3] = 0;
        }
      }
      uVar3 = 0;
      while( true ) {
        iVar2 = (int)DAT_004eb4a8 - DAT_004eb4a4;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        if ((uint)(iVar2 >> 2) <= uVar3) goto LAB_00407f2b;
        local_198 = *(int **)(uVar3 * 4 + DAT_004eb4a4);
        pcVar1 = (char *)(**(code **)(*local_198 + 0x10))();
        iVar2 = FUN_004dcbf8((char *)local_20,pcVar1);
        if (iVar2 == 0) break;
        uVar3 = uVar3 + 1;
      }
      local_198[0x804] = local_198[0x804] + 1;
LAB_00407f2b:
      iVar2 = (int)DAT_004eb4a8 - DAT_004eb4a4;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if ((uint)(iVar2 >> 2) <= uVar3) {
        local_7c = (int *)FUN_004cc0f0();
        if (local_7c != (int *)0x0) {
          local_a0 = 0xd4;
          FUN_0040b8ac(local_7c,(int)local_28);
          local_a0 = 200;
        }
        local_198 = local_7c;
        (**(code **)(*local_7c + 4))();
        if (DAT_004eb4a8 == DAT_004eb4b8) {
          FUN_004085f0(0x4eb4a0,DAT_004eb4a8,&local_198);
        }
        else {
          local_19c = DAT_004eb4a8;
          local_1a0 = DAT_004eb4a8;
          *DAT_004eb4a8 = local_198;
          DAT_004eb4a8 = DAT_004eb4a8 + 1;
        }
      }
      if (local_bc[4] == local_bc[8]) {
        FUN_004085f0((int)(local_bc + 2),(undefined4 *)local_bc[4],&local_198);
      }
      else {
        local_1a8 = (undefined4 *)local_bc[4];
        *local_1a8 = local_198;
        local_bc[4] = local_bc[4] + 4;
        local_1a4 = local_1a8;
      }
      if (local_e0 == 0xffffffff) goto code_r0x00408033;
      local_a0 = 0xe0;
      FUN_004d6118((int)local_8c,(int)local_14,local_e0 + 1,DAT_005140ac);
      local_94 = local_94 + 1;
      FUN_004cf384((int)local_14,(int)local_8c);
      local_94 = local_94 + -1;
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar4 = (int *)(local_84 + -0xc);
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
          if (iVar2 != 0) goto LAB_004081ac;
        }
        local_1ac = local_84 + -0xc;
        local_1b0 = local_84 + -0xc;
        FUN_004cc0bc();
        local_1b4 = 0;
        local_1b8 = local_8c;
        local_84 = 0;
      }
LAB_004081ac:
      local_a0 = 0x38;
      local_94 = local_94 + -1;
      if (local_20 != (int *)0x0) {
        if (local_20[-3] != -1) {
          piVar4 = local_20 + -3;
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
          if (iVar2 != 0) goto LAB_004077d5;
        }
        local_1cc = local_20 + -3;
        local_1d0 = local_20 + -3;
        FUN_004cc0bc();
        local_1d4 = 0;
        local_1d8 = local_28;
      }
    } while( true );
  }
LAB_00408256:
  local_94 = local_94 + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
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
      if (iVar2 != 0) goto LAB_004082f3;
    }
    local_1dc = local_c + -3;
    local_1e0 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_004082f3:
  *in_FS_OFFSET = local_b0;
  return local_bc;
code_r0x00408033:
  local_94 = local_94 + -1;
  if (local_20 != (int *)0x0) {
    if (local_20[-3] != -1) {
      piVar4 = local_20 + -3;
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
      if (iVar2 != 0) goto LAB_00408256;
    }
    local_1bc = local_20 + -3;
    local_1c0 = local_20 + -3;
    FUN_004cc0bc();
    local_1c4 = 0;
    local_20 = (int *)0x0;
    local_1c8 = local_28;
  }
  goto LAB_00408256;
}

