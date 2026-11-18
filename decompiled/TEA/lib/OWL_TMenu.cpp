// TEA.exe — runtime / library code "OWL_TMenu"
// 9 functions, 0x00497a04..0x004982a0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00497a04  OWL::TMenu::TMenu   (91 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu(undefined4 *self,int param_2)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507da4);
  *self = &OWL::TMenu::vftable;
  hMenu = CreateMenu();
  self[1] = hMenu;
  *(bool *)(self + 2) = param_2 != 0;
  FUN_00497cdc((int)self,0x7fe8);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497a7c  OWL::TMenu::TMenu_497a7c   (109 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_497a7c(undefined4 *self,int *param_2,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507dd4);
  *self = &OWL::TMenu::vftable;
  hMenu = CreateMenu();
  self[1] = hMenu;
  *(bool *)(self + 2) = param_3 != 0;
  FUN_00497cdc((int)self,0x7fe8);
  FUN_00497d64((int)self,param_2,0,-1);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497aec  OWL::TMenu::TMenu_497aec   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_497aec(undefined4 *self,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507e04);
  *self = &OWL::TMenu::vftable;
  self[1] = param_2;
  *(bool *)(self + 2) = param_3 != 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497b38  OWL::TMenu::TMenu_497b38   (94 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_497b38(undefined4 *self,HWND hWnd,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507e28);
  *self = &OWL::TMenu::vftable;
  hMenu = GetMenu(hWnd);
  self[1] = hMenu;
  *(bool *)(self + 2) = param_3 != 0;
  FUN_00497cdc((int)self,0x7fe8);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497b98  OWL::TMenu::TMenu_497b98   (89 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_497b98(undefined4 *self,HINSTANCE hInstance,LPCSTR menuName)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507e58);
  *self = &OWL::TMenu::vftable;
  hMenu = LoadMenuA(hInstance,menuName);
  self[1] = hMenu;
  FUN_00497cdc((int)self,0x7fe8);
  *(undefined1 *)(self + 2) = 1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497bf4  OWL::TMenu::~TMenu   (54 bytes)   [rtti:dtor destructor]
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
// 0x00497cf4  OWL::TMenu::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TMenu::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497cfc  OWL::TMenu::vf3   (5 bytes)   [rtti:vtable virtual slot 3]
void __stdcall OWL::TMenu::vf3(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004982a0  OWL::TMenu::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TMenu::vf1(int self)

{
  return *(undefined4 *)(self + 4);
}

} // namespace tea
