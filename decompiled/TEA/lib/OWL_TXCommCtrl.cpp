// TEA.exe — runtime / library code "OWL_TXCommCtrl"
// 4 functions, 0x00487190..0x004873ec. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00487190  OWL::TXCommCtrl::TXCommCtrl   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXCommCtrl's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXCommCtrl::TXCommCtrl(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504418);
  OWL::TXOwl::TXOwl_48ed90(self,0x7ff3,DAT_00512a1c);
  *self = &OWL::TXCommCtrl::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004871fc  OWL::TXCommCtrl::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXCommCtrl::vf2(int *self)

{
  undefined4 *txCommCtrl;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50443c);
  txCommCtrl = (undefined4 *)operator_new();
  if (txCommCtrl != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txCommCtrl,self);
    txCommCtrl[2] = self[2];
    *txCommCtrl = &OWL::TXOwl::vftable;
    *txCommCtrl = &OWL::TXCommCtrl::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txCommCtrl;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048727c  OWL::TXCommCtrl::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXCommCtrl::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txCommCtrl [2];
  int unused;
  
  __InitExceptBlockLDTC(0x50446c);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_00487348;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txCommCtrl,self);
  unused = self[2];
  txCommCtrl[0] = &OWL::TXCommCtrl::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_004872f0,(undefined4*)txCommCtrl,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004873ec  OWL::TXCommCtrl::~TXCommCtrl   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXCommCtrl::_dtor
void __cdecl OWL::TXCommCtrl::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5044b0);
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
