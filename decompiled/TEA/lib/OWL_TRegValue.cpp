// TEA.exe — runtime / library code "OWL_TRegValue"
// 1 functions, 0x00487aa8..0x00487aa8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00487aa8  OWL::TRegValue::~TRegValue   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRegValue::_dtor
void __cdecl OWL::TRegValue::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    operator_delete_array();
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
