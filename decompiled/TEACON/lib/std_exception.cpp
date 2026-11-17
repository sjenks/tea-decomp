// TEACON.exe — runtime / library code "std_exception"
// 1 functions, 0x0041ea84..0x0041ea84. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ea84  std::exception::~exception   (32 bytes)   [rtti:dtor destructor]
//   written in code as std::exception::_dtor
void __cdecl std::exception::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &std::exception::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
