// TEA.exe — application module "TEADictionaryPropertiesWindows"
// 18 functions, 0x00401000..0x00402f68. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **ppuVar1;
  
  _DAT_004ea32b = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_004cd488();
  FUN_004cc824();
  FUN_004cd48c();
  FUN_004ddaec((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_004ea2d0;
  _DAT_004ea32f = GetModuleHandleA((LPCSTR)0x0);
  FUN_004e6fb4((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  FUN_00401012   (71 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_004ea32b = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_004cd488();
  FUN_004cc824();
  FUN_004cd48c();
  FUN_004ddaec((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_004ea2d0;
  _DAT_004ea32f = GetModuleHandleA((LPCSTR)0x0);
  FUN_004e6fb4((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00517250 = FUN_00401140();
  _DAT_00517250 = _DAT_00517250 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_0051723c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  FUN_00401140   (15 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall FUN_00401140(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  FUN_00401150   (845 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
int * __cdecl FUN_00401150(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ea368);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x296);
    param_1[0x296] = (int)(param_1 + 0x293);
    param_1[0x297] = (int)(param_1 + 0x294);
    param_1[1] = (int)(param_1 + 0x293);
    param_1[2] = (int)(param_1 + 0x294);
    param_1[0x292] = 0;
    param_1[0x295] = 0;
    param_1[0x293] = (int)&OWL::TEventHandler::vftable;
    param_1[0x294] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x296,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x9e8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x9e8;
  FUN_00413cf4(param_1,1,0x4ea340,param_3,param_4,(uint *)0x12f2,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x9e8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x9e8;
  param_1[3] = (int)&TEADictionaryPropertiesWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004ea890;
  *(undefined ***)param_1[2] = &PTR_LAB_004ea89c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ea8a8;
  param_1[0x18] = param_5;
  param_1[0x19] = param_6;
  FUN_004bf504(param_1 + 0x1a,0,*param_1,0x3278,0);
  FUN_0041af38(param_1 + 0x45,0,param_1,0x8de,0);
  FUN_0041af38(param_1 + 0x74,0,param_1,0x343a,0);
  FUN_0041af38(param_1 + 0xa3,0,param_1,0x1130,0);
  FUN_004c7a28(param_1 + 0xd2,0,*param_1,0x2fb2,0,0);
  FUN_004c7a28((int *)((int)param_1 + 0x3f6),0,*param_1,0x3688,0,0);
  FUN_004c7a28(param_1 + 0x129,0,*param_1,0x1a18,0,0);
  FUN_004c7a28((int *)((int)param_1 + 0x552),0,*param_1,0x1a22,0,0);
  FUN_0041af38(param_1 + 0x180,0,param_1,0x113a,0);
  FUN_0041af38(param_1 + 0x1af,0,param_1,0x367e,0);
  FUN_0041af38(param_1 + 0x1de,0,param_1,0x1202,0);
  FUN_0041af38(param_1 + 0x20d,0,param_1,0x120c,0);
  FUN_004abc64(param_1 + 0x23c,0,*param_1,1,0);
  FUN_004abc64(param_1 + 0x267,0,*param_1,0x5fa,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004014d0  TEADictionaryPropertiesWindows::~TEADictionaryPropertiesWindows   (1027 bytes)   [rtti:dtor destructor]
//   written in code as TEADictionaryPropertiesWindows::_dtor
void __cdecl TEADictionaryPropertiesWindows::_dtor(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ea434);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TEADictionaryPropertiesWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004ea890;
    *(undefined ***)param_1[2] = &PTR_LAB_004ea89c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ea8a8;
    OWL::TButton::_dtor(param_1 + 0x267,2);
    OWL::TButton::_dtor(param_1 + 0x23c,2);
    PVWEdit::_dtor(param_1 + 0x20d,2);
    PVWEdit::_dtor(param_1 + 0x1de,2);
    PVWEdit::_dtor(param_1 + 0x1af,2);
    PVWEdit::_dtor(param_1 + 0x180,2);
    piVar1 = (int *)((int)param_1 + 0x552);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x57a),0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x556) + -4);
    *piVar2 = *piVar2 + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x572),0);
    piVar2 = param_1 + 0x129;
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + -4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
    OWL::TControl::_dtor(piVar2,0);
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + 4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x133,0);
    *(int *)(param_1[0x12a] + -4) = *(int *)(param_1[0x12a] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x131,0);
    piVar1 = (int *)((int)param_1 + 0x3f6);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x41e),0);
    piVar2 = (int *)(*(int *)((int)param_1 + 0x3fa) + -4);
    *piVar2 = *piVar2 + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x416),0);
    piVar2 = param_1 + 0xd2;
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + -4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -4;
    OWL::TControl::_dtor(piVar2,0);
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + 4;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 4;
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0xdc,0);
    *(int *)(param_1[0xd3] + -4) = *(int *)(param_1[0xd3] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0xda,0);
    PVWEdit::_dtor(param_1 + 0xa3,2);
    PVWEdit::_dtor(param_1 + 0x74,2);
    PVWEdit::_dtor(param_1 + 0x45,2);
    piVar2 = param_1 + 0x1a;
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + -1;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + -1;
    OWL::TControl::_dtor(piVar2,0);
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + 1;
    *(int *)(*piVar2 + -4) = *(int *)(*piVar2 + -4) + 1;
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x8d),0);
    *(int *)(param_1[0x1b] + -4) = *(int *)(param_1[0x1b] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x85),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x9e8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x9e8;
    PropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x9e8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x9e8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x296,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x294,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004018d4  TEADictionaryPropertiesWindows::vf11   (951 bytes)   [rtti:vtable virtual slot 11]
void __cdecl TEADictionaryPropertiesWindows::vf11(int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  uint *lpString;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4ea494);
  PropertiesViewWindows::vf11(param_1);
  pCVar1 = (LPCSTR)FUN_00408c98(param_1[0x18],param_1[0x19]);
  FUN_0041b1ec(param_1 + 0x45,pCVar1);
  FUN_00408d0c(local_24,param_1[0x18],param_1[0x19]);
  FUN_0041b474(param_1 + 0x74,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
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
      if (iVar2 != 0) goto LAB_004019b8;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_004019b8:
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)lpString,iVar2 + 1);
  *(CHAR *)((int)lpString + iVar2) = '\0';
  FUN_00408cbc(local_34,param_1[0x18],param_1[0x19]);
  FUN_00401d10((int)local_14,(int)local_34,lpString);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar3 = (int *)(local_2c + -0xc);
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
      if (iVar2 != 0) goto LAB_00401a92;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_00401a92:
  FUN_004b0c44(param_1,local_c);
  operator_delete_array();
  FUN_00408d5c(local_44,param_1[0x18],param_1[0x19]);
  FUN_0041b474(param_1 + 0xa3,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar3 = (int *)(local_3c + -0xc);
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
      if (iVar2 != 0) goto LAB_00401b5f;
    }
    operator_delete();
    local_3c = 0;
  }
LAB_00401b5f:
  iVar2 = FUN_00408c68(param_1[0x18],param_1[0x19]);
  if (iVar2 != 0) {
    FUN_00408e24(param_1[0x18],param_1[0x19]);
    FUN_0041b24c(param_1 + 0x180);
    FUN_0041b24c(param_1 + 0x1af);
    FUN_0041b24c(param_1 + 0x1de);
    FUN_0041b24c(param_1 + 0x20d);
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar2 = *local_c + 1;
      }
      if (iVar2 != 0) goto LAB_00401c7a;
    }
    operator_delete();
  }
LAB_00401c7a:
  *in_FS_OFFSET = local_68;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401d10  FUN_00401d10   (881 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00401d10(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4ea534);
  iVar2 = std::string::string_from_cstr((int)local_14,param_3);
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
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  iVar2 = std::string::append((int)local_24,iVar2);
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
    if (piVar3 != &DAT_00513d58) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
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
      if (iVar4 != 0) goto LAB_00401fb7;
    }
    operator_delete();
    local_c = 0;
  }
LAB_00401fb7:
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
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
      if (iVar4 != 0) goto LAB_00402066;
    }
    operator_delete();
  }
LAB_00402066:
  *in_FS_OFFSET = local_48;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040209c  TEADictionaryPropertiesWindows::vf47   (1056 bytes)   [rtti:vtable virtual slot 47]
void __cdecl TEADictionaryPropertiesWindows::vf47(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_80;
  LONG local_70 [4];
  undefined4 local_60;
  undefined2 local_50;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4ea664);
  local_80.left = 0;
  local_80.top = 0;
  local_80.right = 0;
  local_80.bottom = 0;
  FUN_004a7a6c(*param_1,&local_80);
  ptVar2 = &local_80;
  pLVar3 = local_70;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)operator_new();
  if (local_8 != (int *)0x0) {
    local_50 = 0x14;
    FUN_004173c0(local_8,(int)local_70,param_1[0x1a],3,3);
    local_50 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)operator_new();
  if (local_c != (int *)0x0) {
    local_50 = 0x2c;
    FUN_004173c0(local_c,(int)local_70,param_1[0x45],3,0);
    local_50 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)operator_new();
  if (local_10 != (int *)0x0) {
    local_50 = 0x44;
    FUN_004173c0(local_10,(int)local_70,param_1[0x74],3,0);
    local_50 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  local_14 = (int *)operator_new();
  if (local_14 != (int *)0x0) {
    local_50 = 0x5c;
    FUN_004173c0(local_14,(int)local_70,param_1[0xa3],3,3);
    local_50 = 0x50;
  }
  FUN_00417498((int)param_1,local_14);
  local_18 = (int *)operator_new();
  if (local_18 != (int *)0x0) {
    local_50 = 0x74;
    FUN_004173c0(local_18,(int)local_70,param_1[0xd2],0,2);
    local_50 = 0x68;
  }
  FUN_00417498((int)param_1,local_18);
  local_1c = (int *)operator_new();
  if (local_1c != (int *)0x0) {
    local_50 = 0x8c;
    FUN_004173c0(local_1c,(int)local_70,*(int *)((int)param_1 + 0x3f6),0,2);
    local_50 = 0x80;
  }
  FUN_00417498((int)param_1,local_1c);
  local_20 = (int *)operator_new();
  if (local_20 != (int *)0x0) {
    local_50 = 0xa4;
    FUN_004173c0(local_20,(int)local_70,param_1[0x129],0,2);
    local_50 = 0x98;
  }
  FUN_00417498((int)param_1,local_20);
  local_24 = (int *)operator_new();
  if (local_24 != (int *)0x0) {
    local_50 = 0xbc;
    FUN_004173c0(local_24,(int)local_70,*(int *)((int)param_1 + 0x552),0,2);
    local_50 = 0xb0;
  }
  FUN_00417498((int)param_1,local_24);
  local_28 = (int *)operator_new();
  if (local_28 != (int *)0x0) {
    local_50 = 0xd4;
    FUN_004173c0(local_28,(int)local_70,param_1[0x180],0,2);
    local_50 = 200;
  }
  FUN_00417498((int)param_1,local_28);
  local_2c = (int *)operator_new();
  if (local_2c != (int *)0x0) {
    local_50 = 0xec;
    FUN_004173c0(local_2c,(int)local_70,param_1[0x1af],0,2);
    local_50 = 0xe0;
  }
  FUN_00417498((int)param_1,local_2c);
  local_30 = (int *)operator_new();
  if (local_30 != (int *)0x0) {
    local_50 = 0x104;
    FUN_004173c0(local_30,(int)local_70,param_1[0x1de],0,2);
    local_50 = 0xf8;
  }
  FUN_00417498((int)param_1,local_30);
  local_34 = (int *)operator_new();
  if (local_34 != (int *)0x0) {
    local_50 = 0x11c;
    FUN_004173c0(local_34,(int)local_70,param_1[0x20d],0,2);
    local_50 = 0x110;
  }
  FUN_00417498((int)param_1,local_34);
  local_38 = (int *)operator_new();
  if (local_38 != (int *)0x0) {
    local_50 = 0x134;
    FUN_004173c0(local_38,(int)local_70,param_1[0x23c],2,2);
    local_50 = 0x128;
  }
  FUN_00417498((int)param_1,local_38);
  local_3c = (int *)operator_new();
  if (local_3c != (int *)0x0) {
    local_50 = 0x14c;
    FUN_004173c0(local_3c,(int)local_70,param_1[0x267],2,2);
    local_50 = 0x140;
  }
  FUN_00417498((int)param_1,local_3c);
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402640  OWL::TWindow::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TWindow::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}

// ----------------------------------------------------------------------------------------------------
// 0x0040264c  OWL::TWindow::vf24   (33 bytes)   [rtti:vtable virtual slot 24]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TWindow::vf24(int param_1,byte param_2)

{
  BOOL BVar1;
  
  BVar1 = EnableWindow(*(HWND *)(param_1 + 0xc),(uint)param_2);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402670  OWL::TWindow::vf26   (25 bytes)   [rtti:vtable virtual slot 26]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::vf26(int param_1,byte param_2)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),(RECT *)0x0,(uint)param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040268c  OWL::TWindow::vf27   (27 bytes)   [rtti:vtable virtual slot 27]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TWindow::vf27(int param_1,RECT *param_2,byte param_3)

{
  InvalidateRect(*(HWND *)(param_1 + 0xc),param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402880  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
//   written in code as std::string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::string::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_004028fb;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004028fb:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402c58  OWL::TStatic::~TStatic   (162 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TStatic::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TStatic::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ea950);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402d74  OWL::TGroupBox::~TGroupBox   (158 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TGroupBox::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TGroupBox::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ea958);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -1;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -1;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 1;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 1;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x25),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x1d),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402f30  std::vector<PropertiesViewWindows::MoveableControl *>::~vector   (54 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::vector_PropertiesViewWindows_MoveableControl_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_PropertiesViewWindows_MoveableControl_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00402f68(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00402f68  FUN_00402f68   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00402f68(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

} // namespace tea
