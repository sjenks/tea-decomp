// TEA.exe — runtime / library code "OWL_TButtonGadgetEnabler"
// 3 functions, 0x00488c30..0x00488c60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00488c30  OWL::TButtonGadgetEnabler::vf0   (38 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TButtonGadgetEnabler::vf0(int param_1)

{
  OWL::TCommandEnabler::vf0(param_1);
  (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488c58  OWL::TButtonGadgetEnabler::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall OWL::TButtonGadgetEnabler::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488c60  OWL::TButtonGadgetEnabler::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TButtonGadgetEnabler::vf2(int param_1,int param_2)

{
  FUN_004890e4(*(int **)(param_1 + 0x10),param_2);
  return;
}

} // namespace tea
