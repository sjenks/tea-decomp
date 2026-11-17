// name: FUN_00454b40
// address: 0x454b40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00455078) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00454b40(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  BOOL BVar6;
  int iVar7;
  HWND pHVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *in_FS_OFFSET;
  char cVar11;
  uint local_43c [27];
  undefined4 local_3d0;
  undefined4 local_3b0;
  undefined4 local_3a0;
  undefined4 local_390;
  undefined4 local_380;
  undefined4 local_360;
  undefined4 local_350;
  undefined4 local_340;
  undefined4 local_330;
  undefined4 local_310;
  undefined *local_300;
  undefined4 local_2f0;
  uint *local_2d8;
  int local_2cc;
  int local_2c8;
  int *local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  int local_2b4;
  int *local_2b0;
  int *local_2a4;
  int local_2a0;
  undefined1 *local_29c;
  undefined4 local_298;
  undefined *local_294;
  undefined *local_290;
  int *local_28c;
  int local_280;
  int local_27c;
  undefined1 *local_278;
  undefined4 local_274;
  undefined *local_270;
  undefined *local_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined1 *local_25c;
  undefined4 local_258;
  int local_254;
  int local_250;
  int *local_24c;
  int local_248;
  int local_244;
  undefined1 *local_240;
  undefined4 local_23c;
  int local_238;
  int local_234;
  int *local_230;
  undefined1 *local_22c;
  undefined4 local_228;
  int local_224;
  int local_220;
  int *local_21c;
  int local_210;
  int local_20c;
  int *local_208;
  undefined1 *local_204;
  undefined4 local_200;
  undefined *local_1fc;
  undefined *local_1f8;
  int *local_1f4;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  int local_1e4;
  int *local_1e0;
  int local_1dc;
  int local_1d8;
  undefined1 *local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  int *local_1c4;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  int local_1b4;
  int *local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4 [3];
  int local_198;
  int local_194;
  undefined1 *local_190;
  undefined4 local_18c;
  undefined *local_188;
  undefined *local_184;
  uint local_180;
  char *local_17c;
  int local_178;
  int local_174;
  int local_170;
  byte local_169;
  char *local_168;
  char *local_164;
  char *local_160;
  int local_15c;
  int local_158;
  uint *local_154;
  undefined1 *local_150;
  undefined *local_14c;
  undefined4 local_148;
  int local_144;
  int *local_140;
  int local_13c;
  int local_138;
  int *local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  int *local_120;
  uint local_11c;
  int *local_118;
  int local_114;
  int local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  byte *local_104;
  byte *local_100;
  byte *local_fc;
  int *local_f8;
  undefined1 *local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int local_bc;
  undefined1 local_b4 [8];
  int local_ac;
  undefined1 local_9c [4];
  int local_98;
  int local_94;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f8880);
  iVar2 = param_1[0xe];
  local_ec = FUN_00466b28(iVar2);
  if (param_3 != 0x10b8) {
    if (param_3 == 0x10cc) {
      FUN_00452dc8(param_1);
    }
    else if (param_3 == 0x5fa) {
      (**(code **)(param_1[3] + 0xb4))();
    }
    else {
      (**(code **)(param_1[3] + 0x24))(local_ec,param_1[3],iVar2,param_1,2);
    }
    goto LAB_00456335;
  }
  if (param_1[0x19] == 2) {
    FUN_0045c6d4((int)param_1,3);
    goto LAB_00456335;
  }
  iVar2 = FUN_004581a0(param_1);
  if (iVar2 == 0) goto LAB_00456335;
  local_d8 = 0x14;
  FUN_00464a94((int)local_14,param_1[0xe],0x16a8);
  local_cc = local_cc + 1;
  local_d8 = 8;
  DAT_004f3434 = 0;
  local_f0 = param_1[0x19];
  FUN_0045c6d4((int)param_1,2);
  if (local_f0 == 1) {
    local_d8 = 0x20;
    FUN_0041c780((int)local_24,(int)(param_1 + 0x56),0);
    local_f4 = local_24;
    local_cc = local_cc + 1;
    local_f8 = param_1 + 0x1a6;
    uVar3 = FUN_004d40d0((int)local_f8,0,*(uint *)(param_1[0x1a8] + -4),local_1c,
                         *(uint *)(local_1c + -4));
    cVar11 = uVar3 != 0;
    local_cc = local_cc + -1;
    if (local_1c != (byte *)0x0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        local_fc = local_1c + -0xc;
        if (local_fc == (byte *)&DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_fc == (byte *)&DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *(int *)local_fc = *(int *)local_fc + -1;
          iVar2 = *(int *)local_fc + 1;
        }
        if (iVar2 != 0) goto LAB_00454d24;
      }
      local_100 = local_1c + -0xc;
      local_104 = local_1c + -0xc;
      FUN_004cc0bc();
      local_108 = 0;
      local_10c = local_24;
      local_1c = (byte *)0x0;
      local_2f0 = 0;
    }
LAB_00454d24:
    if (cVar11 != '\0') {
      (**(code **)(param_1[0x59] + 100))();
    }
    FUN_00466b10();
    FUN_00456480((int)param_1);
    local_110 = 0;
    local_d8 = 8;
    if (*(int *)(local_ec + 0x1b0) != 0) {
      local_114 = 1;
      local_118 = param_1 + 0x1ac;
      iVar2 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if (iVar2 >> 2 != 0) {
        local_114 = FUN_00479b7c(*(int *)param_1[0x1ad] + 0x28);
      }
      if (*(int *)(local_ec + 0x1b8) == 0) {
        local_110 = 1;
      }
      else if ((*(int *)(local_ec + 0x1bc) == 1) ||
              ((*(int *)(local_ec + 0x1bc) == 0 && (local_114 == 1)))) {
        local_110 = 3;
      }
      else {
        local_110 = 5;
      }
      if (*(int *)(local_ec + 0x1b4) == 0) {
        local_110 = local_110 + 1;
      }
    }
    local_11c = 0;
    while( true ) {
      local_120 = param_1 + 0x1ac;
      iVar2 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if ((uint)(iVar2 >> 2) <= local_11c) break;
      if ((*(int *)(local_ec + 0x24) != 2) || (local_11c == param_1[0x1b4])) {
        local_124 = local_11c;
        FUN_004cf384(*(int *)(local_11c * 4 + param_1[0x1ad]) + 0x10,(int)(param_1 + 0x1a6));
        local_128 = local_11c;
        FUN_00429084(*(int **)(*(int *)(local_11c * 4 + param_1[0x1ad]) + 4),0);
        local_12c = local_11c;
        FUN_0042bb18(*(int **)(*(int *)(local_11c * 4 + param_1[0x1ad]) + 8));
        if ((*(int *)(local_ec + 0x24) == 0) && (*(int *)(local_ec + 0x1b0) == 0)) {
          local_134 = param_1 + 0x1ac;
          iVar2 = param_1[0x1ae] - param_1[0x1ad];
          if (iVar2 < 0) {
            iVar2 = iVar2 + 3;
          }
          if ((uint)(iVar2 >> 2) <= local_11c + 1) goto LAB_00454f32;
          uVar5 = 1;
        }
        else {
LAB_00454f32:
          uVar5 = 0;
        }
        local_130 = local_11c;
        FUN_0042b9ec(*(int *)(*(int *)(local_11c * 4 + param_1[0x1ad]) + 8),local_110,uVar5);
      }
      local_11c = local_11c + 1;
    }
  }
  SetFocus(*(HWND *)(param_1[0x84] + 0xc));
  (**(code **)(param_1[3] + 0xa4))();
  FUN_00466e78();
  FUN_00498d7c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
LAB_00456077:
  if (param_1[0x1a] != -1) {
    local_138 = FUN_00466b18(param_1[0xe]);
    local_13c = param_1[0x1a];
    iVar2 = *(int *)(local_13c * 4 + param_1[0x1ad]);
    local_140 = *(int **)(iVar2 + 8);
    local_144 = 0;
    local_148 = 0;
    local_150 = local_34;
    local_14c = &DAT_00513d64;
    local_2c = &DAT_00513d64;
    local_300 = &DAT_00513d64;
    local_cc = local_cc + 1;
    local_d8 = 0x50;
    local_154 = (uint *)0x0;
    if (param_1[0x1b] != 0) {
      local_158 = 0;
      uVar3 = 0;
      do {
        if (*(int *)(local_ec + 0x1cc + uVar3 * 4) == 0) {
          local_158 = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      FUN_0044fdb8(param_1 + 0x1b5,local_138,param_1[0x1a],*(int *)(iVar2 + 0xc),
                   *(int *)(param_1[0x1b] + 0x1c));
LAB_004550ee:
      FUN_0044ffb8(param_1 + 0x1b5,*(int *)(param_1[0x1b] + 0x1c));
      local_15c = 400;
      local_d8 = 0x50;
      do {
        while( true ) {
          pcVar4 = FUN_00411bdc(param_1[0x1b],iVar2 + 0x28);
          if (pcVar4 == (char *)0x0) goto LAB_00455425;
          if (*pcVar4 == -1) {
            FUN_0045e800(iVar2);
            goto LAB_00455177;
          }
          puVar10 = (uint *)(param_1[0x1b] + 0x408);
          local_160 = FUN_004dc9f4(puVar10);
          if (local_158 != 0) break;
LAB_00455342:
          if (*(int *)(local_ec + 0x24) != 0) {
LAB_004553b5:
            if (*(int *)(local_ec + 0x1c0) != 0) {
              local_154 = (uint *)FUN_004122bc(param_1[0x1b]);
            }
            if (*(int *)(local_ec + 0x1c4) != 0) {
              FUN_00479518(iVar2 + 0x28,(int)local_14,(int)local_34);
            }
            FUN_0042bdf0(local_140,'\0');
            FUN_0042dc18(local_140,puVar10,local_154,(int)local_34,0);
            goto LAB_00455425;
          }
          local_180 = 0;
          local_d8 = 0x50;
          while( true ) {
            if ((uint)param_1[0x1a] <= local_180) goto LAB_004553b5;
            bVar1 = FUN_0042ea44(*(int *)(*(int *)(local_180 * 4 + param_1[0x1ad]) + 8),puVar10,
                                 local_160);
            if (bVar1) break;
            local_180 = local_180 + 1;
          }
          iVar7 = local_15c + -1;
          bVar1 = local_15c < 1;
          local_15c = iVar7;
          if (bVar1) goto LAB_00455425;
        }
        pcVar4 = (char *)0x0;
        local_164 = local_160;
        if (*(char **)(iVar2 + 0xc) != local_160) {
          pcVar4 = (char *)0xffffffff;
          local_168 = (char *)0x0;
          for (local_2d8 = puVar10; (byte)*local_2d8 != 0; local_2d8 = (uint *)((int)local_2d8 + 1))
          {
            local_169 = (byte)*local_2d8;
            local_170 = param_1[0x1a];
            local_174 = *(int *)(*(int *)(*(int *)(local_138 + 0xc) + local_170 * 4) + 8 +
                                (uint)local_169 * 8);
            if ((local_174 != 0xff) && (local_164 = local_168 + 1, pcVar4 == (char *)0xffffffff)) {
              pcVar4 = local_168;
            }
            local_168 = local_168 + 1;
          }
        }
        local_178 = 0;
        local_d8 = 0x50;
        if (pcVar4 + *(int *)(iVar2 + 0xc) == local_164) {
          local_17c = pcVar4;
          if (pcVar4 < local_164) {
            do {
              BVar6 = IsCharUpperA(*(CHAR *)((int)puVar10 + (int)local_17c));
              if (BVar6 != 0) {
                local_178 = 1;
              }
              local_17c = local_17c + 1;
            } while (local_17c < local_164);
          }
        }
        else {
          pcVar4 = thunk_FUN_004dc924((char *)puVar10,' ');
          if (pcVar4 == (char *)0x0) {
            local_178 = 2;
          }
          else {
            local_178 = 3;
          }
        }
        if (*(int *)(local_ec + 0x1cc + local_178 * 4) != 0) goto LAB_00455342;
        iVar7 = local_15c + -1;
        bVar1 = 0 < local_15c;
        local_15c = iVar7;
      } while (bVar1);
      goto LAB_00455425;
    }
    if (param_1[0x1c] == 0) {
      FUN_00410da0((int *)param_1[0x1d],&local_260,&local_264);
      FUN_0044fd7c(param_1 + 0x1b5,local_264,local_260);
      do {
        puVar10 = (uint *)FUN_004108e4((int *)param_1[0x1d],200);
        local_d8 = 0x50;
        FUN_00410da0((int *)param_1[0x1d],&local_260,&local_268);
        FUN_0044ffb8(param_1 + 0x1b5,local_260);
        if (puVar10 != (uint *)0x0) {
          if ((char)*puVar10 == '\0') goto LAB_00455fa5;
          FUN_0042bdf0(local_140,'\0');
          FUN_004cf41c((int)local_34,(uint *)(param_1[0x1d] + 0x90));
          FUN_0042dc18(local_140,puVar10,(uint *)0x0,(int)local_34,
                       *(undefined4 *)(param_1[0x1d] + 0x110));
        }
        iVar2 = FUN_00456728(param_1,&local_144);
        if (iVar2 != 0) {
          local_cc = local_cc + -1;
          if (local_2c != (undefined *)0x0) {
            if (*(int *)(local_2c + -0xc) != -1) {
              piVar9 = (int *)(local_2c + -0xc);
              if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *piVar9 = *piVar9 + -1;
                iVar2 = *piVar9 + 1;
              }
              if (iVar2 != 0) goto LAB_00455ef9;
            }
            local_26c = local_2c + -0xc;
            local_270 = local_2c + -0xc;
            FUN_004cc0bc();
            local_274 = 0;
            local_278 = local_34;
            local_2c = (undefined *)0x0;
            local_3b0 = 0;
          }
LAB_00455ef9:
          local_cc = local_cc + -1;
          if (local_c != 0) {
            if (*(int *)(local_c + -0xc) != -1) {
              piVar9 = (int *)(local_c + -0xc);
              if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *piVar9 = *piVar9 + -1;
                iVar2 = *piVar9 + 1;
              }
              if (iVar2 != 0) goto LAB_00455f8f;
            }
            local_27c = local_c + -0xc;
            local_280 = local_c + -0xc;
            FUN_004cc0bc();
          }
LAB_00455f8f:
          *in_FS_OFFSET = local_e8;
          return;
        }
      } while( true );
    }
    FUN_00410750(param_1[0x1c],local_1a4,&local_1a8);
    FUN_0044fd7c(param_1 + 0x1b5,local_1a8,local_1a4[0]);
    local_d8 = 0x74;
    FUN_00473df0((int)local_b4);
    local_cc = local_cc + 6;
    local_d8 = 0x80;
    while (iVar2 = FUN_00410704((int *)param_1[0x1c],(int)local_b4), iVar2 != 0) {
      FUN_00410750(param_1[0x1c],local_1a4,&local_1ac);
      FUN_0044ffb8(param_1 + 0x1b5,local_1a4[0]);
      FUN_0042bdf0(local_140,'\0');
      FUN_0042dc18(local_140,*(uint **)(local_98 + 8),(uint *)0x0,local_78,local_3c);
      iVar2 = FUN_00456728(param_1,&local_144);
      if (iVar2 != 0) {
        local_cc = local_cc + -2;
        if (local_44 != 0) {
          if (*(int *)(local_44 + -0xc) != -1) {
            local_1b0 = (int *)(local_44 + -0xc);
            if (local_1b0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1b0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1b0 = *local_1b0 + -1;
              iVar2 = *local_1b0 + 1;
            }
            if (iVar2 != 0) goto LAB_00455743;
          }
          local_1b4 = local_44 + -0xc;
          local_1b8 = local_44 + -0xc;
          FUN_004cc0bc();
          local_1bc = 0;
          local_1c0 = local_4c;
          local_44 = 0;
          local_330 = 0;
        }
LAB_00455743:
        local_d8 = 0x80;
        local_cc = local_cc + -1;
        if (local_54 != 0) {
          if (*(int *)(local_54 + -0xc) != -1) {
            local_1c4 = (int *)(local_54 + -0xc);
            if (local_1c4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1c4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1c4 = *local_1c4 + -1;
              iVar2 = *local_1c4 + 1;
            }
            if (iVar2 != 0) goto LAB_004557fe;
          }
          local_1c8 = local_54 + -0xc;
          local_1cc = local_54 + -0xc;
          FUN_004cc0bc();
          local_1d0 = 0;
          local_1d4 = local_5c;
          local_54 = 0;
          local_340 = 0;
        }
LAB_004557fe:
        local_cc = local_cc + -1;
        FUN_0040b4f0(local_7c,local_78,local_74);
        local_1d8 = local_78;
        FUN_004cc0bc();
        local_cc = local_cc + -1;
        FUN_0040b4f0(local_9c,local_98,local_94);
        local_1dc = local_98;
        FUN_004cc0bc();
        local_cc = local_cc + -1;
        if (local_ac != 0) {
          if (*(int *)(local_ac + -0xc) != -1) {
            local_1e0 = (int *)(local_ac + -0xc);
            if (local_1e0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1e0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1e0 = *local_1e0 + -1;
              iVar2 = *local_1e0 + 1;
            }
            if (iVar2 != 0) goto LAB_00455931;
          }
          local_1e4 = local_ac + -0xc;
          local_1e8 = local_ac + -0xc;
          FUN_004cc0bc();
          local_1ec = 0;
          local_1f0 = local_b4;
          local_ac = 0;
          local_350 = 0;
        }
LAB_00455931:
        local_cc = local_cc + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            local_1f4 = (int *)(local_2c + -0xc);
            if (local_1f4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1f4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1f4 = *local_1f4 + -1;
              iVar2 = *local_1f4 + 1;
            }
            if (iVar2 != 0) goto LAB_004559e3;
          }
          local_1f8 = local_2c + -0xc;
          local_1fc = local_2c + -0xc;
          FUN_004cc0bc();
          local_200 = 0;
          local_204 = local_34;
          local_2c = (undefined *)0x0;
          local_360 = 0;
        }
LAB_004559e3:
        local_cc = local_cc + -1;
        if (local_c != 0) {
          if (*(int *)(local_c + -0xc) != -1) {
            local_208 = (int *)(local_c + -0xc);
            if (local_208 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_208 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_208 = *local_208 + -1;
              iVar2 = *local_208 + 1;
            }
            if (iVar2 != 0) goto LAB_00455a95;
          }
          local_20c = local_c + -0xc;
          local_210 = local_c + -0xc;
          FUN_004cc0bc();
        }
LAB_00455a95:
        *in_FS_OFFSET = local_e8;
        return;
      }
    }
    local_cc = local_cc + -2;
    if (local_44 != 0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        local_21c = (int *)(local_44 + -0xc);
        if (local_21c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_21c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_21c = *local_21c + -1;
          iVar2 = *local_21c + 1;
        }
        if (iVar2 != 0) goto LAB_00455b79;
      }
      local_220 = local_44 + -0xc;
      local_224 = local_44 + -0xc;
      FUN_004cc0bc();
      local_228 = 0;
      local_22c = local_4c;
      local_44 = 0;
      local_380 = 0;
    }
LAB_00455b79:
    local_d8 = 0x80;
    local_cc = local_cc + -1;
    if (local_54 != 0) {
      if (*(int *)(local_54 + -0xc) != -1) {
        local_230 = (int *)(local_54 + -0xc);
        if (local_230 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_230 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_230 = *local_230 + -1;
          iVar2 = *local_230 + 1;
        }
        if (iVar2 != 0) goto LAB_00455c34;
      }
      local_234 = local_54 + -0xc;
      local_238 = local_54 + -0xc;
      FUN_004cc0bc();
      local_23c = 0;
      local_240 = local_5c;
      local_54 = 0;
      local_390 = 0;
    }
LAB_00455c34:
    local_cc = local_cc + -1;
    FUN_0040b4f0(local_7c,local_78,local_74);
    local_244 = local_78;
    FUN_004cc0bc();
    local_cc = local_cc + -1;
    FUN_0040b4f0(local_9c,local_98,local_94);
    local_248 = local_98;
    FUN_004cc0bc();
    local_cc = local_cc + -1;
    if (local_ac != 0) {
      if (*(int *)(local_ac + -0xc) != -1) {
        local_24c = (int *)(local_ac + -0xc);
        if (local_24c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_24c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_24c = *local_24c + -1;
          iVar2 = *local_24c + 1;
        }
        if (iVar2 != 0) goto LAB_00455d67;
      }
      local_250 = local_ac + -0xc;
      local_254 = local_ac + -0xc;
      FUN_004cc0bc();
      local_258 = 0;
      local_25c = local_b4;
      local_ac = 0;
      local_3a0 = 0;
    }
LAB_00455d67:
    local_d8 = 0x50;
    goto LAB_00455fa5;
  }
  FUN_0045c6d4((int)param_1,1);
  pHVar8 = GetFocus();
  if (pHVar8 == *(HWND *)(param_1[0x84] + 0xc)) {
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  (**(code **)(param_1[3] + 0xa4))();
  local_2a0 = 0;
  local_d8 = 8;
  for (local_2a4 = (int *)param_1[0x1ad]; local_2a4 < (int *)param_1[0x1ae];
      local_2a4 = local_2a4 + 1) {
    iVar2 = FUN_0042ba08(*(int *)(*local_2a4 + 8));
    local_2a0 = local_2a0 + iVar2;
  }
  FUN_004e0344((undefined1 *)local_43c,(byte *)s__d_result_s_found_004f7748);
  local_d8 = 0x140;
  FUN_004cf628((int)local_c4,local_43c);
  local_cc = local_cc + 1;
  FUN_00465a64(param_1[0xe],(int)local_c4);
  local_cc = local_cc + -1;
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      local_2b0 = (int *)(local_bc + -0xc);
      if (local_2b0 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2b0 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2b0 = *local_2b0 + -1;
        iVar2 = *local_2b0 + 1;
      }
      if (iVar2 != 0) goto LAB_0045623b;
    }
    local_2b4 = local_bc + -0xc;
    local_2b8 = local_bc + -0xc;
    FUN_004cc0bc();
    local_2bc = 0;
    local_2c0 = local_c4;
    local_bc = 0;
  }
LAB_0045623b:
  local_d8 = 8;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_2c4 = (int *)(local_c + -0xc);
      if (local_2c4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2c4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2c4 = *local_2c4 + -1;
        iVar2 = *local_2c4 + 1;
      }
      if (iVar2 != 0) goto LAB_00456335;
    }
    local_2c8 = local_c + -0xc;
    local_2cc = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00456335:
  *in_FS_OFFSET = local_e8;
  return;
LAB_00455177:
  uVar5 = FUN_0045e810(iVar2);
  if ((char)uVar5 == '\0') goto LAB_00455182;
  bVar1 = FUN_00411790(param_1[0x1b],*(int *)(iVar2 + 0xc));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00479484(iVar2 + 0x28,*(int *)(iVar2 + 0xc));
    local_d8 = 0x50;
    goto LAB_00455182;
  }
  FUN_0045e800(iVar2);
  goto LAB_00455177;
LAB_00455588:
  FUN_0044ffb8(param_1 + 0x1b5,*(int *)(param_1[0x1b] + 0x1c));
LAB_00455fa5:
  FUN_0045db98((int)param_1);
  FUN_00456480((int)param_1);
  local_cc = local_cc + -1;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      local_28c = (int *)(local_2c + -0xc);
      if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_28c = *local_28c + -1;
        iVar2 = *local_28c + 1;
      }
      if (iVar2 != 0) goto LAB_00456065;
    }
    local_290 = local_2c + -0xc;
    local_294 = local_2c + -0xc;
    FUN_004cc0bc();
    local_298 = 0;
    local_29c = local_34;
    local_2c = (undefined *)0x0;
    local_3d0 = 0;
  }
LAB_00456065:
  local_d8 = 8;
  goto LAB_00456077;
LAB_00455182:
  uVar5 = FUN_0045e810(iVar2);
  if ((char)uVar5 == '\0') goto LAB_00455588;
  FUN_0044fdb8(param_1 + 0x1b5,local_138,param_1[0x1a],*(int *)(iVar2 + 0xc),
               *(int *)(param_1[0x1b] + 0x1c));
LAB_00455425:
  iVar7 = FUN_00456728(param_1,&local_144);
  if (iVar7 == 0) goto LAB_004550ee;
  local_cc = local_cc + -1;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar9 = (int *)(local_2c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_004554d3;
    }
    local_184 = local_2c + -0xc;
    local_188 = local_2c + -0xc;
    FUN_004cc0bc();
    local_18c = 0;
    local_190 = local_34;
    local_2c = (undefined *)0x0;
    local_310 = 0;
  }
LAB_004554d3:
  local_d8 = 0x50;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar9 = (int *)(local_c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00455572;
    }
    local_194 = local_c + -0xc;
    local_198 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00455572:
  *in_FS_OFFSET = local_e8;
  return;
}

