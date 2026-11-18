// TSMerge.exe — runtime / library code "OWL_TXBadFormat"
// 5 functions, 0x0043e714..0x0043e964. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043e714  OWL::TXBadFormat::TXBadFormat   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXBadFormat's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXBadFormat::TXBadFormat(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46e018);
  OWL::TXOwl::TXOwl_417f7c(self,0x7fee,DAT_00470a60);
  *self = &OWL::TXBadFormat::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e82c  OWL::TXBadFormat::~TXBadFormat   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TXBadFormat::_dtor
void __cdecl OWL::TXBadFormat::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46e054);
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
// 0x0043e870  OWL::TXBadFormat::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXBadFormat::vf2(int *self)

{
  undefined4 *txBadFormat;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46e08c);
  txBadFormat = (undefined4 *)operator_new();
  if (txBadFormat != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_417b88(txBadFormat,self);
    txBadFormat[2] = self[2];
    *txBadFormat = &OWL::TXOwl::vftable;
    *txBadFormat = &OWL::TXBadFormat::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txBadFormat;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e8f0  OWL::TXBadFormat::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
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
  
  __InitExceptBlockLDTC(0x46e0bc);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = OWL::TXBadFormat::TXBadFormat_43e964;
  objectDtor = 0;
  OWL::TXBase::TXBase_417b88((undefined4*)txBadFormat,self);
  unused = self[2];
  txBadFormat[0] = &OWL::TXBadFormat::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_0043e7d0,(undefined4*)txBadFormat,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e964  OWL::TXBadFormat::TXBadFormat_43e964   (83 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXBadFormat's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXBadFormat::TXBadFormat_43e964(undefined4 *self,int *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46e0d0);
  OWL::TXBase::TXBase_417b88(self,param_2);
  self[2] = param_2[2];
  *self = &OWL::TXOwl::vftable;
  *self = &OWL::TXBadFormat::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
