// TEA.exe — runtime / library code "OWL_TTooltipEnabler"
// 2 functions, 0x0049f5fc..0x0049f620. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049f5fc  OWL::TTooltipEnabler::vf1   (35 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TTooltipEnabler::vf1(int param_1,uint *param_2)

{
  OWL::TCommandEnabler::vf0(param_1);
  FUN_0049f588(*(int *)(param_1 + 0x10),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f620  OWL::TTooltipEnabler::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TTooltipEnabler::vf2(void)

{
  return;
}

} // namespace tea
