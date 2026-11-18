// TEA.exe — runtime / library code "OWL_TPopupMenu"
// 3 functions, 0x00497f00..0x00497fac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00497f00  OWL::TPopupMenu::TPopupMenu   (71 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPopupMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TPopupMenu::TPopupMenu(undefined4 *self,int param_2)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507f24);
  hMenu = CreatePopupMenu();
  OWL::TMenu::TMenu_497aec(self,hMenu,param_2);
  *self = &OWL::TPopupMenu::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497f68  OWL::TPopupMenu::TPopupMenu_497f68   (68 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPopupMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TPopupMenu::TPopupMenu_497f68(undefined4 *self,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507f48);
  OWL::TMenu::TMenu_497aec(self,param_2,param_3);
  *self = &OWL::TPopupMenu::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497fac  OWL::TPopupMenu::TPopupMenu_497fac   (89 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPopupMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TPopupMenu::TPopupMenu_497fac(undefined4 *self,int *param_2,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507f6c);
  hMenu = CreatePopupMenu();
  OWL::TMenu::TMenu_497aec(self,hMenu,param_3);
  *self = &OWL::TPopupMenu::vftable;
  FUN_00497d64((int)self,param_2,0,-1);
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
