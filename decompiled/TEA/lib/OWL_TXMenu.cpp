// TEA.exe — runtime / library code "OWL_TXMenu"
// 4 functions, 0x00498008..0x0049825c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00498008  OWL::TXMenu::TXMenu   (72 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXMenu::TXMenu(undefined4 *self,uint param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507f90);
  OWL::TXOwl::TXOwl_48ed90(self,param_2,DAT_00512a1c);
  *self = &OWL::TXMenu::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049806c  OWL::TXMenu::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXMenu::vf2(int *self)

{
  undefined4 *txMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507fb4);
  txMenu = (undefined4 *)operator_new();
  if (txMenu != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txMenu,self);
    txMenu[2] = self[2];
    *txMenu = &OWL::TXOwl::vftable;
    *txMenu = &OWL::TXMenu::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004980ec  OWL::TXMenu::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXMenu::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txMenu [2];
  int unused;
  
  __InitExceptBlockLDTC(0x507fe4);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_004981b4;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txMenu,self);
  unused = self[2];
  txMenu[0] = &OWL::TXMenu::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00498160,(undefined4*)txMenu,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049825c  OWL::TXMenu::~TXMenu   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXMenu::_dtor
void __cdecl OWL::TXMenu::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508028);
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
