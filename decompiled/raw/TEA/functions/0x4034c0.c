// name: FUN_004034c0
// address: 0x4034c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004034c0(int param_1)

{
  LONG LVar1;
  HCURSOR hCursor;
  int iVar2;
  undefined4 uVar3;
  HDC pHVar4;
  BOOL BVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  LPCSTR lpString;
  tagTEXTMETRICA *lptm;
  tagSIZE *psizl;
  tagTEXTMETRICA local_188;
  undefined1 *local_150;
  undefined4 local_14c;
  LPCSTR local_148;
  LPCSTR local_144;
  int *local_140;
  int local_13c;
  int local_138;
  undefined4 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 *local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  LPCSTR local_f8;
  int local_f4;
  tagSIZE local_f0;
  int local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  HCURSOR local_74;
  undefined4 local_70;
  undefined2 local_60;
  int local_54;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined1 local_44 [8];
  LPCSTR local_3c;
  uint local_34 [2];
  int local_2c;
  int local_27;
  
  bVar11 = 0;
  FUN_004dce64(0x4eaaa4);
  if (*(char *)(param_1 + 0xb0) == '\0') {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    local_74 = SetCursor(hCursor);
    local_60 = 8;
    FUN_004a8760(&local_2c);
    local_54 = local_54 + 3;
    local_60 = 0x14;
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0xc))();
    local_7c = (double)iVar2;
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0xc))();
    local_84 = (double)iVar2;
    iVar2 = (**(code **)(local_27 + 0xc))();
    local_8c = (double)iVar2;
    iVar2 = (**(code **)(local_27 + 0xc))();
    local_94 = (double)iVar2;
    local_9c = local_7c / local_8c;
    local_a4 = local_84 / local_94;
    puVar9 = (undefined4 *)(param_1 + 0x1c);
    puVar10 = (undefined4 *)(param_1 + 0x5c);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    if (*(int *)(param_1 + 100) < 1) {
      uVar3 = FUN_004e3c04();
      *(undefined4 *)(param_1 + 100) = uVar3;
    }
    else {
      uVar3 = FUN_004e3c04();
      *(undefined4 *)(param_1 + 100) = uVar3;
    }
    if (*(int *)(param_1 + 0x60) < 1) {
      uVar3 = FUN_004e3c04();
      *(undefined4 *)(param_1 + 0x60) = uVar3;
    }
    else {
      uVar3 = FUN_004e3c04();
      *(undefined4 *)(param_1 + 0x60) = uVar3;
    }
    local_60 = 0x20;
    FUN_0048f7fc(local_34,(LOGFONTA *)(param_1 + 0x60));
    local_54 = local_54 + 2;
    (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x14))();
    local_54 = local_54 + -2;
    FUN_00494064(local_34,0);
    local_b0 = *(undefined4 *)(param_1 + 0x5c);
    local_ac = local_b0;
    (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x24))();
    if (*(int *)(param_1 + 0x9c) == 4) {
      local_b8 = 0;
      uStack_b4 = 0x408f4000;
    }
    else if (*(int *)(param_1 + 0x9c) == 8) {
      local_b8 = 0;
      uStack_b4 = 0x40a3d800;
    }
    uVar3 = FUN_004e3c04();
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
    local_bc = FUN_004e3c04();
    local_60 = 0x14;
    uVar3 = FUN_004e3c04();
    *(undefined4 *)(param_1 + 0xe4) = uVar3;
    local_c0 = FUN_004e3c04();
    local_c8 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0xc))();
    local_c4 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0xc))();
    local_d0 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0xc))();
    local_cc = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0xc))();
    *(int *)(param_1 + 0xf0) = (local_d0 - *(int *)(param_1 + 0xe8)) - local_bc;
    local_d4 = (local_cc - *(int *)(param_1 + 0xe4)) - local_c0;
    piVar7 = (int *)(param_1 + 0xe8);
    *piVar7 = *piVar7 - local_c8;
    if (*piVar7 < 0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    piVar7 = (int *)(param_1 + 0xe4);
    *piVar7 = *piVar7 - local_c4;
    if (*piVar7 < 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    if (*(int *)(param_1 + 0xf0) < 0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    if (local_d4 < 0) {
      local_d4 = 0;
    }
    lptm = &local_188;
    pHVar4 = (HDC)(**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x5c))();
    BVar5 = GetTextMetricsA(pHVar4,lptm);
    if (BVar5 == 0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xec) = 1;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    else {
      *(LONG *)(param_1 + 0xe0) = local_188.tmHeight + local_188.tmExternalLeading;
      *(int *)(param_1 + 0xec) = local_d4 / *(int *)(param_1 + 0xe0);
      *(LONG *)(param_1 + 0xf4) = local_188.tmAveCharWidth << 2;
    }
    local_54 = local_54 + -3;
    FUN_004a86dc(&local_2c,0);
    local_60 = 0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0xb8) + 8))();
    *(int *)(param_1 + 0xb4) = iVar2;
    if ((iVar2 < 1) || ((**(byte **)(param_1 + 0x18) & 1) == 0)) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0xc))();
      uVar3 = (**(code **)(**(int **)(param_1 + 0xb8) + 4))();
      *(undefined4 *)(param_1 + 0xb4) = uVar3;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0xc))();
    }
    iVar2 = -1;
    local_d8 = 0;
    local_dc = *(undefined4 **)(param_1 + 200);
    local_e0 = *(undefined4 **)(param_1 + 0xc4);
    local_e4 = FUN_00403e94(local_dc,*(undefined4 **)(param_1 + 200),local_e0);
    local_e8 = *(int *)(param_1 + 200);
    iVar6 = (int)local_dc - (int)local_e0;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + (iVar6 >> 3) * -8;
    FUN_0040317c(param_1 + 0xc0,(int)local_e4,local_e8);
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0xb4); iVar6 = iVar6 + 1) {
      local_f0.cx = 0;
      local_f0.cy = 0;
      local_60 = 0x38;
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))();
      local_54 = local_54 + 1;
      local_60 = 0x2c;
      iVar8 = *(int *)(local_3c + -4);
      local_f8 = local_3c;
      psizl = &local_f0;
      lpString = local_3c;
      local_f4 = iVar8;
      pHVar4 = (HDC)(**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x5c))();
      GetTextExtentPoint32A(pHVar4,lpString,iVar8,psizl);
      LVar1 = local_f0.cx;
      if (iVar2 < local_f0.cx) {
        iVar2 = *(int *)(param_1 + 0xf4) + local_f0.cx;
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        local_fc = 1;
        if ((0 < iVar2) && (iVar2 < *(int *)(param_1 + 0xf0))) {
          local_fc = *(int *)(param_1 + 0xf0) / iVar2;
        }
        if (local_d8 == 0) {
          local_104 = 0;
          local_100 = 0;
          if (*(int *)(param_1 + 200) == *(int *)(param_1 + 0xd8)) {
            FUN_00403ec0(param_1 + 0xc0,*(undefined4 **)(param_1 + 200),&local_104);
          }
          else {
            local_108 = *(undefined4 **)(param_1 + 200);
            if (local_108 != (undefined4 *)0x0) {
              *local_108 = 0;
              local_108[1] = 0;
            }
            *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
            local_48 = local_108;
          }
        }
        local_10c = local_fc * *(int *)(param_1 + 0xec);
        local_60 = 0x2c;
        iVar2 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        if (1 < (uint)(iVar2 >> 3)) {
          local_114 = param_1 + 0xc0;
          iVar2 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
          }
          local_110 = (iVar2 >> 3) + -2;
          local_10c = local_10c + *(int *)(local_110 * 8 + *(int *)(param_1 + 0xc4));
        }
        if (local_10c < iVar6) {
          local_d8 = local_d8 + -1;
          local_118 = param_1 + 0xc0;
          local_10c = local_d8 * *(int *)(param_1 + 0xec);
          iVar2 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
          }
          if (1 < (uint)(iVar2 >> 3)) {
            local_120 = param_1 + 0xc0;
            iVar2 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
            if (iVar2 < 0) {
              iVar2 = iVar2 + 7;
            }
            local_11c = (iVar2 >> 3) + -2;
            local_10c = local_10c + *(int *)(local_11c * 8 + *(int *)(param_1 + 0xc4));
          }
          local_128 = param_1 + 0xc0;
          iVar2 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
          }
          local_124 = (iVar2 >> 3) + -1;
          *(int *)(local_124 * 8 + *(int *)(param_1 + 0xc4)) = local_10c;
          local_10c = local_10c + local_fc * *(int *)(param_1 + 0xec);
          local_130 = 0;
          local_12c = 0;
          if (*(int *)(param_1 + 200) == *(int *)(param_1 + 0xd8)) {
            FUN_00403ec0(param_1 + 0xc0,*(undefined4 **)(param_1 + 200),&local_130);
          }
          else {
            local_134 = *(undefined4 **)(param_1 + 200);
            if (local_134 != (undefined4 *)0x0) {
              *local_134 = 0;
              local_134[1] = 0;
            }
            *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 8;
            local_4c = local_134;
          }
        }
        local_d8 = local_fc;
        iVar2 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        local_138 = (iVar2 >> 3) + -1;
        piVar7 = (int *)(local_138 * 8 + *(int *)(param_1 + 0xc4));
        local_60 = 0x2c;
        *piVar7 = local_10c;
        piVar7[1] = LVar1;
        iVar2 = LVar1;
      }
      iVar8 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
      if (iVar8 < 0) {
        iVar8 = iVar8 + 7;
      }
      local_13c = (iVar8 >> 3) + -1;
      if (*(int *)(local_13c * 8 + *(int *)(param_1 + 0xc4)) <= iVar6 + 1) {
        iVar2 = -1;
        local_d8 = 0;
      }
      local_54 = local_54 + -1;
      if (local_3c != (LPCSTR)0x0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_140 = (int *)(local_3c + -0xc);
          if (local_140 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (local_140 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *local_140 = *local_140 + -1;
            iVar8 = *local_140 + 1;
          }
          if (iVar8 != 0) goto LAB_00403de0;
        }
        local_144 = local_3c + -0xc;
        local_148 = local_3c + -0xc;
        FUN_004cc0bc();
        local_14c = 0;
        local_150 = local_44;
        local_3c = (LPCSTR)0x0;
      }
LAB_00403de0:
      local_60 = 0;
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    SetCursor(local_74);
  }
  *in_FS_OFFSET = local_70;
  return;
}

