// name: FUN_00417718
// address: 0x417718
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004178b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00417718(int param_1,int param_2)

{
  char *pcVar1;
  HANDLE hFindFile;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 local_608 [248];
  undefined4 local_510;
  int *local_500;
  int *local_4f0;
  undefined1 local_4e8 [264];
  undefined4 local_3e0;
  undefined4 local_3d0;
  undefined4 local_3c0;
  _WIN32_FIND_DATAA local_3b8;
  undefined *local_270;
  int *local_260;
  int *local_250;
  int *local_240;
  int *local_23c;
  int *local_238;
  undefined1 *local_234;
  undefined4 local_230;
  undefined *local_22c;
  undefined *local_228;
  int *local_224;
  undefined1 *local_220;
  undefined4 local_21c;
  int local_218;
  int local_214;
  int *local_210;
  uint local_20c;
  undefined1 local_205;
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
  int *local_15c;
  int *local_158;
  int *local_154;
  undefined1 *local_150;
  undefined4 local_14c;
  undefined *local_148;
  undefined *local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  int *local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int *local_11c;
  char *local_110;
  int local_10c;
  uint local_108;
  undefined1 *local_104;
  undefined *local_100;
  undefined4 local_fc;
  int *local_f8;
  undefined4 *local_f4;
  uint local_f0;
  undefined1 *local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int *local_dc;
  undefined1 *local_d8;
  int *local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  int *local_8c;
  undefined1 local_84 [8];
  int *local_7c;
  undefined **local_74 [2];
  undefined1 local_6c [8];
  int *local_64;
  undefined **local_5c [2];
  undefined1 local_54 [8];
  int *local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  FUN_00467ba8(0x477804);
  local_b8 = 0x14;
  local_cc = param_2;
  local_d0 = 0;
  local_c = (int *)0x0;
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    local_e0 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_e8 = FUN_00459f00(local_14,local_e0,local_e0);
    local_260 = local_e8 + 3;
    local_f0 = local_e0;
    local_f4 = *(undefined4 **)(local_cc + 8);
    local_f8 = local_260;
    local_ec = local_14;
    local_e4 = local_260;
    local_c = local_260;
    FUN_00467580(local_260,local_f4,local_e0);
  }
  else {
    local_250 = *(int **)(param_2 + 8);
    local_dc = local_250 + -3;
    local_d8 = local_14;
    local_d4 = local_250;
    local_c = local_250;
    if (local_dc != &DAT_00485bcc) {
      *local_dc = *local_dc + 1;
    }
  }
  local_fc = 0;
  local_104 = local_24;
  local_100 = &DAT_00485bd8;
  local_1c = &DAT_00485bd8;
  local_270 = &DAT_00485bd8;
  local_ac = local_ac + 2;
  local_b8 = 8;
  local_10c = 0;
  while( true ) {
    uVar4 = DAT_00485f20;
    if ((uint)local_c[-1] < DAT_00485f20) {
      uVar4 = local_c[-1];
    }
    local_110 = FUN_004184cc((char *)local_c,'\\',uVar4);
    local_108 = DAT_00485f20;
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)local_c;
    }
    if (local_108 == 0xffffffff) break;
    if (local_108 < local_c[-1] - 1U) {
      if (local_10c != 0) {
        pcVar1 = FUN_004677a0((uint *)&DAT_0047766d);
        FUN_0045a224((int)local_24,0,0,0x47766d,(uint)pcVar1,0,(uint)pcVar1);
      }
      hFindFile = FindFirstFileA((LPCSTR)local_c,&local_3b8);
      local_b8 = 8;
      if (hFindFile == (HANDLE)0xffffffff) {
        local_b8 = 0x68;
        FUN_004184f8(param_1,(int)local_14,(int)local_24);
        local_b8 = 0x74;
        local_ac = local_ac + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar3 = (int *)(local_1c + -0xc);
            if (piVar3 == &DAT_00485bcc) {
              iVar2 = 1;
            }
            else if (piVar3 == &DAT_00485bcc) {
              iVar2 = 1;
            }
            else {
              *piVar3 = *piVar3 + -1;
              iVar2 = *piVar3 + 1;
            }
            if (iVar2 != 0) goto LAB_00417b9d;
          }
          local_144 = local_1c + -0xc;
          local_148 = local_1c + -0xc;
          FUN_0045680c();
          local_14c = 0;
          local_150 = local_24;
          local_1c = (undefined *)0x0;
          local_3e0 = 0;
        }
LAB_00417b9d:
        local_ac = local_ac + -1;
        if (local_c != (int *)0x0) {
          if (local_c[-3] != -1) {
            local_154 = local_c + -3;
            if (local_154 == &DAT_00485bcc) {
              iVar2 = 1;
            }
            else if (local_154 == &DAT_00485bcc) {
              iVar2 = 1;
            }
            else {
              *local_154 = *local_154 + -1;
              iVar2 = *local_154 + 1;
            }
            if (iVar2 != 0) goto LAB_00417c49;
          }
          local_158 = local_c + -3;
          local_15c = local_c + -3;
          FUN_0045680c();
        }
LAB_00417c49:
        *in_FS_OFFSET = local_c8;
        return param_1;
      }
      FindClose(hFindFile);
      local_b8 = 0x44;
      puVar11 = local_24;
      iVar2 = FUN_00459d78((int)local_34,(uint *)local_3b8.cFileName);
      local_ac = local_ac + 1;
      FUN_004184f8((int)local_44,iVar2,(int)puVar11);
      local_ac = local_ac + 1;
      FUN_00459ad4((int)local_24,(int)local_44);
      local_ac = local_ac + -1;
      if (local_3c != 0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_11c = (int *)(local_3c + -0xc);
          if (local_11c == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else if (local_11c == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else {
            *local_11c = *local_11c + -1;
            iVar2 = *local_11c + 1;
          }
          if (iVar2 != 0) goto LAB_00417a2b;
        }
        local_120 = local_3c + -0xc;
        local_124 = local_3c + -0xc;
        FUN_0045680c();
        local_128 = 0;
        local_12c = local_44;
        local_3c = 0;
        local_3c0 = 0;
      }
LAB_00417a2b:
      local_b8 = 8;
      local_ac = local_ac + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          local_130 = (int *)(local_2c + -0xc);
          if (local_130 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else if (local_130 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar2 = *local_130 + 1;
          }
          if (iVar2 != 0) goto LAB_00417c61;
        }
        local_134 = local_2c + -0xc;
        local_138 = local_2c + -0xc;
        FUN_0045680c();
        local_13c = 0;
        local_140 = local_34;
        local_2c = 0;
        local_3d0 = 0;
      }
    }
LAB_00417c61:
    uVar4 = local_108;
    if (DAT_00485f20 - 0xe < local_108) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      puVar6 = &LAB_00402064;
      uVar5 = 0;
      local_b8 = 0xa4;
      local_168 = (uint *)FUN_004670cc(local_4e8,PTR_s_invalid_string_size_parameter_in_00488a54);
      FUN_00459d78((int)local_84,local_168);
      local_ac = local_ac + 2;
      local_5c[0] = &PTR_FUN_00474e2c;
      local_174 = 0;
      local_4c = (int *)0x0;
      local_b8 = 0xb0;
      if (local_7c[-3] == -1 || local_7c[-3] + 1 < 0) {
        local_184 = local_7c[-1];
        local_18c = FUN_00459f00(local_54,local_184,local_184);
        local_190 = local_54;
        local_500 = local_18c + 3;
        local_194 = local_184;
        local_198 = local_7c;
        local_19c = local_500;
        local_188 = local_500;
        local_4c = local_500;
        FUN_00467580(local_500,local_7c,local_184);
      }
      else {
        local_17c = local_54;
        local_178 = local_7c;
        local_4c = local_7c;
        local_4f0 = local_7c;
        local_180 = local_7c + -3;
        if (local_180 != &DAT_00485bcc) {
          *local_180 = *local_180 + 1;
        }
      }
      local_b8 = 0xa4;
      local_5c[0] = &PTR_FUN_00474e40;
      local_ac = local_ac + 2;
      if (local_7c != (int *)0x0) {
        if (local_7c[-3] != -1) {
          local_1a0 = local_7c + -3;
          if (local_1a0 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else if (local_1a0 == &DAT_00485bcc) {
            iVar2 = 1;
          }
          else {
            *local_1a0 = *local_1a0 + -1;
            iVar2 = *local_1a0 + 1;
          }
          if (iVar2 != 0) goto LAB_00417ebb;
        }
        local_1a4 = local_7c + -3;
        local_1a8 = local_7c + -3;
        FUN_0045680c();
        local_1ac = 0;
        local_1b0 = local_84;
        local_7c = (int *)0x0;
        local_510 = 0;
      }
LAB_00417ebb:
      local_b8 = 0x98;
      FUN_00471ae8((uint *)&DAT_00402008,local_5c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
    }
    if (uVar4 < (uint)local_c[-1]) {
      local_1b4 = local_c[-1] - uVar4;
      if ((uint)local_c[-1] < uVar4) {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        puVar6 = &LAB_004021bc;
        uVar5 = 0;
        local_b8 = 0xd4;
        local_1b8 = (uint *)FUN_004670cc(local_608,PTR_s_string_index_out_of_range_in_fun_00488a60);
        FUN_00459d78((int)local_94,local_1b8);
        local_ac = local_ac + 2;
        local_74[0] = &PTR_FUN_00474e2c;
        local_1c4 = 0;
        local_64 = (int *)0x0;
        local_b8 = 0xe0;
        if (local_8c[-3] == -1 || local_8c[-3] + 1 < 0) {
          local_1d4 = local_8c[-1];
          local_1dc = FUN_00459f00(local_6c,local_1d4,local_1d4);
          local_1e0 = local_6c;
          local_1ec = local_1dc + 3;
          local_1e4 = local_1d4;
          local_1e8 = local_8c;
          local_1d8 = local_1ec;
          local_64 = local_1ec;
          FUN_00467580(local_1ec,local_8c,local_1d4);
        }
        else {
          local_1cc = local_6c;
          local_1c8 = local_8c;
          local_64 = local_8c;
          local_1d0 = local_8c + -3;
          if (local_1d0 != &DAT_00485bcc) {
            *local_1d0 = *local_1d0 + 1;
          }
        }
        local_b8 = 0xd4;
        local_74[0] = &PTR_FUN_00474e04;
        local_ac = local_ac + 2;
        if (local_8c != (int *)0x0) {
          if (local_8c[-3] != -1) {
            local_1f0 = local_8c + -3;
            if (local_1f0 == &DAT_00485bcc) {
              iVar2 = 1;
            }
            else if (local_1f0 == &DAT_00485bcc) {
              iVar2 = 1;
            }
            else {
              *local_1f0 = *local_1f0 + -1;
              iVar2 = *local_1f0 + 1;
            }
            if (iVar2 != 0) goto LAB_0041815e;
          }
          local_1f4 = local_8c + -3;
          local_1f8 = local_8c + -3;
          FUN_0045680c();
          local_1fc = 0;
          local_200 = local_94;
          local_8c = (int *)0x0;
        }
LAB_0041815e:
        local_b8 = 0x98;
        FUN_00471ae8((uint *)&DAT_00402160,local_74,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
      }
      local_204 = local_c[-1] - uVar4;
      local_205 = 0;
      local_20c = local_204;
      if (local_1b4 < local_204) {
        local_20c = local_1b4;
      }
      FUN_0045a224((int)local_14,uVar4,local_20c,(uint)&local_205,0,0,0);
    }
    else {
      FUN_004605c8((int)local_14,local_c[-1],0,uVar4 - local_c[-1],0);
    }
    if (local_c + -3 != &DAT_00485bcc) {
      local_c[-3] = 0;
    }
    local_10c = 1;
  }
  local_b8 = 0x104;
  puVar11 = local_24;
  FUN_00418778((int)local_a4,(int)local_14);
  local_ac = local_ac + 1;
  FUN_004184f8(param_1,(int)local_a4,(int)puVar11);
  local_b8 = 0x110;
  local_ac = local_ac + -1;
  if (local_9c != 0) {
    if (*(int *)(local_9c + -0xc) != -1) {
      local_210 = (int *)(local_9c + -0xc);
      if (local_210 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (local_210 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *local_210 = *local_210 + -1;
        iVar2 = *local_210 + 1;
      }
      if (iVar2 != 0) goto LAB_00418354;
    }
    local_214 = local_9c + -0xc;
    local_218 = local_9c + -0xc;
    FUN_0045680c();
    local_21c = 0;
    local_220 = local_a4;
    local_9c = 0;
  }
LAB_00418354:
  local_ac = local_ac + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_224 = (int *)(local_1c + -0xc);
      if (local_224 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (local_224 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *local_224 = *local_224 + -1;
        iVar2 = *local_224 + 1;
      }
      if (iVar2 != 0) goto LAB_00418403;
    }
    local_228 = local_1c + -0xc;
    local_22c = local_1c + -0xc;
    FUN_0045680c();
    local_230 = 0;
    local_234 = local_24;
    local_1c = (undefined *)0x0;
  }
LAB_00418403:
  local_ac = local_ac + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_238 = local_c + -3;
      if (local_238 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (local_238 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *local_238 = *local_238 + -1;
        iVar2 = *local_238 + 1;
      }
      if (iVar2 != 0) goto LAB_004184af;
    }
    local_23c = local_c + -3;
    local_240 = local_c + -3;
    FUN_0045680c();
  }
LAB_004184af:
  *in_FS_OFFSET = local_c8;
  return param_1;
}

