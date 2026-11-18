// TEA.exe — runtime / library code "PVWRadioButton"
// 1 functions, 0x004c677c..0x004c677c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c677c  PVWRadioButton::GetClassName   (31 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from PVWRadioButton's OWL::TWindow subobject vtable at 0x004f0aa8 (through the this-adjusting thunk at 0x0042293a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TRadioButton::vf9 [rtti:vtable]
char * __cdecl PVWRadioButton::GetClassName(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorRadio";
  }
  return "BUTTON";
}

} // namespace tea
