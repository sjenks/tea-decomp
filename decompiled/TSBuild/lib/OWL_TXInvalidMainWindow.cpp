// TSBuild.exe — runtime / library code "OWL_TXInvalidMainWindow"
// 4 functions, 0x0043bba8..0x0043be18. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043bba8  OWL::TXInvalidMainWindow::TXInvalidMainWindow   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXInvalidMainWindow's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXInvalidMainWindow::TXInvalidMainWindow(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f308);
  OWL::TXOwl::TXOwl_4230f0(self,0x7ff7,DAT_00484890);
  *self = &OWL::TXInvalidMainWindow::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bc1c  OWL::TXInvalidMainWindow::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXInvalidMainWindow::vf2(int *self)

{
  undefined4 *txInvalidMainWindow;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f32c);
  txInvalidMainWindow = (undefined4 *)operator_new();
  if (txInvalidMainWindow != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_422cfc(txInvalidMainWindow,self);
    txInvalidMainWindow[2] = self[2];
    *txInvalidMainWindow = &OWL::TXOwl::vftable;
    *txInvalidMainWindow = &OWL::TXInvalidMainWindow::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txInvalidMainWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043bc9c  OWL::TXInvalidMainWindow::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXInvalidMainWindow::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txInvalidMainWindow [2];
  int unused;
  
  __InitExceptBlockLDTC(0x47f35c);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_0043bd74;
  objectDtor = 0;
  OWL::TXBase::TXBase_422cfc((undefined4*)txInvalidMainWindow,self);
  unused = self[2];
  txInvalidMainWindow[0] = &OWL::TXInvalidMainWindow::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_0043bd10,(undefined4*)txInvalidMainWindow,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043be18  OWL::TXInvalidMainWindow::~TXInvalidMainWindow   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXInvalidMainWindow::_dtor
void __cdecl OWL::TXInvalidMainWindow::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f3a0);
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
