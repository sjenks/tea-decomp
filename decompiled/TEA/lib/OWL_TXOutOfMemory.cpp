// TEA.exe — runtime / library code "OWL_TXOutOfMemory"
// 4 functions, 0x0048f460..0x0048f6c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048f460  OWL::TXOutOfMemory::TXOutOfMemory   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXOutOfMemory's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXOutOfMemory::TXOutOfMemory(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506598);
  OWL::TXOwl::TXOwl_48ed90(self,0x7ff9,DAT_00512a1c);
  *self = &OWL::TXOutOfMemory::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f4d0  OWL::TXOutOfMemory::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXOutOfMemory::vf2(int *self)

{
  undefined4 *txOutOfMemory;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5065bc);
  txOutOfMemory = (undefined4 *)operator_new();
  if (txOutOfMemory != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txOutOfMemory,self);
    txOutOfMemory[2] = self[2];
    *txOutOfMemory = &OWL::TXOwl::vftable;
    *txOutOfMemory = &OWL::TXOutOfMemory::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txOutOfMemory;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f550  OWL::TXOutOfMemory::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXOutOfMemory::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txOutOfMemory [2];
  int unused;
  
  __InitExceptBlockLDTC(0x5065ec);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_0048f620;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txOutOfMemory,self);
  unused = self[2];
  txOutOfMemory[0] = &OWL::TXOutOfMemory::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_0048f5c4,(undefined4*)txOutOfMemory,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048f6c4  OWL::TXOutOfMemory::~TXOutOfMemory   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXOutOfMemory::_dtor
void __cdecl OWL::TXOutOfMemory::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506638);
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
