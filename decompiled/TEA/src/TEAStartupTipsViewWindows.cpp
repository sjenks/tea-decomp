// TEA.exe — application module "TEAStartupTipsViewWindows"
// 63 functions, 0x0047ad78..0x00481c1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0047ad78  TEAStartupTipsViewWindows::~TEAStartupTipsViewWindows   (436 bytes)   [rtti:dtor destructor]
//   written in code as TEAStartupTipsViewWindows::_dtor
void __cdecl TEAStartupTipsViewWindows::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x500f0c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TEAStartupTipsViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00501250;
    *(undefined ***)param_1[2] = &PTR_LAB_0050125c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501268;
    if (param_1[0x22] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x22] + 0xc))();
    }
    OWL::TCheckBox::_dtor(param_1 + 0x88,2);
    PVWPushButton::_dtor(param_1 + 0x56,2);
    PVWPushButton::_dtor(param_1 + 0x24,2);
    FUN_0040b4f0(param_1 + 0x18,param_1[0x19],param_1[0x1a]);
    operator_delete();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x270;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x270;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x270;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x270;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb8,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xb6,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047af2c  FUN_0047af2c   (42 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_0047af2c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*(int *)(param_1 + 0x220),0xf0,0,0);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047af58  TEAStartupTipsViewWindows::vf19   (55 bytes)   [rtti:vtable virtual slot 19]
void __cdecl TEAStartupTipsViewWindows::vf19(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0x3458) {
    FUN_0046495c(*(int *)(param_1 + 0x38));
    return;
  }
  if (param_3 == 0x119e) {
    FUN_0047b87c(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047af90  TEAStartupTipsViewWindows::vf15   (41 bytes)   [rtti:vtable virtual slot 15]
void __cdecl TEAStartupTipsViewWindows::vf15(int *param_1)

{
  FUN_004ac750(param_1 + 0x88,1);
  FUN_0047b87c((int)param_1);
  PropertiesViewWindows::vf15(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047afbc  TEAStartupTipsViewWindows::vf11   (1897 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Removing unreachable block (ram,0x0047b281) */
void __cdecl TEAStartupTipsViewWindows::vf11(int *param_1)

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
  
  __InitExceptBlockLDTC(0x500fe8);
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
  local_b0 = (int *)operator_new();
  if (local_b0 != (int *)0x0) {
    local_e4 = 0x14;
    FUN_00419c00(local_b0,0,param_1,0x240e,&local_1b8.left,1);
    local_e4 = 8;
  }
  param_1[0x22] = (int)local_b0;
  PropertiesViewWindows::vf11(param_1);
  local_e4 = 0x2c;
  std::string::string_from_cstr((int)local_c0,(uint *)"Tips.txt");
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
    operator_delete();
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
      piVar2 = FUN_004db7f8((int *)&local_c4,&DAT_00515dfc,'\x01',0x20,(undefined*)FUN_0047b728);
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
          local_170 = std::string::__getRep(local_15c,uVar1,uVar1);
          local_16c = local_170 + 3;
          *(int **)(local_d0 + 8) = local_16c;
          local_174 = local_d0;
          local_17c = local_a4;
          local_180 = *(undefined4 **)(local_d0 + 8);
          local_178 = uVar1;
          memcpy(local_180,local_a4,uVar1);
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
  iVar3 = FUN_00416a78((int)param_1,(uint *)"NextIndex",0);
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
    operator_delete();
    local_190 = 0;
    local_194 = local_ac;
    local_a4 = (undefined4 *)0x0;
  }
LAB_0047b63f:
  local_e4 = 0x20;
  local_d8 = local_d8 + -8;
  std::basic_ifstream_char::_dtor(local_9c,2);
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
    operator_delete();
  }
LAB_0047b712:
  *in_FS_OFFSET = local_f4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047b728  FUN_0047b728   (232 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0047b728(int param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x5010e0);
  if (param_1 == 0) {
    puVar1 = (undefined4 *)operator_new();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004d9614(puVar1,0,0,1);
    }
    *in_FS_OFFSET = local_34;
  }
  else if (param_1 == 1) {
    puVar1 = (undefined4 *)operator_new();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004d9614(puVar1,0,0,1);
    }
    *in_FS_OFFSET = local_34;
  }
  else {
    puVar1 = (undefined4 *)operator_new();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004d9c54(puVar1,param_2,param_3);
    }
    *in_FS_OFFSET = local_34;
  }
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047b850  TEAStartupTipsViewWindows::vf9   (44 bytes)   [rtti:vtable virtual slot 9]
void __cdecl TEAStartupTipsViewWindows::vf9(int *param_1,INT_PTR param_2)

{
  FUN_00416c2c((int)param_1,(uint *)"NextIndex");
  PropertiesViewWindows::vf9(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047b87c  FUN_0047b87c   (414 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047b8d2) */
void __cdecl FUN_0047b87c(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x501150);
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if ((uint)(iVar2 >> 4) <= *(uint *)(param_1 + 0x80)) goto LAB_0047ba0a;
  iVar2 = *(uint *)(param_1 + 0x80) * 0x10 + *(int *)(param_1 + 100);
  pcVar1 = thunk_memchr(*(char **)(iVar2 + 8),' ',*(int *)(*(int *)(iVar2 + 8) + -4));
  uVar3 = DAT_005140ac;
  if (pcVar1 != (char *)0x0) {
    uVar3 = (int)pcVar1 - *(int *)(iVar2 + 8);
  }
  if (uVar3 < *(uint *)(*(int *)(iVar2 + 8) + -4)) {
    FUN_004d6118((int)local_14,iVar2,uVar3 + 1,DAT_005140ac);
    FUN_0041ac90(*(int **)(param_1 + 0x88),(int)local_14);
    iVar2 = FUN_004e39d0(*(char **)(iVar2 + 8));
    *(int *)(param_1 + 0x84) = iVar2;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
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
        if (iVar2 != 0) goto LAB_0047b9e2;
      }
      operator_delete();
    }
  }
LAB_0047b9e2:
  iVar2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  *(uint *)(param_1 + 0x80) = (*(int *)(param_1 + 0x80) + 1U) % (uint)(iVar2 >> 4);
LAB_0047ba0a:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bce0  std::locale::facet::~facet   (95 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::facet::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::facet::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x501300);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::locale::facet::vftable;
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bdb8  __rwstd::facet_imp::vf1   (5 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __stdcall __rwstd::facet_imp::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bdc0  __rwstd::facet_imp::~facet_imp   (66 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::facet_imp::_dtor
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::facet_imp::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x501328);
  if (param_1 != (undefined4 *)0x0) {
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047be04  FUN_0047be04   (405 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0047be04(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x501458);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x7b;
    *(int *)((int)param_1 + 0x7b) = (int)param_1 + 0x6f;
    *(int *)((int)param_1 + 0x7f) = (int)param_1 + 0x73;
    param_1[4] = (int)param_1 + 0x6f;
    param_1[5] = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6b) = 0;
    *(undefined4 *)((int)param_1 + 0x77) = 0;
    *(undefined ***)((int)param_1 + 0x6f) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x73) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x7b),1);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
  }
  iVar3 = 0;
  puVar1 = (uint *)operator_new();
  if (puVar1 != (uint *)0x0) {
    FUN_0048faec(puVar1);
  }
  FUN_0049d444(param_1,1,param_3,param_4,param_5,puVar1,iVar3);
  param_1[6] = (int)&GripBar::vftable;
  param_1[1] = (int)&PTR_LAB_00501520;
  *(undefined ***)param_1[4] = &PTR_LAB_00501540;
  *(undefined ***)param_1[5] = &PTR_LAB_0050154c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00501558;
  puVar2 = (undefined4 *)FUN_00490dd0((int)(param_1 + 1),0x7537);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(param_1[6] + 0x1c))();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + -1;
  }
  *in_FS_OFFSET = local_34;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bff4  OWL::TGadgetWindow::vf3   (11 bytes)   [rtti:vtable virtual slot 3]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TGadgetWindow::vf3(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3b);
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c140  FUN_0047c140   (40 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint __cdecl FUN_0047c140(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    uVar2 = uVar2 << 3 ^ (int)cVar1;
  }
  return uVar2 % 0x209;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c168  FUN_0047c168   (35 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0047c168(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_0050171c;
  while( true ) {
    if (*piVar1 == 0) {
      return 0;
    }
    if (param_1 == piVar1[1]) break;
    piVar1 = piVar1 + 3;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),(char)piVar1[2]);
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c18c  FUN_0047c18c   (682 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint * __cdecl FUN_0047c18c(char *param_1,uint *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  char local_404 [1003];
  byte local_19;
  uint *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if ((char)*param_2 == '\0') {
    param_2 = (uint *)0x0;
  }
  else {
    local_8 = (int)param_2 + (-1 - (int)param_1);
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = param_2;
    pcVar8 = (char *)0x1;
    iVar3 = FUN_004e133c((int)(char)*param_2);
    if (iVar3 != 0) {
      do {
        puVar4 = param_2;
        param_2 = (uint *)((int)puVar4 + 1);
        if (*(char *)param_2 == '\0') {
          return (uint *)0x0;
        }
        iVar3 = FUN_004e133c((int)*(char *)param_2);
      } while (iVar3 != 0);
      pcVar8 = (char *)((int)param_2 - (int)local_18);
      if (*(char *)param_2 == '-') {
        param_2 = (uint *)((int)puVar4 + 2);
        local_14 = 1;
        if (*(char *)param_2 == '\0') {
          return (uint *)0x0;
        }
      }
      if (('/' < (char)*param_2) && ((char)*param_2 < ':')) {
        local_c = 1;
        do {
          uVar5 = *param_2;
          param_2 = (uint *)((int)param_2 + 1);
          local_10 = local_10 * 10 + (int)(char)uVar5 + -0x30;
          if (*(char *)param_2 == '\0') {
            return (uint *)0x0;
          }
        } while (('/' < *(char *)param_2) && (*(char *)param_2 < ':'));
        if (local_14 != 0) {
          local_10 = -local_10;
        }
      }
      if ((char)*param_2 != ' ') {
        param_2 = (uint *)((int)param_2 + -1);
      }
    }
    if ((char *)0x3e7 < pcVar8) {
      pcVar8 = (char *)0x3e8;
    }
    FUN_004dcc40((undefined4 *)local_404,local_18,pcVar8);
    local_404[(int)pcVar8] = '\0';
    if (param_3[1] == 2) {
      if ((local_404[0] == 'f') && (local_404[1] == '\0')) {
        iVar3 = 0;
        puVar4 = param_2;
        while ((puVar4 = (uint *)((int)puVar4 + 1), *(char *)puVar4 != '\0' &&
               ((cVar2 = *(char *)puVar4, cVar2 != ';' || (iVar3 != 0))))) {
          if (cVar2 == '{') {
            iVar3 = iVar3 + 1;
          }
          else if (cVar2 == '}') {
            iVar3 = iVar3 + -1;
          }
        }
        FUN_0047efa0((int)param_3,local_10,(uint)((int)param_2 + 1),(int)puVar4);
      }
      else if ((local_404[0] == '*') && (local_404[1] == '\0')) {
        param_3[1] = 3;
      }
      else {
        pcVar8 = local_404;
        pcVar7 = "fcharset";
        do {
          bVar10 = *pcVar8 == *pcVar7;
          if (!bVar10) break;
          if (*pcVar8 == '\0') goto LAB_0047c340;
          pcVar1 = pcVar8 + 1;
          bVar10 = *pcVar1 == pcVar7[1];
          if (!bVar10) break;
          pcVar8 = pcVar8 + 2;
          pcVar7 = pcVar7 + 2;
          bVar10 = *pcVar1 == '\0';
        } while (!bVar10);
        if (bVar10) {
LAB_0047c340:
          if (local_c != 0) {
            FUN_0047f6ec((int)param_3,(char)local_10);
          }
        }
      }
    }
    else {
      uVar5 = FUN_0047c140(local_404);
      local_19 = (&DAT_0051ac90)[uVar5];
      if (local_19 < 0x4c) {
        pcVar8 = local_404;
        pcVar7 = (&PTR_DAT_005015e0)[local_19];
        do {
          if (*pcVar8 != *pcVar7) goto LAB_0047c3c9;
          bVar10 = true;
          if (*pcVar8 == '\0') break;
          pcVar1 = pcVar8 + 1;
          if (*pcVar1 != pcVar7[1]) goto LAB_0047c3c9;
          pcVar8 = pcVar8 + 2;
          pcVar7 = pcVar7 + 2;
          bVar10 = *pcVar1 == '\0';
        } while (!bVar10);
        if (bVar10) {
          if (local_c == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = &local_10;
          }
          FUN_0047c9d0(param_3,local_8,(uint)local_19,piVar6);
        }
      }
LAB_0047c3c9:
      if (param_3[1] == 1) {
        pcVar8 = thunk_FUN_004dcd18(param_1,"{\\colortbl");
        param_3[0x60] = (int)pcVar8 - (int)param_1;
        pcVar8 = (char *)((int)param_2 + 1);
        iVar3 = 0;
        while (pcVar7 = pcVar8, *pcVar8 != '}') {
          for (; (*pcVar7 != '}' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
          }
          iVar9 = iVar3 + 1;
          FUN_0047ede4((int)param_3,iVar3,(undefined4 *)pcVar8,(int)pcVar7);
          pcVar8 = pcVar7;
          iVar3 = iVar9;
          if (*pcVar7 == ';') {
            pcVar8 = pcVar7 + 1;
          }
        }
        param_2 = (uint *)(pcVar8 + -1);
        param_3[0x61] = pcVar8 + (1 - (int)param_1);
      }
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c438  FUN_0047c438   (89 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047c438(int param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_4 != param_3) {
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
    pcVar2 = strlen(param_2);
    FUN_004cfad4(param_1,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
    if (param_4 == 0) {
      std::string::replace_fill(param_1,*(uint *)(*(int *)(param_1 + 8) + -4),0,1,0x30);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c494  FUN_0047c494   (194 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047c494(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x5017e0);
  FUN_00482bdc((int)local_14,param_2,3);
  std::string::append(param_1,(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0047c545;
    }
    operator_delete();
  }
LAB_0047c545:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c558  FUN_0047c558   (623 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047c598) */
/* WARNING: Removing unreachable block (ram,0x0047c656) */
/* WARNING: Removing unreachable block (ram,0x0047c61e) */
/* WARNING: Removing unreachable block (ram,0x0047c64f) */
/* WARNING: Removing unreachable block (ram,0x0047c6c3) */
/* WARNING: Removing unreachable block (ram,0x0047c6e7) */
/* WARNING: Removing unreachable block (ram,0x0047c6f2) */
/* WARNING: Removing unreachable block (ram,0x0047c716) */
/* WARNING: Removing unreachable block (ram,0x0047c700) */
/* WARNING: Removing unreachable block (ram,0x0047c70f) */
/* WARNING: Removing unreachable block (ram,0x0047c708) */
/* WARNING: Removing unreachable block (ram,0x0047c71b) */
/* WARNING: Removing unreachable block (ram,0x0047c71f) */
/* WARNING: Removing unreachable block (ram,0x0047c76d) */
undefined4 __stdcall FUN_0047c558(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_99 [73];
  undefined4 local_50;
  
  __InitExceptBlockLDTC(0x501a8c);
  uVar2 = FUN_004d7ae0(param_1,param_2,param_3,0);
  *param_4 = uVar2;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
  local_99[0] = 0;
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  FUN_004cfad4(param_1,0,uVar2,(uint)local_99,0,0,0);
  *in_FS_OFFSET = local_50;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c7c8  FUN_0047c7c8   (59 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0047c7c8(int param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
  pcVar2 = strlen(param_2);
  FUN_004cfad4(param_1,uVar1,0,(uint)param_2,(uint)pcVar2,0,(uint)pcVar2);
  *param_4 = param_3;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c804  FUN_0047c804   (81 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047c804(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
    pcVar2 = strlen(param_4);
    FUN_004cfad4(param_1,uVar1,0,(uint)param_4,(uint)pcVar2,0,(uint)pcVar2);
    if (param_3 == 0) {
      std::string::replace_fill(param_1,*(uint *)(*(int *)(param_1 + 8) + -4),0,1,0x30);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c864  FUN_0047c864   (92 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0047c864(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x502310);
  uVar2 = 0;
  puVar1 = &DAT_0051ac90;
  do {
    *puVar1 = 0x4c;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x209);
  bVar3 = 0;
  ppuVar4 = &PTR_DAT_005015e0;
  do {
    uVar2 = FUN_0047c140(*ppuVar4);
    (&DAT_0051ac90)[uVar2] = bVar3;
    bVar3 = bVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (bVar3 < 0x4c);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c8e8  FUN_0047c8e8   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0047c8e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x502338);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c968  FUN_0047c968   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047c968(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c980  FUN_0047c980   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0047c980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c9a4  FUN_0047c9a4   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047c9a4(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c9bc  FUN_0047c9bc   (20 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047c9bc(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 1) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047c9d0  FUN_0047c9d0   (999 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0047c9d0(undefined4 *param_1,uint param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_8;
  
  if (param_3 < 0x2c) {
    if (param_3 < 0x24) {
      switch(param_3) {
      case 0:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,0,iVar2);
        break;
      case 1:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,3,iVar2);
        break;
      case 2:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,1,iVar2);
        break;
      case 3:
        FUN_0047fdac((int)param_1,1,0);
        break;
      case 4:
        if ((param_4 == (int *)0x0) || (*param_4 != 0)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        FUN_0047fdac((int)param_1,2,iVar2);
        break;
      case 5:
        FUN_0047fdac((int)param_1,0,0);
        FUN_0047fdac((int)param_1,3,0);
        FUN_0047fdac((int)param_1,1,0);
        FUN_0047fdac((int)param_1,2,0);
        FUN_0047fdac((int)param_1,6,0x18);
        break;
      case 6:
        if (param_4 == (int *)0x0) {
          iVar2 = -0x80000000;
        }
        else {
          iVar2 = *param_4;
        }
        param_1[0x84] = iVar2;
        break;
      case 7:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fdac((int)param_1,4,iVar2);
        break;
      case 8:
        if (param_4 == (int *)0x0) {
          iVar2 = 0x18;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fdac((int)param_1,6,iVar2);
        break;
      case 9:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fdac((int)param_1,5,iVar2);
        break;
      case 10:
        param_1[1] = 2;
        break;
      case 0xb:
        param_1[1] = 1;
        break;
      case 0xc:
        *param_1 = 1;
        if (param_4 == (int *)0x0) {
          _DAT_00501710 = 0;
        }
        else {
          _DAT_00501710 = *param_4;
        }
        break;
      case 0xd:
      case 0xf:
        if (param_1[0x92] == 4) {
          FUN_0047f720((int)param_1,param_2,&DAT_00501ad1);
        }
        else if (param_1[0x92] == 3) {
          FUN_0047f720((int)param_1,param_2,&DAT_00501c94);
        }
        else if (param_1[0x92] == 2) {
          FUN_0047f720((int)param_1,param_2,&DAT_00501c9b /* "<br>" */);
        }
        else {
          FUN_0047f720((int)param_1,param_2,&DAT_00501c98);
        }
        break;
      case 0xe:
        FUN_0047fa24((int)param_1,param_2,1);
        break;
      case 0x10:
        FUN_004803f0((int)param_1,0,1);
        break;
      case 0x11:
        FUN_004803f0((int)param_1,0,3);
        break;
      case 0x12:
        FUN_004803f0((int)param_1,0,2);
        break;
      case 0x13:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_004803f0((int)param_1,1,iVar2);
        break;
      case 0x14:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_004803f0((int)param_1,2,iVar2);
        break;
      case 0x15:
        if (param_4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_004803f0((int)param_1,3,iVar2);
        break;
      case 0x16:
        if ((param_4 != (int *)0x0) && (*param_4 != 0)) {
          FUN_004804b0((int)param_1,*param_4);
        }
        break;
      case 0x17:
      case 0x18:
        if ((int)param_1[0xd] < 0x20) {
          param_1[param_1[0xd] + 0x2e] = param_3 + -0x16;
        }
        break;
      case 0x19:
        FUN_00480578((int)param_1);
        FUN_004803f0((int)param_1,0,1);
        FUN_004803f0((int)param_1,1,0);
        FUN_004803f0((int)param_1,2,0);
        FUN_004803f0((int)param_1,3,0);
        break;
      case 0x1a:
        FUN_0047faa8((int)param_1);
        break;
      case 0x1b:
        if (param_4 == (int *)0x0) {
          iVar2 = 1;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fb8c((int)param_1,iVar2);
        break;
      case 0x1c:
        if (param_4 == (int *)0x0) {
          iVar2 = 0x2d0;
        }
        else {
          iVar2 = *param_4;
        }
        FUN_0047fc9c((int)param_1,iVar2);
        break;
      case 0x1d:
        FUN_0047fa24((int)param_1,param_2,2);
        break;
      case 0x1e:
      case 0x1f:
      case 0x20:
        FUN_0047fb1c((int)param_1,param_3 + -0x1e);
        break;
      case 0x21:
      case 0x22:
      case 0x23:
        FUN_0047ce48((int)param_1,param_2,(undefined4 *)(&PTR_DAT_005015e0)[param_3],1);
      }
    }
    else {
      uVar1 = FUN_0047c168(param_3);
      uStack_8 = CONCAT13((char)uVar1,(undefined3)uStack_8);
      FUN_0047ce48((int)param_1,param_2,(undefined4 *)((int)&uStack_8 + 3),1);
    }
  }
  else {
    param_1[1] = 3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ce48  FUN_0047ce48   (669 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0047ce48(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x502378);
  if (*(int *)(param_1 + 4) == 2) {
    iVar3 = *(int *)(param_1 + 0x214);
    if (-1 < iVar3) {
      iVar2 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x1d4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xf;
      }
      if (iVar3 < iVar2 >> 4) {
        if (*(char *)((int)param_3 + (param_4 - 1)) == ';') {
          param_4 = param_4 - 1;
        }
        iVar3 = iVar3 * 0x10 + *(int *)(param_1 + 0x1d4);
        FUN_004cfad4(iVar3,*(uint *)(*(int *)(iVar3 + 8) + -4),0,(uint)param_3,param_4,0,param_4);
      }
    }
    goto LAB_0047d0d4;
  }
  if (*(int *)(param_1 + 4) != 0) goto LAB_0047d0d4;
  FUN_0047f9f8(param_1);
  if ((*(int *)(param_1 + 0x18) == -0x80000000) && (*(int *)(param_1 + 0x210) != -0x80000000)) {
    FUN_0047fdac(param_1,4,*(int *)(param_1 + 0x210));
  }
  if ((*(int *)(param_1 + 0x1c) == -0x80000000) && (*(int *)(param_1 + 0x298) == 0)) {
    FUN_0047fdac(param_1,5,0);
  }
  if (*(int *)(param_1 + 0x248) != 4) {
    iVar3 = *(int *)(param_1 + 0x248);
    iVar2 = FUN_004d1c6c((int)local_24,param_3,param_4);
    FUN_00482bdc((int)local_14,iVar2,iVar3);
    iVar3 = extraout_ECX;
    if (local_1c != 0) {
      iVar3 = *(int *)(local_1c + -0xc) + 1;
      if (iVar3 != 0) {
        piVar5 = (int *)(local_1c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar2 = *piVar5 + 1;
        }
        if (iVar2 != 0) goto LAB_0047cfe7;
      }
      operator_delete();
      local_1c = 0;
      iVar3 = 0;
    }
LAB_0047cfe7:
    FUN_0047d0e8(local_14,*(undefined4 *)(param_1 + 0x244),iVar3,
                 (int *)*(undefined4 *)(param_1 + 0x244),(int)local_14);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar5 = (int *)(local_c + -0xc);
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
        if (iVar3 != 0) goto LAB_0047d080;
      }
      operator_delete();
      local_c = 0;
    }
  }
LAB_0047d080:
  uVar4 = param_4 + param_2;
  for (; param_2 < uVar4; param_2 = param_2 + 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x218);
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x224)) = uVar1;
  }
  iVar3 = FUN_0048070c(param_1);
  if (iVar3 != 0) {
    FUN_004cfad4(iVar3 + 0x40,*(uint *)(*(int *)(iVar3 + 0x48) + -4),0,(uint)param_3,param_4,0,
                 param_4);
  }
LAB_0047d0d4:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047d0e8  FUN_0047d0e8   (5595 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * FUN_0047d0e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5 )

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_13c8 [248];
  undefined4 local_12d0;
  undefined1 local_12c8 [248];
  undefined4 local_11d0;
  undefined1 local_11c8 [452];
  undefined4 uStack_1004;
  undefined4 local_dd0;
  undefined1 local_dc8 [248];
  undefined4 local_cd0;
  undefined1 local_cc8 [248];
  undefined4 local_bd0;
  undefined1 local_bc8 [248];
  undefined4 local_ad0;
  undefined1 local_ac8 [248];
  undefined4 local_9d0;
  undefined1 local_9c8 [248];
  undefined4 local_8d0;
  undefined1 local_8c8 [248];
  undefined4 local_7d0;
  undefined1 local_7c8 [248];
  undefined4 local_6d0;
  undefined1 local_6c8 [248];
  undefined4 local_5d0;
  undefined1 local_5c8 [252];
  undefined1 *local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  int local_4c0;
  int *local_4bc;
  uint *local_4b0;
  undefined1 *local_4ac;
  undefined4 local_4a8;
  int local_4a4;
  int local_4a0;
  int *local_49c;
  uint *local_490;
  undefined1 *local_48c;
  undefined4 local_488;
  int local_484;
  int local_480;
  int *local_47c;
  uint *local_470;
  uint local_46c;
  uint local_468;
  int local_464;
  uint local_460;
  undefined1 *local_3ec;
  undefined4 local_3e8;
  int local_3e4;
  int local_3e0;
  int *local_3dc;
  uint *local_3d0;
  undefined1 *local_3cc;
  undefined4 local_3c8;
  int local_3c4;
  int local_3c0;
  int *local_3bc;
  uint *local_3b0;
  undefined1 *local_3ac;
  undefined4 local_3a8;
  int local_3a4;
  int local_3a0;
  uint *local_394;
  uint local_390;
  undefined1 *local_38c;
  undefined4 local_388;
  int local_384;
  int local_380;
  int *local_37c;
  uint *local_370;
  undefined1 *local_36c;
  undefined4 local_368;
  int local_364;
  int local_360;
  int *local_35c;
  uint *local_350;
  undefined1 *local_34c;
  undefined4 local_348;
  int local_344;
  int local_340;
  uint *local_334;
  uint local_330;
  byte local_329;
  uint local_328;
  undefined4 local_324;
  int local_320;
  byte local_319;
  uint local_318;
  byte local_311;
  uint local_310;
  int local_30c;
  undefined1 *local_308;
  undefined4 local_304;
  int local_300;
  int local_2fc;
  int *local_2f8;
  uint *local_2ec;
  undefined1 *local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  int local_2dc;
  int *local_2d8;
  uint *local_2cc;
  undefined1 *local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  int local_2bc;
  int *local_2b8;
  uint *local_2ac;
  uint local_2a8;
  uint local_2a4;
  undefined4 local_2a0;
  undefined2 local_290;
  int local_284;
  undefined1 local_27c [8];
  int local_274;
  undefined1 local_26c [8];
  int local_264;
  undefined1 local_25c [8];
  int local_254;
  undefined4 local_24c [6];
  undefined4 local_234 [6];
  undefined4 local_21c [36];
  undefined1 local_18c [8];
  int local_184;
  undefined1 local_17c [8];
  int local_174;
  undefined1 local_16c [8];
  int local_164;
  undefined1 local_15c [8];
  int local_154;
  undefined1 local_14c [8];
  int local_144;
  undefined1 local_13c [8];
  int local_134;
  undefined4 local_12c [6];
  undefined4 local_114 [6];
  undefined4 local_fc [6];
  undefined4 local_e4 [6];
  undefined4 local_cc [6];
  undefined4 local_b4 [6];
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined4 local_6c [6];
  undefined4 local_54 [6];
  undefined4 local_3c [6];
  int *local_24;
  char local_20;
  
  uStack_1004 = param_1;
  __InitExceptBlockLDTC(0x502674);
  local_2a4 = 0;
  local_290 = 0x14;
  local_24 = param_4;
  if (*(int *)(*param_4 + 0x28) != 0) {
    FUN_004d170c(*(int **)(*param_4 + 0x28));
  }
  if (DAT_00515b64 != '\0') {
    if (param_4 == (int *)&DAT_0051bb24) {
      FUN_004de85c((int *)&DAT_00517358);
    }
    if (param_4 == &DAT_0051bb64) {
      FUN_004de85c((int *)&DAT_00517370);
    }
  }
  if ((*(int *)(*param_4 + 0x24) != 0) && ((*(byte *)(*(int *)(*param_4 + 0x24) + 4) & 1) != 0)) {
    (**(code **)(**(int **)(*param_4 + 0x24) + 0xc))();
  }
  local_20 = *(int *)(*param_4 + 0x30) == 0;
  if (!(bool)local_20) {
    iVar3 = *param_4;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_2a8 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0x20;
        local_2ac = (uint *)FUN_004dc320(local_5c8,PTR_s_iostream_object_has_failbit_set_00515af8);
        iVar2 = std::string::string_from_cstr((int)local_7c,local_2ac);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_3c,iVar2);
        local_284 = local_284 + 2;
        if (local_74 != 0) {
          if (*(int *)(local_74 + -0xc) != -1) {
            local_2b8 = (int *)(local_74 + -0xc);
            if (local_2b8 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_2b8 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_2b8 = *local_2b8 + -1;
              iVar2 = *local_2b8 + 1;
            }
            if (iVar2 != 0) goto LAB_0047d325;
          }
          local_2bc = local_74 + -0xc;
          local_2c0 = local_74 + -0xc;
          operator_delete();
          local_2c4 = 0;
          local_2c8 = local_7c;
          local_74 = 0;
          local_5d0 = 0;
        }
LAB_0047d325:
        local_290 = 0x14;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_3c,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0x38;
        local_2cc = (uint *)FUN_004dc320(local_6c8,PTR_s_iostream_object_has_badbit_set_00515afc);
        iVar2 = std::string::string_from_cstr((int)local_8c,local_2cc);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_54,iVar2);
        local_284 = local_284 + 2;
        if (local_84 != 0) {
          if (*(int *)(local_84 + -0xc) != -1) {
            local_2d8 = (int *)(local_84 + -0xc);
            if (local_2d8 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_2d8 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_2d8 = *local_2d8 + -1;
              iVar2 = *local_2d8 + 1;
            }
            if (iVar2 != 0) goto LAB_0047d478;
          }
          local_2dc = local_84 + -0xc;
          local_2e0 = local_84 + -0xc;
          operator_delete();
          local_2e4 = 0;
          local_2e8 = local_8c;
          local_84 = 0;
          local_6d0 = 0;
        }
LAB_0047d478:
        local_290 = 0x14;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_54,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0x50;
        local_2ec = (uint *)FUN_004dc320(local_7c8,PTR_s_iostream_object_has_eofbit_set_00515b00);
        iVar3 = std::string::string_from_cstr((int)local_9c,local_2ec);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_6c,iVar3);
        local_284 = local_284 + 2;
        if (local_94 != 0) {
          if (*(int *)(local_94 + -0xc) != -1) {
            local_2f8 = (int *)(local_94 + -0xc);
            if (local_2f8 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (local_2f8 == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *local_2f8 = *local_2f8 + -1;
              iVar3 = *local_2f8 + 1;
            }
            if (iVar3 != 0) goto LAB_0047d5dd;
          }
          local_2fc = local_94 + -0xc;
          local_300 = local_94 + -0xc;
          operator_delete();
          local_304 = 0;
          local_308 = local_9c;
          local_94 = 0;
          local_7d0 = 0;
        }
LAB_0047d5dd:
        local_290 = 0x14;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_6c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  local_284 = local_284 + 1;
  local_290 = 0x68;
  if (local_20 != '\0') {
    local_30c = *(int *)(*(int *)(param_5 + 8) + -4);
    iVar3 = *(int *)(*param_4 + 0xc) - local_30c;
    if (((*(byte *)(*param_4 + 4) & 0xb0) == 0) || ((*(byte *)(*param_4 + 4) & 0x80) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_0047d6b7;
        local_311 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_311;
          local_310 = (uint)local_311;
        }
        else {
          local_310 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_310 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_0047d6b7:
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x10) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_0047d749;
        local_319 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_319;
          local_318 = (uint)local_319;
        }
        else {
          local_318 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_318 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_0047d749:
    if (((*(int *)(*param_4 + 0x30) == 0) && (local_30c != 0)) && (*(int *)(*param_4 + 0x24) != 0))
    {
      local_320 = local_30c;
      local_324 = *(undefined4 *)(param_5 + 8);
      iVar2 = (**(code **)(**(int **)(*param_4 + 0x24) + 0x2c))();
      if (iVar2 != local_30c) {
        local_2a4 = 1;
      }
    }
    if ((*(int *)(*param_4 + 0x30) == 0) && ((*(byte *)(*param_4 + 4) & 0x20) != 0)) {
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) goto LAB_0047d84b;
        local_329 = *(byte *)(*param_4 + 0x2c);
        piVar4 = *(int **)(*param_4 + 0x24);
        if ((uint)piVar4[6] < (uint)piVar4[7]) {
          pbVar1 = (byte *)piVar4[6];
          piVar4[6] = piVar4[6] + 1;
          *pbVar1 = local_329;
          local_328 = (uint)local_329;
        }
        else {
          local_328 = (**(code **)(*piVar4 + 0x24))();
        }
      } while (local_328 != 0xffffffff);
      local_2a4 = 1;
    }
LAB_0047d84b:
    *(undefined4 *)(*param_4 + 0xc) = 0;
  }
  local_284 = local_284 + -1;
  if (((*(byte *)(*local_24 + 5) & 0x20) != 0) &&
     (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_330 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0x80;
        local_334 = (uint *)FUN_004dc320(local_8c8,PTR_s_iostream_object_has_failbit_set_00515af8);
        iVar2 = std::string::string_from_cstr((int)local_13c,local_334);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_b4,iVar2);
        local_284 = local_284 + 2;
        if (local_134 != 0) {
          if (*(int *)(local_134 + -0xc) != -1) {
            piVar4 = (int *)(local_134 + -0xc);
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
            if (iVar2 != 0) goto LAB_0047d9e6;
          }
          local_340 = local_134 + -0xc;
          local_344 = local_134 + -0xc;
          operator_delete();
          local_348 = 0;
          local_34c = local_13c;
          local_134 = 0;
          local_8d0 = 0;
        }
LAB_0047d9e6:
        local_290 = 0x74;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_b4,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0x98;
        local_350 = (uint *)FUN_004dc320(local_9c8,PTR_s_iostream_object_has_badbit_set_00515afc);
        iVar2 = std::string::string_from_cstr((int)local_14c,local_350);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_cc,iVar2);
        local_284 = local_284 + 2;
        if (local_144 != 0) {
          if (*(int *)(local_144 + -0xc) != -1) {
            local_35c = (int *)(local_144 + -0xc);
            if (local_35c == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_35c == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_35c = *local_35c + -1;
              iVar2 = *local_35c + 1;
            }
            if (iVar2 != 0) goto LAB_0047db51;
          }
          local_360 = local_144 + -0xc;
          local_364 = local_144 + -0xc;
          operator_delete();
          local_368 = 0;
          local_36c = local_14c;
          local_144 = 0;
          local_9d0 = 0;
        }
LAB_0047db51:
        local_290 = 0x74;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_cc,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0xb0;
        local_370 = (uint *)FUN_004dc320(local_ac8,PTR_s_iostream_object_has_eofbit_set_00515b00);
        iVar3 = std::string::string_from_cstr((int)local_15c,local_370);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_e4,iVar3);
        local_284 = local_284 + 2;
        if (local_154 != 0) {
          if (*(int *)(local_154 + -0xc) != -1) {
            local_37c = (int *)(local_154 + -0xc);
            if (local_37c == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (local_37c == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *local_37c = *local_37c + -1;
              iVar3 = *local_37c + 1;
            }
            if (iVar3 != 0) goto LAB_0047dcbc;
          }
          local_380 = local_154 + -0xc;
          local_384 = local_154 + -0xc;
          operator_delete();
          local_388 = 0;
          local_38c = local_15c;
          local_154 = 0;
          local_ad0 = 0;
        }
LAB_0047dcbc:
        local_290 = 0x74;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_e4,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  if ((DAT_00515b64 != '\0') &&
     (((local_24 == (int *)&DAT_0051bb24 || (local_24 == &DAT_0051bb64)) &&
      (iVar3 = (**(code **)(**(int **)(*local_24 + 0x24) + 0x30))(), iVar3 == -1)))) {
    iVar3 = *local_24;
    uVar8 = *(uint *)(iVar3 + 0x30);
    local_390 = uVar8 | 1;
    if (*(int *)(iVar3 + 0x24) == 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) | 1;
    }
    uVar8 = uVar8 | 1;
    *(uint *)(iVar3 + 0x30) = uVar8;
    if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34)) != 0) {
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 4) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 200;
        local_394 = (uint *)FUN_004dc320(local_bc8,PTR_s_iostream_object_has_failbit_set_00515af8);
        iVar2 = std::string::string_from_cstr((int)local_16c,local_394);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_fc,iVar2);
        local_284 = local_284 + 2;
        if (local_164 != 0) {
          if (*(int *)(local_164 + -0xc) != -1) {
            piVar4 = (int *)(local_164 + -0xc);
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
            if (iVar2 != 0) goto LAB_0047de87;
          }
          local_3a0 = local_164 + -0xc;
          local_3a4 = local_164 + -0xc;
          operator_delete();
          local_3a8 = 0;
          local_3ac = local_16c;
          local_164 = 0;
          local_bd0 = 0;
        }
LAB_0047de87:
        local_290 = 0x74;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_fc,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 1) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar7 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0xe0;
        local_3b0 = (uint *)FUN_004dc320(local_cc8,PTR_s_iostream_object_has_badbit_set_00515afc);
        iVar2 = std::string::string_from_cstr((int)local_17c,local_3b0);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_114,iVar2);
        local_284 = local_284 + 2;
        if (local_174 != 0) {
          if (*(int *)(local_174 + -0xc) != -1) {
            local_3bc = (int *)(local_174 + -0xc);
            if (local_3bc == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_3bc == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_3bc = *local_3bc + -1;
              iVar2 = *local_3bc + 1;
            }
            if (iVar2 != 0) goto LAB_0047dff2;
          }
          local_3c0 = local_174 + -0xc;
          local_3c4 = local_174 + -0xc;
          operator_delete();
          local_3c8 = 0;
          local_3cc = local_17c;
          local_174 = 0;
          local_cd0 = 0;
        }
LAB_0047dff2:
        local_290 = 0x74;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_114,uVar5,puVar6,uVar7,uVar9,uVar10,uVar11);
      }
      if ((*(uint *)(iVar3 + 0x30) & *(uint *)(iVar3 + 0x34) & 2) != 0) {
        *(uint *)(iVar3 + 0x30) = uVar8;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        puVar6 = &LAB_0047ec80;
        uVar5 = 0;
        local_290 = 0xf8;
        local_3d0 = (uint *)FUN_004dc320(local_dc8,PTR_s_iostream_object_has_eofbit_set_00515b00);
        iVar3 = std::string::string_from_cstr((int)local_18c,local_3d0);
        local_284 = local_284 + 1;
        FUN_004d8b80(local_12c,iVar3);
        local_284 = local_284 + 2;
        if (local_184 != 0) {
          if (*(int *)(local_184 + -0xc) != -1) {
            local_3dc = (int *)(local_184 + -0xc);
            if (local_3dc == &DAT_00513d58) {
              iVar3 = 1;
            }
            else if (local_3dc == &DAT_00513d58) {
              iVar3 = 1;
            }
            else {
              *local_3dc = *local_3dc + -1;
              iVar3 = *local_3dc + 1;
            }
            if (iVar3 != 0) goto LAB_0047e15d;
          }
          local_3e0 = local_184 + -0xc;
          local_3e4 = local_184 + -0xc;
          operator_delete();
          local_3e8 = 0;
          local_3ec = local_18c;
          local_184 = 0;
          local_dd0 = 0;
        }
LAB_0047e15d:
        local_290 = 0x74;
        FUN_004e7cc4((uint *)&DAT_0047ec18,local_12c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
      }
    }
  }
  if (local_2a4 == 0) goto LAB_0047ec00;
  local_460 = local_2a4;
  local_464 = *param_4;
  local_468 = *(uint *)(local_464 + 0x30) | local_2a4;
  local_46c = local_468;
  if (*(int *)(local_464 + 0x24) == 0) {
    local_46c = local_468 | 1;
    *(uint *)(local_464 + 0x30) = *(uint *)(local_464 + 0x30) | 1;
  }
  *(uint *)(local_464 + 0x30) = local_46c;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34)) == 0) goto LAB_0047ec00;
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 4) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar6 = &LAB_0047ec80;
    uVar5 = 0;
    local_290 = 0x17c;
    local_470 = (uint *)FUN_004dc320(local_11c8,PTR_s_iostream_object_has_failbit_set_00515af8);
    iVar3 = std::string::string_from_cstr((int)local_25c,local_470);
    local_284 = local_284 + 1;
    FUN_004d8b80(local_21c,iVar3);
    local_284 = local_284 + 2;
    if (local_254 != 0) {
      if (*(int *)(local_254 + -0xc) != -1) {
        local_47c = (int *)(local_254 + -0xc);
        if (local_47c == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_47c == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_47c = *local_47c + -1;
          iVar3 = *local_47c + 1;
        }
        if (iVar3 != 0) goto LAB_0047e8dd;
      }
      local_480 = local_254 + -0xc;
      local_484 = local_254 + -0xc;
      operator_delete();
      local_488 = 0;
      local_48c = local_25c;
      local_254 = 0;
      local_11d0 = 0;
    }
LAB_0047e8dd:
    local_290 = 0x170;
    FUN_004e7cc4((uint *)&DAT_0047ec18,local_21c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 1) != 0) {
    *(uint *)(local_464 + 0x30) = local_46c;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 1;
    puVar6 = &LAB_0047ec80;
    uVar5 = 0;
    local_290 = 0x194;
    local_490 = (uint *)FUN_004dc320(local_12c8,PTR_s_iostream_object_has_badbit_set_00515afc);
    iVar3 = std::string::string_from_cstr((int)local_26c,local_490);
    local_284 = local_284 + 1;
    FUN_004d8b80(local_234,iVar3);
    local_284 = local_284 + 2;
    if (local_264 != 0) {
      if (*(int *)(local_264 + -0xc) != -1) {
        local_49c = (int *)(local_264 + -0xc);
        if (local_49c == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (local_49c == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *local_49c = *local_49c + -1;
          iVar3 = *local_49c + 1;
        }
        if (iVar3 != 0) goto LAB_0047ea60;
      }
      local_4a0 = local_264 + -0xc;
      local_4a4 = local_264 + -0xc;
      operator_delete();
      local_4a8 = 0;
      local_4ac = local_26c;
      local_264 = 0;
      local_12d0 = 0;
    }
LAB_0047ea60:
    local_290 = 0x170;
    FUN_004e7cc4((uint *)&DAT_0047ec18,local_234,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(uint *)(local_464 + 0x30) & *(uint *)(local_464 + 0x34) & 2) == 0) goto LAB_0047ec00;
  *(uint *)(local_464 + 0x30) = local_46c;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar6 = &LAB_0047ec80;
  uVar5 = 0;
  local_290 = 0x1ac;
  local_4b0 = (uint *)FUN_004dc320(local_13c8,PTR_s_iostream_object_has_eofbit_set_00515b00);
  iVar3 = std::string::string_from_cstr((int)local_27c,local_4b0);
  local_284 = local_284 + 1;
  FUN_004d8b80(local_24c,iVar3);
  local_284 = local_284 + 2;
  if (local_274 != 0) {
    if (*(int *)(local_274 + -0xc) != -1) {
      local_4bc = (int *)(local_274 + -0xc);
      if (local_4bc == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_4bc == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_4bc = *local_4bc + -1;
        iVar3 = *local_4bc + 1;
      }
      if (iVar3 != 0) goto LAB_0047ebe3;
    }
    local_4c0 = local_274 + -0xc;
    local_4c4 = local_274 + -0xc;
    operator_delete();
    local_4c8 = 0;
    local_4cc = local_27c;
    local_274 = 0;
  }
LAB_0047ebe3:
  local_290 = 0x170;
  FUN_004e7cc4((uint *)&DAT_0047ec18,local_24c,uVar5,puVar6,uVar8,uVar9,uVar10,uVar11);
LAB_0047ec00:
  *in_FS_OFFSET = local_2a0;
  return param_4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ede4  FUN_0047ede4   (442 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047ede4(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x502858);
  iVar4 = FUN_004d1c6c((int)local_14,param_3,param_4 - (int)param_3);
  if (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x1a8)) {
    FUN_0040e240(param_1 + 400,*(int *)(param_1 + 0x198),iVar4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x198);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar3 = *(uint *)(*(int *)(iVar4 + 8) + -4);
        piVar5 = std::string::__getRep(iVar1,uVar3,uVar3);
        *(int **)(iVar1 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar1 + 8),*(undefined4 **)(iVar4 + 8),uVar3);
      }
      else {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
        piVar5 = (int *)(*(int *)(iVar1 + 8) + -0xc);
        if (piVar5 != &DAT_00513d58) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 0x10;
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0047ef8d;
    }
    operator_delete();
  }
LAB_0047ef8d:
  *in_FS_OFFSET = local_3c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047efa0  FUN_0047efa0   (821 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047efa0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_190 [240];
  undefined1 *local_a0;
  undefined4 local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined1 *local_80;
  int *local_7c;
  int *local_78;
  uint local_74;
  int *local_70;
  undefined1 *local_6c;
  int *local_68;
  undefined4 local_64;
  uint *local_58;
  int local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x5028bc);
  if ((param_2 < 0) || (0xffff < param_2)) {
    *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
    goto LAB_0047f2c5;
  }
  *(int *)(param_1 + 0x214) = param_2;
  iVar1 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  if (iVar1 >> 4 <= param_2) {
    FUN_0040db1c(param_1 + 0x1b0,param_2 + 1);
    FUN_0040db1c(param_1 + 0x1d0,param_2 + 1);
    FUN_0047f2d8(param_1 + 0x1f0,param_2 + 1);
    local_54 = param_2 * 0x10 + *(int *)(param_1 + 0x1d4);
    if ((*(int *)&DAT_005140ac) - 0xeU < 0x20) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 1;
      puVar3 = &LAB_00408370;
      uVar2 = 0;
      local_40 = 0x14;
      local_58 = (uint *)FUN_004dc320(local_190,PTR_s_invalid_string_size_parameter_in_00516d20);
      std::string::string_from_cstr((int)local_2c,local_58);
      local_34 = local_34 + 2;
      local_1c[0] = &std::logic_error::vftable;
      local_64 = 0;
      local_c = (int *)0x0;
      local_40 = 0x20;
      if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
        local_74 = local_24[-1];
        local_7c = std::string::__getRep(local_14,local_74,local_74);
        local_80 = local_14;
        local_8c = local_7c + 3;
        local_84 = local_74;
        local_88 = local_24;
        local_78 = local_8c;
        local_c = local_8c;
        memcpy(local_8c,local_24,local_74);
      }
      else {
        local_6c = local_14;
        local_68 = local_24;
        local_c = local_24;
        local_70 = local_24 + -3;
        if (local_70 != &DAT_00513d58) {
          *local_70 = *local_70 + 1;
        }
      }
      local_40 = 0x14;
      local_1c[0] = &std::length_error::vftable;
      local_34 = local_34 + 2;
      if (local_24 != (int *)0x0) {
        if (local_24[-3] != -1) {
          local_90 = local_24 + -3;
          if (local_90 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (local_90 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *local_90 = *local_90 + -1;
            iVar1 = *local_90 + 1;
          }
          if (iVar1 != 0) goto LAB_0047f250;
        }
        local_94 = local_24 + -3;
        local_98 = local_24 + -3;
        operator_delete();
        local_9c = 0;
        local_a0 = local_2c;
        local_24 = (int *)0x0;
      }
LAB_0047f250:
      local_40 = 8;
      FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_1c,uVar2,puVar3,uVar4,uVar5,uVar6,uVar7);
    }
    if (*(uint *)(*(int *)(local_54 + 8) + -8) < 0x20) {
      FUN_004d6d58(local_54,0x20);
    }
  }
  iVar1 = param_2 * 0x10 + *(int *)(param_1 + 0x1b4);
  FUN_004cfad4(iVar1,0,*(uint *)(*(int *)(iVar1 + 8) + -4),param_3,param_4 - param_3,0,
               param_4 - param_3);
  *(undefined1 *)(*(int *)(param_1 + 500) + param_2) = 0;
LAB_0047f2c5:
  *in_FS_OFFSET = local_50;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f2d8  FUN_0047f2d8   (110 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f2d8(int param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint3 in_ECX;
  undefined1 *puVar4;
  undefined4 uStack_8;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    uStack_8 = (uint)in_ECX;
    FUN_0047f348(param_1,*(undefined1 **)(param_1 + 8),
                 param_2 - ((int)*(undefined1 **)(param_1 + 8) - *(int *)(param_1 + 4)),
                 (undefined1 *)((int)&uStack_8 + 3));
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 8);
    if (param_2 < (uint)((int)puVar1 - *(int *)(param_1 + 4))) {
      puVar4 = (undefined1 *)(*(int *)(param_1 + 4) + param_2);
      puVar3 = FUN_0047f6cc(puVar1,puVar1,puVar4);
      iVar2 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - ((int)puVar1 - (int)puVar4);
      FUN_0047c9bc(param_1,(int)puVar3,iVar2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f348  FUN_0047f348   (530 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0047f348(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  int *in_FS_OFFSET;
  uint local_3c;
  int local_38;
  int local_2c;
  undefined2 local_1c;
  int local_10;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x502930);
  if (param_3 == 0) {
    *in_FS_OFFSET = local_2c;
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 8);
    if ((uint)(*(int *)(param_1 + 0x18) - (int)puVar2) < param_3) {
      local_3c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      if (param_3 < local_3c) {
        puVar3 = &local_3c;
      }
      else {
        puVar3 = &param_3;
      }
      local_38 = local_3c + *puVar3;
      puVar2 = (undefined1 *)operator_new();
      if (puVar2 == (undefined1 *)0x0) {
        local_1c = 8;
        local_8 = &std::bad_alloc::vftable;
        local_10 = local_10 + 2;
        FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
      }
      local_1c = 0x14;
      FUN_0047f57c(*(undefined1 **)(param_1 + 4),param_2,puVar2);
      FUN_0047f650(puVar2 + ((int)param_2 - *(int *)(param_1 + 4)),param_3,param_4);
      FUN_0047f57c(param_2,*(undefined1 **)(param_1 + 8),
                   puVar2 + (int)(param_2 + (param_3 - *(int *)(param_1 + 4))));
      local_1c = 0;
      iVar4 = *(int *)(param_1 + 4);
      iVar1 = *(int *)(param_1 + 8);
      FUN_0047c9bc(param_1,iVar4,iVar1);
      operator_delete();
      *(undefined1 **)(param_1 + 0x18) = puVar2 + local_38;
      *(undefined1 **)(param_1 + 8) = puVar2 + param_3 + (iVar1 - iVar4);
      *(undefined1 **)(param_1 + 4) = puVar2;
    }
    else if (param_3 < (uint)((int)puVar2 - (int)param_2)) {
      FUN_0047f57c(puVar2 + -param_3,puVar2,puVar2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
      FUN_0047f610(param_2,puVar2 + -param_3,puVar2);
      param_1 = FUN_0047f630(param_2,param_2 + param_3,param_4);
    }
    else {
      iVar4 = param_3 - ((int)puVar2 - (int)param_2);
      FUN_0047f650(puVar2,iVar4,param_4);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar4;
      FUN_0047f57c(param_2,puVar2,param_2 + param_3);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (param_3 - iVar4);
      param_1 = FUN_0047f630(param_2,puVar2,param_4);
    }
    *in_FS_OFFSET = local_2c;
    local_2c = param_1;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f57c  FUN_0047f57c   (86 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined1 * __cdecl FUN_0047f57c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x502970);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f5fc  FUN_0047f5fc   (20 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f5fc(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f610  FUN_0047f610   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined1 * __cdecl FUN_0047f610(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f630  FUN_0047f630   (29 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined1 * __cdecl FUN_0047f630(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f650  FUN_0047f650   (84 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f650(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5029a4);
  while (param_2 != 0) {
    *param_1 = *param_3;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f6cc  FUN_0047f6cc   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined1 * __cdecl FUN_0047f6cc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f6ec  FUN_0047f6ec   (51 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f6ec(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x214);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1f8) - *(int *)(param_1 + 500))) {
    *(undefined1 *)(*(int *)(param_1 + 500) + iVar1) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f720  FUN_0047f720   (254 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f720(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10c [15];
  undefined4 local_d0 [39];
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x5029c8);
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x254) != 0) {
      local_8 = (undefined4 *)operator_new();
      if (local_8 != (undefined4 *)0x0) {
        local_1c = 0x14;
        FUN_00480754(local_10c,param_1);
        puVar5 = local_10c;
        puVar4 = (undefined4 *)(param_1 + 0xb8);
        FUN_00481b70(local_d0,param_1);
        FUN_00481f7c(local_8,local_d0,puVar4,puVar5);
        local_1c = 8;
      }
      iVar1 = *(int *)(param_1 + 0x254);
      piVar2 = *(int **)(iVar1 + 8);
      if (piVar2 == *(int **)(iVar1 + 0x18)) {
        FUN_0047f820(iVar1,piVar2,(undefined4*)&local_8);
      }
      else {
        *piVar2 = (int)local_8;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
        local_34 = piVar2;
        local_30 = piVar2;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x218);
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x224)) = uVar3;
    FUN_0047f9f8(param_1);
    *(undefined4 *)(param_1 + 0x29c) = param_3;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f820  FUN_0047f820   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f820(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x502a18);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0047c8e8(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0047c8e8(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0047c9a4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_0047c980(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047f9f8  FUN_0047f9f8   (44 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047f9f8(int param_1)

{
  if (*(uint **)(param_1 + 0x29c) != (uint *)0x0) {
    FUN_004d5374(*(int **)(param_1 + 0x244),*(uint **)(param_1 + 0x29c));
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fa24  FUN_0047fa24   (131 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047fa24(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    FUN_0047c9d0((undefined4 *)param_1,param_2,0xd,(int *)0x0);
  }
  FUN_0047f9f8(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x248) == 3) {
      if (param_3 == 1) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)"\\page ");
      }
      else {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)"\\column ");
      }
    }
    iVar1 = FUN_00480608(param_1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = param_3;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047faa8  FUN_0047faa8   (113 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047faa8(int param_1)

{
  int iVar1;
  uint in_stack_00000008;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    FUN_0047c9d0((undefined4 *)param_1,in_stack_00000008,0xd,(int *)0x0);
  }
  FUN_0047f9f8(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x248) == 3) {
      FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)"\\sect\\sectd ");
    }
    iVar1 = FUN_00480608(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc4) = 1;
      *(undefined4 *)(iVar1 + 0xc0) = 1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fb1c  FUN_0047fb1c   (109 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047fb1c(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x248) == 3) {
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x5c);
      FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)(&PTR_s_sbknone_00501658)[param_2]);
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
    }
    iVar1 = FUN_00480608(param_1);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc0) = param_2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fb8c  FUN_0047fb8c   (272 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047fb8c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x502a48);
  if (*(int *)(param_1 + 4) != 0) goto LAB_0047fc8b;
  if (*(int *)(param_1 + 0x248) == 3) {
    FUN_00437bd4((int)local_14);
    puVar3 = local_14;
    piVar1 = FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)"\\cols");
    FUN_0047d0e8(piVar1,extraout_EDX,extraout_ECX,piVar1,(int)puVar3);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar1 = (int *)(local_c + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0047fc64;
      }
      operator_delete();
      local_c = 0;
    }
LAB_0047fc64:
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
  }
  iVar2 = FUN_00480608(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc4) = param_2;
  }
LAB_0047fc8b:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fc9c  FUN_0047fc9c   (272 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0047fc9c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x502a78);
  if (*(int *)(param_1 + 4) != 0) goto LAB_0047fd9b;
  if (*(int *)(param_1 + 0x248) == 3) {
    FUN_00437bd4((int)local_14);
    puVar3 = local_14;
    piVar1 = FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)"\\colsx");
    FUN_0047d0e8(piVar1,extraout_EDX,extraout_ECX,piVar1,(int)puVar3);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar1 = (int *)(local_c + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0047fd74;
      }
      operator_delete();
      local_c = 0;
    }
LAB_0047fd74:
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
  }
  iVar2 = FUN_00480608(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 200) = param_2;
  }
LAB_0047fd9b:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047fdac  FUN_0047fdac   (883 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0047ff3b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0047fdac(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 local_e8 [15];
  undefined4 local_ac [17];
  undefined4 local_68;
  undefined *local_58;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int local_20;
  undefined4 *local_18;
  undefined1 local_14 [8];
  undefined *local_c;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x502ac8);
  if ((param_3 == *(int *)(param_1 + 8 + param_2 * 4)) ||
     (*(int *)(param_1 + 8 + param_2 * 4) = param_3, *(int *)(param_1 + 4) != 0)) goto LAB_0048010f;
  if (*(int *)(param_1 + 0x248) == 2) {
    local_40 = DAT_005017a0;
    if ((int)param_2 < 4) {
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x3c);
      if (param_3 != 1) {
        FUN_004d50d0(*(int **)(param_1 + 0x244),0x2f);
      }
      FUN_004d50d0(*(int **)(param_1 + 0x244),*(undefined1 *)((int)&local_40 + param_2));
      FUN_004d50d0(*(int **)(param_1 + 0x244),0x3e);
    }
  }
  else if ((*(int *)(param_1 + 0x248) == 3) && (param_3 != -0x80000000)) {
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x5c);
    FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)(&PTR_DAT_005017a4)[param_2]);
    if (param_2 < 4) {
      if (param_3 == 0) {
        FUN_004d50d0(*(int **)(param_1 + 0x244),0x30);
      }
    }
    else if (param_2 == 4) {
      if ((*(int *)(param_1 + 0x250) != 0) && (-1 < param_3)) {
        iVar2 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xf;
        }
        if (param_3 < iVar2 >> 4) {
          FUN_00482a60(*(int *)(param_1 + 0x250),param_3 * 0x10 + *(int *)(param_1 + 0x1b4));
          FUN_004d4ca4(*(int **)(param_1 + 0x244));
        }
      }
    }
    else if (param_2 == 5) {
      if (*(int *)(param_1 + 0x250) != 0) {
        local_c = &DAT_00513d64;
        local_58 = &DAT_00513d64;
        local_20 = local_20 + 1;
        local_2c = 0x20;
        if (-1 < param_3) {
          iVar2 = *(int *)(param_1 + 0x198) - *(int *)(param_1 + 0x194);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xf;
          }
          if (param_3 < iVar2 >> 4) {
            FUN_004cf384((int)local_14,param_3 * 0x10 + *(int *)(param_1 + 0x194));
          }
        }
        FUN_00482908(*(int *)(param_1 + 0x250),(int)local_14);
        FUN_004d4ca4(*(int **)(param_1 + 0x244));
        local_20 = local_20 + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            piVar3 = (int *)(local_c + -0xc);
            if (piVar3 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (piVar3 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *piVar3 = *piVar3 + -1;
              iVar2 = *piVar3 + 1;
            }
            if (iVar2 != 0) goto LAB_00480014;
          }
          local_44 = local_c + -0xc;
          operator_delete();
          local_48 = 0;
          local_4c = local_14;
          local_c = (undefined *)0x0;
          local_68 = 0;
        }
LAB_00480014:
        local_2c = 0;
      }
    }
    else if (param_2 == 6) {
      FUN_004d4ca4(*(int **)(param_1 + 0x244));
    }
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
  }
  puVar1 = (undefined4 *)FUN_0048070c(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(puVar1[0x12] + -4) == 0) {
      FUN_00480754(local_ac,param_1);
      puVar4 = local_ac;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
      }
    }
    else {
      iVar2 = FUN_00480608(param_1);
      if (iVar2 != 0) {
        local_18 = (undefined4 *)operator_new();
        if (local_18 != (undefined4 *)0x0) {
          local_2c = 0x44;
          FUN_00480754(local_e8,param_1);
          FUN_00481c1c(local_18,local_e8);
          local_2c = 0x38;
        }
        piVar3 = *(int **)(iVar2 + 0xa8);
        if (piVar3 == *(int **)(iVar2 + 0xb8)) {
          FUN_00480144(iVar2 + 0xa0,piVar3,(undefined4*)&local_18);
        }
        else {
          *piVar3 = (int)local_18;
          *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + 4;
        }
      }
    }
  }
LAB_0048010f:
  *in_FS_OFFSET = local_3c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480144  FUN_00480144   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00480144(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x502b48);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_00480340(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00480340(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004803d8(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_0048031c(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048031c  FUN_0048031c   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0048031c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480340  FUN_00480340   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00480340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x502b88);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004803c0  FUN_004803c0   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004803c0(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004803d8  FUN_004803d8   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004803d8(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004803f0  FUN_004803f0   (190 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004803f0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c0 [39];
  uint local_24 [8];
  
  if (param_3 != *(int *)(param_1 + 0x24 + param_2 * 4)) {
    *(int *)(param_1 + 0x24 + param_2 * 4) = param_3;
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        if (param_2 == 0) {
          FUN_004e0344((undefined1 *)local_24,&DAT_00501ce8 /* "\q%c " */);
        }
        else {
          FUN_004e0344((undefined1 *)local_24,&DAT_00501cf2 /* "\%ci%d " */);
        }
        FUN_004d5374(*(int **)(param_1 + 0x244),local_24);
      }
      puVar1 = (undefined4 *)FUN_00480608(param_1);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00481b70(local_c0,param_1);
        puVar3 = local_c0;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004804b0  FUN_004804b0   (199 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004804b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a4 [39];
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0x34) < 0x20) {
    iVar2 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x38 + iVar2 * 4) = param_2;
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)&DAT_00501cfe /* "\tx" */);
        FUN_004d4ca4(*(int **)(param_1 + 0x244));
      }
      local_8 = (undefined4 *)FUN_00480608(param_1);
      if (local_8 != (undefined4 *)0x0) {
        FUN_00481b70(local_a4,param_1);
        puVar3 = local_a4;
        puVar1 = local_8;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar3 = local_8 + 0x33;
        puVar1 = (undefined4 *)(param_1 + 0xb8);
        for (iVar2 = 0; iVar2 < *(short *)((int)local_8 + 0x1a); iVar2 = iVar2 + 1) {
          *puVar3 = *puVar1;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480578  FUN_00480578   (142 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00480578(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a0 [39];
  
  if (0 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar2 = 0;
    puVar1 = (undefined4 *)(param_1 + 0xb8);
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 0x20);
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)"\\pard ");
      }
      puVar1 = (undefined4 *)FUN_00480608(param_1);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00481b70(local_a0,param_1);
        puVar3 = local_a0;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480608  FUN_00480608   (259 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00480608(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10c [15];
  undefined4 local_d0 [41];
  undefined4 local_2c;
  undefined2 local_1c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x502bac);
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x254);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 == 0) {
      local_8 = (undefined4 *)operator_new();
      if (local_8 != (undefined4 *)0x0) {
        local_1c = 0x14;
        FUN_00480754(local_10c,param_1);
        puVar5 = local_10c;
        puVar4 = (undefined4 *)(param_1 + 0xb8);
        FUN_00481b70(local_d0,param_1);
        FUN_00481f7c(local_8,local_d0,puVar4,puVar5);
        local_1c = 8;
      }
      iVar1 = *(int *)(param_1 + 0x254);
      iVar3 = 0;
      if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 0x18)) {
        FUN_0047f820(iVar1,*(undefined4 **)(iVar1 + 8),(undefined4*)&local_8);
      }
      else {
        **(int **)(iVar1 + 8) = (int)local_8;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 4;
      }
    }
    else {
      iVar3 = (iVar3 >> 2) + -1;
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x254) + 4) + iVar3 * 4);
  }
  *in_FS_OFFSET = local_2c;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048070c  FUN_0048070c   (69 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0048070c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00480608(param_1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xa8) - *(int *)(iVar1 + 0xa4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    uVar3 = *(undefined4 *)(((iVar2 >> 2) + -1) * 4 + *(int *)(iVar1 + 0xa4));
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00480754  FUN_00480754   (5148 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00481722) */
/* WARNING: Removing unreachable block (ram,0x0048182c) */
/* WARNING: Removing unreachable block (ram,0x004817cc) */
/* WARNING: Removing unreachable block (ram,0x0048181f) */
/* WARNING: Removing unreachable block (ram,0x004818d5) */
/* WARNING: Removing unreachable block (ram,0x004818fd) */
/* WARNING: Removing unreachable block (ram,0x0048190b) */
/* WARNING: Removing unreachable block (ram,0x0048194e) */
/* WARNING: Removing unreachable block (ram,0x00481927) */
/* WARNING: Removing unreachable block (ram,0x00481947) */
/* WARNING: Removing unreachable block (ram,0x00481934) */
/* WARNING: Removing unreachable block (ram,0x00481953) */
/* WARNING: Removing unreachable block (ram,0x00481957) */
/* WARNING: Removing unreachable block (ram,0x004819b1) */
/* WARNING: Removing unreachable block (ram,0x004813f5) */
/* WARNING: Removing unreachable block (ram,0x004814ff) */
/* WARNING: Removing unreachable block (ram,0x0048149f) */
/* WARNING: Removing unreachable block (ram,0x004814f2) */
/* WARNING: Removing unreachable block (ram,0x004815a8) */
/* WARNING: Removing unreachable block (ram,0x004815d0) */
/* WARNING: Removing unreachable block (ram,0x004815de) */
/* WARNING: Removing unreachable block (ram,0x00481621) */
/* WARNING: Removing unreachable block (ram,0x004815fa) */
/* WARNING: Removing unreachable block (ram,0x0048161a) */
/* WARNING: Removing unreachable block (ram,0x00481607) */
/* WARNING: Removing unreachable block (ram,0x00481626) */
/* WARNING: Removing unreachable block (ram,0x0048162a) */
/* WARNING: Removing unreachable block (ram,0x00481684) */
/* WARNING: Removing unreachable block (ram,0x00481114) */
/* WARNING: Removing unreachable block (ram,0x00481212) */
/* WARNING: Removing unreachable block (ram,0x004811bb) */
/* WARNING: Removing unreachable block (ram,0x00481205) */
/* WARNING: Removing unreachable block (ram,0x00481297) */
/* WARNING: Removing unreachable block (ram,0x004812bf) */
/* WARNING: Removing unreachable block (ram,0x004812cd) */
/* WARNING: Removing unreachable block (ram,0x004812f4) */
/* WARNING: Removing unreachable block (ram,0x004812de) */
/* WARNING: Removing unreachable block (ram,0x004812ed) */
/* WARNING: Removing unreachable block (ram,0x004812e6) */
/* WARNING: Removing unreachable block (ram,0x004812f9) */
/* WARNING: Removing unreachable block (ram,0x004812fd) */
/* WARNING: Removing unreachable block (ram,0x00481357) */
/* WARNING: Removing unreachable block (ram,0x0048137d) */
/* WARNING: Removing unreachable block (ram,0x004816aa) */
/* WARNING: Removing unreachable block (ram,0x004819d7) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_00480754(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_594 [248];
  undefined4 local_49c;
  int *local_48c;
  undefined1 local_474 [248];
  int *local_37c;
  int *local_36c;
  undefined4 local_364 [15];
  undefined1 *local_328;
  undefined4 local_324;
  int *local_320;
  int *local_31c;
  int *local_318;
  uint local_314;
  char *local_310;
  int *local_30c;
  char *local_308;
  char *local_2b8;
  int *local_2b4;
  char *local_2b0;
  char *local_260;
  int *local_25c;
  char *local_258;
  uint local_210;
  uint local_20c;
  uint local_208;
  undefined4 *local_204;
  uint local_200;
  undefined1 *local_1fc;
  int *local_1f8;
  int *local_1f4;
  undefined1 *local_1f0;
  int *local_1ec;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  int *local_1e0;
  int *local_1dc;
  uint local_1d8;
  undefined1 local_1d1;
  uint local_1d0;
  undefined1 *local_1cc;
  undefined4 local_1c8;
  int *local_1c4;
  int *local_1c0;
  int *local_1bc;
  int *local_1b8;
  uint local_1b4;
  undefined1 *local_1b0;
  int *local_1ac;
  int *local_1a8;
  uint local_1a4;
  int *local_1a0;
  undefined1 *local_19c;
  int *local_198;
  undefined4 local_194;
  uint *local_188;
  uint local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  int *local_16c;
  uint local_168;
  undefined1 *local_164;
  int *local_160;
  int *local_15c;
  uint local_158;
  int *local_154;
  undefined1 *local_150;
  int *local_14c;
  undefined4 local_148;
  uint *local_13c;
  int *local_138;
  undefined4 *local_134;
  uint local_130;
  undefined1 *local_12c;
  int *local_128;
  int *local_124;
  uint local_120;
  int *local_11c;
  undefined1 *local_118;
  int *local_114;
  undefined4 local_110;
  undefined2 local_100;
  int local_f4;
  undefined1 local_74 [8];
  int *local_6c;
  undefined1 local_64 [8];
  int *local_5c;
  undefined1 local_54 [8];
  int *local_4c;
  undefined **local_44 [2];
  undefined1 local_3c [8];
  int *local_34;
  undefined **local_2c [2];
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x502ce4);
  puVar3 = (undefined4 *)(param_2 + 0x25c);
  puVar6 = local_364;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if (*(int *)(param_2 + 0x20) != -0x80000000) {
    FUN_00485758((int)local_364,*(int *)(param_2 + 0x20) * 10);
  }
  FUN_00485664((int)local_364,*(int *)(param_2 + 8) == 1);
  FUN_004856b8((int)local_364,*(int *)(param_2 + 0x14) == 1);
  FUN_0048569c((int)local_364,*(int *)(param_2 + 0xc) == 1);
  FUN_00485680((int)local_364,*(int *)(param_2 + 0x10) == 1);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == -0x80000000) {
    iVar1 = *(int *)(param_2 + 0x210);
  }
  if (-1 < iVar1) {
    iVar2 = *(int *)(param_2 + 0x1d8) - *(int *)(param_2 + 0x1d4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar1 < iVar2 >> 4) {
      local_100 = 0x14;
      iVar4 = iVar1 * 0x10 + *(int *)(param_2 + 0x1d4);
      local_c = (int *)0x0;
      iVar2 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        local_120 = *(uint *)(*(int *)(iVar4 + 8) + -4);
        local_128 = std::string::__getRep(local_14,local_120,local_120);
        local_12c = local_14;
        local_37c = local_128 + 3;
        local_130 = local_120;
        local_134 = *(undefined4 **)(iVar4 + 8);
        local_138 = local_37c;
        local_124 = local_37c;
        local_c = local_37c;
        memcpy(local_37c,local_134,local_120);
      }
      else {
        local_36c = *(int **)(iVar4 + 8);
        local_118 = local_14;
        local_11c = local_36c + -3;
        local_114 = local_36c;
        local_c = local_36c;
        if (local_11c != &DAT_00513d58) {
          *local_11c = *local_11c + 1;
        }
      }
      local_f4 = local_f4 + 1;
      local_100 = 8;
      if (0x1f < (uint)local_c[-1]) {
        if ((*(int *)&DAT_005140ac) - 0xeU < 0x1f) {
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 1;
          puVar9 = &LAB_00408370;
          uVar8 = 0;
          local_100 = 0x38;
          local_13c = (uint *)FUN_004dc320(local_474,PTR_s_invalid_string_size_parameter_in_00516d20
                                          );
          std::string::string_from_cstr((int)local_54,local_13c);
          local_f4 = local_f4 + 2;
          local_2c[0] = &std::logic_error::vftable;
          local_148 = 0;
          local_1c = (int *)0x0;
          local_100 = 0x44;
          if (local_4c[-3] == -1 || local_4c[-3] + 1 < 0) {
            local_158 = local_4c[-1];
            local_160 = std::string::__getRep(local_24,local_158,local_158);
            local_164 = local_24;
            local_48c = local_160 + 3;
            local_168 = local_158;
            local_16c = local_4c;
            local_170 = local_48c;
            local_15c = local_48c;
            local_1c = local_48c;
            memcpy(local_48c,local_4c,local_158);
          }
          else {
            local_150 = local_24;
            local_14c = local_4c;
            local_1c = local_4c;
            local_154 = local_4c + -3;
            if (local_154 != &DAT_00513d58) {
              *local_154 = *local_154 + 1;
            }
          }
          local_100 = 0x38;
          local_2c[0] = &std::length_error::vftable;
          local_f4 = local_f4 + 2;
          if (local_4c != (int *)0x0) {
            if (local_4c[-3] != -1) {
              piVar5 = local_4c + -3;
              if (piVar5 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar2 = *piVar5 + 1;
              }
              if (iVar2 != 0) goto LAB_00480bcc;
            }
            local_174 = local_4c + -3;
            local_178 = local_4c + -3;
            operator_delete();
            local_17c = 0;
            local_180 = local_54;
            local_4c = (int *)0x0;
            local_49c = 0;
          }
LAB_00480bcc:
          local_100 = 0x2c;
          FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_2c,uVar8,puVar9,uVar10,uVar11,uVar12,uVar13);
        }
        if ((uint)local_c[-1] < 0x20) {
          std::string::replace_fill((int)local_14,local_c[-1],0,0x1f - local_c[-1],0);
        }
        else {
          local_184 = local_c[-1] - 0x1f;
          if ((uint)local_c[-1] < 0x1f) {
            uVar13 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 1;
            puVar9 = &LAB_004084c8;
            uVar8 = 0;
            local_100 = 0x68;
            local_188 = (uint *)FUN_004dc320(local_594,
                                             PTR_s_string_index_out_of_range_in_fun_00516d2c);
            std::string::string_from_cstr((int)local_64,local_188);
            local_f4 = local_f4 + 2;
            local_44[0] = &std::logic_error::vftable;
            local_194 = 0;
            local_34 = (int *)0x0;
            local_100 = 0x74;
            if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
              local_1a4 = local_5c[-1];
              local_1ac = std::string::__getRep(local_3c,local_1a4,local_1a4);
              local_1b0 = local_3c;
              local_1bc = local_1ac + 3;
              local_1b4 = local_1a4;
              local_1b8 = local_5c;
              local_1a8 = local_1bc;
              local_34 = local_1bc;
              memcpy(local_1bc,local_5c,local_1a4);
            }
            else {
              local_19c = local_3c;
              local_198 = local_5c;
              local_34 = local_5c;
              local_1a0 = local_5c + -3;
              if (local_1a0 != &DAT_00513d58) {
                *local_1a0 = *local_1a0 + 1;
              }
            }
            local_100 = 0x68;
            local_44[0] = &std::out_of_range::vftable;
            local_f4 = local_f4 + 2;
            if (local_5c != (int *)0x0) {
              if (local_5c[-3] != -1) {
                piVar5 = local_5c + -3;
                if (piVar5 == &DAT_00513d58) {
                  iVar2 = 1;
                }
                else if (piVar5 == &DAT_00513d58) {
                  iVar2 = 1;
                }
                else {
                  *piVar5 = *piVar5 + -1;
                  iVar2 = *piVar5 + 1;
                }
                if (iVar2 != 0) goto LAB_00480e56;
              }
              local_1c0 = local_5c + -3;
              local_1c4 = local_5c + -3;
              operator_delete();
              local_1c8 = 0;
              local_1cc = local_64;
              local_5c = (int *)0x0;
            }
LAB_00480e56:
            local_100 = 0x2c;
            FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_44,uVar8,puVar9,uVar10,uVar11,uVar12,uVar13);
          }
          local_1d0 = local_c[-1] - 0x1f;
          local_1d1 = 0;
          local_1d8 = local_1d0;
          if (local_184 < local_1d0) {
            local_1d8 = local_184;
          }
          FUN_004cfad4((int)local_14,0x1f,local_1d8,(uint)&local_1d1,0,0,0);
        }
        if (local_c + -3 != &DAT_00513d58) {
          local_c[-3] = 0;
        }
      }
      FUN_00485700((int)local_364,(char *)local_c);
      FUN_00485738((int)local_364,*(undefined1 *)(*(int *)(param_2 + 500) + iVar1));
      local_f4 = local_f4 + -1;
      if (local_c != (int *)0x0) {
        if (local_c[-3] != -1) {
          piVar5 = local_c + -3;
          if (piVar5 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar5 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar5 = *piVar5 + -1;
            iVar1 = *piVar5 + 1;
          }
          if (iVar1 != 0) goto LAB_00480fc5;
        }
        local_1dc = local_c + -3;
        local_1e0 = local_c + -3;
        operator_delete();
        local_1e4 = 0;
        local_c = (int *)0x0;
        local_1e8 = local_14;
      }
LAB_00480fc5:
      local_100 = 0;
    }
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 < 0) goto LAB_00481b47;
  iVar2 = *(int *)(param_2 + 0x198) - *(int *)(param_2 + 0x194);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if (iVar2 >> 4 <= iVar1) goto LAB_00481b47;
  local_100 = 0xb0;
  iVar2 = iVar1 * 0x10 + *(int *)(param_2 + 0x194);
  local_6c = (int *)0x0;
  iVar1 = *(int *)(*(int *)(iVar2 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar10 = *(uint *)(*(int *)(iVar2 + 8) + -4);
    local_1f8 = std::string::__getRep(local_74,uVar10,uVar10);
    local_1fc = local_74;
    local_1f4 = local_1f8 + 3;
    local_204 = *(undefined4 **)(iVar2 + 8);
    local_200 = uVar10;
    local_6c = local_1f4;
    memcpy(local_1f4,local_204,uVar10);
  }
  else {
    local_1ec = *(int **)(iVar2 + 8);
    local_6c = local_1ec;
    local_1f0 = local_74;
    piVar5 = local_1ec + -3;
    if (piVar5 != &DAT_00513d58) {
      *piVar5 = *piVar5 + 1;
    }
  }
  local_f4 = local_f4 + 1;
  local_100 = 0xa4;
  if (local_6c[-1] != 0) {
    local_208 = 0;
    local_20c = 0;
    local_210 = 0;
    local_25c = local_6c;
    local_258 = thunk_FUN_004dcd18((char *)local_6c,&DAT_00501d63 /* "\red" */);
    iVar1 = (*(int *)&DAT_005140ac);
    if (local_258 != (char *)0x0) {
      iVar1 = (int)local_258 - (int)local_6c;
    }
    if (iVar1 != -1) {
      local_260 = (char *)((int)local_6c + iVar1 + 4);
      local_208 = FUN_004e39d0(local_260);
    }
    local_2b4 = local_6c;
    local_2b0 = thunk_FUN_004dcd18((char *)local_6c,"\\green");
    iVar1 = (*(int *)&DAT_005140ac);
    if (local_2b0 != (char *)0x0) {
      iVar1 = (int)local_2b0 - (int)local_6c;
    }
    if (iVar1 != -1) {
      local_2b8 = (char *)((int)local_6c + iVar1 + 6);
      local_20c = FUN_004e39d0(local_2b8);
    }
    local_30c = local_6c;
    local_308 = thunk_FUN_004dcd18((char *)local_6c,"\\blue");
    iVar1 = (*(int *)&DAT_005140ac);
    if (local_308 != (char *)0x0) {
      iVar1 = (int)local_308 - (int)local_6c;
    }
    if (iVar1 != -1) {
      local_310 = (char *)((int)local_6c + iVar1 + 5);
      local_210 = FUN_004e39d0(local_310);
    }
    local_314 = local_208 & 0xff | (local_20c & 0xff) << 8 | (local_210 & 0xff) << 0x10;
    local_100 = 0xa4;
    FUN_004856d4((int)local_364,&local_314);
  }
  local_f4 = local_f4 + -1;
  if (local_6c != (int *)0x0) {
    if (local_6c[-3] != -1) {
      local_318 = local_6c + -3;
      if (local_318 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (local_318 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *local_318 = *local_318 + -1;
        iVar1 = *local_318 + 1;
      }
      if (iVar1 != 0) goto LAB_00481b3e;
    }
    local_31c = local_6c + -3;
    local_320 = local_6c + -3;
    operator_delete();
    local_324 = 0;
    local_6c = (int *)0x0;
    local_328 = local_74;
  }
LAB_00481b3e:
  local_100 = 0;
LAB_00481b47:
  puVar3 = local_364;
  puVar6 = param_1;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  *in_FS_OFFSET = local_110;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00481b70  FUN_00481b70   (169 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00481b70(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_a0 [39];
  
  FUN_00485870(local_a0,0);
  FUN_004858f4((int)local_a0,*(undefined2 *)(param_2 + 0x24));
  FUN_004858a4((int)local_a0,*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x28),'\0');
  FUN_004858cc((int)local_a0,*(undefined4 *)(param_2 + 0x30));
  FUN_004858e0((int)local_a0,-*(int *)(param_2 + 0x28));
  FUN_00485908((int)local_a0,*(short *)(param_2 + 0x34),(undefined4 *)(param_2 + 0x38));
  puVar2 = local_a0;
  puVar3 = param_1;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00481c1c  FUN_00481c1c   (671 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00481c74) */
undefined4 * __cdecl FUN_00481c1c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_194 [248];
  undefined4 local_9c;
  undefined1 *local_94;
  undefined4 local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  uint local_7c;
  undefined1 *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  undefined1 *local_68;
  int *local_64;
  undefined4 local_60;
  uint *local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  undefined1 local_2c [8];
  int *local_24;
  undefined **local_1c [2];
  undefined1 local_14 [8];
  int *local_c;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x502ea8);
  local_40 = 8;
  puVar4 = param_1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x12] = &DAT_00513d64;
  local_9c = param_1[0x12];
  local_34 = local_34 + 1;
  param_1[0x14] = 3;
  param_1[0x15] = 0;
  if (0xff < (*(int *)&DAT_005140ac) - 0xeU) goto LAB_00481e8d;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 1;
  puVar7 = &LAB_00408370;
  uVar6 = 0;
  local_40 = 0x38;
  local_54 = (uint *)FUN_004dc320(local_194,PTR_s_invalid_string_size_parameter_in_00516d20);
  std::string::string_from_cstr((int)local_2c,local_54);
  local_34 = local_34 + 2;
  local_1c[0] = &std::logic_error::vftable;
  local_60 = 0;
  local_c = (int *)0x0;
  local_40 = 0x44;
  if (local_24[-3] == -1 || local_24[-3] + 1 < 0) {
    uVar1 = local_24[-1];
    local_74 = std::string::__getRep(local_14,uVar1,uVar1);
    local_78 = local_14;
    local_84 = local_74 + 3;
    local_80 = local_24;
    local_7c = uVar1;
    local_70 = local_84;
    local_c = local_84;
    memcpy(local_84,local_24,uVar1);
  }
  else {
    local_68 = local_14;
    local_64 = local_24;
    local_c = local_24;
    local_6c = local_24 + -3;
    if (local_6c != &DAT_00513d58) {
      *local_6c = *local_6c + 1;
    }
  }
  local_40 = 0x38;
  local_1c[0] = &std::length_error::vftable;
  local_34 = local_34 + 2;
  if (local_24 != (int *)0x0) {
    if (local_24[-3] != -1) {
      piVar3 = local_24 + -3;
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00481e76;
    }
    local_88 = local_24 + -3;
    local_8c = local_24 + -3;
    operator_delete();
    local_90 = 0;
    local_94 = local_2c;
    local_24 = (int *)0x0;
  }
LAB_00481e76:
  local_40 = 0x2c;
  FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_1c,uVar6,puVar7,uVar8,uVar9,uVar10,uVar11);
LAB_00481e8d:
  if (*(uint *)(param_1[0x12] + -8) < 0x100) {
    FUN_004d6d58((int)(param_1 + 0x10),0x100);
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

} // namespace tea
