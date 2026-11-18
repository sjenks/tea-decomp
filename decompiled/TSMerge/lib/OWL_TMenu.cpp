// TSMerge.exe — runtime / library code "OWL_TMenu"
// 8 functions, 0x004209a8..0x004210e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004209a8  OWL::TMenu::TMenu   (91 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu(undefined4 *self,int param_2)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468324);
  *self = &OWL::TMenu::vftable;
  hMenu = CreateMenu();
  self[1] = hMenu;
  *(bool *)(self + 2) = param_2 != 0;
  FUN_00420c24((int)self,0x7fe8);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a20  OWL::TMenu::TMenu_420a20   (109 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_420a20(undefined4 *self,int *param_2,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468354);
  *self = &OWL::TMenu::vftable;
  hMenu = CreateMenu();
  self[1] = hMenu;
  *(bool *)(self + 2) = param_3 != 0;
  FUN_00420c24((int)self,0x7fe8);
  FUN_00420c4c((int)self,param_2,0,-1);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420a90  OWL::TMenu::TMenu_420a90   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_420a90(undefined4 *self,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468384);
  *self = &OWL::TMenu::vftable;
  self[1] = param_2;
  *(bool *)(self + 2) = param_3 != 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420adc  OWL::TMenu::TMenu_420adc   (94 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_420adc(undefined4 *self,HWND hWnd,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4683a8);
  *self = &OWL::TMenu::vftable;
  hMenu = GetMenu(hWnd);
  self[1] = hMenu;
  *(bool *)(self + 2) = param_3 != 0;
  FUN_00420c24((int)self,0x7fe8);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420b3c  OWL::TMenu::~TMenu   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMenu::_dtor
void __cdecl OWL::TMenu::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TMenu::vftable;
    if ((*(char *)(self + 2) != '\0') && (self[1] != 0)) {
      DestroyMenu((HMENU)self[1]);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c3c  OWL::TMenu::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TMenu::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00420c44  OWL::TMenu::vf3   (5 bytes)   [rtti:vtable virtual slot 3]
void __stdcall OWL::TMenu::vf3(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004210e8  OWL::TMenu::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TMenu::vf1(int self)

{
  return *(undefined4 *)(self + 4);
}

} // namespace tea
