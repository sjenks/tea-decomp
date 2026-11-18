// TSMerge.exe — runtime / library code "OWL_TPopupMenu"
// 2 functions, 0x004108f0..0x00420de8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004108f0  OWL::TPopupMenu::~TPopupMenu   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPopupMenu::_dtor
void __cdecl OWL::TPopupMenu::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x464dc8);
  if (self != (undefined4 *)0x0) {
    OWL::TMenu::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420de8  OWL::TPopupMenu::TPopupMenu   (71 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPopupMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TPopupMenu::TPopupMenu(undefined4 *self,int param_2)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468480);
  hMenu = CreatePopupMenu();
  OWL::TMenu::TMenu_420a90(self,hMenu,param_2);
  *self = &OWL::TPopupMenu::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
