// TSMerge.exe — runtime / library code "OWL_TRegLink"
// 1 functions, 0x004248fc..0x004248fc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004248fc  OWL::TRegLink::~TRegLink   (32 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRegLink::_dtor
void __cdecl OWL::TRegLink::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &OWL::TRegLink::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
