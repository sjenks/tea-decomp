// TEA.exe — application module "PVWURL"
// 14 functions, 0x0041d510..0x0041e888. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d510  PVWURL::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWURL::vf8 [rtti:vtable]
undefined4 __cdecl PVWURL::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&PVWURL::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEdit::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d558  PVWURL::EvGetDlgCode   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_GETDLGCODE
void __stdcall PVWURL::EvGetDlgCode(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d55f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 100))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d564  PVWURL::EvLButtonDown   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONDOWN
void __stdcall PVWURL::EvLButtonDown(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x58))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d570  PVWURL::EvMouseMove   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
void __stdcall PVWURL::EvMouseMove(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x5c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d57c  PVWURL::EvLButtonUp   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONUP
void __stdcall PVWURL::EvLButtonUp(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d588  FUN_0041d588   (526 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0041d588(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 )

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef1a4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    param_1[0x14] = (int)(param_1 + 0x11);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[1] = (int)(param_1 + 0x11);
    param_1[2] = (int)(param_1 + 0x12);
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x11] = (int)&OWL::TEventHandler::vftable;
    param_1[0x12] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x14,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x24;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_3;
  }
  FUN_004b6184(param_1,1,uVar3,param_4,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x24;
  param_1[3] = (int)&PVWURL::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0064;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f007c;
  param_1[7] = (int)param_3;
  param_1[10] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_5 + 8) + -4);
    piVar4 = std::string::__getRep(param_1 + 8,uVar2,uVar2);
    param_1[10] = (int)(piVar4 + 3);
    memcpy((undefined4 *)param_1[10],*(undefined4 **)(param_5 + 8),uVar2);
  }
  else {
    param_1[10] = *(int *)(param_5 + 8);
    piVar4 = (int *)(param_1[10] + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  param_1[0xc] = param_6;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d7b0  PVWURL::~PVWURL   (382 bytes)   [rtti:dtor destructor]
//   written in code as PVWURL::_dtor
void __cdecl PVWURL::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef1e0);
  if (param_1 == (int *)0x0) goto LAB_0041d91e;
  param_1[3] = (int)&PVWURL::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f0064;
  *(undefined ***)param_1[2] = &PTR_LAB_004f0070;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f007c;
  if (param_1[10] != 0) {
    if (*(int *)(param_1[10] + -0xc) != -1) {
      piVar2 = (int *)(param_1[10] + -0xc);
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
      if (iVar1 != 0) goto LAB_0041d889;
    }
    operator_delete();
    param_1[10] = 0;
  }
LAB_0041d889:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x24;
  OWL::TEdit::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x24;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x24;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x14,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x12,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0041d91e:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d930  PVWURL::vf20   (3415 bytes)   [rtti:vtable virtual slot 20]
/* WARNING: Removing unreachable block (ram,0x0041dfd0) */
/* WARNING: Removing unreachable block (ram,0x0041e0af) */
/* WARNING: Removing unreachable block (ram,0x0041e05b) */
/* WARNING: Removing unreachable block (ram,0x0041e0a2) */
/* WARNING: Removing unreachable block (ram,0x0041e146) */
/* WARNING: Removing unreachable block (ram,0x0041e15f) */
/* WARNING: Removing unreachable block (ram,0x0041e16a) */
/* WARNING: Removing unreachable block (ram,0x0041e18e) */
/* WARNING: Removing unreachable block (ram,0x0041e178) */
/* WARNING: Removing unreachable block (ram,0x0041e187) */
/* WARNING: Removing unreachable block (ram,0x0041e180) */
/* WARNING: Removing unreachable block (ram,0x0041e193) */
/* WARNING: Removing unreachable block (ram,0x0041e197) */
/* WARNING: Removing unreachable block (ram,0x0041e1e8) */
/* WARNING: Removing unreachable block (ram,0x0041dca3) */
/* WARNING: Removing unreachable block (ram,0x0041da70) */
/* WARNING: Removing unreachable block (ram,0x0041db4d) */
/* WARNING: Removing unreachable block (ram,0x0041daf9) */
/* WARNING: Removing unreachable block (ram,0x0041db40) */
/* WARNING: Removing unreachable block (ram,0x0041dbe4) */
/* WARNING: Removing unreachable block (ram,0x0041dbfd) */
/* WARNING: Removing unreachable block (ram,0x0041dc08) */
/* WARNING: Removing unreachable block (ram,0x0041dc2c) */
/* WARNING: Removing unreachable block (ram,0x0041dc16) */
/* WARNING: Removing unreachable block (ram,0x0041dc25) */
/* WARNING: Removing unreachable block (ram,0x0041dc1e) */
/* WARNING: Removing unreachable block (ram,0x0041dc31) */
/* WARNING: Removing unreachable block (ram,0x0041dc35) */
/* WARNING: Removing unreachable block (ram,0x0041dc83) */
/* WARNING: Removing unreachable block (ram,0x0041dd13) */
/* WARNING: Removing unreachable block (ram,0x0041ddf8) */
/* WARNING: Removing unreachable block (ram,0x0041dda4) */
/* WARNING: Removing unreachable block (ram,0x0041ddeb) */
/* WARNING: Removing unreachable block (ram,0x0041de8f) */
/* WARNING: Removing unreachable block (ram,0x0041deb3) */
/* WARNING: Removing unreachable block (ram,0x0041debe) */
/* WARNING: Removing unreachable block (ram,0x0041defe) */
/* WARNING: Removing unreachable block (ram,0x0041ded7) */
/* WARNING: Removing unreachable block (ram,0x0041def7) */
/* WARNING: Removing unreachable block (ram,0x0041dee4) */
/* WARNING: Removing unreachable block (ram,0x0041df03) */
/* WARNING: Removing unreachable block (ram,0x0041df07) */
/* WARNING: Removing unreachable block (ram,0x0041df55) */
/* WARNING: Removing unreachable block (ram,0x0041e208) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PVWURL::vf20(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_70c [1112];
  int *local_2b4;
  int *local_2a4;
  int *local_294;
  int *local_290;
  int *local_28c;
  int *local_288;
  uint local_284;
  undefined1 local_280 [36];
  uint local_25c;
  undefined1 *local_258;
  undefined4 local_254;
  int *local_250;
  int *local_24c;
  int *local_248;
  int *local_244;
  int *local_240;
  uint local_23c;
  undefined1 *local_238;
  int *local_234;
  int *local_230;
  uint local_22c;
  int *local_228;
  undefined1 *local_224;
  int *local_220;
  undefined4 local_21c;
  uint *local_210;
  uint local_20c;
  int *local_208;
  char *local_204;
  uint local_1b8;
  undefined1 local_1b4 [12];
  uint local_1a8;
  uint local_158;
  int *local_154;
  char *local_150;
  uint local_104;
  int *local_100;
  undefined4 *local_fc;
  uint local_f8;
  undefined1 *local_f4;
  int *local_f0;
  int *local_ec;
  uint local_e8;
  int *local_e4;
  undefined1 *local_e0;
  int *local_dc;
  undefined4 local_d8;
  undefined2 local_c8;
  int local_bc;
  undefined1 local_b4 [8];
  int *local_ac;
  undefined **local_a4 [2];
  undefined1 local_9c [8];
  int *local_94;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4ef2d0);
  OWL::TEdit::vf20(param_1);
  local_c8 = 0x14;
  local_c = (int *)0x0;
  if (*(int *)(param_1[10] + -0xc) == -1 || *(int *)(param_1[10] + -0xc) + 1 < 0) {
    local_e8 = *(uint *)(param_1[10] + -4);
    local_f0 = std::string::__getRep(local_14,local_e8,local_e8);
    local_f4 = local_14;
    local_2b4 = local_f0 + 3;
    local_f8 = local_e8;
    local_fc = (undefined4 *)param_1[10];
    local_100 = local_2b4;
    local_ec = local_2b4;
    local_c = local_2b4;
    memcpy(local_2b4,local_fc,local_e8);
  }
  else {
    local_2a4 = (int *)param_1[10];
    local_e0 = local_14;
    local_e4 = local_2a4 + -3;
    local_dc = local_2a4;
    local_c = local_2a4;
    if (local_e4 != &DAT_00513d58) {
      *local_e4 = *local_e4 + 1;
    }
  }
  local_bc = local_bc + 1;
  local_c8 = 8;
  local_154 = local_c;
  local_150 = thunk_FUN_004dcd18((char *)local_c,"mailto:");
  local_104 = DAT_005140ac;
  if (local_150 != (char *)0x0) {
    local_104 = (int)local_150 - (int)local_c;
  }
  if (local_104 != 0xffffffff) {
    local_158 = local_104 + 7;
    local_1a8 = local_c[-1];
    local_1b4[0] = 0;
    local_1b8 = local_1a8;
    if (local_158 < local_1a8) {
      local_1b8 = local_158;
    }
    FUN_004cfad4((int)local_14,0,local_1b8,(uint)local_1b4,0,0,0);
  }
  local_208 = local_c;
  local_204 = thunk_FUN_004dcd18((char *)local_c,"\?Subject=");
  uVar1 = DAT_005140ac;
  if (local_204 != (char *)0x0) {
    uVar1 = (int)local_204 - (int)local_c;
  }
  local_104 = uVar1;
  if (uVar1 != 0xffffffff) {
    local_20c = DAT_005140ac;
    if ((uint)local_c[-1] < uVar1) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 1;
      puVar4 = &LAB_004084c8;
      uVar3 = 0;
      local_c8 = 0xec;
      local_210 = (uint *)FUN_004dc320(local_70c,PTR_s_string_index_out_of_range_in_fun_00516d2c);
      std::string::string_from_cstr((int)local_b4,local_210);
      local_bc = local_bc + 2;
      local_a4[0] = &std::logic_error::vftable;
      local_21c = 0;
      local_94 = (int *)0x0;
      local_c8 = 0xf8;
      if (local_ac[-3] == -1 || local_ac[-3] + 1 < 0) {
        local_22c = local_ac[-1];
        local_234 = std::string::__getRep(local_9c,local_22c,local_22c);
        local_238 = local_9c;
        local_244 = local_234 + 3;
        local_23c = local_22c;
        local_240 = local_ac;
        local_230 = local_244;
        local_94 = local_244;
        memcpy(local_244,local_ac,local_22c);
      }
      else {
        local_224 = local_9c;
        local_220 = local_ac;
        local_94 = local_ac;
        local_228 = local_ac + -3;
        if (local_228 != &DAT_00513d58) {
          *local_228 = *local_228 + 1;
        }
      }
      local_c8 = 0xec;
      local_a4[0] = &std::out_of_range::vftable;
      local_bc = local_bc + 2;
      if (local_ac != (int *)0x0) {
        if (local_ac[-3] != -1) {
          local_248 = local_ac + -3;
          if (local_248 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (local_248 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *local_248 = *local_248 + -1;
            iVar2 = *local_248 + 1;
          }
          if (iVar2 != 0) goto LAB_0041e500;
        }
        local_24c = local_ac + -3;
        local_250 = local_ac + -3;
        operator_delete();
        local_254 = 0;
        local_258 = local_b4;
        local_ac = (int *)0x0;
      }
LAB_0041e500:
      local_c8 = 0xe0;
      FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_a4,uVar3,puVar4,uVar5,uVar6,uVar7,uVar8);
    }
    local_25c = local_c[-1] - uVar1;
    local_280[0] = 0;
    local_284 = local_25c;
    if (local_20c < local_25c) {
      local_284 = local_20c;
    }
    FUN_004cfad4((int)local_14,uVar1,local_284,(uint)local_280,0,0,0);
  }
  if (local_c[-1] != 0) {
    local_288 = local_c;
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)local_c);
  }
  if (*(int *)(*param_1 + 0x6c) == 0) {
    iVar2 = *(int *)(*param_1 + 0x6c);
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x6c) + 4;
  }
  FUN_004a7bfc(*param_1,iVar2,0x1a4a);
  local_bc = local_bc + -1;
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      local_28c = local_c + -3;
      if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_28c = *local_28c + -1;
        iVar2 = *local_28c + 1;
      }
      if (iVar2 != 0) goto LAB_0041e672;
    }
    local_290 = local_c + -3;
    local_294 = local_c + -3;
    operator_delete();
  }
LAB_0041e672:
  *in_FS_OFFSET = local_d8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e688  FUN_0041e688   (236 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0041e688(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4efd80);
  *param_1 = &std::exception::vftable;
  param_1[4] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    piVar3 = std::string::__getRep(param_1 + 2,uVar2,uVar2);
    param_1[4] = piVar3 + 3;
    memcpy((undefined4 *)param_1[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    piVar3 = (int *)(param_1[4] + -0xc);
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *param_1 = &std::logic_error::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e774  PVWURL::vf22   (45 bytes)   [rtti:vtable virtual slot 22]
void __cdecl PVWURL::vf22(int *param_1,undefined4 param_2,int *param_3)

{
  param_1[0xd] = *param_3;
  param_1[0xe] = param_3[1];
  param_1[0xf] = 1;
  OWL::TWindow::EvLButtonDown(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e7a4  PVWURL::vf23   (69 bytes)   [rtti:vtable virtual slot 23]
void __cdecl PVWURL::vf23(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3 - param_1[0xd] >> 0x1f;
  if (2 < (int)((*param_3 - param_1[0xd] ^ uVar1) - uVar1)) {
    param_1[0xf] = 0;
  }
  uVar1 = param_3[1] - param_1[0xe] >> 0x1f;
  if (2 < (int)((param_3[1] - param_1[0xe] ^ uVar1) - uVar1)) {
    param_1[0xf] = 0;
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e7ec  PVWURL::vf24   (62 bytes)   [rtti:vtable virtual slot 24]
void __cdecl PVWURL::vf24(int *param_1)

{
  if (param_1[0xf] == 1) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0x80))();
  }
  param_1[0xf] = 0;
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e82c  PVWURL::vf25   (89 bytes)   [rtti:vtable virtual slot 25]
uint __cdecl PVWURL::vf25(int *param_1,int param_2)

{
  uint uVar1;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 4) == 0x100)) &&
     ((*(int *)(param_2 + 8) == 0xd || (*(int *)(param_2 + 8) == 0x20)))) {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    (**(code **)(*(int *)(param_1[7] + 0xc) + 0x80))();
    return 4;
  }
  uVar1 = OWL::TEdit::EvGetDlgCode(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e888  FUN_0041e888   (45 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0041e888(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ef408);
  *param_1 = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
