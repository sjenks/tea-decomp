// name: FUN_0042dc18
// address: 0x42dc18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl
FUN_0042dc18(int *param_1,uint *param_2,uint *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_EDI;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  int local_174 [5];
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_13c;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_10c;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_ec;
  int *local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  int *local_c4;
  int local_c0;
  uint local_bc;
  undefined4 *local_b8;
  int local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  char *local_74;
  uint local_70;
  uint *local_6c;
  int *local_60;
  int local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  undefined4 *local_34;
  int local_30 [3];
  undefined4 *local_24;
  int local_20 [3];
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4f296c);
  local_5c = FUN_0042ba08((int)param_1);
  if (local_5c == 0x7ffffff8) {
    *in_FS_OFFSET = local_58;
    return local_58;
  }
  pcVar2 = FUN_004dc9f4(param_2);
  if ((param_3 == (uint *)0x0) && (*(int *)(*(int *)(param_4 + 8) + -4) == 0)) {
    local_60 = (int *)FUN_004cc0f0();
    if (local_60 == (int *)0x0) {
      *in_FS_OFFSET = local_58;
      return 0;
    }
    FUN_004304f0(local_60,param_2,pcVar2,param_5);
    goto LAB_0042deb5;
  }
  local_48 = 8;
  FUN_004cf628((int)local_14,param_2);
  local_3c = local_3c + 1;
  local_48 = 0x14;
  if (param_3 != (uint *)0x0) {
    local_6c = param_3;
    local_70 = local_c[-1];
    local_74 = FUN_004dc9f4(param_3);
    FUN_004cfad4((int)local_14,local_70,0,(uint)local_6c,(uint)local_74,0,(uint)local_74);
  }
  local_78 = param_4;
  FUN_004d573c((int)local_14,param_4);
  local_60 = (int *)FUN_004cc0f0();
  if (local_60 == (int *)0x0) {
    local_3c = local_3c + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        local_7c = local_c + -3;
        if (local_7c == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (local_7c == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *local_7c = *local_7c - 1;
          iVar5 = *local_7c + 1;
        }
        if (iVar5 != 0) goto LAB_0042dda4;
      }
      local_80 = local_c + -3;
      local_84 = local_c + -3;
      FUN_004cc0bc();
    }
LAB_0042dda4:
    *in_FS_OFFSET = local_58;
    return local_58;
  }
  FUN_004304f0(local_60,local_c,pcVar2,param_5);
  local_3c = local_3c + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_90 = local_c + -3;
      if (local_90 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (local_90 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *local_90 = *local_90 - 1;
        iVar5 = *local_90 + 1;
      }
      if (iVar5 != 0) goto LAB_0042de76;
    }
    local_94 = local_c + -3;
    local_98 = local_c + -3;
    FUN_004cc0bc();
    local_9c = 0;
    local_a0 = local_14;
    local_c = (uint *)0x0;
    local_ec = 0;
  }
LAB_0042de76:
  local_48 = 0;
LAB_0042deb5:
  local_a4 = 0;
  if (param_1[0x39] == 0) {
    puVar3 = (undefined4 *)(((param_1[0x16] - param_1[0x15]) / 0xc + -1) * 0xc + param_1[0x15]);
    if (0x1ff < (int)puVar3[2]) {
      local_48 = 0x5c;
      local_30[0] = 0;
      local_30[1] = 0;
      local_30[2] = 0;
      local_c4 = local_30;
      local_3c = local_3c + 1;
      if (param_1[0x16] == param_1[0x1a]) {
        FUN_00429ffc((int)(param_1 + 0x14),(int *)param_1[0x16],local_c4);
      }
      else {
        local_c8 = (undefined4 *)param_1[0x16];
        local_34 = local_c8;
        if (local_c8 != (undefined4 *)0x0) {
          local_48 = 0x68;
          FUN_00430560(local_c8,local_c4);
        }
        local_48 = 0x5c;
        param_1[0x16] = param_1[0x16] + 0xc;
      }
      local_3c = local_3c + -1;
      FUN_004305f4(local_30);
      local_d4 = param_1 + 0x14;
      local_d0 = (param_1[0x16] - param_1[0x15]) / 0xc + -1;
      puVar3 = (undefined4 *)(local_d0 * 0xc + param_1[0x15]);
      local_cc = puVar3;
    }
    if (puVar3[1] == 0) {
      puVar3[1] = local_60;
      *puVar3 = local_60;
    }
    else {
      *(int **)puVar3[1] = local_60;
      puVar3[1] = local_60;
    }
    puVar3[2] = puVar3[2] + 1;
    local_a4 = param_1[0x1c];
    if (param_1[0x3a] != 0) {
      FUN_0042e408(&local_14c,param_1 + 6,(int *)&local_60);
      local_174[4] = local_14c;
      local_160 = local_148;
      local_15c = local_144;
      local_154 = local_13c;
    }
  }
  else {
    if (local_5c != 0) {
      local_a8 = 0;
      while( true ) {
        if ((uint)((param_1[0x16] - param_1[0x15]) / 0xc) <= local_a8) goto LAB_0042dfbb;
        unaff_EDI = (int *)(local_a8 * 0xc + param_1[0x15]);
        bVar1 = FUN_004309cc((int)local_60,unaff_EDI[1],param_1[0x39]);
        if (bVar1) break;
        local_a4 = local_a4 + unaff_EDI[2];
        local_a8 = local_a8 + 1;
      }
      local_ac = (int *)0x0;
      piVar6 = (int *)*unaff_EDI;
      while (piVar8 = piVar6, bVar1 = FUN_004309cc((int)local_60,(int)piVar8,param_1[0x39]), !bVar1)
      {
        local_a4 = local_a4 + 1;
        piVar6 = (int *)*piVar8;
        local_ac = piVar8;
      }
      if (local_ac == (int *)0x0) {
        *local_60 = *unaff_EDI;
        *unaff_EDI = (int)local_60;
      }
      else {
        *local_60 = *local_ac;
        *local_ac = (int)local_60;
      }
      unaff_EDI[2] = unaff_EDI[2] + 1;
LAB_0042dfbb:
      if ((uint)((param_1[0x16] - param_1[0x15]) / 0xc) <= local_a8) {
        local_a8 = local_a8 - 1;
        *(int **)unaff_EDI[1] = local_60;
        unaff_EDI[1] = (int)local_60;
        unaff_EDI[2] = unaff_EDI[2] + 1;
      }
      if (0x1ff < unaff_EDI[2]) {
        local_a8 = local_a8 + 1;
        local_48 = 0x38;
        local_20[0] = 0;
        local_20[1] = 0;
        local_20[2] = 0;
        local_b0 = local_20;
        local_3c = local_3c + 1;
        piVar6 = (int *)(local_a8 * 0xc + param_1[0x15]);
        local_b4 = ((int)piVar6 - param_1[0x15]) / 0xc;
        if ((param_1[0x16] == param_1[0x1a]) || (piVar6 != (int *)param_1[0x16])) {
          FUN_00429ffc((int)(param_1 + 0x14),piVar6,local_b0);
        }
        else {
          local_b8 = (undefined4 *)param_1[0x16];
          local_24 = local_b8;
          if (local_b8 != (undefined4 *)0x0) {
            local_48 = 0x44;
            FUN_00430560(local_b8,local_b0);
          }
          local_48 = 0x38;
          param_1[0x16] = param_1[0x16] + 0xc;
        }
        local_3c = local_3c + -1;
        FUN_004305f4(local_20);
        local_bc = local_a8;
        local_c0 = local_a8 - 1;
        puVar7 = (undefined4 *)(local_a8 * 0xc + param_1[0x15]);
        puVar9 = (undefined4 *)(local_c0 * 0xc + param_1[0x15]);
        puVar3 = (undefined4 *)*puVar9;
        iVar5 = 0;
        do {
          puVar3 = (undefined4 *)*puVar3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0xff);
        *puVar7 = *puVar3;
        puVar7[2] = 0x100;
        puVar7[1] = puVar9[1];
        puVar9[1] = puVar3;
        *puVar3 = 0;
        puVar9[2] = 0x100;
      }
      local_fc = *(int *)(param_1[0x27] + 8);
      while (local_10c = param_1[0x27], local_10c != local_fc) {
        piVar6 = (int *)(local_fc + 0x10);
        if (*piVar6 < local_a4) {
          if ((local_a4 < *piVar6) || (*piVar6 + *(int *)(local_fc + 0x14) <= local_a4)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(int *)(local_fc + 0x14) = *(int *)(local_fc + 0x14) + 1;
          }
        }
        else {
          *piVar6 = *piVar6 + 1;
        }
        local_124 = local_104;
        local_120 = local_100;
        local_11c = local_fc;
        FUN_0042aec0((int)&local_104);
        local_134 = local_124;
        local_130 = local_120;
        local_12c = local_11c;
      }
      if ((local_a4 <= param_1[0x44]) && ((param_1[0x41] != -1 || (param_1[0x43] != -1)))) {
        param_1[0x44] = param_1[0x44] + 1;
      }
      if (local_a4 <= param_1[0x41]) {
        param_1[0x41] = param_1[0x41] + 1;
      }
      if (local_a4 <= param_1[0x43]) {
        param_1[0x43] = param_1[0x43] + 1;
      }
      goto LAB_0042e396;
    }
    puVar3 = (undefined4 *)param_1[0x15];
    puVar3[1] = local_60;
    *puVar3 = local_60;
    puVar3[2] = 1;
  }
LAB_0042e396:
  param_1[0x1c] = param_1[0x1c] + 1;
  param_1[0x2c] = -2;
  local_174[0] = 0;
  local_174[1] = 0;
  local_174[2] = 0;
  local_174[3] = 0;
  uVar4 = FUN_00430290(param_1,local_a4,param_1[0x1c],local_174);
  if ((char)uVar4 != '\0') {
    FUN_00494540(param_1 + 0x45,local_174);
  }
  *in_FS_OFFSET = local_58;
  return local_58;
}

