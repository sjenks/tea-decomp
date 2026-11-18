// TEA.exe — runtime / library code "OWL_TCelArray"
// 3 functions, 0x00489c74..0x00489edc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00489c74  OWL::TCelArray::TCelArray   (377 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCelArray's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TCelArray::TCelArray(undefined4 *self,int param_2,int param_3,int param_4)

{
  HGDIOBJ hGdiObject;
  uint *puVar2;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  uint gdiObject [2];
  
  __InitExceptBlockLDTC(0x504d90);
  *self = &OWL::TCelArray::vftable;
  *(undefined4 *)((int)self + 9) = 0;
  *(undefined4 *)((int)self + 0xd) = 0;
  *(undefined4 *)((int)self + 0x15) = 0;
  *(undefined4 *)((int)self + 0x19) = 0;
  *(undefined4 *)((int)self + 0x21) = 0;
  *(undefined4 *)((int)self + 0x1d) = 1;
  if (param_3 < 1) {
    param_3 = 1;
  }
  *(int *)((int)self + 0x25) = param_3;
  *(int *)((int)self + 0x11) = param_3;
  if (param_4 < 1) {
    param_4 = 1;
  }
  *(int *)((int)self + 0x29) = param_4;
  iVar3 = *(int *)(*(int *)(param_2 + 9) + 8);
  *(int *)((int)self + 0x15) =
       *(int *)(*(int *)(param_2 + 9) + 4) / *(int *)((int)self + 0x11);
  *(int *)((int)self + 0x19) = iVar3 / *(int *)((int)self + 0x29);
  *(undefined4 *)((int)self + 0x2d) = 0;
  *(undefined4 *)((int)self + 9) = 0;
  *(undefined4 *)((int)self + 0xd) = 0;
  *(undefined1 *)(self + 2) = 1;
  iVar3 = 0;
  hGdiObject = GetStockObject(0xf);
  FUN_0049b094(gdiObject,hGdiObject,iVar3);
  puVar2 = (uint *)operator_new();
  if (puVar2 != (uint *)0x0) {
    FUN_004885cc(puVar2,param_2,gdiObject);
  }
  self[1] = puVar2;
  OWL::TGdiObject::_dtor(gdiObject,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489df0  OWL::TCelArray::TCelArray_489df0   (234 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TCelArray's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TCelArray::TCelArray_489df0(undefined4 *self,undefined4 *param_2,undefined4 param_3,int param_4, undefined4 param_5,int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504de4);
  *self = &OWL::TCelArray::vftable;
  *(undefined4 *)((int)self + 9) = 0;
  *(undefined4 *)((int)self + 0xd) = 0;
  *(undefined4 *)((int)self + 0x15) = 0;
  *(undefined4 *)((int)self + 0x19) = 0;
  *(undefined4 *)((int)self + 0x21) = 0;
  *(undefined4 *)((int)self + 9) = 0;
  *(undefined4 *)((int)self + 0xd) = 0;
  *(undefined4 *)((int)self + 0x15) = *param_2;
  *(undefined4 *)((int)self + 0x19) = param_2[1];
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(int *)((int)self + 0x11) = param_4;
  *(undefined4 *)((int)self + 0x1d) = param_5;
  *(undefined4 *)((int)self + 0x2d) = 0;
  if (param_6 < 1) {
    param_6 = 1;
  }
  *(int *)((int)self + 0x29) = param_6;
  *(undefined1 *)(self + 2) = 1;
  self[1] = 0;
  FUN_0048a404((int)self,*(int *)((int)self + 0x11));
  *(undefined4 *)((int)self + 0x25) = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00489edc  OWL::TCelArray::~TCelArray   (101 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCelArray::_dtor
void __cdecl OWL::TCelArray::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504e08);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TCelArray::vftable;
    if ((*(char *)(self + 2) != '\0') && ((uint *)self[1] != (uint *)0x0)) {
      OWL::TBitmap::_dtor((uint *)self[1],3);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
