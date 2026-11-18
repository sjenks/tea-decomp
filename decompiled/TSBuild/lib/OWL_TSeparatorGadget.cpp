// TSBuild.exe — runtime / library code "OWL_TSeparatorGadget"
// 4 functions, 0x00424c0c..0x00424ef8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00424c0c  OWL::TSeparatorGadget::TSeparatorGadget   (151 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TSeparatorGadget's vtable at its vptr offset (+0x0) in this
int * __cdecl OWL::TSeparatorGadget::TSeparatorGadget(int *self,int vbasesBuilt,undefined4 param_3,undefined1 param_4)

{
  int metric;
  int *sehChainHead;
  int iVar2;
  
  __InitExceptBlockLDTC(0x47adb4);
  OWL::TGadget::TGadget(self,param_3);
  *self = (int)&OWL::TSeparatorGadget::vftable;
  *(undefined1 *)(self + 0x11) = param_4;
  *(undefined1 *)((int)self + 0x37) = 0;
  *(undefined1 *)((int)self + 0x36) = 0;
  iVar2 = 0;
  (**(code **)(*self + 4))();
  *(ushort *)((int)self + 0x42) = *(ushort *)((int)self + 0x42) & 0xfffd;
  if (vbasesBuilt == 0) {
    iVar2 = DAT_0047d5f0;
    metric = GetSystemMetrics(DAT_0047d5f0);
    vbasesBuilt = metric * 2;
  }
  *(int *)((int)self + 0x12) = vbasesBuilt;
  *(int *)((int)self + 0x16) = vbasesBuilt;
  *sehChainHead = iVar2;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424cc8  OWL::TSeparatorGadget::vf8   (13 bytes)   [rtti:vtable virtual slot 8; function defined from vtable-slot]
void __cdecl OWL::TSeparatorGadget::vf8(int self)

{
  *(undefined4 *)(self + 0x1a) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424cd8  OWL::TSeparatorGadget::vf12   (445 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TSeparatorGadget::vf12(int *self,undefined4 *param_2)

{
  int c;
  HDC hdc;
  uint uVar3;
  uint uVar4;
  tagRECT *pRect;
  int iVar6;
  tagRECT rect;
  tagRECT rect2;
  int unused;
  int unused2;
  uint edge;
  
  if (((DAT_0047b01c & 1) != 0) && ((char)self[0x11] != '\0')) {
    if ((DAT_0047b01c & 0x10) == 0) {
      uVar4 = 0;
      edge = 4;
    }
    else {
      uVar4 = 0x4000;
      edge = 1;
    }
    if (*(char *)(*(int *)((int)self + 6) + 0x35) == '\0') {
      rect2.left = 0;
      rect2.top = 0;
      rect2.right = 0;
      rect2.bottom = 0;
      FUN_004386fc(**(int **)((int)self + 6),&rect2);
      unused2 = DAT_0047d5f8;
      c = GetSystemMetrics(DAT_0047d5f8);
      FUN_004288b4(&rect2.left,0,-c);
      c = 2;
      pRect = &rect2;
      hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(hdc,(LPPOINT)pRect,c);
      uVar3 = *(int *)((int)self + 0x12) - *(int *)((int)self + 10);
      rect2.right = (int)uVar3 >> 1;
      if (rect2.right < 0) {
        rect2.right = rect2.right + (uint)((uVar3 & 1) != 0);
      }
      rect2.left = rect2.right + -1;
      rect2.right = rect2.right + 1;
      FUN_00430d78(param_2,&rect2,edge,uVar4 | 4);
    }
    else if (*(char *)(*(int *)((int)self + 6) + 0x35) == '\x01') {
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_004386fc(**(int **)((int)self + 6),&rect);
      iVar6 = 0;
      unused = DAT_0047d5f0;
      c = GetSystemMetrics(DAT_0047d5f0);
      FUN_004288b4(&rect.left,-c,iVar6);
      c = 2;
      pRect = &rect;
      hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(hdc,(LPPOINT)pRect,c);
      uVar3 = *(int *)((int)self + 0x16) - *(int *)((int)self + 0xe);
      rect.bottom = (int)uVar3 >> 1;
      if (rect.bottom < 0) {
        rect.bottom = rect.bottom + (uint)((uVar3 & 1) != 0);
      }
      rect.top = rect.bottom + -1;
      rect.bottom = rect.bottom + 1;
      FUN_00430d78(param_2,&rect,edge,uVar4 | 2);
    }
  }
  OWL::TGadget::vf12(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424ef8  OWL::TSeparatorGadget::~TSeparatorGadget   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TSeparatorGadget::_dtor
void __cdecl OWL::TSeparatorGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ae88);
  if (self != (undefined4 *)0x0) {
    OWL::TGadget::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
