// name: FUN_00482bdc
// address: 0x482bdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00482dfd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00482bdc(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_43c [248];
  undefined4 local_344;
  int *local_334;
  undefined1 local_31c [248];
  undefined *local_224;
  undefined4 local_214;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  int *local_1ec;
  undefined4 *local_1e8;
  undefined4 *local_1e4;
  uint local_1e0;
  int local_1dc;
  int *local_1d8;
  int *local_1d4;
  uint local_1d0;
  int *local_1cc;
  int local_1c8;
  undefined4 *local_1c4;
  undefined4 local_1c0;
  undefined1 *local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  int *local_1ac;
  uint local_1a8;
  char *local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  char *local_194;
  char *local_190;
  uint local_18c;
  undefined1 *local_188;
  undefined4 local_184;
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
  char *local_140;
  uint local_13c;
  uint local_138;
  undefined1 *local_134;
  undefined4 local_130;
  int *local_12c;
  int *local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  uint local_118;
  undefined1 *local_114;
  int *local_110;
  int *local_10c;
  uint local_108;
  int *local_104;
  undefined1 *local_100;
  int *local_fc;
  undefined4 local_f8;
  uint *local_ec;
  uint local_e8;
  undefined1 *local_e4;
  undefined *local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  uint local_cc;
  int local_c8;
  int *local_c4;
  int *local_c0;
  uint local_bc;
  undefined4 local_ac;
  int local_a8;
  uint *local_a4;
  undefined **local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined2 local_88;
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined1 local_3c [8];
  int *local_34;
  undefined **local_2c [2];
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x5032ec);
  if (param_3 == 2) {
    local_9c = &DAT_00501e72;
    local_a0 = &PTR_s__amp__00501810;
    local_a4 = (uint *)&DAT_00501c9b;
  }
  else {
    if (param_3 != 3) {
      local_88 = 8;
      local_a8 = param_2;
      local_ac = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        local_bc = *(uint *)(*(int *)(param_2 + 8) + -4);
        local_c4 = FUN_004cf7b0(param_1,local_bc,local_bc);
        local_c0 = local_c4 + 3;
        *(int **)(param_1 + 8) = local_c0;
        local_c8 = param_1;
        local_214 = *(undefined4 *)(param_1 + 8);
        local_cc = local_bc;
        local_d0 = *(undefined4 **)(local_a8 + 8);
        local_d4 = *(undefined4 **)(param_1 + 8);
        FUN_004dc7d4(local_d4,local_d0,local_bc);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar2 != &DAT_00513d58) {
          *piVar2 = *piVar2 + 1;
        }
      }
      *in_FS_OFFSET = local_98;
      return param_1;
    }
    local_9c = &DAT_00501e8e;
    local_a0 = &PTR_DAT_00501820;
    local_a4 = (uint *)&DAT_00501c94;
  }
  local_d8 = *(uint *)(*(int *)(param_2 + 8) + -4);
  local_dc = 0;
  local_e4 = local_14;
  local_e0 = &DAT_00513d64;
  local_c = (undefined4 *)&DAT_00513d64;
  local_224 = &DAT_00513d64;
  local_7c = local_7c + 1;
  local_88 = 0x38;
  local_e8 = local_d8 * 2;
  if (local_e8 <= DAT_005140ac - 0xe) goto LAB_004830aa;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar8 = 1;
  puVar6 = &LAB_00408370;
  uVar5 = 0;
  local_88 = 0x50;
  local_ec = (uint *)FUN_004dc320(local_31c,PTR_s_invalid_string_size_parameter_in_00516d20);
  FUN_004cf628((int)local_3c,local_ec);
  local_7c = local_7c + 2;
  local_2c[0] = &PTR_FUN_004ecaac;
  local_f8 = 0;
  local_1c = (int *)0x0;
  local_88 = 0x5c;
  if (local_34[-3] == -1 || local_34[-3] + 1 < 0) {
    local_108 = local_34[-1];
    local_110 = FUN_004cf7b0(local_24,local_108,local_108);
    local_114 = local_24;
    local_334 = local_110 + 3;
    local_118 = local_108;
    local_11c = local_34;
    local_120 = local_334;
    local_10c = local_334;
    local_1c = local_334;
    FUN_004dc7d4(local_334,local_34,local_108);
  }
  else {
    local_100 = local_24;
    local_fc = local_34;
    local_1c = local_34;
    local_104 = local_34 + -3;
    if (local_104 != &DAT_00513d58) {
      *local_104 = *local_104 + 1;
    }
  }
  local_88 = 0x50;
  local_2c[0] = &PTR_FUN_004ecac0;
  local_7c = local_7c + 2;
  if (local_34 != (int *)0x0) {
    if (local_34[-3] != -1) {
      local_124 = local_34 + -3;
      if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_124 = *local_124 + -1;
        iVar4 = *local_124 + 1;
      }
      if (iVar4 != 0) goto LAB_00483090;
    }
    local_128 = local_34 + -3;
    local_12c = local_34 + -3;
    FUN_004cc0bc();
    local_130 = 0;
    local_134 = local_3c;
    local_34 = (int *)0x0;
    local_344 = 0;
  }
LAB_00483090:
  local_88 = 0x44;
  FUN_004e7cc4((uint *)&DAT_00408314,local_2c,uVar5,puVar6,uVar8,uVar10,uVar11,uVar12);
LAB_004830aa:
  if ((uint)local_c[-2] < local_e8) {
    FUN_004d6d58((int)local_14,local_e8);
  }
  local_88 = 0x38;
  uVar8 = 0;
  do {
    local_140 = local_9c;
    local_13c = uVar8;
    if (local_9c == (char *)0x0) {
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 1;
      pcVar7 = FUN_0041e688;
      uVar5 = 0;
      local_88 = 0x8c;
      local_144 = (uint *)FUN_004dc320(local_43c,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
      FUN_004cf628((int)local_64,local_144);
      local_7c = local_7c + 2;
      local_54[0] = &PTR_FUN_004ecaac;
      local_150 = 0;
      local_44 = (int *)0x0;
      local_88 = 0x98;
      if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
        local_160 = local_5c[-1];
        local_168 = FUN_004cf7b0(local_4c,local_160,local_160);
        local_16c = local_4c;
        local_178 = local_168 + 3;
        local_170 = local_160;
        local_174 = local_5c;
        local_164 = local_178;
        local_44 = local_178;
        FUN_004dc7d4(local_178,local_5c,local_160);
      }
      else {
        local_158 = local_4c;
        local_154 = local_5c;
        local_44 = local_5c;
        local_15c = local_5c + -3;
        if (local_15c != &DAT_00513d58) {
          *local_15c = *local_15c + 1;
        }
      }
      local_88 = 0x8c;
      local_7c = local_7c + 1;
      if (local_5c != (int *)0x0) {
        if (local_5c[-3] != -1) {
          piVar2 = local_5c + -3;
          if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2 + 1;
          }
          if (iVar4 != 0) goto LAB_00483316;
        }
        local_17c = local_5c + -3;
        local_180 = local_5c + -3;
        FUN_004cc0bc();
        local_184 = 0;
        local_188 = local_64;
        local_5c = (int *)0x0;
      }
LAB_00483316:
      local_88 = 0x80;
      FUN_004e7cc4((uint *)&DAT_004113dc,local_54,uVar5,pcVar7,uVar9,uVar10,uVar11,uVar12);
    }
    uVar9 = DAT_005140ac;
    if (local_13c <= *(uint *)(*(int *)(param_2 + 8) + -4)) {
      local_190 = (char *)(*(int *)(param_2 + 8) + local_13c);
      iVar4 = FUN_004dcb98(local_190,local_140);
      local_18c = iVar4 + local_13c;
      uVar9 = local_18c;
      if (*(uint *)(*(int *)(param_2 + 8) + -4) <= local_18c) {
        uVar9 = DAT_005140ac;
      }
    }
    local_138 = uVar9;
    if (uVar9 == 0xffffffff) break;
    if (uVar8 < uVar9) {
      FUN_004d5850((int)local_14,param_2,uVar8,uVar9 - uVar8);
    }
    local_198 = local_138;
    local_194 = thunk_FUN_004dc924(local_9c,*(char *)(*(int *)(param_2 + 8) + local_138));
    local_88 = 0x38;
    puVar1 = (uint *)local_a0[(int)local_194 - (int)local_9c];
    local_19c = local_c[-1];
    pcVar3 = FUN_004dc9f4(puVar1);
    FUN_004cfad4((int)local_14,local_19c,0,(uint)puVar1,(uint)pcVar3,0,(uint)pcVar3);
    uVar8 = local_138 + 1;
  } while( true );
  if (uVar8 < local_d8) {
    FUN_004d5850((int)local_14,param_2,uVar8,local_d8 - uVar8);
  }
  uVar8 = local_c[-1];
  while (uVar8 != 0) {
    local_1a0 = uVar8 - 1;
    local_1a4 = FUN_004dc9f4((uint *)&DAT_00501c98);
    uVar8 = FUN_004d7cf0((int)local_14,&DAT_00501c98,local_1a0,(uint)local_1a4);
    puVar1 = local_a4;
    if (uVar8 == 0xffffffff) break;
    local_1a8 = uVar8;
    pcVar3 = FUN_004dc9f4(local_a4);
    FUN_004cfad4((int)local_14,local_1a8,2,(uint)puVar1,(uint)pcVar3,0,(uint)pcVar3);
  }
  if (param_3 == 2) {
    local_88 = 0xbc;
    FUN_004837d0((int)local_74,(int)local_14);
    local_7c = local_7c + 1;
    FUN_004cf384((int)local_14,(int)local_74);
    local_7c = local_7c + -1;
    if (local_6c != 0) {
      if (*(int *)(local_6c + -0xc) != -1) {
        local_1ac = (int *)(local_6c + -0xc);
        if (local_1ac == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_1ac == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_1ac = *local_1ac + -1;
          iVar4 = *local_1ac + 1;
        }
        if (iVar4 != 0) goto LAB_004835cf;
      }
      local_1b0 = local_6c + -0xc;
      local_1b4 = local_6c + -0xc;
      FUN_004cc0bc();
      local_1b8 = 0;
      local_1bc = local_74;
      local_6c = 0;
    }
  }
LAB_004835cf:
  local_88 = 0xd4;
  local_1c0 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    local_1d0 = local_c[-1];
    local_1d8 = FUN_004cf7b0(param_1,local_1d0,local_1d0);
    local_1d4 = local_1d8 + 3;
    *(int **)(param_1 + 8) = local_1d4;
    local_1dc = param_1;
    local_1e0 = local_1d0;
    local_1e4 = local_c;
    local_1e8 = *(undefined4 **)(param_1 + 8);
    FUN_004dc7d4(local_1e8,local_c,local_1d0);
  }
  else {
    local_1c4 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_1c8 = param_1;
    local_1cc = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_1cc != &DAT_00513d58) {
      *local_1cc = *local_1cc + 1;
    }
  }
  local_88 = 0xec;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      local_1ec = local_c + -3;
      if (local_1ec == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_1ec == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_1ec = *local_1ec + -1;
        iVar4 = *local_1ec + 1;
      }
      if (iVar4 != 0) goto LAB_004837ad;
    }
    local_1f0 = local_c + -3;
    local_1f4 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_004837ad:
  *in_FS_OFFSET = local_98;
  return param_1;
}

