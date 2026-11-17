// TEA.exe — runtime / library code "std_type_info"
// 1 functions, 0x004dd5ac..0x004dd5ac. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dd5ac  std::type_info::~type_info   (32 bytes)   [rtti:dtor destructor]
//   written in code as std::type_info::_dtor
void __cdecl std::type_info::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &std::type_info::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
