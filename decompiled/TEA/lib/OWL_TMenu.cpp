// TEA.exe — runtime / library code "OWL_TMenu"
// 4 functions, 0x00497bf4..0x004982a0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00497bf4  OWL::TMenu::~TMenu   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMenu::_dtor
void __cdecl OWL::TMenu::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TMenu::vftable;
    if ((*(char *)(param_1 + 2) != '\0') && (param_1[1] != 0)) {
      DestroyMenu((HMENU)param_1[1]);
    }
    if ((param_2 & 1) != 0) {
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
undefined4 __cdecl OWL::TMenu::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

} // namespace tea
