// name: FUN_004663a0
// address: 0x4663a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0046641b) */
/* WARNING: Removing unreachable block (ram,0x00466570) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004663a0(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  UINT *pUVar6;
  int *piVar7;
  UINT *pUVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_2a0 [248];
  undefined4 local_1a8;
  undefined *local_198;
  undefined *local_188;
  undefined *local_184;
  int *local_180;
  undefined1 *local_17c;
  undefined4 local_178;
  char *local_174;
  char *local_170;
  UINT local_16c;
  UINT local_168;
  UINT_PTR local_164;
  LPCSTR local_160;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 *local_158;
  undefined4 local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  undefined1 *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  int *local_128;
  undefined1 *local_124;
  int *local_120;
  undefined4 local_11c;
  uint *local_110;
  uint local_10c;
  char *local_108;
  int local_104;
  undefined1 local_fd;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int *local_e4;
  undefined1 *local_e0;
  undefined *local_dc;
  undefined4 local_d8;
  UINT local_d4;
  uint auStack_d0 [20];
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int *local_54;
  undefined **local_4c [2];
  undefined1 local_44 [8];
  int *local_3c;
  undefined1 local_34 [8];
  char *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  bVar9 = 0;
  FUN_004dce64(0x4fc268);
  pUVar6 = &DAT_004fb350;
  pUVar8 = &local_d4;
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pUVar8 = *pUVar6;
    pUVar6 = pUVar6 + (uint)bVar9 * -2 + 1;
    pUVar8 = pUVar8 + (uint)bVar9 * -2 + 1;
  }
  local_d8 = 0;
  local_e0 = local_14;
  local_dc = &DAT_00513d64;
  local_c = &DAT_00513d64;
  local_198 = &DAT_00513d64;
  local_64 = local_64 + 1;
  local_70 = 0x20;
  iVar4 = FUN_00408b14(*(int *)(param_1 + 0x140));
  if (0 < iVar4) {
    local_70 = 0x2c;
    iVar4 = FUN_00452bcc(*(int *)(param_1 + 0x10));
    FUN_00408cbc(local_24,*(int *)(param_1 + 0x140),iVar4);
    local_64 = local_64 + 1;
    FUN_004cf384((int)local_14,(int)local_24);
    local_64 = local_64 + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        local_e4 = (int *)(local_1c + -0xc);
        if (local_e4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_e4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_e4 = *local_e4 + -1;
          iVar4 = *local_e4 + 1;
        }
        if (iVar4 != 0) goto LAB_00466534;
      }
      local_e8 = local_1c + -0xc;
      local_ec = local_1c + -0xc;
      FUN_004cc0bc();
      local_f0 = 0;
      local_f4 = local_24;
      local_1c = 0;
      local_1a8 = 0;
    }
  }
LAB_00466534:
  iVar4 = 0;
  do {
    local_70 = 0x50;
    FUN_004cf628((int)local_34,(uint *)auStack_d0[iVar4 * 3 + 1]);
    local_64 = local_64 + 1;
    local_70 = 0x44;
    local_fd = 0x2a;
    local_104 = *(int *)(local_2c + -4);
    local_108 = local_2c;
    pcVar2 = thunk_FUN_004dc794(local_2c,'*',local_104);
    uVar12 = DAT_005140ac;
    if (pcVar2 != (char *)0x0) {
      uVar12 = (int)pcVar2 - (int)local_2c;
    }
    if (*(int *)(local_c + -4) == 0) {
      uVar1 = auStack_d0[iVar4 * 3];
      local_10c = (uVar12 + 2) - uVar1;
      if (*(uint *)(local_2c + -4) < uVar1) {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 1;
        puVar11 = &LAB_004084c8;
        uVar10 = 0;
        local_70 = 0x68;
        local_110 = (uint *)FUN_004dc320(local_2a0,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        FUN_004cf628((int)local_5c,local_110);
        local_64 = local_64 + 2;
        local_4c[0] = &PTR_FUN_004ecaac;
        local_11c = 0;
        local_3c = (int *)0x0;
        local_70 = 0x74;
        if (local_54[-3] == -1 || local_54[-3] + 1 < 0) {
          local_12c = local_54[-1];
          local_134 = FUN_004cf7b0(local_44,local_12c,local_12c);
          local_138 = local_44;
          local_144 = local_134 + 3;
          local_13c = local_12c;
          local_140 = local_54;
          local_130 = local_144;
          local_3c = local_144;
          FUN_004dc7d4(local_144,local_54,local_12c);
        }
        else {
          local_124 = local_44;
          local_120 = local_54;
          local_3c = local_54;
          local_128 = local_54 + -3;
          if (local_128 != &DAT_00513d58) {
            *local_128 = *local_128 + 1;
          }
        }
        local_70 = 0x68;
        local_4c[0] = &PTR_FUN_004eca98;
        local_64 = local_64 + 2;
        if (local_54 != (int *)0x0) {
          if (local_54[-3] != -1) {
            local_148 = local_54 + -3;
            if (local_148 == &DAT_00513d58) {
              iVar5 = 1;
            }
            else if (local_148 == &DAT_00513d58) {
              iVar5 = 1;
            }
            else {
              *local_148 = *local_148 + -1;
              iVar5 = *local_148 + 1;
            }
            if (iVar5 != 0) goto LAB_00466834;
          }
          local_14c = local_54 + -3;
          local_150 = local_54 + -3;
          FUN_004cc0bc();
          local_154 = 0;
          local_158 = local_5c;
          local_54 = (int *)0x0;
        }
LAB_00466834:
        local_70 = 0x5c;
        FUN_004e7cc4((uint *)&DAT_0040846c,local_4c,uVar10,puVar11,uVar12,uVar13,uVar14,uVar15);
      }
      uVar12 = *(int *)(local_2c + -4) - uVar1;
      local_159 = 0;
      if (local_10c < uVar12) {
        uVar12 = local_10c;
      }
      FUN_004cfad4((int)local_34,uVar1,uVar12,(uint)&local_159,0,0,0);
    }
    else {
      FUN_004cfad4((int)local_34,uVar12,1,(uint)local_c,*(uint *)(local_c + -4),0,
                   *(uint *)(local_c + -4));
    }
    local_168 = GetMenuState(*(HMENU *)(param_2 + 4),(&local_d4)[iVar4 * 3],0);
    local_70 = 0x44;
    local_160 = local_2c;
    local_164 = (&local_d4)[iVar4 * 3];
    local_16c = (&local_d4)[iVar4 * 3];
    BVar3 = ModifyMenuA(*(HMENU *)(param_2 + 4),local_16c,local_168,local_164,local_2c);
    local_15a = BVar3 != 0;
    local_64 = local_64 + -1;
    if (local_2c != (char *)0x0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar7 = (int *)(local_2c + -0xc);
        if (piVar7 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (piVar7 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
          iVar5 = *piVar7 + 1;
        }
        if (iVar5 != 0) goto LAB_004669bb;
      }
      local_170 = local_2c + -0xc;
      local_174 = local_2c + -0xc;
      FUN_004cc0bc();
      local_178 = 0;
      local_2c = (char *)0x0;
      local_17c = local_34;
    }
LAB_004669bb:
    local_70 = 0x20;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  local_64 = local_64 + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_180 = (int *)(local_c + -0xc);
      if (local_180 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_180 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_180 = *local_180 + -1;
        iVar4 = *local_180 + 1;
      }
      if (iVar4 != 0) goto LAB_00466a7a;
    }
    local_184 = local_c + -0xc;
    local_188 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00466a7a:
  *in_FS_OFFSET = local_80;
  return;
}

