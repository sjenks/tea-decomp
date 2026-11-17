// name: FUN_004765e8
// address: 0x4765e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00476771) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * __cdecl
FUN_004765e8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_5d8 [248];
  undefined4 local_4e0;
  int *local_4d0;
  undefined1 local_4b8 [280];
  undefined4 local_3a0;
  undefined4 local_390;
  undefined4 local_380;
  int local_360;
  int local_350;
  int local_340;
  uint *local_330;
  uint *local_32c;
  uint *local_328;
  undefined1 *local_324;
  undefined4 local_320;
  int local_31c;
  int local_318;
  int *local_314;
  undefined1 *local_310;
  undefined4 local_30c;
  int local_308;
  int local_304;
  uint local_300;
  undefined1 local_2f9 [245];
  uint local_204;
  undefined1 *local_200;
  undefined4 local_1fc;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  int *local_1e8;
  uint local_1e4;
  undefined1 *local_1e0;
  int *local_1dc;
  int *local_1d8;
  uint local_1d4;
  int *local_1d0;
  undefined1 *local_1cc;
  int *local_1c8;
  undefined4 local_1c4;
  uint *local_1b8;
  uint local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  int *local_198;
  uint local_194;
  undefined1 *local_190;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  undefined1 *local_17c;
  int *local_178;
  undefined4 local_174;
  uint *local_168;
  int local_164;
  uint local_160;
  uint *local_154;
  uint *local_150;
  undefined1 *local_14c;
  undefined4 local_148;
  int local_144;
  int local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 *local_114;
  undefined4 *local_110;
  uint local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  uint local_fc;
  int *local_f8;
  int *local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int local_bc;
  undefined1 local_b4 [8];
  int local_ac;
  undefined1 local_a4 [8];
  int *local_9c;
  undefined1 local_94 [8];
  int *local_8c;
  undefined **local_84 [2];
  undefined1 local_7c [8];
  int *local_74;
  undefined **local_6c [2];
  undefined1 local_64 [8];
  int *local_5c;
  undefined1 local_54 [8];
  uint *local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x500448);
  local_d8 = 8;
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1f6);
    param_1[0x1f6] = (int)(param_1 + 499);
    param_1[0x1f7] = (int)(param_1 + 500);
    param_1[1] = (int)(param_1 + 499);
    param_1[2] = (int)(param_1 + 500);
    param_1[0x1f2] = 0;
    param_1[0x1f5] = 0;
    param_1[499] = (int)&PTR_FUN_004ea94c;
    param_1[500] = (int)&PTR_FUN_004ea93c;
    local_cc = local_cc + 1;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1f6,1);
    local_cc = local_cc + 1;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x768;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x768;
  FUN_00413cf4(param_1,1,0x5001cc,param_3,param_4,(uint *)0x1e8c,0,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x768;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x768;
  param_1[3] = (int)&PTR_FUN_0050067c;
  *(undefined ***)param_1[1] = &PTR_LAB_00500744;
  *(undefined ***)param_1[2] = &PTR_LAB_00500750;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050075c;
  param_1[0x18] = param_6;
  param_1[0x1c] = 0;
  param_1[0x1c] = (int)&DAT_00513d64;
  local_340 = param_1[0x1c];
  local_cc = local_cc + 4;
  local_ec = param_5;
  piVar2 = param_1 + 0x1e;
  param_1[0x20] = 0;
  local_d8 = 0x20;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    local_fc = *(uint *)(*(int *)(param_5 + 8) + -4);
    local_104 = FUN_004cf7b0(piVar2,local_fc,local_fc);
    local_100 = local_104 + 3;
    param_1[0x20] = (int)local_100;
    local_360 = param_1[0x20];
    local_10c = local_fc;
    local_110 = *(undefined4 **)(local_ec + 8);
    local_114 = (undefined4 *)param_1[0x20];
    local_108 = piVar2;
    FUN_004dc7d4(local_114,local_110,local_fc);
  }
  else {
    local_f0 = *(int *)(param_5 + 8);
    param_1[0x20] = local_f0;
    local_350 = param_1[0x20];
    local_f8 = (int *)(param_1[0x20] + -0xc);
    local_f4 = piVar2;
    if (local_f8 != &DAT_00513d58) {
      *local_f8 = *local_f8 + 1;
    }
  }
  local_cc = local_cc + 1;
  local_d8 = 8;
  FUN_0041fedc(param_1 + 0x22,param_1,param_4,param_6,0);
  local_cc = local_cc + 0x27;
  FUN_004179f0(param_1 + 0x192,0,param_1,0x1eb4);
  local_cc = local_cc + 6;
  FUN_004abc64(param_1 + 0x1c4,0,*param_1,1,0);
  local_cc = local_cc + 4;
  param_1[0x1ef] = DAT_004eb4c4;
  param_1[0x1f0] = DAT_004eb4c8;
  if ((*(byte *)(param_1 + 0x18) & 4) == 0) {
    local_d8 = 200;
    FUN_00437158((int)local_54);
    local_cc = local_cc + 1;
    local_d8 = 0xbc;
    local_160 = local_4c[-1];
    if (local_160 != 0) {
      local_164 = local_160 - 1;
      if (1 < (int)(local_4c[-3] + 1)) {
        FUN_004d48d8((int)local_54);
      }
      if (local_4c + -3 != &DAT_00513d58) {
        local_4c[-3] = 0xffffffff;
      }
      if (*(char *)((int)local_4c + local_164) == '\\') {
        uVar4 = local_160 - 1;
        if (DAT_005140ac - 0xeU < uVar4) {
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_00408370;
          uVar5 = 0;
          local_d8 = 0xe0;
          local_168 = (uint *)FUN_004dc320(local_4b8,PTR_s_invalid_string_size_parameter_in_00516d20
                                          );
          FUN_004cf628((int)local_94,local_168);
          local_cc = local_cc + 2;
          local_6c[0] = &PTR_FUN_004ecaac;
          local_174 = 0;
          local_5c = (int *)0x0;
          local_d8 = 0xec;
          if (local_8c[-3] == -1 || local_8c[-3] + 1 < 0) {
            local_184 = local_8c[-1];
            local_18c = FUN_004cf7b0(local_64,local_184,local_184);
            local_190 = local_64;
            local_4d0 = local_18c + 3;
            local_194 = local_184;
            local_198 = local_8c;
            local_19c = local_4d0;
            local_188 = local_4d0;
            local_5c = local_4d0;
            FUN_004dc7d4(local_4d0,local_8c,local_184);
          }
          else {
            local_17c = local_64;
            local_178 = local_8c;
            local_5c = local_8c;
            local_180 = local_8c + -3;
            if (local_180 != &DAT_00513d58) {
              *local_180 = *local_180 + 1;
            }
          }
          local_d8 = 0xe0;
          local_6c[0] = &PTR_FUN_004ecac0;
          local_cc = local_cc + 2;
          if (local_8c != (int *)0x0) {
            if (local_8c[-3] != -1) {
              local_1a0 = local_8c + -3;
              if (local_1a0 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (local_1a0 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *local_1a0 = *local_1a0 + -1;
                iVar1 = *local_1a0 + 1;
              }
              if (iVar1 != 0) goto LAB_00476ef9;
            }
            local_1a4 = local_8c + -3;
            local_1a8 = local_8c + -3;
            FUN_004cc0bc();
            local_1ac = 0;
            local_1b0 = local_94;
            local_8c = (int *)0x0;
            local_4e0 = 0;
          }
LAB_00476ef9:
          local_d8 = 0xd4;
          FUN_004e7cc4((uint *)&DAT_00408314,local_6c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if (uVar4 < local_4c[-1]) {
          local_1b4 = local_4c[-1] - uVar4;
          if (local_4c[-1] < uVar4) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_004084c8;
            uVar5 = 0;
            local_d8 = 0x110;
            local_1b8 = (uint *)FUN_004dc320(local_5d8,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            FUN_004cf628((int)local_a4,local_1b8);
            local_cc = local_cc + 2;
            local_84[0] = &PTR_FUN_004ecaac;
            local_1c4 = 0;
            local_74 = (int *)0x0;
            local_d8 = 0x11c;
            if (local_9c[-3] == -1 || local_9c[-3] + 1 < 0) {
              local_1d4 = local_9c[-1];
              local_1dc = FUN_004cf7b0(local_7c,local_1d4,local_1d4);
              local_1e0 = local_7c;
              local_1ec = local_1dc + 3;
              local_1e4 = local_1d4;
              local_1e8 = local_9c;
              local_1d8 = local_1ec;
              local_74 = local_1ec;
              FUN_004dc7d4(local_1ec,local_9c,local_1d4);
            }
            else {
              local_1cc = local_7c;
              local_1c8 = local_9c;
              local_74 = local_9c;
              local_1d0 = local_9c + -3;
              if (local_1d0 != &DAT_00513d58) {
                *local_1d0 = *local_1d0 + 1;
              }
            }
            local_d8 = 0x110;
            local_84[0] = &PTR_FUN_004eca98;
            local_cc = local_cc + 2;
            if (local_9c != (int *)0x0) {
              if (local_9c[-3] != -1) {
                local_1f0 = local_9c + -3;
                if (local_1f0 == &DAT_00513d58) {
                  iVar1 = 1;
                }
                else if (local_1f0 == &DAT_00513d58) {
                  iVar1 = 1;
                }
                else {
                  *local_1f0 = *local_1f0 + -1;
                  iVar1 = *local_1f0 + 1;
                }
                if (iVar1 != 0) goto LAB_0047719c;
              }
              local_1f4 = local_9c + -3;
              local_1f8 = local_9c + -3;
              FUN_004cc0bc();
              local_1fc = 0;
              local_200 = local_a4;
              local_9c = (int *)0x0;
            }
LAB_0047719c:
            local_d8 = 0xd4;
            FUN_004e7cc4((uint *)&DAT_0040846c,local_84,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          local_204 = local_4c[-1] - uVar4;
          local_2f9[0] = 0;
          local_300 = local_204;
          if (local_1b4 < local_204) {
            local_300 = local_1b4;
          }
          FUN_004cfad4((int)local_54,uVar4,local_300,(uint)local_2f9,0,0,0);
        }
        else {
          FUN_004d5c40((int)local_54,local_4c[-1],0,uVar4 - local_4c[-1],0);
        }
        if (local_4c + -3 != &DAT_00513d58) {
          local_4c[-3] = 0;
        }
      }
    }
    local_d8 = 0x140;
    FUN_00416dd4((int)local_b4,(int)param_1,(uint *)PTR_s_ClueDatabaseFolder_00501424,local_4c);
    local_cc = local_cc + 1;
    FUN_00437470((int)local_c4,(int)local_b4);
    local_cc = local_cc + 1;
    FUN_004cf384((int)(param_1 + 0x1a),(int)local_c4);
    local_cc = local_cc + -1;
    if (local_bc != 0) {
      if (*(int *)(local_bc + -0xc) != -1) {
        piVar2 = (int *)(local_bc + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar1 = *piVar2 + 1;
        }
        if (iVar1 != 0) goto LAB_00477337;
      }
      local_304 = local_bc + -0xc;
      local_308 = local_bc + -0xc;
      FUN_004cc0bc();
      local_30c = 0;
      local_310 = local_c4;
      local_bc = 0;
    }
LAB_00477337:
    local_d8 = 0xbc;
    local_cc = local_cc + -1;
    if (local_ac != 0) {
      if (*(int *)(local_ac + -0xc) != -1) {
        local_314 = (int *)(local_ac + -0xc);
        if (local_314 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (local_314 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *local_314 = *local_314 + -1;
          iVar1 = *local_314 + 1;
        }
        if (iVar1 != 0) goto LAB_00477401;
      }
      local_318 = local_ac + -0xc;
      local_31c = local_ac + -0xc;
      FUN_004cc0bc();
      local_320 = 0;
      local_324 = local_b4;
      local_ac = 0;
    }
LAB_00477401:
    local_cc = local_cc + -1;
    if (local_4c != (uint *)0x0) {
      if (local_4c[-3] != 0xffffffff) {
        local_328 = local_4c + -3;
        if (local_328 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (local_328 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *local_328 = *local_328 - 1;
          iVar1 = *local_328 + 1;
        }
        if (iVar1 != 0) goto LAB_004774b6;
      }
      local_32c = local_4c + -3;
      local_330 = local_4c + -3;
      FUN_004cc0bc();
    }
    goto LAB_004774b6;
  }
  local_d8 = 0x74;
  FUN_004cf628((int)local_24,(uint *)s_Dictionaries_005001db);
  local_cc = local_cc + 1;
  FUN_00437470((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004769eb;
    }
    local_120 = local_1c + -0xc;
    local_124 = local_1c + -0xc;
    FUN_004cc0bc();
    local_128 = 0;
    local_12c = local_24;
    local_1c = 0;
    local_380 = 0;
  }
LAB_004769eb:
  local_d8 = 0x8c;
  FUN_00416dd4((int)local_34,(int)param_1,(uint *)PTR_s_DictionaryFolder_00501420,local_c);
  local_cc = local_cc + 1;
  FUN_00437470((int)local_44,(int)local_34);
  local_cc = local_cc + 1;
  FUN_004cf384((int)(param_1 + 0x1a),(int)local_44);
  local_cc = local_cc + -1;
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar2 = (int *)(local_3c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00476acc;
    }
    local_130 = local_3c + -0xc;
    local_134 = local_3c + -0xc;
    FUN_004cc0bc();
    local_138 = 0;
    local_13c = local_44;
    local_3c = 0;
    local_390 = 0;
  }
LAB_00476acc:
  local_d8 = 0x68;
  local_cc = local_cc + -1;
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar2 = (int *)(local_2c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00476b65;
    }
    local_140 = local_2c + -0xc;
    local_144 = local_2c + -0xc;
    FUN_004cc0bc();
    local_148 = 0;
    local_14c = local_34;
    local_2c = 0;
    local_3a0 = 0;
  }
LAB_00476b65:
  local_cc = local_cc + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar1 = *puVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_004774b6;
    }
    local_150 = local_c + -3;
    local_154 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_004774b6:
  *in_FS_OFFSET = local_e8;
  return param_1;
}

