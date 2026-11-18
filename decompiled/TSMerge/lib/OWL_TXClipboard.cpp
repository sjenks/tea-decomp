// TSMerge.exe — runtime / library code "OWL_TXClipboard"
// 4 functions, 0x00414e50..0x00414fac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414e50  OWL::TXClipboard::TXClipboard   (72 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXClipboard's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXClipboard::TXClipboard(undefined4 *self,uint param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465e0c);
  OWL::TXOwl::TXOwl_417f7c(self,param_2,DAT_00470a60);
  *self = &OWL::TXClipboard::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414eb8  OWL::TXClipboard::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXClipboard::vf2(int *self)

{
  undefined4 *txClipboard;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465e30);
  txClipboard = (undefined4 *)operator_new();
  if (txClipboard != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_417b88(txClipboard,self);
    txClipboard[2] = self[2];
    *txClipboard = &OWL::TXOwl::vftable;
    *txClipboard = &OWL::TXClipboard::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txClipboard;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414f38  OWL::TXClipboard::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXClipboard::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txClipboard [2];
  int unused;
  
  __InitExceptBlockLDTC(0x465e60);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_00414d98;
  objectDtor = 0;
  OWL::TXBase::TXBase_417b88((undefined4*)txClipboard,self);
  unused = self[2];
  txClipboard[0] = &OWL::TXClipboard::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00414d3c,(undefined4*)txClipboard,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414fac  OWL::TXClipboard::~TXClipboard   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXClipboard::_dtor
void __cdecl OWL::TXClipboard::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465e80);
  if (self != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
