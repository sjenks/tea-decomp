// TEA.exe — runtime / library code "OWL_TXBadFormat"
// 5 functions, 0x004ba680..0x004ba8d0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ba680  OWL::TXBadFormat::TXBadFormat   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXBadFormat's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXBadFormat::TXBadFormat(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50edac);
  OWL::TXOwl::TXOwl_48ed90(self,0x7fee,DAT_00512a1c);
  *self = &OWL::TXBadFormat::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba798  OWL::TXBadFormat::~TXBadFormat   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TXBadFormat::_dtor
void __cdecl OWL::TXBadFormat::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ede8);
  if (self != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba7dc  OWL::TXBadFormat::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXBadFormat::vf2(int *self)

{
  undefined4 *txBadFormat;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ee20);
  txBadFormat = (undefined4 *)operator_new();
  if (txBadFormat != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txBadFormat,self);
    txBadFormat[2] = self[2];
    *txBadFormat = &OWL::TXOwl::vftable;
    *txBadFormat = &OWL::TXBadFormat::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txBadFormat;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba85c  OWL::TXBadFormat::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXBadFormat::vf3(int *self)

{
  undefined4 objectDtor;
  code *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txBadFormat [2];
  int unused;
  
  __InitExceptBlockLDTC(0x50ee50);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = OWL::TXBadFormat::TXBadFormat_4ba8d0;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txBadFormat,self);
  unused = self[2];
  txBadFormat[0] = &OWL::TXBadFormat::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_004ba73c,(undefined4*)txBadFormat,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ba8d0  OWL::TXBadFormat::TXBadFormat_4ba8d0   (83 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXBadFormat's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXBadFormat::TXBadFormat_4ba8d0(undefined4 *self,int *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ee64);
  OWL::TXBase::TXBase_48e99c(self,param_2);
  self[2] = param_2[2];
  *self = &OWL::TXOwl::vftable;
  *self = &OWL::TXBadFormat::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
