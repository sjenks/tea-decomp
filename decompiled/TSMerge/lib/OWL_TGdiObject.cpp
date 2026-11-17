// TSMerge.exe — runtime / library code "OWL_TGdiObject"
// 1 functions, 0x0041d334..0x0041d334. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d334  OWL::TGdiObject::~TGdiObject   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGdiObject::_dtor
void __cdecl OWL::TGdiObject::_dtor(uint *param_1,byte param_2)

{
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] != '\0') {
      FUN_0041d184(*param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
