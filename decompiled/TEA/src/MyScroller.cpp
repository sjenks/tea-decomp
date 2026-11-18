// TEA.exe — application module "MyScroller"
// 26 functions, 0x004263ec..0x0044faac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004263ec  MyScroller::UpdateRange   (163 bytes)   [analysis]
//   recomputes the scroll range (floating-point arithmetic not visible; ends in __ftol)
void __cdecl MyScroller::UpdateRange(int self)

{
  undefined4 uVar1;
  
  uVar1 = __ftol();
  *(undefined4 *)(self + 8) = uVar1;
  uVar1 = __ftol();
  *(undefined4 *)(self + 4) = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004283f4  MyScroller::~MyScroller   (67 bytes)   [rtti:dtor destructor]
//   written in code as MyScroller::_dtor
void __cdecl MyScroller::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f1ed0);
  if (self != (undefined4 *)0x0) {
    OWL::TScroller::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428a04  OWL::TPrintDC::~TPrintDC   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPrintDC::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPrintDC::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2050);
  if (self != (int *)0x0) {
    OWL::TCreatedDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428b20  OWL::TGadgetWindowFont::~TGadgetWindowFont   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TGadgetWindowFont::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TGadgetWindowFont::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2058);
  if (self != (uint *)0x0) {
    OWL::TGdiObject::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428b68  OWL::TSeparatorGadget::~TSeparatorGadget   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TSeparatorGadget::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TSeparatorGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2060);
  if (self != (undefined4 *)0x0) {
    OWL::TGadget::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428bac  OWL::TPreviewPage::~TPreviewPage   (114 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPreviewPage::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TPreviewPage::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2068);
  if (self != (int *)0x0) {
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x14;
    OWL::TWindow::_dtor(self,0);
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x14;
    if ((dtorFlags & 2) != 0) {
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0xa2),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f260  MyScroller::MyScroller   (99 bytes)   [rtti:vtable-store constructor]
//   constructor: stores MyScroller's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl MyScroller::MyScroller(undefined4 *self,undefined4 window,undefined4 xUnit,undefined4 yUnit, undefined4 xRange,undefined4 yRange)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f750c);
  OWL::TScroller::TScroller(self,window,xUnit,yUnit,xRange,yRange);
  *self = &MyScroller::vftable;
  *(undefined1 *)((int)self + 0x3d) = 0;
  *(undefined1 *)((int)self + 0x3e) = 1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f2c4  MyScroller::vf3   (221 bytes)   [rtti:vtable virtual slot 3]
void __cdecl MyScroller::vf3(int self)

{
  UINT UVar1;
  UINT *pUVar2;
  int iVar3;
  tagRECT rect;
  UINT local_14;
  UINT local_10 [3];
  
  iVar3 = *(int *)(self + 4);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(iVar3,&rect);
    iVar3 = rect.bottom - rect.top;
    if ((rect.right - rect.left != 0) && (0 < *(int *)(self + 0x20))) {
      local_10[2] = ((rect.right - rect.left) + 1) / *(int *)(self + 0x20) + -1;
      local_10[1] = 1;
      if ((int)local_10[2] < 1) {
        pUVar2 = local_10 + 1;
      }
      else {
        pUVar2 = local_10 + 2;
      }
      UVar1 = *pUVar2;
      *(UINT *)(self + 0x30) = UVar1;
      FUN_004a807c(*(int *)(self + 4),0,UVar1,*(byte *)(self + 0x3e));
    }
    if ((iVar3 != 0) && (0 < *(int *)(self + 0x24))) {
      local_10[0] = (iVar3 + 1) / *(int *)(self + 0x24) - 1;
      local_14 = 1;
      if ((int)local_10[0] < 1) {
        pUVar2 = &local_14;
      }
      else {
        pUVar2 = local_10;
      }
      UVar1 = *pUVar2;
      *(UINT *)(self + 0x34) = UVar1;
      FUN_004a807c(*(int *)(self + 4),1,UVar1,*(byte *)(self + 0x3e));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f3a4  MyScroller::vf5   (25 bytes)   [rtti:vtable virtual slot 5]
void __cdecl MyScroller::vf5(int *self,int param_2,int param_3)

{
  OWL::TScroller::vf5(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f3c0  MyScroller::vf11   (230 bytes)   [rtti:vtable virtual slot 11]
void __cdecl MyScroller::vf11(int self,int param_2,int param_3)

{
  int iVar1;
  tagRECT rect;
  
  iVar1 = *(int *)(self + 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(iVar1,&rect);
    iVar1 = param_2;
    if (*(int *)(self + 0x10) - (rect.right - rect.left) <= param_2) {
      iVar1 = *(int *)(self + 0x10) - (rect.right - rect.left);
    }
    if (iVar1 < 0) {
      param_2 = 0;
    }
    else if (*(int *)(self + 0x10) - (rect.right - rect.left) <= param_2) {
      param_2 = *(int *)(self + 0x10) - (rect.right - rect.left);
    }
    iVar1 = param_3;
    if (*(int *)(self + 0x14) - (rect.bottom - rect.top) <= param_3) {
      iVar1 = *(int *)(self + 0x14) - (rect.bottom - rect.top);
    }
    if (iVar1 < 0) {
      param_3 = 0;
    }
    else if (*(int *)(self + 0x14) - (rect.bottom - rect.top) <= param_3) {
      param_3 = *(int *)(self + 0x14) - (rect.bottom - rect.top);
    }
  }
  OWL::TScroller::vf11(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f4a8  MyScroller::vf4   (263 bytes)   [rtti:vtable virtual slot 4]
void __cdecl MyScroller::vf4(int self)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)(self + 0x3d) == '\0') {
    *(undefined1 *)(self + 0x3d) = 1;
    iVar1 = *(int *)(self + 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      if (*(char *)(self + 0x3b) != '\0') {
        FUN_004a7fdc(iVar1,0,&local_8,&local_c);
        if (*(int *)(self + 0x10) < 0x7fff) {
          iVar1 = *(int *)(self + 0x10);
        }
        else {
          iVar1 = 0x7fff;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (*(int *)(self + 0x10) < 0x7fff) {
          iVar1 = *(int *)(self + 0x10);
        }
        else {
          iVar1 = 0x7fff;
        }
        if ((iVar1 != local_c) || (local_8 != 0)) {
          FUN_004a802c(*(int *)(self + 4),0,0,iVar1,*(byte *)(self + 0x3e));
        }
      }
      if (*(char *)(self + 0x3c) != '\0') {
        FUN_004a7fdc(*(int *)(self + 4),1,&local_10,&local_14);
        if (*(int *)(self + 0x14) < 0x7fff) {
          iVar1 = *(int *)(self + 0x14);
        }
        else {
          iVar1 = 0x7fff;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (*(int *)(self + 0x14) < 0x7fff) {
          iVar1 = *(int *)(self + 0x14);
        }
        else {
          iVar1 = 0x7fff;
        }
        if ((iVar1 != local_14) || (local_10 != 0)) {
          FUN_004a802c(*(int *)(self + 4),1,0,iVar1,*(byte *)(self + 0x3e));
        }
      }
    }
    *(undefined1 *)(self + 0x3d) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f5b0  MyScroller::vf10   (283 bytes)   [rtti:vtable virtual slot 10]
void __cdecl MyScroller::vf10(int *self,int param_2,int param_3)

{
  tagRECT rect;
  tagRECT rect2;
  
  if (param_2 == 4) {
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 0;
    rect2.bottom = 0;
    FUN_004a7a6c(self[1],&rect2);
    if (self[4] < 0x8000) {
      (**(code **)(*self + 0x2c))();
    }
    else {
      FloatComputationToInt2();
      (**(code **)(*self + 0x2c))();
    }
  }
  else if (param_2 == 5) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(self[1],&rect);
    if (*(char *)((int)self + 0x39) != '\0') {
      if (self[4] < 0x8000) {
        (**(code **)(*self + 0x2c))();
      }
      else {
        FloatComputationToInt2();
        (**(code **)(*self + 0x2c))();
      }
    }
    if ((self[1] != 0) && (*(char *)((int)self + 0x3b) != '\0')) {
      FUN_004a7f80(self[1],0,param_3,*(byte *)((int)self + 0x3e));
    }
  }
  else {
    OWL::TScroller::vf10(self,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f6cc  MyScroller::vf9   (283 bytes)   [rtti:vtable virtual slot 9]
void __cdecl MyScroller::vf9(int *self,int param_2,int param_3)

{
  tagRECT rect;
  tagRECT rect2;
  
  if (param_2 == 4) {
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 0;
    rect2.bottom = 0;
    FUN_004a7a6c(self[1],&rect2);
    if (self[5] < 0x8000) {
      (**(code **)(*self + 0x2c))();
    }
    else {
      FloatComputationToInt2();
      (**(code **)(*self + 0x2c))();
    }
  }
  else if (param_2 == 5) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(self[1],&rect);
    if (*(char *)((int)self + 0x39) != '\0') {
      if (self[5] < 0x8000) {
        (**(code **)(*self + 0x2c))();
      }
      else {
        FloatComputationToInt2();
        (**(code **)(*self + 0x2c))();
      }
    }
    if ((self[1] != 0) && ((char)self[0xf] != '\0')) {
      FUN_004a7f80(self[1],1,param_3,*(byte *)((int)self + 0x3e));
    }
  }
  else {
    OWL::TScroller::vf9(self,param_2,param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f7e8  MyScroller::vf8   (225 bytes)   [rtti:vtable virtual slot 8]
void __cdecl MyScroller::vf8(int self)

{
  int iVar1;
  int iVar2;
  tagRECT rect;
  
  if (*(int *)(self + 4) != 0) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a6c(*(int *)(self + 4),&rect);
    if (*(char *)(self + 0x3b) != '\0') {
      if (*(int *)(self + 0x10) < 0x8000) {
        iVar1 = *(int *)(self + 8);
      }
      else {
        iVar1 = FloatComputationToInt();
      }
      iVar2 = FUN_004a7f40(*(int *)(self + 4),0);
      if (iVar1 != iVar2) {
        FUN_004a7f80(*(int *)(self + 4),0,iVar1,*(byte *)(self + 0x3e));
      }
    }
    if (*(char *)(self + 0x3c) != '\0') {
      if (*(int *)(self + 0x14) < 0x8000) {
        iVar1 = *(int *)(self + 0xc);
      }
      else {
        iVar1 = FloatComputationToInt();
      }
      iVar2 = FUN_004a7f40(*(int *)(self + 4),1);
      if (iVar1 != iVar2) {
        FUN_004a7f80(*(int *)(self + 4),1,iVar1,*(byte *)(self + 0x3e));
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8cc  MyScroller::SetAutoScroll   (14 bytes)   [analysis]
//   flag at +0x3e
void __cdecl MyScroller::SetAutoScroll(int self,undefined1 on)

{
  *(undefined1 *)(self + 0x3e) = on;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8dc  OWL::TScroller::vf1   (14 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf1(int self,undefined4 param_2)

{
  *(undefined4 *)(self + 4) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f8ec  OWL::TScroller::vf12   (42 bytes)   [rtti:vtable virtual slot 12]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TScroller::vf12(int self,UINT sBflags,UINT arrows)

{
  BOOL ok;
  
  ok = EnableScrollBar(*(HWND *)(*(int *)(self + 4) + 0xc),sBflags,arrows);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f918  OWL::TScroller::vf13   (34 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf13(int self,int bar,byte show)

{
  ShowScrollBar(*(HWND *)(*(int *)(self + 4) + 0xc),bar,(uint)show);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f93c  OWL::TScroller::vf16   (32 bytes)   [rtti:vtable virtual slot 16]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf16(int self,int bar,UINT param_3,byte redraw)

{
  FUN_004a807c(*(int *)(self + 4),bar,param_3,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f95c  OWL::TScroller::vf17   (24 bytes)   [rtti:vtable virtual slot 17]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf17(int self,int bar)

{
  FUN_004a80c4(*(int *)(self + 4),bar);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f974  OWL::TScroller::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf18(int self,int bar,int *param_3,int *param_4)

{
  FUN_004a7fdc(*(int *)(self + 4),bar,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f994  OWL::TScroller::vf19   (36 bytes)   [rtti:vtable virtual slot 19]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf19(int self,int bar,int param_3,int param_4,byte redraw)

{
  FUN_004a802c(*(int *)(self + 4),bar,param_3,param_4,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f9b8  OWL::TScroller::vf20   (24 bytes)   [rtti:vtable virtual slot 20]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf20(int self,int bar)

{
  FUN_004a7f40(*(int *)(self + 4),bar);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f9d0  OWL::TScroller::vf21   (32 bytes)   [rtti:vtable virtual slot 21]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScroller::vf21(int self,int bar,int param_3,byte redraw)

{
  FUN_004a7f80(*(int *)(self + 4),bar,param_3,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f9f0  MyScroller::ScrollToChild   (185 bytes)   [analysis]
//   scrolls so that a child control is visible
undefined4 __cdecl MyScroller::ScrollToChild(int self,int *child)

{
  int iVar1;
  int iVar2;
  tagRECT *pRect;
  int *piVar4;
  int local_28 [4];
  tagRECT rect;
  char local_5;
  
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_004a7a30(self,&rect);
  pRect = &rect;
  piVar4 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    piVar4 = piVar4 + 1;
  }
  if ((((*child < local_28[0]) || (local_28[2] <= *child)) || (child[1] < local_28[1])) ||
     (local_28[3] <= child[1])) {
    local_5 = '\0';
  }
  else {
    local_5 = '\x01';
  }
  if (local_5 != '\0') {
    iVar2 = GetDlgCtrlID(*(HWND *)(self + 0xc));
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
// 0x0044faac  MyScroller::ActivateOwner   (90 bytes)   [analysis]
//   activates the window that owns the scroller
void __cdecl MyScroller::ActivateOwner(int self)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(self + 0x14) + 8);
  }
  piVar1 = FUN_004dd744(*(int *)(self + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_00415b1c,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(piVar1[3] + 0x18))();
    if (self == iVar2) {
      if (piVar1 == (int *)0x0) {
        self = 0;
      }
      else {
        self = *piVar1;
      }
    }
  }
  SetActiveWindow(*(HWND *)(self + 0xc));
  return;
}

} // namespace tea
