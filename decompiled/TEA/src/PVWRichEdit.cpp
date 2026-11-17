// TEA.exe — application module "PVWRichEdit"
// 18 functions, 0x00419bb8..0x0041ae3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419bb8  PVWRichEdit::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWRichEdit::vf8 [rtti:vtable]
undefined4 __cdecl PVWRichEdit::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWRichEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TRichEdit::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419c00  FUN_00419c00   (410 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00419c00(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5, int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee76c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x20] = (int)(param_1 + 0x1d);
    param_1[0x21] = (int)(param_1 + 0x1e);
    param_1[1] = (int)(param_1 + 0x1d);
    param_1[2] = (int)(param_1 + 0x1e);
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1d] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x20,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  FUN_00468d58(param_1,1,uVar2,param_4,(uint *)("Beta Test Expiry" + 0x10),*param_5,
               param_5[1],param_5[2] - *param_5,param_5[3] - param_5[1],(uint *)0x0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PVWRichEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f06f8;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0704;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0710;
  param_1[0x1a] = (int)param_3;
  param_1[0x1b] = 0;
  param_1[0xc] = 0;
  uVar1 = 0x50a31044;
  param_1[0xd] = 0;
  if (param_6 != 0) {
    uVar1 = 0x50a31844;
  }
  FUN_004a7988(*param_1,0x100180,uVar1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419db8  PVWRichEdit::~PVWRichEdit   (294 bytes)   [rtti:dtor destructor]
//   written in code as PVWRichEdit::_dtor
void __cdecl PVWRichEdit::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ee790);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PVWRichEdit::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004f06f8;
    *(undefined ***)param_1[2] = &PTR_LAB_004f0704;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0710;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TEditFile::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x20,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1e,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419ee0  PVWRichEdit::EvLButtonDblClk   (41 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDBLCLK
void __cdecl PVWRichEdit::EvLButtonDblClk(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1[0x1a] + 0xc) + 0x5c))();
  if (cVar1 == '\0') {
    FUN_004a5774(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f0c  PVWRichEdit::NotifyAtChild_512   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 512)
void __cdecl PVWRichEdit::NotifyAtChild_512(int *param_1)

{
  GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
  (**(code **)(*(int *)(param_1[0x1a] + 0xc) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f30  PVWRichEdit::NotifyAtChild_768   (106 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 768)
void __cdecl PVWRichEdit::NotifyAtChild_768(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1b] == 0) {
    iVar1 = FUN_004a76a8(*param_1,0xb8,0,0);
    if (iVar1 != 0) {
      param_1[0x1b] = 1;
      GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
      (**(code **)(*(int *)(param_1[0x1a] + 0xc) + 0x58))();
      param_1[0x1b] = 0;
    }
  }
  FUN_004a76a8(*param_1,0xb9,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419f9c  FUN_00419f9c   (2694 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0041a1eb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00419f9c(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_428 [248];
  undefined4 local_330;
  int *local_320;
  undefined1 local_308 [248];
  undefined4 local_210;
  undefined *local_200;
  undefined4 local_1f8;
  uint local_1f4;
  byte local_1f0;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1ac;
  undefined4 *local_1a8;
  uint local_1a4;
  int local_1a0;
  int *local_19c;
  int *local_198;
  int local_194;
  undefined4 *local_190;
  undefined4 local_18c;
  uint local_188;
  undefined1 local_184 [36];
  uint local_160;
  undefined1 *local_15c;
  undefined4 local_158;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  uint local_144;
  undefined1 *local_140;
  int *local_13c;
  int *local_138;
  uint local_134;
  int *local_130;
  undefined1 *local_12c;
  int *local_128;
  undefined4 local_124;
  uint *local_118;
  uint local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  uint local_f8;
  undefined1 *local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  undefined1 *local_e4;
  int *local_e0;
  undefined4 local_dc;
  uint *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  byte local_b8 [12];
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
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
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ee848);
  local_a0 = 0;
  local_9c = -1;
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  if (param_4 == 0) {
    FUN_004691fc(param_2,(LPARAM)&local_a0);
  }
  else {
    local_a0 = FUN_004a76a8(*param_2,0xd7,0,param_4);
    local_9c = local_a0;
    if (iVar2 <= local_a0) {
      local_9c = 0;
    }
  }
  local_a4 = 0;
  if (local_a0 == local_9c) {
    HideCaret(*(HWND *)(*param_2 + 0xc));
    FUN_004a76a8(*param_2,0xb,0,0);
    local_1f8 = 0x3c;
    local_1f4 = 0;
    local_ac = local_a0;
    local_a8 = local_9c;
    while (local_a8 = local_a8 + 1, local_a8 <= iVar2) {
      FUN_0046924c(param_2,(LPARAM)&local_ac);
      FUN_004690f0(param_2,(LPARAM)&local_1f8,'\x01');
      if (((local_1f4 & 4) == 0) || ((local_1f0 & 4) == 0)) break;
    }
    local_a8 = local_a8 + -1;
    while (local_ac = local_ac + -1, -1 < local_ac) {
      FUN_0046924c(param_2,(LPARAM)&local_ac);
      FUN_004690f0(param_2,(LPARAM)&local_1f8,'\x01');
      if (((local_1f4 & 4) == 0) || ((local_1f0 & 4) == 0)) break;
    }
    local_ac = local_ac + 1;
    FUN_0046924c(param_2,(LPARAM)&local_a0);
    local_a0 = local_ac;
    local_9c = local_a8;
    memset((undefined4 *)local_b8,0,10);
    for (; local_9c + 1 <= iVar2; local_9c = local_9c + 1) {
      (**(code **)(param_2[3] + 0x30))();
      iVar3 = FUN_0043c6d4(local_b8[0]);
      if (iVar3 == 0) break;
      if (((char)local_b8[0] < '0') || ('9' < (char)local_b8[0])) {
        local_a4 = 0;
      }
      else {
        local_a4 = local_a4 + 1;
      }
    }
    do {
      if (local_a0 < 1) goto LAB_0041a1a1;
      (**(code **)(param_2[3] + 0x30))();
      iVar2 = FUN_0043c6d4(local_b8[0]);
      if (iVar2 == 0) goto LAB_0041a1a1;
      local_a0 = local_a0 + -1;
    } while( true );
  }
LAB_0041a1bd:
  local_c = (undefined4 *)&DAT_00513d64;
  local_200 = &DAT_00513d64;
  local_7c = local_7c + 1;
  local_88 = 0x20;
  if (local_a0 < local_9c) {
    local_bc = (local_9c - local_a0) * 2 + 1;
    puVar4 = (uint *)operator_new_array();
    memset(puVar4,0,local_bc);
    (**(code **)(param_2[3] + 0x30))();
    FUN_004cf41c((int)local_14,puVar4);
    operator_delete_array();
  }
  uVar5 = local_c[-1] - local_a4;
  local_88 = 0x2c;
  FUN_004d6118((int)local_24,(int)local_14,uVar5,DAT_005140ac);
  local_7c = local_7c + 1;
  FUN_004cf384(param_3,(int)local_24);
  local_7c = local_7c + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar6 = (int *)(local_1c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0041a32b;
    }
    local_c0 = local_1c + -0xc;
    local_c4 = local_1c + -0xc;
    operator_delete();
    local_c8 = 0;
    local_cc = local_24;
    local_1c = 0;
    local_210 = 0;
  }
LAB_0041a32b:
  local_88 = 0x20;
  if (DAT_005140ac - 0xe < uVar5) {
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 1;
    puVar8 = &LAB_00408370;
    uVar7 = 0;
    local_88 = 0x50;
    local_d0 = (uint *)FUN_004dc320(local_308,PTR_s_invalid_string_size_parameter_in_00516d20);
    std::string::string_from_cstr((int)local_64,local_d0);
    local_7c = local_7c + 2;
    local_3c[0] = &std::logic_error::vftable;
    local_dc = 0;
    local_2c = (int *)0x0;
    local_88 = 0x5c;
    if (local_5c[-3] == -1 || local_5c[-3] + 1 < 0) {
      uVar1 = local_5c[-1];
      local_f0 = std::string::__getRep(local_34,uVar1,uVar1);
      local_f4 = local_34;
      local_320 = local_f0 + 3;
      local_fc = local_5c;
      local_100 = local_320;
      local_f8 = uVar1;
      local_ec = local_320;
      local_2c = local_320;
      memcpy(local_320,local_5c,uVar1);
    }
    else {
      local_e4 = local_34;
      local_e0 = local_5c;
      local_2c = local_5c;
      local_e8 = local_5c + -3;
      if (local_e8 != &DAT_00513d58) {
        *local_e8 = *local_e8 + 1;
      }
    }
    local_88 = 0x50;
    local_3c[0] = &std::length_error::vftable;
    local_7c = local_7c + 2;
    if (local_5c != (int *)0x0) {
      if (local_5c[-3] != -1) {
        piVar6 = local_5c + -3;
        if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar2 = *piVar6 + 1;
        }
        if (iVar2 != 0) goto LAB_0041a560;
      }
      local_104 = local_5c + -3;
      local_108 = local_5c + -3;
      operator_delete();
      local_10c = 0;
      local_110 = local_64;
      local_5c = (int *)0x0;
      local_330 = 0;
    }
LAB_0041a560:
    local_88 = 0x44;
    FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_3c,uVar7,puVar8,uVar9,uVar10,uVar11,uVar12);
  }
  uVar9 = local_c[-1];
  if (uVar5 < uVar9) {
    local_114 = uVar9 - uVar5;
    if (uVar9 < uVar5) {
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 1;
      puVar8 = &LAB_004084c8;
      uVar7 = 0;
      local_88 = 0x80;
      local_118 = (uint *)FUN_004dc320(local_428,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      std::string::string_from_cstr((int)local_74,local_118);
      local_7c = local_7c + 2;
      local_54[0] = &std::logic_error::vftable;
      local_124 = 0;
      local_44 = (int *)0x0;
      local_88 = 0x8c;
      if (local_6c[-3] == -1 || local_6c[-3] + 1 < 0) {
        local_134 = local_6c[-1];
        local_13c = std::string::__getRep(local_4c,local_134,local_134);
        local_140 = local_4c;
        local_14c = local_13c + 3;
        local_144 = local_134;
        local_148 = local_6c;
        local_138 = local_14c;
        local_44 = local_14c;
        memcpy(local_14c,local_6c,local_134);
      }
      else {
        local_12c = local_4c;
        local_128 = local_6c;
        local_44 = local_6c;
        local_130 = local_6c + -3;
        if (local_130 != &DAT_00513d58) {
          *local_130 = *local_130 + 1;
        }
      }
      local_88 = 0x80;
      local_54[0] = &std::out_of_range::vftable;
      local_7c = local_7c + 2;
      if (local_6c != (int *)0x0) {
        if (local_6c[-3] != -1) {
          piVar6 = local_6c + -3;
          if (piVar6 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar2 = *piVar6 + 1;
          }
          if (iVar2 != 0) goto LAB_0041a7cf;
        }
        local_150 = local_6c + -3;
        local_154 = local_6c + -3;
        operator_delete();
        local_158 = 0;
        local_15c = local_74;
        local_6c = (int *)0x0;
      }
LAB_0041a7cf:
      local_88 = 0x44;
      FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_54,uVar7,puVar8,uVar9,uVar10,uVar11,uVar12);
    }
    local_160 = local_c[-1] - uVar5;
    local_184[0] = 0;
    local_188 = local_160;
    if (local_114 < local_160) {
      local_188 = local_114;
    }
    FUN_004cfad4((int)local_14,uVar5,local_188,(uint)local_184,0,0,0);
  }
  else {
    std::string::replace_fill((int)local_14,uVar9,0,uVar5 - uVar9,0);
  }
  if (local_c + -3 != &DAT_00513d58) {
    local_c[-3] = 0;
  }
  local_88 = 0xb0;
  local_18c = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar5 = local_c[-1];
    local_19c = std::string::__getRep(param_1,uVar5,uVar5);
    local_198 = local_19c + 3;
    *(int **)(param_1 + 8) = local_198;
    local_1a0 = param_1;
    local_1a8 = local_c;
    local_1ac = *(undefined4 **)(param_1 + 8);
    local_1a4 = uVar5;
    memcpy(local_1ac,local_c,uVar5);
  }
  else {
    local_190 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_194 = param_1;
    piVar6 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar6 != &DAT_00513d58) {
      *piVar6 = *piVar6 + 1;
    }
  }
  local_88 = 200;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar6 = local_c + -3;
      if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar2 = *piVar6 + 1;
      }
      if (iVar2 != 0) goto LAB_0041aa01;
    }
    local_1b0 = local_c + -3;
    local_1b4 = local_c + -3;
    operator_delete();
  }
LAB_0041aa01:
  *in_FS_OFFSET = local_98;
  return param_1;
LAB_0041a1a1:
  FUN_004a76a8(*param_2,0xb,1,0);
  ShowCaret(*(HWND *)(*param_2 + 0xc));
  goto LAB_0041a1bd;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa24  PVWRichEdit::vf20   (88 bytes)   [rtti:vtable virtual slot 20]
void __cdecl PVWRichEdit::vf20(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  OWL::TRichEdit::vf20(param_1);
  uVar1 = FUN_004693e8(param_1);
  if ((uVar1 & 0x4080001) != 0x4080001) {
    FUN_00469408(param_1,uVar1 | 0x4080001);
  }
  iVar2 = FUN_00469b1c('\0');
  if (1 < iVar2) {
    FUN_004a76a8(*param_1,0x45b,1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa7c  PVWRichEdit::vf21   (7 bytes)   [rtti:vtable virtual slot 21]
undefined1 __stdcall PVWRichEdit::vf21(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa84  PVWRichEdit::vf32   (7 bytes)   [rtti:vtable virtual slot 32]
undefined1 __stdcall PVWRichEdit::vf32(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa8c  FUN_0041aa8c   (63 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041aa8c(int *param_1,LPCSTR param_2)

{
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
    param_1[0x1b] = 0;
    FUN_004a76a8(*param_1,0xb9,0,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aacc  FUN_0041aacc   (450 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0041aacc(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *lpString;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4ee968);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_2 + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*param_2 + 0xc),(LPSTR)lpString,iVar2 + 1);
  std::string::string_from_cstr((int)local_14,lpString);
  operator_delete_array();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar3 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar3 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar3 = local_c + -3;
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
      if (iVar2 != 0) goto LAB_0041ac73;
    }
    operator_delete();
  }
LAB_0041ac73:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ac90  FUN_0041ac90   (110 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041ac90(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint local_c;
  undefined2 local_8;
  
  local_c = DAT_004ed250;
  local_8 = DAT_004ed254;
  if (5 < *(uint *)(*(int *)(param_2 + 8) + -4)) {
    pcVar1 = strlen(&local_c);
    uVar2 = FUN_004d40d0(param_2,0,5,(byte *)&local_c,(uint)pcVar1);
    if (uVar2 == 0) {
      FUN_0041ad00(param_1,param_2);
      return;
    }
  }
  FUN_0041aa8c(param_1,*(LPCSTR *)(param_2 + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ad00  FUN_0041ad00   (68 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041ad00(int *param_1,int param_2)

{
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = 1;
    FUN_00483a88(*(HWND *)(*param_1 + 0xc),param_2,0);
    param_1[0x1b] = 0;
    FUN_004a76a8(*param_1,0xb9,0,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ad44  PVWRichEdit::vf30   (129 bytes)   [rtti:vtable virtual slot 30]
void __cdecl PVWRichEdit::vf30(int *param_1,LONG *param_2)

{
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  SetFocus(*(HWND *)(*param_1 + 0xc));
  local_c = 0;
  local_8 = -1;
  FUN_004691fc(param_1,(LPARAM)&local_c);
  if (local_c == local_8) {
    local_14.x = *param_2;
    local_14.y = param_2[1];
    ScreenToClient(*(HWND *)(*param_1 + 0xc),&local_14);
    local_c = FUN_004a76a8(*param_1,0xd7,0,(LPARAM)&local_14);
    local_8 = local_c;
    FUN_0046924c(param_1,(LPARAM)&local_c);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041adc8  PVWRichEdit::vf31   (5 bytes)   [rtti:vtable virtual slot 31]
void __stdcall PVWRichEdit::vf31(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041add0  PVWRichEdit::vf9   (106 bytes)   [rtti:vtable virtual slot 9]
void __cdecl PVWRichEdit::vf9(int *param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_1[0x1b] == 0) {
    param_1[0x1b] = 1;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),"Beta Test Expiry" + 0x10);
    local_40 = 0x3c;
    local_3c = 0;
    FUN_004857f4((int)&local_40);
    FUN_00469120(param_1,(LPARAM)&local_40,4);
    param_1[0x1b] = 0;
    FUN_004a76a8(*param_1,0xb9,0,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ae3c  FUN_0041ae3c   (172 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0041ae3c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c;
  int local_27;
  
  __InitExceptBlockLDTC(0x4ee9d8);
  FUN_004a8760(&local_2c);
  (**(code **)(local_27 + 0xc))();
  FUN_00485770(param_2,param_1 + 1);
  uVar1 = FUN_004e3c04();
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  FUN_00485738(param_2,*(undefined1 *)((int)param_1 + 0x1b));
  FUN_004856d4(param_2,param_1);
  OWL::TWindowDC::_dtor(&local_2c,0);
  *in_FS_OFFSET = local_50;
  return;
}

} // namespace tea
