// TEA.exe — application module "MyScroller"
// 26 functions, 0x004283f4..0x0044fb08. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004283f4  MyScroller::~MyScroller   (67 bytes)   [rtti:dtor destructor]
//   written in code as MyScroller::_dtor
void __cdecl MyScroller::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f1ed0);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TScroller::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428a04  OWL::TPrintDC::~TPrintDC   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPrintDC::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPrintDC::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2050);
  if (param_1 != (int *)0x0) {
    OWL::TCreatedDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428b20  OWL::TGadgetWindowFont::~TGadgetWindowFont   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TGadgetWindowFont::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TGadgetWindowFont::_dtor(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2058);
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
// 0x00428b68  OWL::TSeparatorGadget::~TSeparatorGadget   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TSeparatorGadget::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TSeparatorGadget::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2060);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TGadget::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428bac  OWL::TPreviewPage::~TPreviewPage   (114 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPreviewPage::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPreviewPage::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2068);
  if (param_1 != (int *)0x0) {
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x14;
    OWL::TWindow::_dtor(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x14;
    if ((param_2 & 2) != 0) {
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0xa2),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428ce4  FUN_00428ce4   (427 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00428e54) */
int * __cdecl FUN_00428ce4(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f2090);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&OWL::TEventHandler::vftable;
    param_1[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x20;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  FUN_004c78e4(param_1,1,uVar1,param_4,(uint *)&DAT_004f2070,*param_5,param_5[1],
               param_5[2] - *param_5,param_5[3] - param_5[1],0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x20;
  param_1[3] = (int)&MatchListLabelWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004f2170;
  *(undefined ***)param_1[2] = &PTR_LAB_004f217c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f2188;
  param_1[6] = (int)param_3;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = (int)&DAT_00513d64;
  param_1[0xc] = -1;
  FUN_004a7988(*param_1,0,0x100c,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f2c4  MyScroller::vf3   (221 bytes)   [rtti:vtable virtual slot 3]
void __cdecl MyScroller::vf3(int param_1)

{
  UINT UVar1;
  UINT *pUVar2;
  int iVar3;
  tagRECT local_24;
  UINT local_14;
  UINT local_10 [3];
  
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    FUN_004a7a6c(iVar3,&local_24);
    iVar3 = local_24.bottom - local_24.top;
    if ((local_24.right - local_24.left != 0) && (0 < *(int *)(param_1 + 0x20))) {
      local_10[2] = ((local_24.right - local_24.left) + 1) / *(int *)(param_1 + 0x20) + -1;
      local_10[1] = 1;
      if ((int)local_10[2] < 1) {
        pUVar2 = local_10 + 1;
      }
      else {
        pUVar2 = local_10 + 2;
      }
      UVar1 = *pUVar2;
      *(UINT *)(param_1 + 0x30) = UVar1;
      FUN_004a807c(*(int *)(param_1 + 4),0,UVar1,*(byte *)(param_1 + 0x3e));
    }
    if ((iVar3 != 0) && (0 < *(int *)(param_1 + 0x24))) {
      local_10[0] = (iVar3 + 1) / *(int *)(param_1 + 0x24) - 1;
      local_14 = 1;
      if ((int)local_10[0] < 1) {
        pUVar2 = &local_14;
      }
      else {
        pUVar2 = local_10;
      }
      UVar1 = *pUVar2;
      *(UINT *)(param_1 + 0x34) = UVar1;
      FUN_004a807c(*(int *)(param_1 + 4),1,UVar1,*(byte *)(param_1 + 0x3e));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f3a4  MyScroller::vf5   (25 bytes)   [rtti:vtable virtual slot 5]
void __cdecl MyScroller::vf5(int *param_1,int param_2,int param_3)

{
  OWL::TScroller::vf5(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f3c0  MyScroller::vf11   (230 bytes)   [rtti:vtable virtual slot 11]
void __cdecl MyScroller::vf11(int param_1,int param_2,int param_3)

{
  int iVar1;
  tagRECT local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(iVar1,&local_14);
    iVar1 = param_2;
    if (*(int *)(param_1 + 0x10) - (local_14.right - local_14.left) <= param_2) {
      iVar1 = *(int *)(param_1 + 0x10) - (local_14.right - local_14.left);
    }
    if (iVar1 < 0) {
      param_2 = 0;
    }
    else if (*(int *)(param_1 + 0x10) - (local_14.right - local_14.left) <= param_2) {
      param_2 = *(int *)(param_1 + 0x10) - (local_14.right - local_14.left);
    }
    iVar1 = param_3;
    if (*(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top) <= param_3) {
      iVar1 = *(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top);
    }
    if (iVar1 < 0) {
      param_3 = 0;
    }
    else if (*(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top) <= param_3) {
      param_3 = *(int *)(param_1 + 0x14) - (local_14.bottom - local_14.top);
    }
  }
  OWL::TScroller::vf11(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f4a8  MyScroller::vf4   (263 bytes)   [rtti:vtable virtual slot 4]
void __cdecl MyScroller::vf4(int param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    *(undefined1 *)(param_1 + 0x3d) = 1;
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      if (*(char *)(param_1 + 0x3b) != '\0') {
        FUN_004a7fdc(iVar1,0,&local_8,&local_c);
        if (*(int *)(param_1 + 0x10) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar1 = 0x7fff;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (*(int *)(param_1 + 0x10) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar1 = 0x7fff;
        }
        if ((iVar1 != local_c) || (local_8 != 0)) {
          FUN_004a802c(*(int *)(param_1 + 4),0,0,iVar1,*(byte *)(param_1 + 0x3e));
        }
      }
      if (*(char *)(param_1 + 0x3c) != '\0') {
        FUN_004a7fdc(*(int *)(param_1 + 4),1,&local_10,&local_14);
        if (*(int *)(param_1 + 0x14) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar1 = 0x7fff;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (*(int *)(param_1 + 0x14) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar1 = 0x7fff;
        }
        if ((iVar1 != local_14) || (local_10 != 0)) {
          FUN_004a802c(*(int *)(param_1 + 4),1,0,iVar1,*(byte *)(param_1 + 0x3e));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f5b0  MyScroller::vf10   (283 bytes)   [rtti:vtable virtual slot 10]
void __cdecl MyScroller::vf10(int *param_1,int param_2,int param_3)

{
  tagRECT local_24;
  tagRECT local_14;
  
  if (param_2 == 4) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_14);
    if (param_1[4] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      FUN_0044f21c();
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  else if (param_2 == 5) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_24);
    if (*(char *)((int)param_1 + 0x39) != '\0') {
      if (param_1[4] < 0x8000) {
        (**(code **)(*param_1 + 0x2c))();
      }
      else {
        FUN_0044f21c();
        (**(code **)(*param_1 + 0x2c))();
      }
    }
    if ((param_1[1] != 0) && (*(char *)((int)param_1 + 0x3b) != '\0')) {
      FUN_004a7f80(param_1[1],0,param_3,*(byte *)((int)param_1 + 0x3e));
    }
  }
  else {
    OWL::TScroller::vf10(param_1,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f6cc  MyScroller::vf9   (283 bytes)   [rtti:vtable virtual slot 9]
void __cdecl MyScroller::vf9(int *param_1,int param_2,int param_3)

{
  tagRECT local_24;
  tagRECT local_14;
  
  if (param_2 == 4) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_14);
    if (param_1[5] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      FUN_0044f21c();
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  else if (param_2 == 5) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    FUN_004a7a6c(param_1[1],&local_24);
    if (*(char *)((int)param_1 + 0x39) != '\0') {
      if (param_1[5] < 0x8000) {
        (**(code **)(*param_1 + 0x2c))();
      }
      else {
        FUN_0044f21c();
        (**(code **)(*param_1 + 0x2c))();
      }
    }
    if ((param_1[1] != 0) && ((char)param_1[0xf] != '\0')) {
      FUN_004a7f80(param_1[1],1,param_3,*(byte *)((int)param_1 + 0x3e));
    }
  }
  else {
    OWL::TScroller::vf9(param_1,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f7e8  MyScroller::vf8   (225 bytes)   [rtti:vtable virtual slot 8]
void __cdecl MyScroller::vf8(int param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_14;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_14.left = 0;
    local_14.top = 0;
    local_14.right = 0;
    local_14.bottom = 0;
    FUN_004a7a6c(*(int *)(param_1 + 4),&local_14);
    if (*(char *)(param_1 + 0x3b) != '\0') {
      if (*(int *)(param_1 + 0x10) < 0x8000) {
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_0044f1d8();
      }
      iVar2 = FUN_004a7f40(*(int *)(param_1 + 4),0);
      if (iVar1 != iVar2) {
        FUN_004a7f80(*(int *)(param_1 + 4),0,iVar1,*(byte *)(param_1 + 0x3e));
      }
    }
    if (*(char *)(param_1 + 0x3c) != '\0') {
      if (*(int *)(param_1 + 0x14) < 0x8000) {
        iVar1 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar1 = FUN_0044f1d8();
      }
      iVar2 = FUN_004a7f40(*(int *)(param_1 + 4),1);
      if (iVar1 != iVar2) {
        FUN_004a7f80(*(int *)(param_1 + 4),1,iVar1,*(byte *)(param_1 + 0x3e));
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8cc  FUN_0044f8cc   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044f8cc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3e) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8dc  OWL::TScroller::vf1   (14 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf1(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8ec  OWL::TScroller::vf12   (42 bytes)   [rtti:vtable virtual slot 12]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TScroller::vf12(int param_1,UINT param_2,UINT param_3)

{
  BOOL BVar1;
  
  BVar1 = EnableScrollBar(*(HWND *)(*(int *)(param_1 + 4) + 0xc),param_2,param_3);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f918  OWL::TScroller::vf13   (34 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf13(int param_1,int param_2,byte param_3)

{
  ShowScrollBar(*(HWND *)(*(int *)(param_1 + 4) + 0xc),param_2,(uint)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f93c  OWL::TScroller::vf16   (32 bytes)   [rtti:vtable virtual slot 16]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf16(int param_1,int param_2,UINT param_3,byte param_4)

{
  FUN_004a807c(*(int *)(param_1 + 4),param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f95c  OWL::TScroller::vf17   (24 bytes)   [rtti:vtable virtual slot 17]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf17(int param_1,int param_2)

{
  FUN_004a80c4(*(int *)(param_1 + 4),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f974  OWL::TScroller::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf18(int param_1,int param_2,int *param_3,int *param_4)

{
  FUN_004a7fdc(*(int *)(param_1 + 4),param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f994  OWL::TScroller::vf19   (36 bytes)   [rtti:vtable virtual slot 19]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf19(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  FUN_004a802c(*(int *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f9b8  OWL::TScroller::vf20   (24 bytes)   [rtti:vtable virtual slot 20]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf20(int param_1,int param_2)

{
  FUN_004a7f40(*(int *)(param_1 + 4),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f9d0  OWL::TScroller::vf21   (32 bytes)   [rtti:vtable virtual slot 21]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf21(int param_1,int param_2,int param_3,byte param_4)

{
  FUN_004a7f80(*(int *)(param_1 + 4),param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f9f0  FUN_0044f9f0   (185 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0044f9f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  tagRECT *ptVar3;
  int *piVar4;
  int local_28 [4];
  tagRECT local_18;
  char local_5;
  
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  FUN_004a7a30(param_1,&local_18);
  ptVar3 = &local_18;
  piVar4 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = ptVar3->left;
    ptVar3 = (tagRECT *)&ptVar3->top;
    piVar4 = piVar4 + 1;
  }
  if ((((*param_2 < local_28[0]) || (local_28[2] <= *param_2)) || (param_2[1] < local_28[1])) ||
     (local_28[3] <= param_2[1])) {
    local_5 = '\0';
  }
  else {
    local_5 = '\x01';
  }
  if (local_5 != '\0') {
    iVar2 = GetDlgCtrlID(*(HWND *)(param_1 + 0xc));
    if (iVar2 < 0x1113) {
      iVar1 = iVar2;
      if (((iVar2 == 0x1112) || (iVar1 = 0, iVar2 == 0x10ae)) ||
         ((iVar1 = 0, iVar2 == 0x10b8 ||
          ((iVar1 = 0, iVar2 == 0x10fe || (iVar1 = 0, iVar2 == 0x1108)))))) {
LAB_0044fa9c:
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    else {
      iVar1 = 0;
      if (((iVar2 == 0x111c) || (iVar1 = 0, iVar2 == 0x1144)) || (iVar1 = 0, iVar2 == 0x3192))
      goto LAB_0044fa9c;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044faac  FUN_0044faac   (90 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044faac(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(param_1 + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(piVar1[3] + 0x18))();
    if (param_1 == iVar2) {
      if (piVar1 == (int *)0x0) {
        param_1 = 0;
      }
      else {
        param_1 = *piVar1;
      }
    }
  }
  SetActiveWindow(*(HWND *)(param_1 + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fb08  FUN_0044fb08   (342 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0044fb08(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f7908);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x15);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[1] = (int)(param_1 + 0x12);
    param_1[2] = (int)(param_1 + 0x13);
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x12] = (int)&OWL::TEventHandler::vftable;
    param_1[0x13] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x15,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2e;
  FUN_004abc64(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2e;
  param_1[3] = (int)&TEAProgressBar::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa260;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa26c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa278;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
