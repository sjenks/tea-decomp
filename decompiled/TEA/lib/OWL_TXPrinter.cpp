// TEA.exe — runtime / library code "OWL_TXPrinter"
// 4 functions, 0x004c5cf8..0x004c5f54. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c5cf8  OWL::TXPrinter::TXPrinter   (72 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXPrinter's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXPrinter::TXPrinter(undefined4 *self,uint param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511244);
  OWL::TXOwl::TXOwl_48ed90(self,param_2,DAT_00512a1c);
  *self = &OWL::TXPrinter::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5d60  OWL::TXPrinter::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXPrinter::vf2(int *self)

{
  undefined4 *txPrinter;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511268);
  txPrinter = (undefined4 *)operator_new();
  if (txPrinter != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txPrinter,self);
    txPrinter[2] = self[2];
    *txPrinter = &OWL::TXOwl::vftable;
    *txPrinter = &OWL::TXPrinter::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txPrinter;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5de0  OWL::TXPrinter::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXPrinter::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txPrinter [2];
  int unused;
  
  __InitExceptBlockLDTC(0x511298);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_004c5eac;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txPrinter,self);
  unused = self[2];
  txPrinter[0] = &OWL::TXPrinter::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_004c5e54,(undefined4*)txPrinter,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5f54  OWL::TXPrinter::~TXPrinter   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXPrinter::_dtor
void __cdecl OWL::TXPrinter::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5112dc);
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
