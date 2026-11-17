// TSBuild.exe — runtime / library code "OWL_TButtonGadgetEnabler"
// 3 functions, 0x0041d954..0x0041d984. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d954  OWL::TButtonGadgetEnabler::vf0   (38 bytes)   [rtti:vtable virtual slot 0]
void __cdecl OWL::TButtonGadgetEnabler::vf0(int param_1)

{
  OWL::TCommandEnabler::vf0(param_1);
  (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d97c  OWL::TButtonGadgetEnabler::vf1   (5 bytes)   [rtti:vtable virtual slot 1]
void __stdcall OWL::TButtonGadgetEnabler::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041d984  OWL::TButtonGadgetEnabler::vf2   (22 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TButtonGadgetEnabler::vf2(int param_1,int param_2)

{
  FUN_0041de2c(*(int **)(param_1 + 0x10),param_2);
  return;
}

} // namespace tea
