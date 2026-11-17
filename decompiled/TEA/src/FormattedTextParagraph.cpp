// TEA.exe — application module "FormattedTextParagraph"
// 33 functions, 0x0048209c..0x00485a4c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048209c  FormattedTextParagraph::~FormattedTextParagraph   (178 bytes)   [rtti:dtor destructor]
//   written in code as FormattedTextParagraph::_dtor
void __cdecl FormattedTextParagraph::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x502fc4);
  if (param_1 != 0) {
    for (piVar1 = *(int **)(param_1 + 0xa4); piVar1 < *(int **)(param_1 + 0xa8); piVar1 = piVar1 + 1
        ) {
      if (*piVar1 != 0) {
        FormattedTextSegment::_dtor(*piVar1,3);
      }
    }
    FUN_004803d8(param_1 + 0xa0,*(int *)(param_1 + 0xa4),*(int *)(param_1 + 0xa8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482150  FUN_00482150   (1164 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00482150(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x50306c);
  std::string::string_from_cstr((int)local_14,(uint *)&DAT_00501d63 /* "\red" */);
  FUN_00437bd4((int)local_24);
  std::string::append((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00482231;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_00482231:
  uVar1 = local_c[-1];
  pcVar3 = strlen((uint *)"\\green");
  FUN_004cfad4((int)local_14,uVar1,0,0x501d95,(uint)pcVar3,0,(uint)pcVar3);
  FUN_00437bd4((int)local_34);
  std::string::append((int)local_14,(int)local_34);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar4 = (int *)(local_2c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_00482320;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_00482320:
  uVar1 = local_c[-1];
  pcVar3 = strlen((uint *)"\\blue");
  FUN_004cfad4((int)local_14,uVar1,0,0x501d9c,(uint)pcVar3,0,(uint)pcVar3);
  FUN_00437bd4((int)local_44);
  std::string::append((int)local_14,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar4 = (int *)(local_3c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0048240f;
    }
    operator_delete();
    local_3c = 0;
  }
LAB_0048240f:
  std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004825c1;
    }
    operator_delete();
  }
LAB_004825c1:
  *in_FS_OFFSET = local_68;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004825dc  FUN_004825dc   (733 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004825dc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x503154);
  std::string::string_from_cstr((int)local_14,(uint *)"\\fcharset");
  FUN_00437bd4((int)local_24);
  std::string::append((int)local_14,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_004826b8;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_004826b8:
  std::string::replace_fill((int)local_14,local_c[-1],0,1,0x20);
  if (((*(byte *)(param_2 + 7) & 0x20) == 0) || (*(char *)(param_2 + 0x1a) == '\0')) {
    uVar1 = local_c[-1];
    pcVar3 = strlen((uint *)"System;");
    FUN_004cfad4((int)local_14,uVar1,0,0x501dc0,(uint)pcVar3,0,(uint)pcVar3);
  }
  else {
    uVar1 = local_c[-1];
    pcVar3 = strlen((uint *)(param_2 + 0x1a));
    FUN_004cfad4((int)local_14,uVar1,0,(uint)(param_2 + 0x1a),(uint)pcVar3,0,(uint)pcVar3);
    std::string::replace_fill((int)local_14,local_c[-1],0,1,0x3b);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar4 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar4 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4 + 1;
      }
      if (iVar2 != 0) goto LAB_0048289e;
    }
    operator_delete();
  }
LAB_0048289e:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004828bc  FUN_004828bc   (74 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004828bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  while ((param_1 != param_2 &&
         (uVar1 = FUN_004d40d0(param_1,0,*(uint *)(*(int *)(param_1 + 8) + -4),
                               *(byte **)(param_3 + 8),*(uint *)(*(int *)(param_3 + 8) + -4)),
         uVar1 != 0))) {
    param_1 = param_1 + 0x10;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482908  FUN_00482908   (342 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00482908(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5031cc);
  iVar3 = FUN_004828bc(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),param_2);
  iVar5 = iVar3 - *(int *)(param_1 + 0x14);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x28)) {
      FUN_0040e240(param_1 + 0x10,*(int *)(param_1 + 0x18),param_2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
        iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
        if (iVar1 == -1 || iVar1 + 1 < 0) {
          uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
          piVar4 = std::string::__getRep(iVar3,uVar2,uVar2);
          *(int **)(iVar3 + 8) = piVar4 + 3;
          memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
        }
        else {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
          piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (piVar4 != &DAT_00513d58) {
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x10;
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar5 >> 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482a60  FUN_00482a60   (342 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00482a60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x503208);
  iVar3 = FUN_004828bc(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x38),param_2);
  iVar5 = iVar3 - *(int *)(param_1 + 0x34);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xf;
  }
  if (iVar3 == *(int *)(param_1 + 0x38)) {
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x48)) {
      FUN_0040e240(param_1 + 0x30,*(int *)(param_1 + 0x38),param_2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 8) = 0;
        iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
        if (iVar1 == -1 || iVar1 + 1 < 0) {
          uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
          piVar4 = std::string::__getRep(iVar3,uVar2,uVar2);
          *(int **)(iVar3 + 8) = piVar4 + 3;
          memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),uVar2);
        }
        else {
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
          piVar4 = (int *)(*(int *)(iVar3 + 8) + -0xc);
          if (piVar4 != &DAT_00513d58) {
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x10;
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar5 >> 4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482bb8  FUN_00482bb8   (35 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00482bb8(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004dcac0(*(byte **)(param_1 + 8),(byte *)"{\\rtf1",6);
  return uVar1 == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00482bdc  FUN_00482bdc   (3058 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00482dfd) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00482bdc(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_43c [248];
  undefined4 local_344;
  int *local_334;
  undefined1 local_31c [248];
  undefined *local_224;
  undefined4 local_214;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  int *local_1ec;
  undefined4 *local_1e8;
  undefined4 *local_1e4;
  uint local_1e0;
  int local_1dc;
  int *local_1d8;
  int *local_1d4;
  uint local_1d0;
  int *local_1cc;
  int local_1c8;
  undefined4 *local_1c4;
  undefined4 local_1c0;
  undefined1 *local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  int local_1b0;
  int *local_1ac;
  uint local_1a8;
  char *local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  char *local_194;
  char *local_190;
  uint local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *local_174;
  uint local_170;
  undefined1 *local_16c;
  int *local_168;
  int *local_164;
  uint local_160;
  int *local_15c;
  undefined1 *local_158;
  int *local_154;
  undefined4 local_150;
  uint *local_144;
  char *local_140;
  uint local_13c;
  uint local_138;
  undefined1 *local_134;
  undefined4 local_130;
  int *local_12c;
  int *local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  uint local_118;
  undefined1 *local_114;
  int *local_110;
  int *local_10c;
  uint local_108;
  int *local_104;
  undefined1 *local_100;
  int *local_fc;
  undefined4 local_f8;
  uint *local_ec;
  uint local_e8;
  undefined1 *local_e4;
  undefined *local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  uint local_cc;
  int local_c8;
  int *local_c4;
  int *local_c0;
  uint local_bc;
  undefined4 local_ac;
  int local_a8;
  uint *local_a4;
  undefined **local_a0;
  char *local_9c;
  undefined4 local_98;
  undefined2 local_88;
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined **local_54 [2];
  undefined1 local_4c [8];
  int *local_44;
  undefined1 local_3c [8];
  int *local_34;
  undefined **local_2c [2];
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x5032ec);
  if (param_3 == 2) {
    local_9c = &DAT_00501e72 /* "&<>"" */;
    local_a0 = &PTR_s_refamp_00501810;
    local_a4 = (uint *)&DAT_00501c9b /* "<br>" */;
  }
  else {
    if (param_3 != 3) {
      local_88 = 8;
      local_a8 = param_2;
      local_ac = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      iVar4 = *(int *)(*(int *)(param_2 + 8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        local_bc = *(uint *)(*(int *)(param_2 + 8) + -4);
        local_c4 = std::string::__getRep(param_1,local_bc,local_bc);
        local_c0 = local_c4 + 3;
        *(int **)(param_1 + 8) = local_c0;
        local_c8 = param_1;
        local_214 = *(undefined4 *)(param_1 + 8);
        local_cc = local_bc;
        local_d0 = *(undefined4 **)(local_a8 + 8);
        local_d4 = *(undefined4 **)(param_1 + 8);
        memcpy(local_d4,local_d0,local_bc);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar2 != &DAT_00513d58) {
          *piVar2 = *piVar2 + 1;
        }
      }
      *in_FS_OFFSET = local_98;
      return param_1;
    }
    local_9c = &DAT_00501e8e;
    local_a0 = &PTR_DAT_00501820;
    local_a4 = (uint *)&DAT_00501c94;
  }
  local_d8 = *(uint *)(*(int *)(param_2 + 8) + -4);
  local_dc = 0;
  local_e4 = local_14;
  local_e0 = &DAT_00513d64;
  local_c = (undefined4 *)&DAT_00513d64;
  local_224 = &DAT_00513d64;
  local_7c = local_7c + 1;
  local_88 = 0x38;
  local_e8 = local_d8 * 2;
  if (local_e8 <= DAT_005140ac - 0xe) goto LAB_004830aa;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar8 = 1;
  puVar6 = &LAB_00408370;
  uVar5 = 0;
  local_88 = 0x50;
  local_ec = (uint *)FUN_004dc320(local_31c,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)local_3c,local_ec);
  local_7c = local_7c + 2;
  local_2c[0] = &std::logic_error::vftable;
  local_f8 = 0;
  local_1c = (int *)0x0;
  local_88 = 0x5c;
  if (local_34[-3] == -1 || local_34[-3] + 1 < 0) {
    local_108 = local_34[-1];
    local_110 = std::string::__getRep(local_24,local_108,local_108);
    local_114 = local_24;
    local_334 = local_110 + 3;
    local_118 = local_108;
    local_11c = local_34;
    local_120 = local_334;
    local_10c = local_334;
    local_1c = local_334;
    memcpy(local_334,local_34,local_108);
  }
  else {
    local_100 = local_24;
    local_fc = local_34;
    local_1c = local_34;
    local_104 = local_34 + -3;
    if (local_104 != &DAT_00513d58) {
      *local_104 = *local_104 + 1;
    }
  }
  local_88 = 0x50;
  local_2c[0] = &std::length_error::vftable;
  local_7c = local_7c + 2;
  if (local_34 != (int *)0x0) {
    if (local_34[-3] != -1) {
      local_124 = local_34 + -3;
      if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_124 = *local_124 + -1;
        iVar4 = *local_124 + 1;
      }
      if (iVar4 != 0) goto LAB_00483090;
    }
    local_128 = local_34 + -3;
    local_12c = local_34 + -3;
    operator_delete();
    local_130 = 0;
    local_134 = local_3c;
    local_34 = (int *)0x0;
    local_344 = 0;
  }
LAB_00483090:
  local_88 = 0x44;
  FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_2c,uVar5,puVar6,uVar8,uVar10,uVar11,uVar12);
LAB_004830aa:
  if ((uint)local_c[-2] < local_e8) {
    FUN_004d6d58((int)local_14,local_e8);
  }
  local_88 = 0x38;
  uVar8 = 0;
  do {
    local_140 = local_9c;
    local_13c = uVar8;
    if (local_9c == (char *)0x0) {
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 1;
      pcVar7 = FUN_0041e688;
      uVar5 = 0;
      local_88 = 0x8c;
      local_144 = (uint *)FUN_004dc320(local_43c,PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
      std::string::string_from_cstr((int)local_64,local_144);
      local_7c = local_7c + 2;
      local_54[0] = &std::logic_error::vftable;
      local_150 = 0;
      local_44 = (int *)0x0;
      local_88 = 0x98;
      if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
        local_160 = local_5c[-1];
        local_168 = std::string::__getRep(local_4c,local_160,local_160);
        local_16c = local_4c;
        local_178 = local_168 + 3;
        local_170 = local_160;
        local_174 = local_5c;
        local_164 = local_178;
        local_44 = local_178;
        memcpy(local_178,local_5c,local_160);
      }
      else {
        local_158 = local_4c;
        local_154 = local_5c;
        local_44 = local_5c;
        local_15c = local_5c + -3;
        if (local_15c != &DAT_00513d58) {
          *local_15c = *local_15c + 1;
        }
      }
      local_88 = 0x8c;
      local_7c = local_7c + 1;
      if (local_5c != (int *)0x0) {
        if (local_5c[-3] != -1) {
          piVar2 = local_5c + -3;
          if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2 + 1;
          }
          if (iVar4 != 0) goto LAB_00483316;
        }
        local_17c = local_5c + -3;
        local_180 = local_5c + -3;
        operator_delete();
        local_184 = 0;
        local_188 = local_64;
        local_5c = (int *)0x0;
      }
LAB_00483316:
      local_88 = 0x80;
      FUN_004e7cc4((uint *)&DAT_004113dc,(undefined4*)local_54,uVar5,(undefined*)pcVar7,uVar9,uVar10,uVar11,uVar12);
    }
    uVar9 = DAT_005140ac;
    if (local_13c <= *(uint *)(*(int *)(param_2 + 8) + -4)) {
      local_190 = (char *)(*(int *)(param_2 + 8) + local_13c);
      iVar4 = FUN_004dcb98(local_190,local_140);
      local_18c = iVar4 + local_13c;
      uVar9 = local_18c;
      if (*(uint *)(*(int *)(param_2 + 8) + -4) <= local_18c) {
        uVar9 = DAT_005140ac;
      }
    }
    local_138 = uVar9;
    if (uVar9 == 0xffffffff) break;
    if (uVar8 < uVar9) {
      FUN_004d5850((int)local_14,param_2,uVar8,uVar9 - uVar8);
    }
    local_198 = local_138;
    local_194 = thunk_FUN_004dc924(local_9c,*(char *)(*(int *)(param_2 + 8) + local_138));
    local_88 = 0x38;
    puVar1 = (uint *)local_a0[(int)local_194 - (int)local_9c];
    local_19c = local_c[-1];
    pcVar3 = strlen(puVar1);
    FUN_004cfad4((int)local_14,local_19c,0,(uint)puVar1,(uint)pcVar3,0,(uint)pcVar3);
    uVar8 = local_138 + 1;
  } while( true );
  if (uVar8 < local_d8) {
    FUN_004d5850((int)local_14,param_2,uVar8,local_d8 - uVar8);
  }
  uVar8 = local_c[-1];
  while (uVar8 != 0) {
    local_1a0 = uVar8 - 1;
    local_1a4 = strlen((uint *)&DAT_00501c98);
    uVar8 = FUN_004d7cf0((int)local_14,&DAT_00501c98,local_1a0,(uint)local_1a4);
    puVar1 = local_a4;
    if (uVar8 == 0xffffffff) break;
    local_1a8 = uVar8;
    pcVar3 = strlen(local_a4);
    FUN_004cfad4((int)local_14,local_1a8,2,(uint)puVar1,(uint)pcVar3,0,(uint)pcVar3);
  }
  if (param_3 == 2) {
    local_88 = 0xbc;
    FUN_004837d0((int)local_74,(int)local_14);
    local_7c = local_7c + 1;
    FUN_004cf384((int)local_14,(int)local_74);
    local_7c = local_7c + -1;
    if (local_6c != 0) {
      if (*(int *)(local_6c + -0xc) != -1) {
        local_1ac = (int *)(local_6c + -0xc);
        if (local_1ac == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_1ac == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_1ac = *local_1ac + -1;
          iVar4 = *local_1ac + 1;
        }
        if (iVar4 != 0) goto LAB_004835cf;
      }
      local_1b0 = local_6c + -0xc;
      local_1b4 = local_6c + -0xc;
      operator_delete();
      local_1b8 = 0;
      local_1bc = local_74;
      local_6c = 0;
    }
  }
LAB_004835cf:
  local_88 = 0xd4;
  local_1c0 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    local_1d0 = local_c[-1];
    local_1d8 = std::string::__getRep(param_1,local_1d0,local_1d0);
    local_1d4 = local_1d8 + 3;
    *(int **)(param_1 + 8) = local_1d4;
    local_1dc = param_1;
    local_1e0 = local_1d0;
    local_1e4 = local_c;
    local_1e8 = *(undefined4 **)(param_1 + 8);
    memcpy(local_1e8,local_c,local_1d0);
  }
  else {
    local_1c4 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_1c8 = param_1;
    local_1cc = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_1cc != &DAT_00513d58) {
      *local_1cc = *local_1cc + 1;
    }
  }
  local_88 = 0xec;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      local_1ec = local_c + -3;
      if (local_1ec == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_1ec == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_1ec = *local_1ec + -1;
        iVar4 = *local_1ec + 1;
      }
      if (iVar4 != 0) goto LAB_004837ad;
    }
    local_1f0 = local_c + -3;
    local_1f4 = local_c + -3;
    operator_delete();
  }
LAB_004837ad:
  *in_FS_OFFSET = local_98;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004837d0  FUN_004837d0   (694 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004837d0(int param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x503430);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar4 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar4,uVar4);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_2 + 8),uVar4);
  }
  else {
    local_c = *(int **)(param_2 + 8);
    piVar5 = local_c + -3;
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  uVar4 = local_c[-1];
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    if (local_c[-3] != 0 && 0 < local_c[-3] + 1) {
      FUN_004d48d8((int)local_14);
    }
    if (local_c + -3 != &DAT_00513d58) {
      local_c[-3] = -1;
    }
    if ((0x7f < *(byte *)((int)local_c + uVar4)) &&
       (puVar1 = (uint *)(&PTR_s_refeuro_00501830)[*(byte *)((int)local_c + uVar4) - 0x80],
       puVar1 != (uint *)0x0)) {
      pcVar2 = strlen(puVar1);
      FUN_004cfad4((int)local_14,uVar4,1,(uint)puVar1,(uint)pcVar2,0,(uint)pcVar2);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar4 = local_c[-1];
    piVar5 = std::string::__getRep(param_1,uVar4,uVar4);
    *(int **)(param_1 + 8) = piVar5 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar4);
  }
  else {
    *(int **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_00483a6b;
    }
    operator_delete();
  }
LAB_00483a6b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00483a88  FUN_00483a88   (4326 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00484167) */
/* WARNING: Removing unreachable block (ram,0x00483c1f) */
/* WARNING: Removing unreachable block (ram,0x00483d0d) */
/* WARNING: Removing unreachable block (ram,0x00483cb9) */
/* WARNING: Removing unreachable block (ram,0x00483d00) */
/* WARNING: Removing unreachable block (ram,0x00483da4) */
/* WARNING: Removing unreachable block (ram,0x00483dc9) */
/* WARNING: Removing unreachable block (ram,0x00483dd4) */
/* WARNING: Removing unreachable block (ram,0x00483e14) */
/* WARNING: Removing unreachable block (ram,0x00483ded) */
/* WARNING: Removing unreachable block (ram,0x00483e0d) */
/* WARNING: Removing unreachable block (ram,0x00483dfa) */
/* WARNING: Removing unreachable block (ram,0x00483e19) */
/* WARNING: Removing unreachable block (ram,0x00483e1d) */
/* WARNING: Removing unreachable block (ram,0x00483e6b) */
/* WARNING: Removing unreachable block (ram,0x00483e8e) */
/* WARNING: Removing unreachable block (ram,0x0048447f) */
/* WARNING: Removing unreachable block (ram,0x00484588) */
/* WARNING: Removing unreachable block (ram,0x00484528) */
/* WARNING: Removing unreachable block (ram,0x0048457b) */
/* WARNING: Removing unreachable block (ram,0x00484619) */
/* WARNING: Removing unreachable block (ram,0x00484641) */
/* WARNING: Removing unreachable block (ram,0x0048464f) */
/* WARNING: Removing unreachable block (ram,0x00484676) */
/* WARNING: Removing unreachable block (ram,0x00484660) */
/* WARNING: Removing unreachable block (ram,0x0048466f) */
/* WARNING: Removing unreachable block (ram,0x00484668) */
/* WARNING: Removing unreachable block (ram,0x0048467b) */
/* WARNING: Removing unreachable block (ram,0x0048467f) */
/* WARNING: Removing unreachable block (ram,0x004846d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00483a88(HWND param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *local_a30;
  undefined4 local_a2c;
  code *local_a28;
  undefined4 local_a1c;
  undefined4 local_a0c;
  undefined4 local_8cc;
  undefined4 local_8bc;
  undefined4 local_8ac;
  undefined4 local_89c;
  uint local_7a4 [324];
  int *local_294;
  int *local_284;
  int *local_274;
  int *local_270;
  int *local_26c;
  LRESULT local_268;
  undefined1 *local_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  undefined1 *local_254;
  undefined4 local_250;
  int local_24c;
  int local_248;
  char *local_244;
  uint local_240;
  uint local_23c;
  int local_238;
  int local_234;
  char *local_230;
  char *local_22c;
  uint local_1e4;
  DWORD local_1e0;
  char *local_1dc;
  uint local_1d8;
  undefined1 *local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  undefined1 *local_1c4;
  int *local_1b8;
  char *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *local_19c;
  uint local_198;
  undefined4 local_194;
  int *local_190;
  int *local_18c;
  uint local_188;
  int *local_184;
  undefined4 local_180;
  int *local_17c;
  undefined4 local_178;
  uint *local_16c;
  int *local_168;
  char *local_164;
  uint local_114;
  int *local_110;
  undefined4 *local_10c;
  uint local_108;
  undefined1 *local_104;
  int *local_100;
  int *local_fc;
  uint local_f8;
  int *local_f4;
  undefined1 *local_f0;
  int *local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined2 local_d0;
  int local_c4;
  undefined1 local_94 [8];
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  int *local_5c;
  undefined **local_54;
  int *local_44;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x50357c);
  if (param_3 != 0) {
    SendMessageA(param_1,0x444,4,param_3);
  }
  bVar2 = FUN_00482bb8(param_2);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    SetWindowTextA(param_1,*(LPCSTR *)(param_2 + 8));
    goto LAB_00484b64;
  }
  local_d0 = 0x14;
  local_e4 = param_2;
  local_e8 = 0;
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    local_f8 = *(uint *)(*(int *)(param_2 + 8) + -4);
    local_100 = std::string::__getRep(local_14,local_f8,local_f8);
    local_104 = local_14;
    local_294 = local_100 + 3;
    local_108 = local_f8;
    local_10c = *(undefined4 **)(local_e4 + 8);
    local_110 = local_294;
    local_fc = local_294;
    local_c = local_294;
    memcpy(local_294,local_10c,local_f8);
  }
  else {
    local_284 = *(int **)(param_2 + 8);
    local_f0 = local_14;
    local_f4 = local_284 + -3;
    local_ec = local_284;
    local_c = local_284;
    if (local_f4 != &DAT_00513d58) {
      *local_f4 = *local_f4 + 1;
    }
  }
  local_c4 = local_c4 + 1;
  local_d0 = 8;
  if (param_3 != 0) {
    local_168 = local_c;
    local_164 = thunk_FUN_004dcd18((char *)local_c,"{\\fonttbl");
    local_114 = DAT_005140ac;
    if (local_164 != (char *)0x0) {
      local_114 = (int)local_164 - (int)local_c;
    }
    if (local_114 != 0xffffffff) {
      local_d0 = 8;
      uVar6 = 1;
      do {
        FUN_004e0344((undefined1 *)local_7a4,(byte *)"{\\f%d");
        if (&GHIDRA_STACK(0x00000000) == (undefined1 *)0x7a4) {
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 1;
          pcVar8 = FUN_0041e688;
          uVar7 = 0;
          local_d0 = 0x74;
          local_16c = (uint *)FUN_004dc320((undefined1 *)0xffffff10,
                                           PTR_s_unexpected_NULL_pointer_in_funct_00516d30);
          std::string::string_from_cstr(0x740,local_16c);
          local_c4 = local_c4 + 2;
          local_54 = &std::logic_error::vftable;
          local_178 = 0;
          local_44 = (int *)0x0;
          local_d0 = 0x80;
          if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
            local_188 = local_5c[-1];
            local_190 = std::string::__getRep(0x758,local_188,local_188);
            local_1a0 = local_190 + 3;
            local_194 = 0x758;
            local_8ac = uRam00000760;
            local_198 = local_188;
            local_19c = local_5c;
            local_18c = local_1a0;
            local_44 = local_1a0;
            memcpy(local_1a0,local_5c,local_188);
          }
          else {
            local_17c = local_5c;
            local_44 = local_5c;
            local_180 = 0x758;
            local_89c = uRam00000760;
            local_184 = local_5c + -3;
            if (local_184 != &DAT_00513d58) {
              *local_184 = *local_184 + 1;
            }
          }
          local_d0 = 0x74;
          local_c4 = local_c4 + 1;
          if (local_5c != (int *)0x0) {
            if (local_5c[-3] != -1) {
              piVar5 = local_5c + -3;
              if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar3 = *piVar5 + 1;
              }
              if (iVar3 != 0) goto LAB_00484144;
            }
            local_1a4 = local_5c + -3;
            local_1a8 = local_5c + -3;
            operator_delete();
            local_1ac = 0;
            local_5c = (int *)0x0;
            local_1b0 = 0x740;
            local_8bc = uRam00000748;
          }
LAB_00484144:
          local_d0 = 0x68;
          FUN_004e7cc4((uint *)&DAT_004113dc,(undefined4 *)0x750,uVar7,(undefined*)pcVar8,uVar9,uVar10,uVar11,
                       uVar12);
        }
        local_1b8 = local_c;
        local_1b4 = thunk_FUN_004dcd18((char *)local_c,(char *)local_7a4);
        uVar9 = DAT_005140ac;
        if (local_1b4 != (char *)0x0) {
          uVar9 = (int)local_1b4 - (int)local_c;
        }
        if (uVar9 == 0xffffffff) {
          local_d0 = 0xb0;
          std::string::string_from_cstr((int)local_74,local_7a4);
          local_c4 = local_c4 + 1;
          local_d0 = 0xbc;
          FUN_004825dc((int)local_94,param_3);
          local_1c4 = local_94;
          local_c4 = local_c4 + 1;
          std::string::append((int)local_74,(int)local_1c4);
          local_c4 = local_c4 + -1;
          if (local_8c != 0) {
            if (*(int *)(local_8c + -0xc) != -1) {
              piVar5 = (int *)(local_8c + -0xc);
              if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar3 = *piVar5 + 1;
              }
              if (iVar3 != 0) goto LAB_004842d2;
            }
            local_1c8 = local_8c + -0xc;
            local_1cc = local_8c + -0xc;
            operator_delete();
            local_1d0 = 0;
            local_1d4 = local_94;
            local_8c = 0;
            local_8cc = 0;
          }
LAB_004842d2:
          local_d0 = 0xa4;
          std::string::replace_fill((int)local_74,*(uint *)(local_6c + -4),0,1,0x7d);
          FUN_004d5a8c((int)local_14,local_114 + 9,(int)local_74);
          FUN_004e0344((undefined1 *)local_7a4,&DAT_005022c6 /* "\f%d" */);
          FUN_004cf41c((int)local_74,local_7a4);
          if ((*(byte *)(param_3 + 7) & 0x80) != 0) {
            FUN_004e0344((undefined1 *)local_7a4,(byte *)"\\fs%d");
            local_1d8 = *(uint *)(local_6c + -4);
            local_1dc = strlen(local_7a4);
            FUN_004cfad4((int)local_74,local_1d8,0,(uint)local_7a4,(uint)local_1dc,0,(uint)local_1dc
                        );
          }
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 1,*(uint *)(param_3 + 8) & 1,
                       (uint *)&DAT_00501ddc);
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 2,*(uint *)(param_3 + 8) & 2,
                       (uint *)&DAT_00501de7);
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 8,*(uint *)(param_3 + 8) & 8,
                       (uint *)"\\strike");
          FUN_0047c804((int)local_74,*(uint *)(param_3 + 4) & 4,*(uint *)(param_3 + 8) & 4,
                       (uint *)&DAT_00501dea /* "\ul" */);
          if (((*(byte *)(param_3 + 7) & 0x40) == 0) || ((*(byte *)(param_3 + 0xb) & 0x40) != 0)) {
            local_1e0 = GetSysColor(8);
          }
          else {
            local_1e0 = *(DWORD *)(param_3 + 0x14);
          }
          local_d0 = 0xd4;
          FUN_00482150((int)local_84);
          local_c4 = local_c4 + 1;
          local_d0 = 0xa4;
          local_1e4 = DAT_005140ac;
          if (local_114 <= (uint)local_c[-1]) {
            local_230 = (char *)((int)local_c + local_114);
            local_22c = thunk_FUN_004dcd18(local_230,"{\\colortbl");
            local_1e4 = DAT_005140ac;
            if (local_22c != (char *)0x0) {
              local_1e4 = (int)local_22c - (int)local_c;
            }
          }
          if (local_1e4 == 0xffffffff) {
            local_1e4 = local_114;
          }
          local_234 = 0;
          local_d0 = 0xa4;
          local_238 = 0;
          uVar6 = local_1e4;
          goto LAB_004848fd;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 100);
    }
  }
LAB_00484a53:
  local_a30 = local_14;
  local_a2c = 0;
  local_a28 = FUN_0047c558;
  local_268 = SendMessageA(param_1,0x449,0x4002,(LPARAM)&local_a30);
  local_d0 = 8;
  local_c4 = local_c4 + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_26c = local_c + -3;
      if (local_26c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_26c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_26c = *local_26c + -1;
        iVar3 = *local_26c + 1;
      }
      if (iVar3 != 0) goto LAB_00484b64;
    }
    local_270 = local_c + -3;
    local_274 = local_c + -3;
    operator_delete();
  }
LAB_00484b64:
  *in_FS_OFFSET = local_e0;
  return;
LAB_004848fd:
  if ((uint)local_c[-1] <= uVar6) goto LAB_00484909;
  local_23c = uVar6;
  if (1 < local_c[-3] + 1) {
    FUN_004d48d8((int)local_14);
  }
  if (local_c + -3 != &DAT_00513d58) {
    local_c[-3] = -1;
  }
  cVar1 = *(char *)((int)local_c + local_23c);
  if (cVar1 == ';') {
    local_234 = local_234 + 1;
  }
  else if (cVar1 == '{') {
    local_238 = local_238 + 1;
  }
  else if ((cVar1 == '}') && (local_238 = local_238 + -1, local_238 == 0)) {
    FUN_004e0344((undefined1 *)local_7a4,(byte *)"\\cf%d ");
    local_240 = *(uint *)(local_6c + -4);
    pcVar4 = strlen(local_7a4);
    FUN_004cfad4((int)local_74,local_240,0,(uint)local_7a4,(uint)pcVar4,0,(uint)pcVar4);
    FUN_004d5a8c((int)local_14,uVar6 + 1,(int)local_74);
    if (local_1e4 == local_114) {
      local_244 = strlen((uint *)"{\\colortbl");
      FUN_004cfad4((int)local_84,0,0,0x501dab,(uint)local_244,0,(uint)local_244);
      std::string::replace_fill((int)local_84,*(uint *)(local_7c + -4),0,1,0x7d);
      FUN_004d5a8c((int)local_14,uVar6 + 1,(int)local_84);
    }
    else {
      FUN_004d5a8c((int)local_14,uVar6,(int)local_84);
    }
    goto LAB_00484909;
  }
  uVar6 = uVar6 + 1;
  goto LAB_004848fd;
LAB_00484909:
  local_c4 = local_c4 + -1;
  if (local_7c != 0) {
    if (*(int *)(local_7c + -0xc) != -1) {
      piVar5 = (int *)(local_7c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0048499f;
    }
    local_248 = local_7c + -0xc;
    local_24c = local_7c + -0xc;
    operator_delete();
    local_250 = 0;
    local_254 = local_84;
    local_7c = 0;
    local_a0c = 0;
  }
LAB_0048499f:
  local_d0 = 0xa4;
  local_c4 = local_c4 + -1;
  if (local_6c != 0) {
    if (*(int *)(local_6c + -0xc) != -1) {
      piVar5 = (int *)(local_6c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_00484a53;
    }
    local_258 = local_6c + -0xc;
    local_25c = local_6c + -0xc;
    operator_delete();
    local_260 = 0;
    local_264 = local_74;
    local_6c = 0;
    local_a1c = 0;
  }
  goto LAB_00484a53;
}

// ----------------------------------------------------------------------------------------------------
// 0x00484c30  std::basic_ostream<char>::sentry::~sentry   (2338 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostream_char::sentry::_dtor
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl std::basic_ostream_char::sentry::_dtor(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_7c8 [248];
  undefined4 local_6d0;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  undefined1 local_5c8 [248];
  undefined4 local_4d0;
  undefined1 local_4c8 [248];
  undefined4 local_3d0;
  undefined1 local_3c8 [248];
  undefined4 local_2d0;
  undefined1 local_2c8 [240];
  undefined1 *local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  int local_1cc;
  int *local_1c8;
  uint *local_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  int *local_1a8;
  uint *local_19c;
  undefined1 *local_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  int *local_188;
  uint *local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  int *local_168;
  uint *local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  int *local_148;
  uint *local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  int *local_128;
  uint *local_11c;
  undefined4 local_118;
  undefined2 local_108;
  int local_fc;
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_e4 [8];
  int local_dc;
  undefined1 local_d4 [8];
  int local_cc;
  undefined4 local_c4 [6];
  undefined4 local_ac [6];
  undefined4 local_94 [6];
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined4 local_4c [6];
  undefined4 local_34 [6];
  undefined4 local_1c [6];
  
  __InitExceptBlockLDTC(0x5037dc);
  if (param_1 == (undefined4 *)0x0) goto LAB_0048553e;
  if ((*(byte *)(*(int *)*param_1 + 5) & 0x20) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)*param_1 + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*param_1;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((uVar4 & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_0047ec80;
          uVar5 = 0;
          local_108 = 0x14;
          local_11c = (uint *)FUN_004dc320(local_2c8,PTR_s_iostream_object_has_failbit_set_00515af8)
          ;
          iVar3 = std::string::string_from_cstr((int)local_5c,local_11c);
          local_fc = local_fc + 1;
          FUN_004d8b80(local_1c,iVar3);
          local_fc = local_fc + 2;
          if (local_54 != 0) {
            if (*(int *)(local_54 + -0xc) != -1) {
              local_128 = (int *)(local_54 + -0xc);
              if (local_128 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (local_128 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *local_128 = *local_128 + -1;
                iVar3 = *local_128 + 1;
              }
              if (iVar3 != 0) goto LAB_00484dcc;
            }
            local_12c = local_54 + -0xc;
            local_130 = local_54 + -0xc;
            operator_delete();
            local_134 = 0;
            local_138 = local_5c;
            local_54 = 0;
            local_2d0 = 0;
          }
LAB_00484dcc:
          local_108 = 8;
          FUN_004e7cc4((uint *)&DAT_0047ec18,local_1c,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_0047ec80;
          uVar5 = 0;
          local_108 = 0x2c;
          local_13c = (uint *)FUN_004dc320(local_3c8,PTR_s_iostream_object_has_badbit_set_00515afc);
          iVar3 = std::string::string_from_cstr((int)local_6c,local_13c);
          local_fc = local_fc + 1;
          FUN_004d8b80(local_34,iVar3);
          local_fc = local_fc + 2;
          if (local_64 != 0) {
            if (*(int *)(local_64 + -0xc) != -1) {
              local_148 = (int *)(local_64 + -0xc);
              if (local_148 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (local_148 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *local_148 = *local_148 + -1;
                iVar3 = *local_148 + 1;
              }
              if (iVar3 != 0) goto LAB_00484f19;
            }
            local_14c = local_64 + -0xc;
            local_150 = local_64 + -0xc;
            operator_delete();
            local_154 = 0;
            local_158 = local_6c;
            local_64 = 0;
            local_3d0 = 0;
          }
LAB_00484f19:
          local_108 = 8;
          FUN_004e7cc4((uint *)&DAT_0047ec18,local_34,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar4 = 1;
          puVar6 = &LAB_0047ec80;
          uVar5 = 0;
          local_108 = 0x44;
          local_15c = (uint *)FUN_004dc320(local_4c8,PTR_s_iostream_object_has_eofbit_set_00515b00);
          iVar2 = std::string::string_from_cstr((int)local_7c,local_15c);
          local_fc = local_fc + 1;
          FUN_004d8b80(local_4c,iVar2);
          local_fc = local_fc + 2;
          if (local_74 != 0) {
            if (*(int *)(local_74 + -0xc) != -1) {
              local_168 = (int *)(local_74 + -0xc);
              if (local_168 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_168 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_168 = *local_168 + -1;
                iVar2 = *local_168 + 1;
              }
              if (iVar2 != 0) goto LAB_00485066;
            }
            local_16c = local_74 + -0xc;
            local_170 = local_74 + -0xc;
            operator_delete();
            local_174 = 0;
            local_178 = local_7c;
            local_74 = 0;
            local_4d0 = 0;
          }
LAB_00485066:
          local_108 = 8;
          FUN_004e7cc4((uint *)&DAT_0047ec18,local_4c,uVar5,puVar6,uVar4,uVar8,uVar9,uVar10);
        }
      }
    }
  }
  if ((DAT_00515b64 != '\0') &&
     ((piVar1 = (int *)*param_1, piVar1 == (int *)&DAT_0051bb24 || (piVar1 == &DAT_0051bb64)))) {
    iVar2 = (**(code **)(**(int **)(*piVar1 + 0x24) + 0x30))();
    if (iVar2 == -1) {
      iVar2 = *(int *)*param_1;
      uVar4 = *(uint *)(iVar2 + 0x30);
      if (*(int *)(iVar2 + 0x24) == 0) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1;
      }
      uVar4 = uVar4 | 1;
      *(uint *)(iVar2 + 0x30) = uVar4;
      if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34)) != 0) {
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 4) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_0047ec80;
          uVar5 = 0;
          local_108 = 0x68;
          local_17c = (uint *)FUN_004dc320(local_5c8,PTR_s_iostream_object_has_failbit_set_00515af8)
          ;
          iVar3 = std::string::string_from_cstr((int)local_d4,local_17c);
          local_fc = local_fc + 1;
          FUN_004d8b80(local_94,iVar3);
          local_fc = local_fc + 2;
          if (local_cc != 0) {
            if (*(int *)(local_cc + -0xc) != -1) {
              local_188 = (int *)(local_cc + -0xc);
              if (local_188 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (local_188 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *local_188 = *local_188 + -1;
                iVar3 = *local_188 + 1;
              }
              if (iVar3 != 0) goto LAB_0048523e;
            }
            local_18c = local_cc + -0xc;
            local_190 = local_cc + -0xc;
            operator_delete();
            local_194 = 0;
            local_198 = local_d4;
            local_cc = 0;
            local_5d0 = 0;
          }
LAB_0048523e:
          local_108 = 0x5c;
          FUN_004e7cc4((uint *)&DAT_0047ec18,local_94,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 1) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 1;
          puVar6 = &LAB_0047ec80;
          uVar5 = 0;
          local_108 = 0x80;
          local_19c = (uint *)FUN_004dc320(local_6c8,PTR_s_iostream_object_has_badbit_set_00515afc);
          iVar3 = std::string::string_from_cstr((int)local_e4,local_19c);
          local_fc = local_fc + 1;
          FUN_004d8b80(local_ac,iVar3);
          local_fc = local_fc + 2;
          if (local_dc != 0) {
            if (*(int *)(local_dc + -0xc) != -1) {
              local_1a8 = (int *)(local_dc + -0xc);
              if (local_1a8 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else if (local_1a8 == &DAT_00513d58) {
                iVar3 = 1;
              }
              else {
                *local_1a8 = *local_1a8 + -1;
                iVar3 = *local_1a8 + 1;
              }
              if (iVar3 != 0) goto LAB_004853a9;
            }
            local_1ac = local_dc + -0xc;
            local_1b0 = local_dc + -0xc;
            operator_delete();
            local_1b4 = 0;
            local_1b8 = local_e4;
            local_dc = 0;
            local_6d0 = 0;
          }
LAB_004853a9:
          local_108 = 0x5c;
          FUN_004e7cc4((uint *)&DAT_0047ec18,local_ac,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
        }
        if ((*(uint *)(iVar2 + 0x30) & *(uint *)(iVar2 + 0x34) & 2) != 0) {
          *(uint *)(iVar2 + 0x30) = uVar4;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar4 = 1;
          puVar6 = &LAB_0047ec80;
          uVar5 = 0;
          local_108 = 0x98;
          local_1bc = (uint *)FUN_004dc320(local_7c8,PTR_s_iostream_object_has_eofbit_set_00515b00);
          iVar2 = std::string::string_from_cstr((int)local_f4,local_1bc);
          local_fc = local_fc + 1;
          FUN_004d8b80(local_c4,iVar2);
          local_fc = local_fc + 2;
          if (local_ec != 0) {
            if (*(int *)(local_ec + -0xc) != -1) {
              local_1c8 = (int *)(local_ec + -0xc);
              if (local_1c8 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_1c8 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_1c8 = *local_1c8 + -1;
                iVar2 = *local_1c8 + 1;
              }
              if (iVar2 != 0) goto LAB_00485514;
            }
            local_1cc = local_ec + -0xc;
            local_1d0 = local_ec + -0xc;
            operator_delete();
            local_1d4 = 0;
            local_1d8 = local_f4;
            local_ec = 0;
          }
LAB_00485514:
          local_108 = 0x5c;
          FUN_004e7cc4((uint *)&DAT_0047ec18,local_c4,uVar5,puVar6,uVar4,uVar8,uVar9,uVar10);
        }
      }
    }
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0048553e:
  *in_FS_OFFSET = local_118;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004855dc  std::vector<FormattedTextSegment *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_FormattedTextSegment_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_FormattedTextSegment_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004803d8(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485614  FUN_00485614   (79 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00485614(undefined4 *param_1,int *param_2,char param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50389c);
  memset(param_1,0,0x3c);
  *param_1 = 0x3c;
  param_1[1] = param_4;
  FUN_004690f0(param_2,(LPARAM)param_1,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485664  FUN_00485664   (28 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00485664(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485680  FUN_00485680   (28 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00485680(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048569c  FUN_0048569c   (28 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0048569c(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004856b8  FUN_004856b8   (28 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004856b8(int param_1,char param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  if (param_2 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004856d4  FUN_004856d4   (43 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004856d4(int param_1,undefined4 *param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40000000;
  if (param_2 == (undefined4 *)0x0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000000;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xbfffffff;
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485700  FUN_00485700   (53 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
char * __cdecl FUN_00485700(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return (char *)(param_1 + 0x1a);
}

// ----------------------------------------------------------------------------------------------------
// 0x00485738  FUN_00485738   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00485738(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485748  FUN_00485748   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00485748(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x19) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485758  FUN_00485758   (21 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00485758(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485770  FUN_00485770   (131 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00485770(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 4) = 0xb000000f;
  *(int *)(param_1 + 0xc) = *param_2 * -0x14;
  if (param_2[4] == 700) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  if ((char)param_2[5] != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  }
  if (*(char *)((int)param_2 + 0x16) != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  }
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x1b);
  uVar2 = 0xffffffff;
  piVar5 = param_2 + 7;
  do {
    piVar6 = piVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    piVar6 = (int *)((int)piVar5 + 1);
    iVar1 = *piVar5;
    piVar5 = piVar6;
  } while ((char)iVar1 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)piVar6 - uVar2);
  puVar7 = (undefined4 *)(param_1 + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return (undefined4 *)(param_1 + 0x1a);
}

// ----------------------------------------------------------------------------------------------------
// 0x004857f4  FUN_004857f4   (122 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004857f4(int param_1)

{
  FUN_004856d4(param_1,(undefined4 *)0x0);
  FUN_00485664(param_1,'\0');
  FUN_00485680(param_1,'\0');
  FUN_0048569c(param_1,'\0');
  FUN_004856b8(param_1,'\0');
  FUN_00485758(param_1,0xa0);
  FUN_00485700(param_1,"MS Sans Serif");
  FUN_00485748(param_1,0);
  FUN_00485738(param_1,0);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485870  FUN_00485870   (49 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00485870(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5038a4);
  *param_1 = 0x9c;
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858a4  FUN_004858a4   (40 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004858a4(int param_1,undefined4 param_2,char param_3)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if (param_3 == '\0') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858cc  FUN_004858cc   (18 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004858cc(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858e0  FUN_004858e0   (18 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004858e0(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004858f4  FUN_004858f4   (20 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004858f4(int param_1,undefined2 param_2)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  *(undefined2 *)(param_1 + 0x18) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485908  FUN_00485908   (51 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00485908(int param_1,short param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  *(short *)(param_1 + 0x1a) = param_2;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048593c  FUN_0048593c   (64 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0048593c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5038ec);
  if (DAT_005038ac != '\0') {
    Help::_dtor((int *)&DAT_0051aea4,2);
    DAT_005038ac = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048597c  FUN_0048597c   (137 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0048597c(HWND param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x503938);
  if (DAT_005038ac == '\0') {
    FUN_00485a4c((undefined4 *)&DAT_0051aea4);
    DAT_005038ac = DAT_005038ac + '\x01';
  }
  if (DAT_0051aea8 == (code *)0x0) {
    MessageBoxExA(param_1,"Help library not found","Can't open help",0x30,0);
    uVar1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    uVar1 = ((code *)DAT_0051aea8)();
    *in_FS_OFFSET = local_28;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485a4c  FUN_00485a4c   (269 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00485a4c(undefined4 *param_1)

{
  LSTATUS LVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 *in_FS_OFFSET;
  CHAR local_240 [264];
  BYTE local_138 [264];
  DWORD local_30;
  HKEY local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x50395c);
  local_18 = 8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = 0x106;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,"CLSID\\{adb880a6-d8ff-11cf-9377-00aa003b7a11}\\InprocServer32",0,1,&local_2c);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_2c,"Help library not found" + 0x16,(LPDWORD)0x0,
                             (LPDWORD)0x0,local_138,&local_30);
    if (LVar1 == 0) {
      ExpandEnvironmentStringsA((LPCSTR)local_138,local_240,0x106);
      hModule = LoadLibraryA(local_240);
      *param_1 = hModule;
      if (hModule != (HMODULE)0x0) {
        pFVar2 = GetProcAddress(hModule,"HtmlHelpA");
        param_1[1] = pFVar2;
        if (pFVar2 == (FARPROC)0x0) {
          FreeLibrary((HMODULE)*param_1);
          *param_1 = 0;
        }
      }
    }
    RegCloseKey(local_2c);
  }
  if (param_1[1] != 0) {
    (*(code *)param_1[1])();
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
