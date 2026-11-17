// TSMerge.exe — runtime / library code "OWL_TMenuItemEnabler"
// 3 functions, 0x0044191c..0x00441974. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044191c  OWL::TMenuItemEnabler::vf0   (55 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TMenuItemEnabler::vf0(int param_1,char param_2)

{
  OWL::TCommandEnabler::vf0(param_1);
  EnableMenuItem(*(HMENU *)(param_1 + 0x10),*(UINT *)(param_1 + 0x14),param_2 == '\0' | 0x400);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441954  OWL::TMenuItemEnabler::vf1   (30 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TMenuItemEnabler::vf1(int param_1,LPCSTR param_2)

{
  ModifyMenuA(*(HMENU *)(param_1 + 0x10),*(UINT *)(param_1 + 0x14),0x400,*(UINT_PTR *)(param_1 + 4),
              param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441974  OWL::TMenuItemEnabler::vf2   (41 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TMenuItemEnabler::vf2(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
  }
  CheckMenuItem(*(HMENU *)(param_1 + 0x10),*(UINT *)(param_1 + 0x14),uVar1 | 0x400);
  return;
}

} // namespace tea
