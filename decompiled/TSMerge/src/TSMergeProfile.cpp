// TSMerge.exe — application module "TSMergeProfile"
// 12 functions, 0x0040bf28..0x0040e920. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040bf28  TSMergeProfile::~TSMergeProfile   (555 bytes)   [rtti:dtor destructor]
//   written in code as TSMergeProfile::_dtor
void __cdecl TSMergeProfile::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4634b8);
  if (param_1 == 0) goto LAB_0040c143;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x40) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x40) + -0xc);
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
      if (iVar1 != 0) goto LAB_0040bfc9;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_0040bfc9:
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x30) + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c03d;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_0040c03d:
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x20) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x20) + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c0b1;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
LAB_0040c0b1:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c133;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0040c133:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0040c143:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c154  FUN_0040c154   (1183 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040c154(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_cc;
  undefined1 *local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined1 *local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined4 local_80;
  undefined2 local_70;
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x46356c);
  local_70 = 8;
  FUN_0040e920(local_c,0x4768ac,0,0);
  iVar1 = param_1 + 0x18;
  local_64 = local_64 + 1;
  local_70 = 0x20;
  std::string::string_from_cstr((int)local_1c,(uint *)"MergePrimaryInput");
  local_64 = local_64 + 1;
  Persist::QueryValueSized((int)local_c,(int)local_1c,iVar1);
  local_64 = local_64 + -1;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c25c;
    }
    local_8c = local_14 + -0xc;
    local_90 = local_14 + -0xc;
    operator_delete();
    local_94 = 0;
    local_98 = local_1c;
    local_14 = 0;
  }
LAB_0040c25c:
  iVar1 = param_1 + 0x28;
  local_70 = 0x38;
  std::string::string_from_cstr((int)local_2c,(uint *)"MergeSecondaryInput");
  local_64 = local_64 + 1;
  Persist::QueryValueSized((int)local_c,(int)local_2c,iVar1);
  local_64 = local_64 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c32a;
    }
    local_a4 = local_24 + -0xc;
    local_a8 = local_24 + -0xc;
    operator_delete();
    local_ac = 0;
    local_b0 = local_2c;
    local_24 = 0;
  }
LAB_0040c32a:
  iVar1 = param_1 + 0x38;
  local_70 = 0x50;
  std::string::string_from_cstr((int)local_3c,(uint *)"MergeOutput");
  local_64 = local_64 + 1;
  Persist::QueryValueSized((int)local_c,(int)local_3c,iVar1);
  local_64 = local_64 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c3f8;
    }
    local_bc = local_34 + -0xc;
    local_c0 = local_34 + -0xc;
    operator_delete();
    local_c4 = 0;
    local_c8 = local_3c;
    local_34 = 0;
  }
LAB_0040c3f8:
  piVar2 = &local_cc;
  local_cc = 0;
  local_70 = 0x68;
  std::string::string_from_cstr((int)local_4c,(uint *)"MergeOperation");
  local_64 = local_64 + 1;
  Persist::QueryValue((int)local_c,(int)local_4c,piVar2);
  local_64 = local_64 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c4d1;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_0040c4d1:
  *(int *)(param_1 + 0x10) = local_cc % 5;
  local_cc = 0;
  piVar2 = &local_cc;
  local_70 = 0x80;
  std::string::string_from_cstr((int)local_5c,(uint *)"MergeConversion");
  local_64 = local_64 + 1;
  Persist::QueryValue((int)local_c,(int)local_5c,piVar2);
  local_64 = local_64 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c5bb;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_0040c5bb:
  local_70 = 0x14;
  *(int *)(param_1 + 0x14) = local_cc % 5;
  local_64 = local_64 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_80;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040c638  FUN_0040c638   (1110 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040c638(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_80;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x463674);
  FUN_0040e920(local_c,0x4768ac,1,0);
  iVar1 = param_1 + 0x18;
  std::string::string_from_cstr((int)local_1c,(uint *)"MergePrimaryInput");
  FUN_0040eaf8((int)local_c,(int)local_1c,iVar1);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c740;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_0040c740:
  iVar1 = param_1 + 0x28;
  std::string::string_from_cstr((int)local_2c,(uint *)"MergeSecondaryInput");
  FUN_0040eaf8((int)local_c,(int)local_2c,iVar1);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c80e;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_0040c80e:
  iVar1 = param_1 + 0x38;
  std::string::string_from_cstr((int)local_3c,(uint *)"MergeOutput");
  FUN_0040eaf8((int)local_c,(int)local_3c,iVar1);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c8dc;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_0040c8dc:
  std::string::string_from_cstr((int)local_4c,(uint *)"MergeOperation");
  FUN_0040eb28((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040c9aa;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_0040c9aa:
  std::string::string_from_cstr((int)local_5c,(uint *)"MergeConversion");
  FUN_0040eb28((int)local_c,(int)local_5c);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
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
      if (iVar1 != 0) goto LAB_0040ca68;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_0040ca68:
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_80;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ca90  FUN_0040ca90   (3505 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040cc2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0040ca90(int param_1,int param_2)

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
  
  __InitExceptBlockLDTC(0x463a50);
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
    if (local_dc != &DAT_00471d5c) {
      *local_dc = *local_dc + 1;
    }
  }
  local_fc = 0;
  local_104 = local_24;
  local_100 = &DAT_00471d68;
  local_1c = &DAT_00471d68;
  local_270 = &DAT_00471d68;
  local_ac = local_ac + 2;
  local_b8 = 8;
  local_10c = 0;
  while( true ) {
    uVar4 = (*(uint *)&DAT_00471f90);
    if ((uint)local_c[-1] < (*(uint *)&DAT_00471f90)) {
      uVar4 = local_c[-1];
    }
    local_110 = FUN_00403134((char *)local_c,'\\',uVar4);
    local_108 = (*(uint *)&DAT_00471f90);
    if (local_110 != (char *)0x0) {
      local_108 = (int)local_110 - (int)local_c;
    }
    if (local_108 == 0xffffffff) break;
    if (local_108 < local_c[-1] - 1U) {
      if (local_10c != 0) {
        pcVar1 = strlen((uint *)&DAT_004638d7);
        FUN_0044d5c8((int)local_24,0,0,0x4638d7,(uint)pcVar1,0,(uint)pcVar1);
      }
      hFindFile = FindFirstFileA((LPCSTR)local_c,&local_3b8);
      local_b8 = 8;
      if (hFindFile == (HANDLE)0xffffffff) {
        local_b8 = 0x68;
        FUN_0040d844(param_1,(int)local_14,(int)local_24);
        local_b8 = 0x74;
        local_ac = local_ac + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar3 = (int *)(local_1c + -0xc);
            if (piVar3 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (piVar3 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *piVar3 = *piVar3 + -1;
              iVar2 = *piVar3 + 1;
            }
            if (iVar2 != 0) goto LAB_0040cf15;
          }
          local_144 = local_1c + -0xc;
          local_148 = local_1c + -0xc;
          operator_delete();
          local_14c = 0;
          local_150 = local_24;
          local_1c = (undefined *)0x0;
          local_3e0 = 0;
        }
LAB_0040cf15:
        local_ac = local_ac + -1;
        if (local_c != (int *)0x0) {
          if (local_c[-3] != -1) {
            local_154 = local_c + -3;
            if (local_154 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_154 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_154 = *local_154 + -1;
              iVar2 = *local_154 + 1;
            }
            if (iVar2 != 0) goto LAB_0040cfc1;
          }
          local_158 = local_c + -3;
          local_15c = local_c + -3;
          operator_delete();
        }
LAB_0040cfc1:
        *in_FS_OFFSET = local_c8;
        return param_1;
      }
      FindClose(hFindFile);
      local_b8 = 0x44;
      puVar11 = local_24;
      iVar2 = std::string::string_from_cstr((int)local_34,(uint *)local_3b8.cFileName);
      local_ac = local_ac + 1;
      FUN_0040d844((int)local_44,iVar2,(int)puVar11);
      local_ac = local_ac + 1;
      FUN_0044ce78((int)local_24,(int)local_44);
      local_ac = local_ac + -1;
      if (local_3c != 0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_11c = (int *)(local_3c + -0xc);
          if (local_11c == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_11c == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_11c = *local_11c + -1;
            iVar2 = *local_11c + 1;
          }
          if (iVar2 != 0) goto LAB_0040cda3;
        }
        local_120 = local_3c + -0xc;
        local_124 = local_3c + -0xc;
        operator_delete();
        local_128 = 0;
        local_12c = local_44;
        local_3c = 0;
        local_3c0 = 0;
      }
LAB_0040cda3:
      local_b8 = 8;
      local_ac = local_ac + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          local_130 = (int *)(local_2c + -0xc);
          if (local_130 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_130 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar2 = *local_130 + 1;
          }
          if (iVar2 != 0) goto LAB_0040cfd9;
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
LAB_0040cfd9:
    uVar4 = local_108;
    if ((*(uint *)&DAT_00471f90) - 0xe < local_108) {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 1;
      puVar6 = &LAB_00402ee0;
      uVar5 = 0;
      local_b8 = 0xa4;
      local_168 = (uint *)FUN_00455640(local_4e8,PTR_s_invalid_string_size_parameter_in_00474068);
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
        if (local_180 != &DAT_00471d5c) {
          *local_180 = *local_180 + 1;
        }
      }
      local_b8 = 0xa4;
      local_5c[0] = &std::length_error::vftable;
      local_ac = local_ac + 2;
      if (local_7c != (int *)0x0) {
        if (local_7c[-3] != -1) {
          local_1a0 = local_7c + -3;
          if (local_1a0 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else if (local_1a0 == &DAT_00471d5c) {
            iVar2 = 1;
          }
          else {
            *local_1a0 = *local_1a0 + -1;
            iVar2 = *local_1a0 + 1;
          }
          if (iVar2 != 0) goto LAB_0040d233;
        }
        local_1a4 = local_7c + -3;
        local_1a8 = local_7c + -3;
        operator_delete();
        local_1ac = 0;
        local_1b0 = local_84;
        local_7c = (int *)0x0;
        local_510 = 0;
      }
LAB_0040d233:
      local_b8 = 0x98;
      FUN_0045ed74((uint *)&DAT_00402e84,(undefined4*)local_5c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
    }
    if (uVar4 < (uint)local_c[-1]) {
      local_1b4 = local_c[-1] - uVar4;
      if ((uint)local_c[-1] < uVar4) {
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 1;
        puVar6 = &LAB_00403038;
        uVar5 = 0;
        local_b8 = 0xd4;
        local_1b8 = (uint *)FUN_00455640(local_608,PTR_s_string_index_out_of_range_in_fun_00474074);
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
          if (local_1d0 != &DAT_00471d5c) {
            *local_1d0 = *local_1d0 + 1;
          }
        }
        local_b8 = 0xd4;
        local_74[0] = &std::out_of_range::vftable;
        local_ac = local_ac + 2;
        if (local_8c != (int *)0x0) {
          if (local_8c[-3] != -1) {
            local_1f0 = local_8c + -3;
            if (local_1f0 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else if (local_1f0 == &DAT_00471d5c) {
              iVar2 = 1;
            }
            else {
              *local_1f0 = *local_1f0 + -1;
              iVar2 = *local_1f0 + 1;
            }
            if (iVar2 != 0) goto LAB_0040d4d6;
          }
          local_1f4 = local_8c + -3;
          local_1f8 = local_8c + -3;
          operator_delete();
          local_1fc = 0;
          local_200 = local_94;
          local_8c = (int *)0x0;
        }
LAB_0040d4d6:
        local_b8 = 0x98;
        FUN_0045ed74((uint *)&DAT_00402fdc,(undefined4*)local_74,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
      }
      local_204 = local_c[-1] - uVar4;
      local_205 = 0;
      local_20c = local_204;
      if (local_1b4 < local_204) {
        local_20c = local_1b4;
      }
      FUN_0044d5c8((int)local_14,uVar4,local_20c,(uint)&local_205,0,0,0);
    }
    else {
      std::string::replace_fill((int)local_14,local_c[-1],0,uVar4 - local_c[-1],0);
    }
    if (local_c + -3 != &DAT_00471d5c) {
      local_c[-3] = 0;
    }
    local_10c = 1;
  }
  local_b8 = 0x104;
  puVar11 = local_24;
  FUN_0040dac4((int)local_a4,(int)local_14);
  local_ac = local_ac + 1;
  FUN_0040d844(param_1,(int)local_a4,(int)puVar11);
  local_b8 = 0x110;
  local_ac = local_ac + -1;
  if (local_9c != 0) {
    if (*(int *)(local_9c + -0xc) != -1) {
      local_210 = (int *)(local_9c + -0xc);
      if (local_210 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (local_210 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *local_210 = *local_210 + -1;
        iVar2 = *local_210 + 1;
      }
      if (iVar2 != 0) goto LAB_0040d6cc;
    }
    local_214 = local_9c + -0xc;
    local_218 = local_9c + -0xc;
    operator_delete();
    local_21c = 0;
    local_220 = local_a4;
    local_9c = 0;
  }
LAB_0040d6cc:
  local_ac = local_ac + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      local_224 = (int *)(local_1c + -0xc);
      if (local_224 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (local_224 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *local_224 = *local_224 + -1;
        iVar2 = *local_224 + 1;
      }
      if (iVar2 != 0) goto LAB_0040d77b;
    }
    local_228 = local_1c + -0xc;
    local_22c = local_1c + -0xc;
    operator_delete();
    local_230 = 0;
    local_234 = local_24;
    local_1c = (undefined *)0x0;
  }
LAB_0040d77b:
  local_ac = local_ac + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_238 = local_c + -3;
      if (local_238 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (local_238 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *local_238 = *local_238 + -1;
        iVar2 = *local_238 + 1;
      }
      if (iVar2 != 0) goto LAB_0040d827;
    }
    local_23c = local_c + -3;
    local_240 = local_c + -3;
    operator_delete();
  }
LAB_0040d827:
  *in_FS_OFFSET = local_c8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040d844  FUN_0040d844   (638 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040d844(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x463bbc);
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
    if (piVar4 != &DAT_00471d5c) {
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
    if (piVar4 != &DAT_00471d5c) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040daa7;
    }
    operator_delete();
  }
LAB_0040daa7:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040dac4  FUN_0040dac4   (899 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0040dac4(int param_1,int param_2)

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
  
  __InitExceptBlockLDTC(0x463c38);
  local_c = 0;
  FUN_00452210((int)local_14,1);
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
    if (piVar3 != &DAT_00471d5c) {
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
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0040dd7d;
    }
    operator_delete();
    local_c = 0;
  }
LAB_0040dd7d:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_0040de2c;
    }
    operator_delete();
  }
LAB_0040de2c:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040de48  FUN_0040de48   (153 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040de5f) */
bool __cdecl FUN_0040de48(int param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  pcVar1 = thunk_memchr(*(char **)(param_1 + 8),':',*(int *)(*(int *)(param_1 + 8) + -4));
  iVar2 = DAT_00471f90;
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
// 0x0040dee4  GetProgramDirectory   (362 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040909c. GetModuleFileNameA, truncated after the last backslash
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040e02e) */
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
  
  __InitExceptBlockLDTC(0x463cd0);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_154,0x104);
  *(undefined1 *)((int)local_154 + DVar1) = 0;
  puVar2 = thunk_strrchr(local_154,'\\');
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined **)(param_1 + 8) = &DAT_00471d68;
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_28 = 8;
  iVar3 = FUN_0044f6d0((int)local_14,local_154,(int)puVar2 + (1 - (int)local_154));
  local_1c = local_1c + 1;
  FUN_0040ca90(param_1,iVar3);
  local_28 = 0x14;
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00471d5c) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040dfe5;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0040dfe5:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e050  FUN_0040e050   (791 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040e091) */
int __cdecl FUN_0040e050(int param_1)

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
  
  __InitExceptBlockLDTC(0x463d64);
  local_c = (undefined4 *)&DAT_00471d68;
  local_98 = &DAT_00471d68;
  local_2c = local_2c + 1;
  local_38 = 0x20;
  HVar2 = SHGetMalloc(&local_4c);
  if (HVar2 == 0) {
    This = (IMalloc *)SHGetSpecialFolderLocation((HWND)0x0,5,&local_50);
    if (This == (IMalloc *)0x0) {
      BVar3 = SHGetPathFromIDListA(local_50,(LPSTR)local_1a4);
      if (BVar3 != 0) {
        FUN_0044cf10((int)local_14,local_1a4);
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
    FUN_0044ce78((int)local_14,(int)local_24);
    local_2c = local_2c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00471d5c) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_0040e1f9;
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
      FUN_0045143c((int)local_14);
    }
    if (local_c + -3 != &DAT_00471d5c) {
      local_c[-3] = 0xffffffff;
    }
    if (*(char *)((int)local_c + iVar4 + -1) != '\\') {
      std::string::replace_fill((int)local_14,local_c[-1],0,1,0x5c);
    }
  }
LAB_0040e1f9:
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
    if (piVar5 != &DAT_00471d5c) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_38 = 0x5c;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0040e34c;
    }
    local_84 = local_c + -3;
    local_88 = local_c + -3;
    operator_delete();
  }
LAB_0040e34c:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e368  FUN_0040e368   (1103 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0040e368(int param_1,int param_2)

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
  
  __InitExceptBlockLDTC(0x463e44);
  if ((*(int *)(*(int *)(param_2 + 8) + -4) == 0) ||
     (bVar1 = FUN_0040de48(param_2), CONCAT31(extraout_var,bVar1) == 0)) {
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
      if (piVar5 != &DAT_00471d5c) {
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
    if (piVar5 != &DAT_00471d5c) {
      *piVar5 = *piVar5 + 1;
    }
  }
  iVar4 = local_c[-1];
LAB_0040e615:
  do {
    if (iVar4 == 0) break;
    uVar6 = iVar4 - 1;
    if ((uint)local_c[-1] < uVar6) {
      uVar6 = local_c[-1];
    }
    pcVar3 = FUN_00403134((char *)local_c,';',uVar6);
    iVar4 = DAT_00471f90;
    if (pcVar3 != (char *)0x0) {
      iVar4 = (int)pcVar3 - (int)local_c;
    }
    if (iVar4 == -1) break;
    GetProgramDirectory((int)local_24);
    FUN_00451b84((int)local_14,iVar4 + 1,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00471d5c) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0040e615;
      }
      operator_delete();
      local_1c = 0;
    }
  } while( true );
  puVar7 = local_14;
  GetProgramDirectory((int)local_34);
  FUN_0040d844(param_1,(int)local_34,(int)puVar7);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar5 = (int *)(local_2c + -0xc);
      if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0040e709;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_0040e709:
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00471d5c) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0040e79c;
    }
    operator_delete();
  }
LAB_0040e79c:
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040e7b8  FUN_0040e7b8   (359 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0040e7b8(LPCSTR param_1)

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
  
  __InitExceptBlockLDTC(0x463ef0);
  local_a0 = 8;
  FUN_0044ecfc(local_8c,0,param_1,6,0x1b6);
  local_94 = local_94 + 8;
  local_a0 = 0x14;
  if (*(int *)(local_8c[0] + 0x30) == 0) {
    FUN_00451098(local_8c,&local_4b4,0x400);
    iSize = FUN_00451050((int)local_8c);
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
// 0x0040e920  FUN_0040e920   (201 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0040e920(int *param_1,int param_2,int param_3,int param_4)

{
  HKEY hKey;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x463f88);
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
LAB_0040e9d7:
      *in_FS_OFFSET = local_28;
      return param_1;
    }
    param_4 = 0;
  }
  *in_FS_OFFSET = local_28;
  goto LAB_0040e9d7;
}

} // namespace tea
