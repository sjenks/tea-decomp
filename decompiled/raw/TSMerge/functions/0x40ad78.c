// name: FUN_0040ad78
// address: 0x40ad78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0040ad78(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_7c8 [248];
  undefined4 local_6d0;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  undefined1 local_5c8 [248];
  undefined4 local_4d0;
  undefined1 local_4c8 [248];
  undefined4 local_3d0;
  undefined1 local_3c8 [248];
  undefined4 local_2d0;
  undefined1 local_2c8 [240];
  undefined1 *local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  int local_1cc;
  int *local_1c8;
  uint *local_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  int *local_1a8;
  uint *local_19c;
  undefined1 *local_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  int *local_188;
  uint *local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  int *local_168;
  uint *local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  int *local_148;
  uint *local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  int *local_128;
  uint *local_11c;
  undefined4 local_118;
  undefined2 local_108;
  int local_fc;
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_e4 [8];
  int local_dc;
  undefined1 local_d4 [8];
  int local_cc;
  undefined4 local_c4 [6];
  undefined4 local_ac [6];
  undefined4 local_94 [6];
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined4 local_4c [6];
  undefined4 local_34 [6];
  undefined4 local_1c [6];
  
  FUN_00455f04(0x462eb4);
  if (param_1 == (undefined4 *)0x0) goto LAB_0040b686;
  if ((*(byte *)(*(int *)*param_1 + 5) & 0x20) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)*param_1 + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*param_1;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((uVar4 & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_004086e0;
          uVar5 = 0;
          local_108 = 0x14;
          local_11c = (uint *)FUN_00455640(local_2c8,PTR_s_iostream_object_has_failbit_set_00473194)
          ;
          iVar3 = FUN_0044d11c((int)local_5c,local_11c);
          local_fc = local_fc + 1;
          FUN_0045336c(local_1c,iVar3);
          local_fc = local_fc + 2;
          if (local_54 != 0) {
            if (*(int *)(local_54 + -0xc) != -1) {
              local_128 = (int *)(local_54 + -0xc);
              if (local_128 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else if (local_128 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else {
                *local_128 = *local_128 + -1;
                iVar3 = *local_128 + 1;
              }
              if (iVar3 != 0) goto LAB_0040af14;
            }
            local_12c = local_54 + -0xc;
            local_130 = local_54 + -0xc;
            FUN_0044b2cc();
            local_134 = 0;
            local_138 = local_5c;
            local_54 = 0;
            local_2d0 = 0;
          }
LAB_0040af14:
          local_108 = 8;
          FUN_0045ed74((uint *)&DAT_00408678,local_1c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_004086e0;
          uVar5 = 0;
          local_108 = 0x2c;
          local_13c = (uint *)FUN_00455640(local_3c8,PTR_s_iostream_object_has_badbit_set_00473198);
          iVar3 = FUN_0044d11c((int)local_6c,local_13c);
          local_fc = local_fc + 1;
          FUN_0045336c(local_34,iVar3);
          local_fc = local_fc + 2;
          if (local_64 != 0) {
            if (*(int *)(local_64 + -0xc) != -1) {
              local_148 = (int *)(local_64 + -0xc);
              if (local_148 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else if (local_148 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else {
                *local_148 = *local_148 + -1;
                iVar3 = *local_148 + 1;
              }
              if (iVar3 != 0) goto LAB_0040b061;
            }
            local_14c = local_64 + -0xc;
            local_150 = local_64 + -0xc;
            FUN_0044b2cc();
            local_154 = 0;
            local_158 = local_6c;
            local_64 = 0;
            local_3d0 = 0;
          }
LAB_0040b061:
          local_108 = 8;
          FUN_0045ed74((uint *)&DAT_00408678,local_34,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar4 = 1;
          puVar6 = &LAB_004086e0;
          uVar5 = 0;
          local_108 = 0x44;
          local_15c = (uint *)FUN_00455640(local_4c8,PTR_s_iostream_object_has_eofbit_set_0047319c);
          iVar2 = FUN_0044d11c((int)local_7c,local_15c);
          local_fc = local_fc + 1;
          FUN_0045336c(local_4c,iVar2);
          local_fc = local_fc + 2;
          if (local_74 != 0) {
            if (*(int *)(local_74 + -0xc) != -1) {
              local_168 = (int *)(local_74 + -0xc);
              if (local_168 == &DAT_00471d5c) {
                iVar2 = 1;
              }
              else if (local_168 == &DAT_00471d5c) {
                iVar2 = 1;
              }
              else {
                *local_168 = *local_168 + -1;
                iVar2 = *local_168 + 1;
              }
              if (iVar2 != 0) goto LAB_0040b1ae;
            }
            local_16c = local_74 + -0xc;
            local_170 = local_74 + -0xc;
            FUN_0044b2cc();
            local_174 = 0;
            local_178 = local_7c;
            local_74 = 0;
            local_4d0 = 0;
          }
LAB_0040b1ae:
          local_108 = 8;
          FUN_0045ed74((uint *)&DAT_00408678,local_4c,uVar5,puVar6,uVar4,uVar8,uVar9,uVar10);
        }
      }
    }
  }
  if ((DAT_00473200 != '\0') &&
     ((piVar1 = (int *)*param_1, piVar1 == (int *)&DAT_004774f8 || (piVar1 == &DAT_00477538)))) {
    iVar2 = (**(code **)(**(int **)(*piVar1 + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*param_1;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_004086e0;
          uVar5 = 0;
          local_108 = 0x68;
          local_17c = (uint *)FUN_00455640(local_5c8,PTR_s_iostream_object_has_failbit_set_00473194)
          ;
          iVar3 = FUN_0044d11c((int)local_d4,local_17c);
          local_fc = local_fc + 1;
          FUN_0045336c(local_94,iVar3);
          local_fc = local_fc + 2;
          if (local_cc != 0) {
            if (*(int *)(local_cc + -0xc) != -1) {
              local_188 = (int *)(local_cc + -0xc);
              if (local_188 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else if (local_188 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else {
                *local_188 = *local_188 + -1;
                iVar3 = *local_188 + 1;
              }
              if (iVar3 != 0) goto LAB_0040b386;
            }
            local_18c = local_cc + -0xc;
            local_190 = local_cc + -0xc;
            FUN_0044b2cc();
            local_194 = 0;
            local_198 = local_d4;
            local_cc = 0;
            local_5d0 = 0;
          }
LAB_0040b386:
          local_108 = 0x5c;
          FUN_0045ed74((uint *)&DAT_00408678,local_94,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_004086e0;
          uVar5 = 0;
          local_108 = 0x80;
          local_19c = (uint *)FUN_00455640(local_6c8,PTR_s_iostream_object_has_badbit_set_00473198);
          iVar3 = FUN_0044d11c((int)local_e4,local_19c);
          local_fc = local_fc + 1;
          FUN_0045336c(local_ac,iVar3);
          local_fc = local_fc + 2;
          if (local_dc != 0) {
            if (*(int *)(local_dc + -0xc) != -1) {
              local_1a8 = (int *)(local_dc + -0xc);
              if (local_1a8 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else if (local_1a8 == &DAT_00471d5c) {
                iVar3 = 1;
              }
              else {
                *local_1a8 = *local_1a8 + -1;
                iVar3 = *local_1a8 + 1;
              }
              if (iVar3 != 0) goto LAB_0040b4f1;
            }
            local_1ac = local_dc + -0xc;
            local_1b0 = local_dc + -0xc;
            FUN_0044b2cc();
            local_1b4 = 0;
            local_1b8 = local_e4;
            local_dc = 0;
            local_6d0 = 0;
          }
LAB_0040b4f1:
          local_108 = 0x5c;
          FUN_0045ed74((uint *)&DAT_00408678,local_ac,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar4 = 1;
          puVar6 = &LAB_004086e0;
          uVar5 = 0;
          local_108 = 0x98;
          local_1bc = (uint *)FUN_00455640(local_7c8,PTR_s_iostream_object_has_eofbit_set_0047319c);
          iVar2 = FUN_0044d11c((int)local_f4,local_1bc);
          local_fc = local_fc + 1;
          FUN_0045336c(local_c4,iVar2);
          local_fc = local_fc + 2;
          if (local_ec != 0) {
            if (*(int *)(local_ec + -0xc) != -1) {
              local_1c8 = (int *)(local_ec + -0xc);
              if (local_1c8 == &DAT_00471d5c) {
                iVar2 = 1;
              }
              else if (local_1c8 == &DAT_00471d5c) {
                iVar2 = 1;
              }
              else {
                *local_1c8 = *local_1c8 + -1;
                iVar2 = *local_1c8 + 1;
              }
              if (iVar2 != 0) goto LAB_0040b65c;
            }
            local_1cc = local_ec + -0xc;
            local_1d0 = local_ec + -0xc;
            FUN_0044b2cc();
            local_1d4 = 0;
            local_1d8 = local_f4;
            local_ec = 0;
          }
LAB_0040b65c:
          local_108 = 0x5c;
          FUN_0045ed74((uint *)&DAT_00408678,local_c4,uVar5,puVar6,uVar4,uVar8,uVar9,uVar10);
        }
      }
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_0044b2cc();
  }
LAB_0040b686:
  *in_FS_OFFSET = local_118;
  return;
}

