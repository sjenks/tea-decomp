// TEA.exe — application module "TEAPrintout"
// 16 functions, 0x004030f4..0x004044dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004030f4  TEAPrintout::~TEAPrintout   (136 bytes)   [rtti:dtor destructor]
//   written in code as TEAPrintout::_dtor
void __cdecl TEAPrintout::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ea9ac);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &TEAPrintout::vftable;
    FUN_0040317c(param_1 + 0x30,param_1[0x31],param_1[0x32]);
    operator_delete();
    OWL::TPrintout::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040317c  FUN_0040317c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040317c(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 8) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403194  TEAPrintout::vf6   (594 bytes)   [rtti:vtable virtual slot 6]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAPrintout::vf6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  int local_14;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x4ea9fc);
  FUN_004034c0(param_1);
  FUN_0048f7fc(local_c,(LOGFONTA *)(param_1 + 0x60));
  (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x14))();
  OWL::TGdiObject::_dtor(local_c,0);
  (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x24))();
  piVar3 = *(int **)(param_1 + 10);
  iVar2 = (**(code **)(*(int *)((int)piVar3 + 5) + 0x5c))();
  if (iVar2 != *piVar3) {
    SetBkMode((HDC)*piVar3,1);
  }
  iVar2 = 1;
  hdc = (HDC)(**(code **)(*(int *)((int)piVar3 + 5) + 0x5c))();
  SetBkMode(hdc,iVar2);
  if (param_2 == 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((param_2 + -2) * 8 + *(int *)(param_1 + 0xc4));
  }
  iVar1 = *(int *)((param_2 + -1) * 8 + *(int *)(param_1 + 0xc4));
  if ((iVar1 - iVar2) / *(int *)(param_1 + 0xec) < 1) {
    *in_FS_OFFSET = local_40;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x10))();
    for (; (iVar2 < iVar1 && (iVar2 < *(int *)(param_1 + 0xb4))); iVar2 = iVar2 + 1) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 0x14))();
      (**(code **)(*(int *)(*(int *)(param_1 + 10) + 5) + 0x44))();
      if (local_14 != 0) {
        if (*(int *)(local_14 + -0xc) != -1) {
          piVar3 = (int *)(local_14 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar4 = *piVar3 + 1;
          }
          if (iVar4 != 0) goto LAB_004033be;
        }
        operator_delete();
        local_14 = 0;
      }
LAB_004033be:
    }
    *in_FS_OFFSET = local_40;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040343c  TEAPrintout::vf9   (60 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
void __cdecl TEAPrintout::vf9(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_004034c0(param_1);
  *param_2 = 1;
  iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *param_3 = iVar1 >> 3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403478  TEAPrintout::vf2   (71 bytes)   [rtti:vtable virtual slot 2]
void __cdecl TEAPrintout::vf2(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5)

{
  int iVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0xb8) + 8))();
  if (iVar1 < 1) {
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    *param_4 = 1;
    *param_5 = 0x7fffffff;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034c0  FUN_004034c0   (2388 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
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
  __InitExceptBlockLDTC(0x4eaaa4);
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
    OWL::TGdiObject::_dtor(local_34,0);
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
    OWL::TWindowDC::_dtor(&local_2c,0);
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
        operator_delete();
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

// ----------------------------------------------------------------------------------------------------
// 0x00403e94  FUN_00403e94   (42 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00403e94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 2) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3 = param_3 + 2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403ec0  FUN_00403ec0   (505 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00403ec0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x4eab74);
  local_8 = *(undefined4 **)(param_1 + 8);
  if (local_8 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    if (iVar1 >> 3 == 0) {
      iVar1 = 0x80;
    }
    else {
      iVar1 = (iVar1 >> 3) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_c,0,&LAB_00404134,1,0,0,0);
    }
    FUN_004041a0(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    puVar4 = puVar2 + (iVar3 >> 3) * 2;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_3;
      puVar4[1] = param_3[1];
    }
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    FUN_004041a0(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 3) * 2 + 2);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    FUN_0040317c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1 * 2;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 3) * 2 + 2;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = local_8[-2];
      local_8[1] = local_8[-1];
    }
    FUN_00404174(param_2,*(undefined4 **)(param_1 + 8) + -2,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404174  FUN_00404174   (42 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00404174(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -2;
    param_3 = param_3 + -2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004041a0  FUN_004041a0   (120 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004041a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4eabf4);
  while (puVar2 = param_3, puVar1 = param_1, param_2 != puVar1) {
    param_1 = puVar1 + 2;
    param_3 = puVar2 + 2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
    }
  }
  *in_FS_OFFSET = local_2c;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404240  FUN_00404240   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00404240(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 8) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404258  TEAPrintout::vf5   (63 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl TEAPrintout::vf5(int param_1,int param_2)

{
  int iVar1;
  
  FUN_004034c0(param_1);
  if (0 < param_2) {
    iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    if (param_2 <= iVar1 >> 3) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040433c  OWL::TScreenDC::~TScreenDC   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TScreenDC::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScreenDC::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eac44);
  if (param_1 != (int *)0x0) {
    OWL::TWindowDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004043d8  OWL::TFont::~TFont   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFont::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFont::_dtor(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eac4c);
  if (param_1 != (uint *)0x0) {
    OWL::TGdiObject::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004044d0  std::exception::vf1   (10 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::exception::vf1(void)

{
  return PTR_s_no_named_exception_thrown_00516bb0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004044dc  std::bad_alloc::vf1   (10 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::bad_alloc::vf1(void)

{
  return PTR_s_bad_alloc_exception_thrown_00516bb8;
}

} // namespace tea
