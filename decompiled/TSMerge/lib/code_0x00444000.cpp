// TSMerge.exe — runtime / library code "code_0x00444000"
// 45 functions, 0x00444058..0x00447fb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00444058  FUN_00444058   (3214 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0044409e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00444058(int param_1,int param_2,uint param_3)

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
  
  __InitExceptBlockLDTC(0x46f2c4);
  uVar3 = 0;
  local_c = (undefined4 *)&DAT_00471d68;
  local_200 = &DAT_00471d68;
  local_70 = local_70 + 1;
  local_7c = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_0041147c();
  iVar11 = FUN_004116c4(puVar1,iVar11);
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
    iVar11 = FUN_00443d84((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      local_7c = 0xec;
      FUN_00444058(param_1,iVar11,param_3);
      local_7c = 0xf8;
      local_70 = local_70 + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          piVar4 = local_c + -3;
          if (piVar4 == &DAT_00471d5c) {
            iVar11 = 1;
          }
          else if (piVar4 == &DAT_00471d5c) {
            iVar11 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar11 = *piVar4 + 1;
          }
          if (iVar11 != 0) goto LAB_00444b10;
        }
        local_1b4 = local_c + -3;
        local_1b8 = local_c + -3;
        operator_delete();
      }
LAB_00444b10:
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
          local_b8 = (LPSTR)operator_new_array();
          local_70 = local_70 + 1;
          local_7c = 0x2c;
          local_b4 = local_b8;
          local_18 = local_b8;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,local_b8,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if (DAT_00471f90 - 0xeU < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_00402ee0;
            uVar5 = 0;
            local_7c = 0x50;
            local_c0 = (uint *)FUN_00455640(local_2f8,
                                            PTR_s_invalid_string_size_parameter_in_00474068);
            std::string::string_from_cstr((int)local_58,local_c0);
            local_70 = local_70 + 2;
            local_30[0] = &std::logic_error::vftable;
            local_cc = 0;
            local_20 = (int *)0x0;
            local_7c = 0x5c;
            if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
              local_dc = local_50[-1];
              local_e4 = std::string::__getRep(local_28,local_dc,local_dc);
              local_310 = local_e4 + 3;
              local_e8 = local_28;
              local_ec = local_dc;
              local_f0 = local_50;
              local_f4 = local_310;
              local_e0 = local_310;
              local_20 = local_310;
              memcpy(local_310,local_50,local_dc);
            }
            else {
              local_d0 = local_50;
              local_20 = local_50;
              local_d4 = local_28;
              local_d8 = local_50 + -3;
              if (local_d8 != &DAT_00471d5c) {
                *local_d8 = *local_d8 + 1;
              }
            }
            local_7c = 0x50;
            local_30[0] = &std::length_error::vftable;
            local_70 = local_70 + 2;
            if (local_50 != (int *)0x0) {
              if (local_50[-3] != -1) {
                local_f8 = local_50 + -3;
                if (local_f8 == &DAT_00471d5c) {
                  iVar11 = 1;
                }
                else if (local_f8 == &DAT_00471d5c) {
                  iVar11 = 1;
                }
                else {
                  *local_f8 = *local_f8 + -1;
                  iVar11 = *local_f8 + 1;
                }
                if (iVar11 != 0) goto LAB_00444486;
              }
              local_fc = local_50 + -3;
              local_100 = local_50 + -3;
              operator_delete();
              local_104 = 0;
              local_50 = (int *)0x0;
              local_108 = local_58;
              local_320 = 0;
            }
LAB_00444486:
            local_7c = 0x44;
            FUN_0045ed74((uint *)&DAT_00402e84,(undefined4*)local_30,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar7 = 1;
              puVar6 = &LAB_00403038;
              uVar5 = 0;
              local_7c = 0x80;
              local_110 = (uint *)FUN_00455640(local_418,
                                               PTR_s_string_index_out_of_range_in_fun_00474074);
              std::string::string_from_cstr((int)local_68,local_110);
              local_70 = local_70 + 2;
              local_48[0] = &std::logic_error::vftable;
              local_11c = 0;
              local_38 = (int *)0x0;
              local_7c = 0x8c;
              if (local_60[-3] == -1 || local_60[-3] + 1 < 0) {
                local_12c = local_60[-1];
                local_134 = std::string::__getRep(local_40,local_12c,local_12c);
                local_144 = local_134 + 3;
                local_138 = local_40;
                local_13c = local_12c;
                local_140 = local_60;
                local_130 = local_144;
                local_38 = local_144;
                memcpy(local_144,local_60,local_12c);
              }
              else {
                local_120 = local_60;
                local_38 = local_60;
                local_124 = local_40;
                local_128 = local_60 + -3;
                if (local_128 != &DAT_00471d5c) {
                  *local_128 = *local_128 + 1;
                }
              }
              local_7c = 0x80;
              local_48[0] = &std::out_of_range::vftable;
              local_70 = local_70 + 2;
              if (local_60 != (int *)0x0) {
                if (local_60[-3] != -1) {
                  local_148 = local_60 + -3;
                  if (local_148 == &DAT_00471d5c) {
                    iVar11 = 1;
                  }
                  else if (local_148 == &DAT_00471d5c) {
                    iVar11 = 1;
                  }
                  else {
                    *local_148 = *local_148 + -1;
                    iVar11 = *local_148 + 1;
                  }
                  if (iVar11 != 0) goto LAB_00444718;
                }
                local_14c = local_60 + -3;
                local_150 = local_60 + -3;
                operator_delete();
                local_154 = 0;
                local_60 = (int *)0x0;
                local_158 = local_68;
              }
LAB_00444718:
              local_7c = 0x44;
              FUN_0045ed74((uint *)&DAT_00402fdc,(undefined4*)local_48,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
            }
            local_15c = local_c[-1] - local_bc;
            local_15d = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            FUN_0044d5c8((int)local_14,local_bc,local_164,(uint)&local_15d,0,0,0);
          }
          else {
            std::string::replace_fill((int)local_14,local_c[-1],0,local_bc - local_c[-1],0);
          }
          local_168 = local_c + -3;
          if (local_168 != &DAT_00471d5c) {
            *local_168 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                FUN_0045143c((int)local_14);
              }
              local_170 = local_c + -3;
              if (local_170 != &DAT_00471d5c) {
                *local_170 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = local_b8[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          local_70 = local_70 + -1;
          operator_delete_array();
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
          local_18c = std::string::__getRep(param_1,local_184,local_184);
          local_188 = local_18c + 3;
          *(int **)(param_1 + 8) = local_188;
          local_190 = param_1;
          local_194 = local_184;
          local_198 = local_c;
          local_19c = *(undefined4 **)(param_1 + 8);
          memcpy(local_19c,local_c,local_184);
        }
        else {
          local_178 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          local_17c = param_1;
          local_180 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (local_180 != &DAT_00471d5c) {
            *local_180 = *local_180 + 1;
          }
        }
        local_7c = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            local_1a0 = local_c + -3;
            if (local_1a0 == &DAT_00471d5c) {
              iVar11 = 1;
            }
            else if (local_1a0 == &DAT_00471d5c) {
              iVar11 = 1;
            }
            else {
              *local_1a0 = *local_1a0 + -1;
              iVar11 = *local_1a0 + 1;
            }
            if (iVar11 != 0) goto LAB_00444a25;
          }
          local_1a4 = local_c + -3;
          local_1a8 = local_c + -3;
          operator_delete();
        }
LAB_00444a25:
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
    local_1d8 = std::string::__getRep(param_1,uVar3,uVar3);
    local_1d4 = local_1d8 + 3;
    *(int **)(param_1 + 8) = local_1d4;
    local_1dc = param_1;
    local_1e4 = local_c;
    local_1e8 = *(undefined4 **)(param_1 + 8);
    local_1e0 = uVar3;
    memcpy(local_1e8,local_c,uVar3);
  }
  else {
    local_1c8 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_1cc = param_1;
    local_1d0 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_1d0 != &DAT_00471d5c) {
      *local_1d0 = *local_1d0 + 1;
    }
  }
  local_7c = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00471d5c) {
        iVar11 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar11 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar11 = *piVar4 + 1;
      }
      if (iVar11 != 0) goto LAB_00444cc8;
    }
    local_1ec = local_c + -3;
    local_1f0 = local_c + -3;
    operator_delete();
  }
LAB_00444cc8:
  *in_FS_OFFSET = local_8c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444ce8  FUN_00444ce8   (73 bytes)   [unnamed]
HACCEL __cdecl FUN_00444ce8(int param_1,LPCSTR param_2)

{
  HACCEL pHVar1;
  int iVar2;
  
  pHVar1 = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HACCEL)0x0) {
    iVar2 = FUN_00443d84(param_2,(LPCSTR)0x9);
    if (iVar2 != 0) {
      pHVar1 = FUN_00444ce8(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444d34  FUN_00444d34   (73 bytes)   [unnamed]
HMENU __cdecl FUN_00444d34(int param_1,LPCSTR param_2)

{
  HMENU pHVar1;
  int iVar2;
  
  pHVar1 = LoadMenuA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HMENU)0x0) {
    iVar2 = FUN_00443d84(param_2,(LPCSTR)0x4);
    if (iVar2 != 0) {
      pHVar1 = FUN_00444d34(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444d80  FUN_00444d80   (73 bytes)   [unnamed]
HCURSOR __cdecl FUN_00444d80(int param_1,LPCSTR param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  
  pHVar1 = LoadCursorA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HCURSOR)0x0) {
    iVar2 = FUN_00443d84(param_2,(LPCSTR)0x1);
    if (iVar2 != 0) {
      pHVar1 = FUN_00444d80(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444dcc  FUN_00444dcc   (685 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00444e2f) */
int * __cdecl FUN_00444dcc(int *param_1,int param_2,LPCSTR param_3)

{
  uint *puVar1;
  uint uVar2;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x46f444);
  pFVar3 = GetProcAddress(*(HMODULE *)(param_2 + 8),param_3);
  *param_1 = (int)pFVar3;
  if (*param_1 != 0) goto LAB_00445066;
  local_c = &DAT_00471d68;
  if ((short)((uint)param_3 >> 0x10) == 0) {
    FUN_00418548((int)local_34,0x7ff4,(uint)param_3 & 0xffff,DAT_00470a60);
    FUN_0044ce78((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00444fb4;
      }
      operator_delete();
      local_2c = 0;
    }
  }
  else {
    FUN_00418444((int)local_24,0x7ff5,param_3,DAT_00470a60);
    FUN_0044ce78((int)local_14,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00444fb4;
      }
      operator_delete();
      local_1c = 0;
    }
  }
LAB_00444fb4:
  puVar1 = *(uint **)(param_2 + 4);
  uVar2 = *(uint *)(local_c + -4);
  pcVar5 = strlen(puVar1);
  FUN_0044d5c8((int)local_14,uVar2,0,(uint)puVar1,(uint)pcVar5,0,(uint)pcVar5);
  FUN_00418210((int)local_14,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00445066;
    }
    operator_delete();
  }
LAB_00445066:
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044507c  FUN_0044507c   (95 bytes)   [unnamed]
undefined * __stdcall FUN_0044507c(void)

{
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f4bc);
  if (DAT_0046ee75 == '\0') {
    cVar2 = '\0';
    pHVar1 = GetModuleHandleA("USER32");
    FUN_00443bf8((undefined4 *)&DAT_004772c0,(uint *)"USER32",pHVar1,cVar2);
    DAT_0046ee75 = DAT_0046ee75 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_004772c0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004450dc  FUN_004450dc   (62 bytes)   [unnamed]
undefined4 __stdcall FUN_004450dc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee76 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772cd,(int)puVar1,"LoadIconA");
    DAT_0046ee76 = DAT_0046ee76 + '\x01';
  }
  uVar2 = ((code *)DAT_004772cd)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044511c  FUN_0044511c   (56 bytes)   [unnamed]
void __stdcall FUN_0044511c(void)

{
  undefined *puVar1;
  
  if (DAT_0046ee77 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d1,(int)puVar1,"DestroyIcon");
    DAT_0046ee77 = DAT_0046ee77 + '\x01';
  }
  ((code *)DAT_004772d1)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445154  FUN_00445154   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_00445154(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee78 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d5,(int)puVar1,"GetClassInfoA");
    DAT_0046ee78 = DAT_0046ee78 + '\x01';
  }
  uVar2 = ((code *)DAT_004772d5)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445198  FUN_00445198   (91 bytes)   [unnamed]
undefined4 __stdcall FUN_00445198(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_0046ee79 == '\0') {
    puVar1 = FUN_0044507c();
    FUN_00444dcc((int *)&DAT_004772d9,(int)puVar1,"GetMenuStringA");
    DAT_0046ee79 = DAT_0046ee79 + '\x01';
  }
  uVar2 = ((code *)DAT_004772d9)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004451f4  FUN_004451f4   (231 bytes)   [unnamed]
undefined4 * __cdecl FUN_004451f4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x46f4f0);
  uVar3 = 0;
  FUN_00418444((int)local_14,0x7ff8,param_2,DAT_00470a60);
  FUN_00417f14(param_1,(int)local_14,uVar3);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00471d5c) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004452b2;
    }
    operator_delete();
  }
LAB_004452b2:
  *param_1 = &OWL::TXInvalidModule::vftable;
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004454a8  FUN_004454a8   (83 bytes)   [unnamed]
void __cdecl FUN_004454a8(undefined4 param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46f58c);
  piVar1 = FUN_004451f4(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445640  FUN_00445640   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_00445640(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f5e8);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445690  FUN_00445690   (45 bytes)   [unnamed]
void __cdecl FUN_00445690(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004456c0  FUN_004456c0   (86 bytes)   [unnamed]
void __stdcall FUN_004456c0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f60c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004458e0;
  puVar1 = FUN_0045666c(1,0,0x4056d8);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477328,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445716  FUN_00445716   (48 bytes)   [unnamed]
void __stdcall FUN_00445716(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f620);
  OWL::TStreamableClass::_dtor(0x477328,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445748  FUN_00445748   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00445748(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f628);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TModule::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_004056d8,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004457b0  FUN_004457b0   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_004457b0(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f640);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004457f0  FUN_004457f0   (78 bytes)   [unnamed]
int * __cdecl FUN_004457f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_004056d8,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445840  FUN_00445840   (26 bytes)   [unnamed]
int * __cdecl FUN_00445840(int *param_1,int *param_2)

{
  FUN_00422efc(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004458e0  FUN_004458e0   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004458e0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46f674);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new(), param_1 != (int *)0x0)) {
      FUN_004457b0(param_1);
    }
    FUN_00445748(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004459e8  FUN_004459e8   (191 bytes)   [unnamed]
uint * __cdecl FUN_004459e8(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f6e4);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_8;
  param_1[6] = param_5;
  param_1[7] = param_6;
  if (param_7 == 0) {
    param_7 = 0x104;
  }
  param_1[8] = param_7;
  param_1[9] = param_9;
  uVar3 = operator_new_array();
  param_1[2] = uVar3;
  pcVar1 = (char *)param_1[2];
  *pcVar1 = '\0';
  FUN_00445b04(pcVar1,param_1,param_1,(int)param_1,param_3);
  *param_1 = *param_1 | 0x200000;
  bVar2 = FUN_004109c0();
  if (bVar2) {
    *param_1 = *param_1 | 0x80000;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445b04  FUN_00445b04   (179 bytes)   [unnamed]
char * FUN_00445b04(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *local_8;
  
  if (param_5 != (uint *)0x0) {
    operator_delete_array();
    pcVar1 = thunk_FUN_00455b20((char *)param_5,'|');
    puVar4 = param_5;
    if (pcVar1 == (char *)0x0) {
      for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1))) {
        pcVar1 = strlen(puVar4);
      }
      uVar3 = operator_new_array();
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      param_1 = (char *)memcpy(*(undefined4 **)(param_4 + 0xc),param_5,
                                     (int)puVar4 + (1 - (int)param_5));
    }
    else {
      pcVar1 = strlen(param_5);
      pcVar2 = (char *)operator_new_array();
      pcVar2 = FUN_00455bc0(pcVar2,(char *)param_5);
      *(char **)(param_4 + 0xc) = pcVar2;
      param_1 = *(char **)(param_4 + 0xc);
      param_1[(int)(pcVar1 + 1)] = '\0';
    }
  }
  if (*(int *)(param_4 + 0xc) != 0) {
    param_1 = *(char **)(param_4 + 0xc);
    for (local_8 = *(char **)(param_4 + 0xc); *local_8 != '\0'; local_8 = local_8 + 1) {
      if (*local_8 == '|') {
        *local_8 = '\0';
      }
      param_1 = local_8;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445c00  FUN_00445c00   (217 bytes)   [unnamed]
void __cdecl FUN_00445c00(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((*(UINT *)&DAT_0046f710) == 0) {
    (*(UINT *)&DAT_0046f710) = RegisterWindowMessageA("commdlg_ShareViolation");
  }
  memset(param_1 + 7,0,0x58);
  puVar1 = FUN_00410934();
  if (*(uint *)(puVar1 + 4) < 5) {
    iVar2 = 0x4c;
  }
  else {
    iVar2 = 0x58;
  }
  param_1[7] = iVar2;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0x14] = *(uint *)param_1[0x1d] | 0x20;
  if (param_2 == 0) {
    param_1[0x14] = param_1[0x14] & 0xffffffbf;
  }
  else {
    param_1[0x19] = param_2;
    param_1[0x14] = param_1[0x14] | 0x40;
  }
  param_1[0x1c] = *(int *)(param_1[0x1d] + 0x24);
  param_1[0x18] = 0;
  param_1[10] = *(int *)(param_1[0x1d] + 0xc);
  param_1[0xd] = *(int *)(param_1[0x1d] + 0x14);
  param_1[0xe] = *(int *)(param_1[0x1d] + 8);
  param_1[0xf] = *(int *)(param_1[0x1d] + 0x20);
  param_1[0x12] = *(int *)(param_1[0x1d] + 0x18);
  param_1[0x16] = *(int *)(param_1[0x1d] + 0x1c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445d00  FUN_00445d00   (347 bytes)   [unnamed]
int * __cdecl FUN_00445d00(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f724);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
  FUN_00415610(param_1,1,param_3,0,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
  param_1[3] = (int)&OWL::TOpenSaveDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046f9bc;
  *(undefined ***)param_1[2] = &PTR_LAB_0046f9c8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046f9d4;
  param_1[0x1d] = param_4;
  FUN_00445c00(param_1,param_5);
  param_1[0x13] = param_6;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445ea8  FUN_00445ea8   (309 bytes)   [unnamed]
int * __cdecl FUN_00445ea8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f748);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00445d00(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFileOpenDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046f8c8;
  *(undefined ***)param_1[2] = &PTR_LAB_0046f8d4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046f8e0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00446060  FUN_00446060   (309 bytes)   [unnamed]
int * __cdecl FUN_00446060(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46f76c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00445d00(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFileSaveDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046f7d4;
  *(undefined ***)param_1[2] = &PTR_LAB_0046f7e0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046f7ec;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004465fc  FUN_004465fc   (277 bytes)   [unnamed]
int * __cdecl FUN_004465fc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5, int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46faac);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x2a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    *(int *)((int)param_1 + 0x2e) = (int)param_1 + 0x22;
    param_1[1] = (int)param_1 + 0x1e;
    param_1[2] = (int)param_1 + 0x22;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined ***)((int)param_1 + 0x1e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x22) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00431f2c(param_1,1,param_3,param_4,param_5,param_6);
  param_1[3] = (int)&OWL::TRadioButton::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046fb04;
  *(undefined ***)param_1[2] = &PTR_LAB_0046fb10;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046fb1c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044730c  FUN_0044730c   (86 bytes)   [unnamed]
void __stdcall FUN_0044730c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fc3c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00447738;
  puVar1 = FUN_0045666c(1,0,0x42e134);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477338,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447362  FUN_00447362   (48 bytes)   [unnamed]
void __stdcall FUN_00447362(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fc50);
  OWL::TStreamableClass::_dtor(0x477338,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447394  FUN_00447394   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00447394(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fc58);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TScroller::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_0042e134,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004473fc  FUN_004473fc   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_004473fc(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fc70);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TScroller::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044743c  FUN_0044743c   (78 bytes)   [unnamed]
int * __cdecl FUN_0044743c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_0042e134,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044748c  FUN_0044748c   (26 bytes)   [unnamed]
int * __cdecl FUN_0044748c(int *param_1,int *param_2)

{
  FUN_00422efc(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004474ae  FUN_004474ae   (333 bytes)   [unnamed]
int __stdcall FUN_004474ae(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 8);
  *(int *)(unaff_EBP + -4) = iVar1 + 0x3b;
  *(int *)(unaff_EBP + -8) = iVar1 + 0x3a;
  *(int *)(unaff_EBP + -0xc) = iVar1 + 0x39;
  *(int *)(unaff_EBP + -0x10) = iVar1 + 0x38;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x34;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x30;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x28;
  *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
  *(int *)(unaff_EBP + -0x28) = iVar1 + 0x10;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x24;
  *(int *)(unaff_EBP + -0x30) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x34) = iVar1 + 0xc;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  FUN_0042280c(piVar2,iVar1 + 8,4);
  FUN_0042280c(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_0042280c(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_0042280c(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_00422908(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_00422970(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447738  FUN_00447738   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_00447738(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46fca4);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new(), param_1 != (int *)0x0)) {
      FUN_004473fc(param_1);
    }
    FUN_00447394(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044788c  FUN_0044788c   (308 bytes)   [unnamed]
int * __cdecl FUN_0044788c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fd40);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_00432414(param_1,1,param_3,param_4,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046fd98;
  *(undefined ***)param_1[2] = &PTR_LAB_0046fda4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046fdb0;
  param_1[5] = param_5;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffeff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447ac4  FUN_00447ac4   (86 bytes)   [unnamed]
void __stdcall FUN_00447ac4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fe48);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00447d30;
  puVar1 = FUN_0045666c(1,0,0x4054c8);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477348,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447b1a  FUN_00447b1a   (48 bytes)   [unnamed]
void __stdcall FUN_00447b1a(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fe5c);
  OWL::TStreamableClass::_dtor(0x477348,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447b4c  FUN_00447b4c   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_00447b4c(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fe64);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TStatic::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_004054c8,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447bb4  FUN_00447bb4   (283 bytes)   [unnamed]
int * __cdecl FUN_00447bb4(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46fe7c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&OWL::TEventHandler::vftable;
    param_1[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004328e4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TStatic::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046fd98;
  *(undefined ***)param_1[2] = &PTR_LAB_0046fda4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046fdb0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447cd0  EvRegisteredMsg_447cd0_447cd0   (47 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TStatic::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_447cd0_447cd0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_00431c3c(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00422908(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00447d30  FUN_00447d30   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00447d30(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46feb0);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_00447bb4(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_00447b4c(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447f84  EvNCHitTest_447f84   (49 bytes)   [owl:response-table message-handler]
//   WM_NCHITTEST
undefined4 __cdecl EvNCHitTest_447f84(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_00447fb8(param_1,param_2,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_0042b294(*param_1);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447fb8  FUN_00447fb8   (495 bytes)   [unnamed]
undefined4 __cdecl FUN_00447fb8(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  tagRECT local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_0042d3ec(*param_1);
    local_5 = (uVar3 & 0x10000) != 0;
    local_6 = (uVar3 & 0x20000) != 0;
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    FUN_0042d52c(*param_1,&local_28);
    ptVar5 = &local_28;
    pLVar6 = local_38;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      pLVar6 = pLVar6 + 1;
    }
    local_14 = param_2[1] - local_38[1];
    local_18 = *param_2 - local_38[0];
    local_10 = local_18;
    local_c = local_14;
    if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
      FUN_0044993c(&local_48,param_1);
      if ((local_10 < local_48) ||
         (((local_40 <= local_10 || (local_c < local_44)) || (local_3c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 3;
        return 1;
      }
    }
    if (local_6 != '\0') {
      FUN_0044998c(&local_58,param_1);
      if (((local_10 < local_58) || (local_50 <= local_10)) ||
         ((local_c < local_54 || (local_4c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 8;
        return 1;
      }
    }
    if (local_5 != '\0') {
      FUN_004499f8(&local_68,param_1);
      if (((local_10 < local_68) || (local_60 <= local_10)) ||
         ((local_c < local_64 || (local_5c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 9;
        return 1;
      }
    }
    FUN_00449888(&local_78,param_1);
    if ((((local_10 < local_78) || (local_70 <= local_10)) || (local_c < local_74)) ||
       (local_6c <= local_c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

} // namespace tea
