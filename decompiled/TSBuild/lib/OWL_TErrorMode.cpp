// TSBuild.exe — runtime / library code "OWL_TErrorMode"
// 1 functions, 0x0041ae14..0x0041ae14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ae14  OWL::TErrorMode::~TErrorMode   (34 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TErrorMode::_dtor
void __cdecl OWL::TErrorMode::_dtor(UINT *param_1,byte param_2)

{
  if (param_1 != (UINT *)0x0) {
    SetErrorMode(*param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
