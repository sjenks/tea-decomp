// name: FUN_004017ec
// address: 0x4017ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_004017ec(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_384 [248];
  undefined4 local_28c;
  int *local_27c;
  undefined1 local_264 [248];
  undefined4 local_16c;
  undefined4 local_15c;
  int local_154;
  uint local_150;
  undefined1 local_149;
  uint local_148;
  undefined1 *local_144;
  undefined4 local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  undefined1 *local_128;
  int *local_124;
  int *local_120;
  uint local_11c;
  int *local_118;
  undefined1 *local_114;
  int *local_110;
  undefined4 local_10c;
  uint *local_100;
  uint local_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  undefined1 *local_dc;
  int *local_d8;
  int *local_d4;
  uint local_d0;
  int *local_cc;
  undefined1 *local_c8;
  int *local_c4;
  undefined4 local_c0;
  uint *local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined1 *local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined2 local_88;
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
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_00467ba8(0x474960);
  FUN_004401b8(param_1);
  local_88 = 8;
  FUN_00418b98((int)local_14);
  local_7c = local_7c + 1;
  FUN_004162e4((int)(param_1 + 0x34e),(int)local_14);
  local_7c = local_7c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004018b8;
    }
    local_9c = local_c + -0xc;
    FUN_0045680c();
    local_a0 = 0;
    local_a4 = local_14;
    local_c = 0;
    local_15c = 0;
  }
LAB_004018b8:
  local_88 = 0x20;
  FUN_00418d04((int)local_24);
  local_7c = local_7c + 1;
  FUN_00459ad4(0x48b43c,(int)local_24);
  local_7c = local_7c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00401962;
    }
    local_a8 = local_1c + -0xc;
    FUN_0045680c();
    local_ac = 0;
    local_b0 = local_24;
    local_1c = 0;
    local_16c = 0;
  }
LAB_00401962:
  if (*(int *)(DAT_0048b444 + -4) == 0) goto LAB_00401eec;
  uVar3 = *(int *)(DAT_0048b444 + -4) - 1;
  if (DAT_00485f20 - 0xeU < uVar3) {
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 1;
    puVar5 = &LAB_00402064;
    uVar4 = 0;
    local_88 = 0x44;
    local_b4 = (uint *)FUN_004670cc(local_264,PTR_s_invalid_string_size_parameter_in_00488a54);
    FUN_00459d78((int)local_64,local_b4);
    local_7c = local_7c + 2;
    local_3c[0] = &PTR_FUN_00474e2c;
    local_c0 = 0;
    local_2c = (int *)0x0;
    local_88 = 0x50;
    if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
      local_d0 = local_5c[-1];
      local_d8 = FUN_00459f00(local_34,local_d0,local_d0);
      local_dc = local_34;
      local_27c = local_d8 + 3;
      local_e0 = local_d0;
      local_e4 = local_5c;
      local_e8 = local_27c;
      local_d4 = local_27c;
      local_2c = local_27c;
      FUN_00467580(local_27c,local_5c,local_d0);
    }
    else {
      local_c8 = local_34;
      local_c4 = local_5c;
      local_2c = local_5c;
      local_cc = local_5c + -3;
      if (local_cc != &DAT_00485bcc) {
        *local_cc = *local_cc + 1;
      }
    }
    local_88 = 0x44;
    local_3c[0] = &PTR_FUN_00474e40;
    local_7c = local_7c + 2;
    if (local_5c != (int *)0x0) {
      if (local_5c[-3] != -1) {
        piVar2 = local_5c + -3;
        if (piVar2 == &DAT_00485bcc) {
          iVar1 = 1;
        }
        else if (piVar2 == &DAT_00485bcc) {
          iVar1 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar1 = *piVar2 + 1;
        }
        if (iVar1 != 0) goto LAB_00401bbd;
      }
      local_ec = local_5c + -3;
      local_f0 = local_5c + -3;
      FUN_0045680c();
      local_f4 = 0;
      local_f8 = local_64;
      local_5c = (int *)0x0;
      local_28c = 0;
    }
LAB_00401bbd:
    local_88 = 0x38;
    FUN_00471ae8((uint *)&DAT_00402008,local_3c,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
  }
  if (uVar3 < *(uint *)(DAT_0048b444 + -4)) {
    local_fc = *(int *)(DAT_0048b444 + -4) - uVar3;
    if (*(uint *)(DAT_0048b444 + -4) < uVar3) {
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 1;
      puVar5 = &LAB_004021bc;
      uVar4 = 0;
      local_88 = 0x74;
      local_100 = (uint *)FUN_004670cc(local_384,PTR_s_string_index_out_of_range_in_fun_00488a60);
      FUN_00459d78((int)local_74,local_100);
      local_7c = local_7c + 2;
      local_54[0] = &PTR_FUN_00474e2c;
      local_10c = 0;
      local_44 = (int *)0x0;
      local_88 = 0x80;
      if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
        local_11c = local_6c[-1];
        local_124 = FUN_00459f00(local_4c,local_11c,local_11c);
        local_128 = local_4c;
        local_134 = local_124 + 3;
        local_12c = local_11c;
        local_130 = local_6c;
        local_120 = local_134;
        local_44 = local_134;
        FUN_00467580(local_134,local_6c,local_11c);
      }
      else {
        local_114 = local_4c;
        local_110 = local_6c;
        local_44 = local_6c;
        local_118 = local_6c + -3;
        if (local_118 != &DAT_00485bcc) {
          *local_118 = *local_118 + 1;
        }
      }
      local_88 = 0x74;
      local_54[0] = &PTR_FUN_00474e04;
      local_7c = local_7c + 2;
      if (local_6c != (int *)0x0) {
        if (local_6c[-3] != -1) {
          piVar2 = local_6c + -3;
          if (piVar2 == &DAT_00485bcc) {
            iVar1 = 1;
          }
          else if (piVar2 == &DAT_00485bcc) {
            iVar1 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar1 = *piVar2 + 1;
          }
          if (iVar1 != 0) goto LAB_00401e3d;
        }
        local_138 = local_6c + -3;
        local_13c = local_6c + -3;
        FUN_0045680c();
        local_140 = 0;
        local_144 = local_74;
        local_6c = (int *)0x0;
      }
LAB_00401e3d:
      local_88 = 0x38;
      FUN_00471ae8((uint *)&DAT_00402160,local_54,uVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
    }
    local_148 = *(int *)(DAT_0048b444 + -4) - uVar3;
    local_149 = 0;
    local_150 = local_148;
    if (local_fc < local_148) {
      local_150 = local_fc;
    }
    FUN_0045a224(0x48b43c,uVar3,local_150,(uint)&local_149,0,0,0);
  }
  else {
    FUN_004605c8(0x48b43c,*(uint *)(DAT_0048b444 + -4),0,uVar3 - *(int *)(DAT_0048b444 + -4),0);
  }
  if ((undefined4 *)(DAT_0048b444 + -0xc) != &DAT_00485bcc) {
    *(undefined4 *)(DAT_0048b444 + -0xc) = 0;
  }
LAB_00401eec:
  FUN_00403554(param_1,param_1 + 0x2c7);
  FUN_00403554(param_1,(int *)((int)param_1 + 0xbce));
  FUN_00403554(param_1,param_1 + 800);
  FUN_0043d358(param_1 + 0xbb,(uint)(param_1[0x361] != 0));
  iVar1 = thunk_FUN_00468a98((LPCSTR)param_1[0x35c],0);
  if (iVar1 == 0) {
    FUN_004035b8((int)param_1,(uint *)param_1[0x35c]);
  }
  iVar1 = FUN_00419664((LPCSTR)param_1[0x358],&DAT_0048b33c,0x100,&local_154);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_00419664((LPCSTR)param_1[0x354],&DAT_0048b33c,0x100,&local_154);
    param_1[8] = iVar1;
    if (iVar1 != 0) {
      SetWindowTextA(*(HWND *)(param_1[9] + 0xc),(LPCSTR)param_1[0x354]);
    }
  }
  else {
    SetWindowTextA(*(HWND *)(param_1[9] + 0xc),(LPCSTR)param_1[0x358]);
  }
  FUN_004029e8((int)param_1);
  *in_FS_OFFSET = local_98;
  return;
}

