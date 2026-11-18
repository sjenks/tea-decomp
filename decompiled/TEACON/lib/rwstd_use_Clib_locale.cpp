// TEACON.exe — runtime / library code "rwstd_use_Clib_locale"
// 1 functions, 0x0041dd14..0x0041dd14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041dd14  __rwstd::use_Clib_locale::~use_Clib_locale   (56 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::use_Clib_locale::_dtor
void __cdecl __rwstd::use_Clib_locale::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    if ((uint *)self[1] != (uint *)0x0) {
      FUN_004247b0((ushort)*self,(uint *)self[1]);
      operator_delete_array();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
