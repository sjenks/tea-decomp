// TEA.exe — runtime / library code "type_info_hash"
// 1 functions, 0x004dd94c..0x004dd94c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dd94c  type_info_hash::~type_info_hash   (38 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as type_info_hash::_dtor
void __cdecl type_info_hash::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    std::type_info::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
