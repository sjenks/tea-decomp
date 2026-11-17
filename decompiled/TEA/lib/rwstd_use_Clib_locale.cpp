// TEA.exe — runtime / library code "rwstd_use_Clib_locale"
// 1 functions, 0x004dafc0..0x004dafc0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dafc0  __rwstd::use_Clib_locale::~use_Clib_locale   (56 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::use_Clib_locale::_dtor
void __cdecl __rwstd::use_Clib_locale::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)param_1[1] != (uint *)0x0) {
      FUN_004e3578((ushort)*param_1,(uint *)param_1[1]);
      operator_delete_array();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
