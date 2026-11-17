// name: FUN_004c0e0c
// address: 0x4c0e0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004c0e52) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_004c0e0c(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  HRSRC hResInfo;
  ushort *puVar2;
  uint uVar3;
  uint cchWideChar;
  int *piVar4;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 local_418 [248];
  undefined4 local_320;
  int *local_310;
  undefined1 local_2f8 [248];
  undefined *local_200;
  undefined4 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
  undefined4 *local_1e4;
  uint local_1e0;
  int local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  int local_1cc;
  undefined4 *local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  int *local_1a0;
  undefined4 *local_19c;
  undefined4 *local_198;
  uint local_194;
  int local_190;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  int local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 *local_170;
  int local_16c;
  undefined4 *local_168;
  uint local_164;
  undefined1 local_15d;
  uint local_15c;
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
  undefined1 *local_108;
  undefined4 local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  uint local_ec;
  undefined1 *local_e8;
  int *local_e4;
  int *local_e0;
  uint local_dc;
  int *local_d8;
  undefined1 *local_d4;
  int *local_d0;
  undefined4 local_cc;
  uint *local_c0;
  uint local_bc;
  LPSTR local_b8;
  LPSTR local_b4;
  int local_b0;
  uint local_ac;
  HRSRC local_a8;
  LPCSTR local_a4;
  LPCSTR local_a0;
  LPCSTR local_9c;
  LPCSTR local_98;
  WORD local_92;
  HGLOBAL local_90;
  undefined4 local_8c;
  undefined2 local_7c;
  int local_70;
  undefined1 local_68 [8];
  int *local_60;
  undefined1 local_58 [8];
  int *local_50;
  undefined **local_48 [2];
  undefined1 local_40 [8];
  int *local_38;
  undefined **local_30 [2];
  undefined1 local_28 [8];
  int *local_20;
  LPSTR local_18;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x510454);
  uVar3 = 0;
  local_c = (undefined4 *)&DAT_00513d64;
  local_200 = &DAT_00513d64;
  local_70 = local_70 + 1;
  local_7c = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar11 = FUN_00487e08(puVar1,iVar11);
  if (iVar11 == 0) {
    local_92 = 0;
  }
  else {
    local_92 = *(WORD *)(iVar11 + 0x2f);
  }
  local_9c = (LPCSTR)((param_3 >> 4) + 1);
  local_98 = local_9c;
  hResInfo = FindResourceExA(*(HMODULE *)(param_2 + 8),(LPCSTR)0x6,local_9c,local_92);
  if (hResInfo == (HRSRC)0x0) {
    local_a4 = (LPCSTR)((param_3 >> 4) + 1);
    local_a0 = local_a4;
    hResInfo = FindResourceA(*(HMODULE *)(param_2 + 8),local_a4,(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar11 = FUN_004c0b38((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      local_7c = 0xec;
      FUN_004c0e0c(param_1,iVar11,param_3);
      local_7c = 0xf8;
      local_70 = local_70 + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          piVar4 = local_c + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar11 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar11 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar11 = *piVar4 + 1;
          }
          if (iVar11 != 0) goto LAB_004c18c4;
        }
        local_1b4 = local_c + -3;
        local_1b8 = local_c + -3;
        FUN_004cc0bc();
      }
LAB_004c18c4:
      *in_FS_OFFSET = local_8c;
      return param_1;
    }
  }
  else {
    local_a8 = hResInfo;
    local_90 = LoadResource(*(HMODULE *)(param_2 + 8),hResInfo);
    if (local_90 != (HGLOBAL)0x0) {
      puVar2 = LockResource(local_90);
      if (puVar2 != (ushort *)0x0) {
        local_ac = param_3 & 0xf;
        while( true ) {
          lpWideCharStr = (LPCWSTR)(puVar2 + 1);
          cchWideChar = (uint)*puVar2;
          uVar7 = local_ac - 1;
          if (local_ac == 0) break;
          puVar2 = (ushort *)((int)lpWideCharStr + cchWideChar * 2);
          local_ac = uVar7;
        }
        uVar3 = 0;
        local_ac = uVar7;
        if (cchWideChar != 0) {
          local_b0 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0);
          local_7c = 0x38;
          local_b8 = (LPSTR)FUN_004cc180();
          local_70 = local_70 + 1;
          local_7c = 0x2c;
          local_b4 = local_b8;
          local_18 = local_b8;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,local_b8,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if (DAT_005140ac - 0xeU < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_00408370;
            uVar5 = 0;
            local_7c = 0x50;
            local_c0 = (uint *)FUN_004dc320(local_2f8,
                                            PTR_s_invalid_string_size_parameter_in_00516d20);
            FUN_004cf628((int)local_58,local_c0);
            local_70 = local_70 + 2;
            local_30[0] = &PTR_FUN_004ecaac;
            local_cc = 0;
            local_20 = (int *)0x0;
            local_7c = 0x5c;
            if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
              local_dc = local_50[-1];
              local_e4 = FUN_004cf7b0(local_28,local_dc,local_dc);
              local_310 = local_e4 + 3;
              local_e8 = local_28;
              local_ec = local_dc;
              local_f0 = local_50;
              local_f4 = local_310;
              local_e0 = local_310;
              local_20 = local_310;
              FUN_004dc7d4(local_310,local_50,local_dc);
            }
            else {
              local_d0 = local_50;
              local_20 = local_50;
              local_d4 = local_28;
              local_d8 = local_50 + -3;
              if (local_d8 != &DAT_00513d58) {
                *local_d8 = *local_d8 + 1;
              }
            }
            local_7c = 0x50;
            local_30[0] = &PTR_FUN_004ecac0;
            local_70 = local_70 + 2;
            if (local_50 != (int *)0x0) {
              if (local_50[-3] != -1) {
                local_f8 = local_50 + -3;
                if (local_f8 == &DAT_00513d58) {
                  iVar11 = 1;
                }
                else if (local_f8 == &DAT_00513d58) {
                  iVar11 = 1;
                }
                else {
                  *local_f8 = *local_f8 + -1;
                  iVar11 = *local_f8 + 1;
                }
                if (iVar11 != 0) goto LAB_004c123a;
              }
              local_fc = local_50 + -3;
              local_100 = local_50 + -3;
              FUN_004cc0bc();
              local_104 = 0;
              local_50 = (int *)0x0;
              local_108 = local_58;
              local_320 = 0;
            }
LAB_004c123a:
            local_7c = 0x44;
            FUN_004e7cc4((uint *)&DAT_00408314,local_30,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar7 = 1;
              puVar6 = &LAB_004084c8;
              uVar5 = 0;
              local_7c = 0x80;
              local_110 = (uint *)FUN_004dc320(local_418,
                                               PTR_s_string_index_out_of_range_in_fun_00516d2c);
              FUN_004cf628((int)local_68,local_110);
              local_70 = local_70 + 2;
              local_48[0] = &PTR_FUN_004ecaac;
              local_11c = 0;
              local_38 = (int *)0x0;
              local_7c = 0x8c;
              if (local_60[-3] == -1 || local_60[-3] + 1 < 0) {
                local_12c = local_60[-1];
                local_134 = FUN_004cf7b0(local_40,local_12c,local_12c);
                local_144 = local_134 + 3;
                local_138 = local_40;
                local_13c = local_12c;
                local_140 = local_60;
                local_130 = local_144;
                local_38 = local_144;
                FUN_004dc7d4(local_144,local_60,local_12c);
              }
              else {
                local_120 = local_60;
                local_38 = local_60;
                local_124 = local_40;
                local_128 = local_60 + -3;
                if (local_128 != &DAT_00513d58) {
                  *local_128 = *local_128 + 1;
                }
              }
              local_7c = 0x80;
              local_48[0] = &PTR_FUN_004eca98;
              local_70 = local_70 + 2;
              if (local_60 != (int *)0x0) {
                if (local_60[-3] != -1) {
                  local_148 = local_60 + -3;
                  if (local_148 == &DAT_00513d58) {
                    iVar11 = 1;
                  }
                  else if (local_148 == &DAT_00513d58) {
                    iVar11 = 1;
                  }
                  else {
                    *local_148 = *local_148 + -1;
                    iVar11 = *local_148 + 1;
                  }
                  if (iVar11 != 0) goto LAB_004c14cc;
                }
                local_14c = local_60 + -3;
                local_150 = local_60 + -3;
                FUN_004cc0bc();
                local_154 = 0;
                local_60 = (int *)0x0;
                local_158 = local_68;
              }
LAB_004c14cc:
              local_7c = 0x44;
              FUN_004e7cc4((uint *)&DAT_0040846c,local_48,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
            }
            local_15c = local_c[-1] - local_bc;
            local_15d = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            FUN_004cfad4((int)local_14,local_bc,local_164,(uint)&local_15d,0,0,0);
          }
          else {
            FUN_004d5c40((int)local_14,local_c[-1],0,local_bc - local_c[-1],0);
          }
          local_168 = local_c + -3;
          if (local_168 != &DAT_00513d58) {
            *local_168 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                FUN_004d48d8((int)local_14);
              }
              local_170 = local_c + -3;
              if (local_170 != &DAT_00513d58) {
                *local_170 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = local_b8[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          local_70 = local_70 + -1;
          FUN_004cc0cc();
          local_7c = 0x20;
        }
      }
      FreeResource(local_90);
      if (uVar3 != 0) {
        local_7c = 0xbc;
        local_174 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
          local_184 = local_c[-1];
          local_18c = FUN_004cf7b0(param_1,local_184,local_184);
          local_188 = local_18c + 3;
          *(int **)(param_1 + 8) = local_188;
          local_190 = param_1;
          local_194 = local_184;
          local_198 = local_c;
          local_19c = *(undefined4 **)(param_1 + 8);
          FUN_004dc7d4(local_19c,local_c,local_184);
        }
        else {
          local_178 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          local_17c = param_1;
          local_180 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (local_180 != &DAT_00513d58) {
            *local_180 = *local_180 + 1;
          }
        }
        local_7c = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            local_1a0 = local_c + -3;
            if (local_1a0 == &DAT_00513d58) {
              iVar11 = 1;
            }
            else if (local_1a0 == &DAT_00513d58) {
              iVar11 = 1;
            }
            else {
              *local_1a0 = *local_1a0 + -1;
              iVar11 = *local_1a0 + 1;
            }
            if (iVar11 != 0) goto LAB_004c17d9;
          }
          local_1a4 = local_c + -3;
          local_1a8 = local_c + -3;
          FUN_004cc0bc();
        }
LAB_004c17d9:
        *in_FS_OFFSET = local_8c;
        return param_1;
      }
    }
  }
  local_7c = 0x110;
  local_1c4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar3 = local_c[-1];
    local_1d8 = FUN_004cf7b0(param_1,uVar3,uVar3);
    local_1d4 = local_1d8 + 3;
    *(int **)(param_1 + 8) = local_1d4;
    local_1dc = param_1;
    local_1e4 = local_c;
    local_1e8 = *(undefined4 **)(param_1 + 8);
    local_1e0 = uVar3;
    FUN_004dc7d4(local_1e8,local_c,uVar3);
  }
  else {
    local_1c8 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_1cc = param_1;
    local_1d0 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_1d0 != &DAT_00513d58) {
      *local_1d0 = *local_1d0 + 1;
    }
  }
  local_7c = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar11 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar11 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar11 = *piVar4 + 1;
      }
      if (iVar11 != 0) goto LAB_004c1a7c;
    }
    local_1ec = local_c + -3;
    local_1f0 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_004c1a7c:
  *in_FS_OFFSET = local_8c;
  return param_1;
}

