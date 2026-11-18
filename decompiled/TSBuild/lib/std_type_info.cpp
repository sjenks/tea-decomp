// TSBuild.exe — runtime / library code "std_type_info"
// 1 functions, 0x004682f0..0x004682f0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004682f0  std::type_info::~type_info   (32 bytes)   [rtti:dtor destructor]
//   written in code as std::type_info::_dtor
void __cdecl std::type_info::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &std::type_info::vftable, (dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
