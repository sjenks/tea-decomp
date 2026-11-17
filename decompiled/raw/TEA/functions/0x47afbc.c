// name: FUN_0047afbc
// address: 0x47afbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0047b281) */

void __cdecl FUN_0047afbc(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  tagRECT local_1b8;
  LPCSTR local_1a0;
  LPCSTR local_19c;
  int *local_198;
  undefined1 *local_194;
  undefined4 local_190;
  undefined4 *local_18c;
  undefined4 *local_188;
  int *local_184;
  undefined4 *local_180;
  undefined4 *local_17c;
  uint local_178;
  int local_174;
  int *local_170;
  int *local_16c;
  int local_168;
  undefined4 *local_164;
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  uint local_14c;
  undefined4 *local_148;
  int *local_144;
  int local_140;
  undefined1 *local_13c;
  undefined *local_138;
  undefined4 local_134;
  undefined1 *local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  int *local_120;
  undefined4 local_114;
  undefined4 local_110;
  LONG local_10c;
  LONG local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_e4;
  int local_d8;
  int local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 *local_c4;
  undefined1 local_c0 [8];
  int local_b8;
  int *local_b0;
  undefined1 local_ac [8];
  undefined4 *local_a4;
  int local_9c [34];
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_004dce64(0x500fe8);
  local_fc = 0x108;
  local_f8 = 0x62;
  local_104 = 8;
  local_100 = 8;
  local_1b8.bottom = 0x6a;
  local_1b8.right = 0x110;
  local_110 = 8;
  local_114 = 8;
  local_1b8.left = 8;
  local_1b8.top = 8;
  local_10c = local_1b8.right;
  local_108 = local_1b8.bottom;
  MapDialogRect(*(HWND *)(*param_1 + 0xc),&local_1b8);
  local_b0 = (int *)FUN_004cc0f0();
  if (local_b0 != (int *)0x0) {
    local_e4 = 0x14;
    FUN_00419c00(local_b0,0,param_1,0x240e,&local_1b8.left,1);
    local_e4 = 8;
  }
  param_1[0x22] = (int)local_b0;
  FUN_004156f4(param_1);
  local_e4 = 0x2c;
  FUN_004cf628((int)local_c0,(uint *)s_Tips_txt_00500e8d);
  local_d8 = local_d8 + 1;
  FUN_00437470((int)local_14,(int)local_c0);
  if (local_b8 != 0) {
    if (*(int *)(local_b8 + -0xc) != -1) {
      local_120 = (int *)(local_b8 + -0xc);
      if (local_120 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_120 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_120 = *local_120 + -1;
        iVar3 = *local_120 + 1;
      }
      if (iVar3 != 0) goto LAB_0047b1e8;
    }
    local_124 = local_b8 + -0xc;
    local_128 = local_b8 + -0xc;
    FUN_004cc0bc();
    local_12c = 0;
    local_130 = local_c0;
    local_b8 = 0;
  }
LAB_0047b1e8:
  local_e4 = 0x44;
  FUN_004d1208(local_9c,0,local_c,4,0x1b6);
  local_134 = 0;
  local_13c = local_ac;
  local_138 = &DAT_00513d64;
  local_a4 = (undefined4 *)&DAT_00513d64;
  local_d8 = local_d8 + 9;
  while( true ) {
    local_e4 = 0x68;
    local_144 = (int *)(local_9c[0] + 0x10);
    local_150 = (undefined4 *)*local_144;
    local_150[1] = local_150[1] + 1;
    local_d8 = local_d8 + 2;
    local_14c = DAT_00515dfc;
    if (DAT_00515dfc < (uint)local_150[5]) {
      piVar2 = *(int **)(local_150[4] + DAT_00515dfc * 4);
    }
    else {
      piVar2 = (int *)0x0;
    }
    local_148 = local_150;
    local_c4 = local_150;
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_004db7f8((int *)&local_c4,&DAT_00515dfc,'\x01',0x20,FUN_0047b728);
    }
    (**(code **)(*piVar2 + 0x18))();
    local_d8 = local_d8 + -1;
    local_154 = local_c4;
    local_c4[1] = local_c4[1] + -1;
    local_158 = local_c4[1];
    if ((local_158 == 0) && (local_cc = local_c4, local_c4 != (undefined4 *)0x0)) {
      local_c8 = *local_c4;
      local_e4 = 0x80;
      (**(code **)*local_c4)();
    }
    local_e4 = 0x68;
    piVar2 = FUN_004d49a4(local_9c,(int)local_ac);
    local_140 = *piVar2;
    if (*(int *)(local_140 + 0x30) != 0) break;
    if (param_1[0x1a] == param_1[0x1e]) {
      FUN_0040e240((int)(param_1 + 0x18),param_1[0x1a],(int)local_ac);
    }
    else {
      local_15c = param_1[0x1a];
      local_d0 = local_15c;
      if (local_15c != 0) {
        local_e4 = 0x98;
        local_160 = 0;
        *(undefined4 *)(local_15c + 8) = 0;
        if (local_a4[-3] == -1 || local_a4[-3] + 1 < 0) {
          uVar1 = local_a4[-1];
          local_170 = FUN_004cf7b0(local_15c,uVar1,uVar1);
          local_16c = local_170 + 3;
          *(int **)(local_d0 + 8) = local_16c;
          local_174 = local_d0;
          local_17c = local_a4;
          local_180 = *(undefined4 **)(local_d0 + 8);
          local_178 = uVar1;
          FUN_004dc7d4(local_180,local_a4,uVar1);
        }
        else {
          local_164 = local_a4;
          *(undefined4 **)(local_15c + 8) = local_a4;
          piVar2 = (int *)(*(int *)(local_15c + 8) + -0xc);
          local_168 = local_15c;
          if (piVar2 != &DAT_00513d58) {
            *piVar2 = *piVar2 + 1;
          }
        }
      }
      param_1[0x1a] = param_1[0x1a] + 0x10;
    }
  }
  iVar3 = FUN_00416a78((int)param_1,(uint *)s_NextIndex_00500e74,0);
  param_1[0x20] = iVar3;
  local_d8 = local_d8 + -1;
  if (local_a4 != (undefined4 *)0x0) {
    if (local_a4[-3] != -1) {
      local_184 = local_a4 + -3;
      if (local_184 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_184 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_184 = *local_184 + -1;
        iVar3 = *local_184 + 1;
      }
      if (iVar3 != 0) goto LAB_0047b63f;
    }
    local_188 = local_a4 + -3;
    local_18c = local_a4 + -3;
    FUN_004cc0bc();
    local_190 = 0;
    local_194 = local_ac;
    local_a4 = (undefined4 *)0x0;
  }
LAB_0047b63f:
  local_e4 = 0x20;
  local_d8 = local_d8 + -8;
  FUN_004d1300(local_9c,2);
  local_d8 = local_d8 + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_198 = (int *)(local_c + -0xc);
      if (local_198 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_198 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_198 = *local_198 + -1;
        iVar3 = *local_198 + 1;
      }
      if (iVar3 != 0) goto LAB_0047b712;
    }
    local_19c = local_c + -0xc;
    local_1a0 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_0047b712:
  *in_FS_OFFSET = local_f4;
  return;
}

