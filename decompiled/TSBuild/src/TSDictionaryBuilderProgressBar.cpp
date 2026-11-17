// TSBuild.exe — application module "TSDictionaryBuilderProgressBar"
// 15 functions, 0x00417310..0x004198b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00417310  TSDictionaryBuilderProgressBar::~TSDictionaryBuilderProgressBar   (251 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionaryBuilderProgressBar::_dtor
void __cdecl TSDictionaryBuilderProgressBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x477034);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TSDictionaryBuilderProgressBar::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004770c8;
    *(undefined ***)param_1[2] = &PTR_LAB_004770d4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004770e0;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -6;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -6;
    OWL::TButton::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 6;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 6;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041740c  FUN_0041740c   (33 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041740c(int *param_1,int param_2)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417430  TSDictionaryBuilderProgressBar::vf5   (367 bytes)   [rtti:vtable virtual slot 5]
void __cdecl TSDictionaryBuilderProgressBar::vf5(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_4c;
  HDC local_28 [9];
  
  __InitExceptBlockLDTC(0x477068);
  FUN_00421c0c((undefined4*)local_28,*(undefined4 *)(param_2 + 0x18));
  iVar1 = ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c)) * *(int *)(param_1 + 0x18)) / 100;
  OWL::TDC::vf6((undefined4*)local_28,7);
  OWL::TDC::vf6((undefined4*)local_28,5);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20),*(int *)(param_2 + 0x24),
            *(int *)(param_2 + 0x28));
  OWL::TDC::vf6((undefined4*)local_28,8);
  OWL::TDC::vf6((undefined4*)local_28,2);
  Rectangle(local_28[0],*(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x1c) + iVar1,*(int *)(param_2 + 0x28));
  OWL::TDC::vf6((undefined4*)local_28,0);
  Rectangle(local_28[0],iVar1 + *(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x24) + -1,*(int *)(param_2 + 0x28));
  OWL::TDC::_dtor((int *)local_28,2);
  *in_FS_OFFSET = local_4c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417698  FUN_00417698   (126 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00417698(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint in_ECX;
  undefined4 uStack_8;
  
  uStack_8 = in_ECX;
  while( true ) {
    while ((param_2 != 0 &&
           (in_ECX = (uint)(byte)(&DAT_00477368)[*param_1], (&DAT_00477368)[*param_1] == 0))) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    }
    while ((param_4 != 0 &&
           (uStack_8 = (uint)(byte)(&DAT_00477368)[*param_3] << 0x18, (&DAT_00477368)[*param_3] == 0
           ))) {
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    }
    if ((param_2 == 0) || (param_4 == 0)) break;
    if ((byte)in_ECX != GH_PIECE(uStack_8, 3, undefined1)) {
      return (in_ECX & 0xff) - (uint)GH_PIECE(uStack_8, 3, undefined1);
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
  }
  if (param_2 != 0) {
    return 1;
  }
  if (param_4 == 0) {
    return 0;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417718  FUN_00417718   (3505 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
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
  
  __InitExceptBlockLDTC(0x477804);
  local_b8 = 0x14;
  local_cc = param_2;
  local_d0 = 0;
  local_c = (int *)0x0;
  iVar2 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar2 == -1 || iVar2 + 1 < 0) {
    local_e0 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_e8 = std::string::__getRep(local_14,local_e0,local_e0);
    local_260 = local_e8 + 3;
    local_f0 = local_e0;
    local_f4 = *(undefined4 **)(local_cc + 8);
    local_f8 = local_260;
    local_ec = local_14;
    local_e4 = local_260;
    local_c = local_260;
    memcpy(local_260,local_f4,local_e0);
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
    uVar4 = (*(uint *)&DAT_00485f20);
    if ((uint)local_c[-1] < (*(uint *)&DAT_00485f20)) {
      uVar4 = local_c[-1];
    }
    local_110 = FUN_004184cc((char *)local_c,'\\',uVar4);
    local_108 = (*(uint *)&DAT_00485f20);
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)local_c;
    }
    if (local_108 == 0xffffffff) break;
    if (local_108 < local_c[-1] - 1U) {
      if (local_10c != 0) {
        pcVar1 = strlen((uint *)&DAT_0047766d);
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
          operator_delete();
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
          operator_delete();
        }
LAB_00417c49:
        *in_FS_OFFSET = local_c8;
        return param_1;
      }
      FindClose(hFindFile);
      local_b8 = 0x44;
      puVar11 = local_24;
      iVar2 = std::string::string_from_cstr((int)local_34,(uint *)local_3b8.cFileName);
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
        operator_delete();
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
        operator_delete();
        local_13c = 0;
        local_140 = local_34;
        local_2c = 0;
        local_3d0 = 0;
      }
    }
LAB_00417c61:
    uVar4 = local_108;
    if ((*(uint *)&DAT_00485f20) - 0xe < local_108) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      puVar6 = &LAB_00402064;
      uVar5 = 0;
      local_b8 = 0xa4;
      local_168 = (uint *)FUN_004670cc(local_4e8,PTR_s_invalid_string_size_parameter_in_00488a54);
      std::string::string_from_cstr((int)local_84,local_168);
      local_ac = local_ac + 2;
      local_5c[0] = &std::logic_error::vftable;
      local_174 = 0;
      local_4c = (int *)0x0;
      local_b8 = 0xb0;
      if (local_7c[-3] == -1 || local_7c[-3] + 1 < 0) {
        local_184 = local_7c[-1];
        local_18c = std::string::__getRep(local_54,local_184,local_184);
        local_190 = local_54;
        local_500 = local_18c + 3;
        local_194 = local_184;
        local_198 = local_7c;
        local_19c = local_500;
        local_188 = local_500;
        local_4c = local_500;
        memcpy(local_500,local_7c,local_184);
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
      local_5c[0] = &std::length_error::vftable;
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
        operator_delete();
        local_1ac = 0;
        local_1b0 = local_84;
        local_7c = (int *)0x0;
        local_510 = 0;
      }
LAB_00417ebb:
      local_b8 = 0x98;
      FUN_00471ae8((uint *)&DAT_00402008,(undefined4*)local_5c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
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
        std::string::string_from_cstr((int)local_94,local_1b8);
        local_ac = local_ac + 2;
        local_74[0] = &std::logic_error::vftable;
        local_1c4 = 0;
        local_64 = (int *)0x0;
        local_b8 = 0xe0;
        if (local_8c[-3] == -1 || local_8c[-3] + 1 < 0) {
          local_1d4 = local_8c[-1];
          local_1dc = std::string::__getRep(local_6c,local_1d4,local_1d4);
          local_1e0 = local_6c;
          local_1ec = local_1dc + 3;
          local_1e4 = local_1d4;
          local_1e8 = local_8c;
          local_1d8 = local_1ec;
          local_64 = local_1ec;
          memcpy(local_1ec,local_8c,local_1d4);
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
        local_74[0] = &std::out_of_range::vftable;
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
          operator_delete();
          local_1fc = 0;
          local_200 = local_94;
          local_8c = (int *)0x0;
        }
LAB_0041815e:
        local_b8 = 0x98;
        FUN_00471ae8((uint *)&DAT_00402160,(undefined4*)local_74,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
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
      std::string::replace_fill((int)local_14,local_c[-1],0,uVar4 - local_c[-1],0);
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
    operator_delete();
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
    operator_delete();
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
    operator_delete();
  }
LAB_004184af:
  *in_FS_OFFSET = local_c8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004184cc  FUN_004184cc   (41 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
char * __cdecl FUN_004184cc(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (param_2 == *pcVar1) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004184f8  FUN_004184f8   (638 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004184f8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x477970);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_00485bcc) {
      *piVar4 = *piVar4 + 1;
    }
  }
  iVar2 = std::string::append((int)local_14,param_3);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar3 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00485bcc) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0041875b;
    }
    operator_delete();
  }
LAB_0041875b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418778  FUN_00418778   (899 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00418778(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4779ec);
  local_c = 0;
  FUN_00460bbc((int)local_14,1);
  puVar5 = local_14;
  local_1c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_1c = std::string::__getRep(local_24,uVar1,uVar1);
    local_1c = local_1c + 3;
    memcpy(local_1c,*(undefined4 **)(param_2 + 8),uVar1);
  }
  else {
    local_1c = *(int **)(param_2 + 8);
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = std::string::append((int)local_24,(int)puVar5);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(iVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00418a31;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00418a31:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00418ae0;
    }
    operator_delete();
  }
LAB_00418ae0:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418afc  FUN_00418afc   (153 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00418b13) */
bool __cdecl FUN_00418afc(int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_memchr(*(char **)(param_1 + 8),':',*(int *)(*(int *)(param_1 + 8) + -4));
  iVar2 = DAT_00485f20;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(param_1 + 8);
  }
  if (iVar2 == -1) {
    if ((*(int *)(*(char **)(param_1 + 8) + -4) == 0) || (**(char **)(param_1 + 8) != '\\')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = *(char *)(*(int *)(param_1 + 8) + iVar2 + 1) != '\\';
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418b98  GetProgramDirectory   (362 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040909c. GetModuleFileNameA, truncated after the last backslash
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00418ce2) */
int __cdecl GetProgramDirectory(int param_1)

{
  DWORD DVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_154 [68];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x477a84);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_154,0x104);
  *(undefined1 *)((int)local_154 + DVar1) = 0;
  puVar2 = thunk_strrchr(local_154,'\\');
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined **)(param_1 + 8) = &DAT_00485bd8;
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_28 = 8;
  iVar3 = FUN_0045c644((int)local_14,local_154,(int)puVar2 + (1 - (int)local_154));
  local_1c = local_1c + 1;
  FUN_00417718(param_1,iVar3);
  local_28 = 0x14;
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00418c99;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_00418c99:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418d04  FUN_00418d04   (791 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00418d45) */
int __cdecl FUN_00418d04(int param_1)

{
  uint uVar1;
  HRESULT HVar2;
  IMalloc *This;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  uint local_1a4 [67];
  undefined *local_98;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  uint local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  int local_54;
  LPCITEMIDLIST local_50;
  IMalloc *local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x477b18);
  local_c = (undefined4 *)&DAT_00485bd8;
  local_98 = &DAT_00485bd8;
  local_2c = local_2c + 1;
  local_38 = 0x20;
  HVar2 = SHGetMalloc(&local_4c);
  if (HVar2 == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      BVar3 = SHGetPathFromIDListA(local_50,(LPSTR)local_1a4);
      if (BVar3 != 0) {
        FUN_00459b6c((int)local_14,local_1a4);
      }
      This = (IMalloc *)((code *)local_4c->lpVtbl->Free)((IMalloc *)local_4c->lpVtbl,local_50);
    }
    (*local_4c->lpVtbl->Release)(This);
  }
  iVar4 = local_c[-1];
  if (iVar4 == 0) {
    local_38 = 0x2c;
    GetProgramDirectory((int)local_24);
    local_2c = local_2c + 1;
    FUN_00459ad4((int)local_14,(int)local_24);
    local_2c = local_2c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_00418ead;
      }
      local_54 = local_1c + -0xc;
      operator_delete();
      local_58 = 0;
      local_5c = local_24;
      local_1c = 0;
    }
  }
  else {
    if (1 < local_c[-3] + 1) {
      FUN_0045f64c((int)local_14);
    }
    if (local_c + -3 != &DAT_00485bcc) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x5c);
    }
  }
LAB_00418ead:
  local_38 = 0x44;
  local_60 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_70 = std::string::__getRep(param_1,uVar1,uVar1);
    local_6c = local_70 + 3;
    *(int **)(param_1 + 8) = local_6c;
    local_74 = param_1;
    local_7c = local_c;
    local_80 = *(undefined4 **)(param_1 + 8);
    local_78 = uVar1;
    memcpy(local_80,local_c,uVar1);
  }
  else {
    local_64 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_68 = param_1;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00485bcc) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_38 = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00419000;
    }
    local_84 = local_c + -3;
    local_88 = local_c + -3;
    operator_delete();
  }
LAB_00419000:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041901c  FUN_0041901c   (1103 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0041901c(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x477bf8);
  if ((*(int *)(*(int *)(param_2 + 8) + -4) == 0) ||
     (bVar1 = FUN_00418afc(param_2), CONCAT31(extraout_var,bVar1) == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar4 == -1 || iVar4 + 1 < 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar5 = std::string::__getRep(param_1,uVar6,uVar6);
      *(int **)(param_1 + 8) = piVar5 + 3;
      memcpy(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 8),uVar6);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar5 != &DAT_00485bcc) {
        *piVar5 = *piVar5 + 1;
      }
    }
    *in_FS_OFFSET = local_58;
    return param_1;
  }
  local_c = (int *)0x0;
  iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar4 == -1 || iVar4 + 1 < 0) {
    uVar6 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar6,uVar6);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar6);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_00485bcc) {
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = local_c[-1];
LAB_004192c9:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)local_c[-1] < uVar6) {
      uVar6 = local_c[-1];
    }
    pcVar3 = FUN_004184cc((char *)local_c,';',uVar6);
    iVar4 = DAT_00485f20;
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)local_c;
    }
    if (iVar4 == -1) break;
    GetProgramDirectory((int)local_24);
    FUN_00460414((int)local_14,iVar4 + 1,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00485bcc) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_004192c9;
      }
      operator_delete();
      local_1c = 0;
    }
  } while( true );
  puVar7 = local_14;
  GetProgramDirectory((int)local_34);
  FUN_004184f8(param_1,(int)local_34,(int)puVar7);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar5 = (int *)(local_2c + -0xc);
      if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_004193bd;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_004193bd:
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00419450;
    }
    operator_delete();
  }
LAB_00419450:
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041946c  FUN_0041946c   (359 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0041946c(LPCSTR param_1)

{
  uint iSize;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  char local_4b4;
  char local_4b3;
  char local_4b2;
  uint local_b4;
  undefined4 local_b0;
  undefined2 local_a0;
  int local_94;
  int local_8c [34];
  
  __InitExceptBlockLDTC(0x477ca4);
  local_a0 = 8;
  FUN_0045b958(local_8c,0,param_1,6,0x1b6);
  local_94 = local_94 + 8;
  local_a0 = 0x14;
  if (*(int *)(local_8c[0] + 0x30) == 0) {
    FUN_0045f1c0(local_8c,&local_4b4,0x400);
    iSize = FUN_0045f178((int)local_8c);
    if (iSize == 0) {
      uVar1 = 1;
      local_94 = local_94 + -8;
      std::basic_ifstream_char::_dtor(local_8c,2);
      *in_FS_OFFSET = local_b0;
    }
    else {
      local_b4 = 0x1088;
      IsTextUnicode(&local_4b4,iSize,(LPINT)&local_b4);
      if (((local_b4 & 0x1088) == 0) &&
         ((((iSize < 3 || (local_4b4 != -0x11)) || (local_4b3 != -0x45)) || (local_4b2 != -0x41))))
      {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      local_94 = local_94 + -8;
      std::basic_ifstream_char::_dtor(local_8c,2);
      *in_FS_OFFSET = local_b0;
    }
  }
  else {
    uVar1 = 0;
    std::basic_ifstream_char::_dtor(local_8c,2);
    *in_FS_OFFSET = local_b0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419664  FUN_00419664   (344 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00419664(LPCSTR param_1,char *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  int local_554 [256];
  undefined4 local_154;
  byte local_104 [256];
  
  *param_4 = 0;
  piVar1 = fopen(param_1,&DAT_004776f8);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    pbVar6 = local_104;
    do {
      *pbVar6 = (byte)uVar3;
      uVar3 = uVar3 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar3 < 0x100);
    while (puVar4 = FUN_00469618(&local_154,0x50,piVar1), puVar4 != (undefined4 *)0x0) {
      *param_4 = *param_4 + 1;
      pcVar8 = thunk_FUN_004676d0((char *)&local_154,'\n');
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      pcVar8 = strlen(&local_154);
      if ((((int)pcVar8 < 2) || (3 < (int)pcVar8)) || (GH_PIECE(local_154, 1, undefined1) != '=')) {
        FUN_00469508(piVar1);
        return 0;
      }
      if (pcVar8 == (char *)0x2) {
        local_104[(byte)local_154] = 0;
      }
      else {
        local_104[(byte)local_154] = GH_PIECE(local_154, 2, undefined1);
      }
    }
    FUN_00469508(piVar1);
    uVar3 = 0;
    pcVar8 = param_2;
    do {
      uVar7 = 0;
      piVar1 = local_554;
      do {
        *piVar1 = 0;
        uVar7 = uVar7 + 1;
        piVar1 = piVar1 + 1;
        uVar5 = uVar3;
      } while (uVar7 < 0x100);
      for (; ((char)uVar5 != '\0' && (local_554[uVar5 & 0xff] == 0));
          uVar5 = (uint)local_104[uVar5 & 0xff]) {
        local_554[uVar5 & 0xff] = 1;
      }
      if (uVar3 < param_3) {
        *pcVar8 = (char)uVar5;
      }
      uVar3 = uVar3 + 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar3 < 0x100);
    *param_2 = '\0';
    param_2[10] = '\0';
    param_2[0xd] = '\0';
    uVar2 = 1;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004198b4  FUN_004198b4   (201 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_004198b4(int *param_1,int param_2,int param_3,int param_4)

{
  HKEY hKey;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x477d3c);
  *param_1 = param_3;
  param_1[1] = 0;
  while( true ) {
    if (param_4 == 0) {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    local_18 = 8;
    if (*param_1 == 1) {
      iVar1 = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,"Position" + 8,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(param_1 + 1),&local_2c);
    }
    else {
      iVar1 = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(param_1 + 1));
    }
    if (iVar1 == 0) break;
    if (param_4 == 0) {
      param_1[1] = 0;
      *in_FS_OFFSET = local_28;
LAB_0041996b:
      *in_FS_OFFSET = local_28;
      return param_1;
    }
    param_4 = 0;
  }
  *in_FS_OFFSET = local_28;
  goto LAB_0041996b;
}

} // namespace tea
