// TEA.exe — runtime / library code "rwstd_ref_counted"
// 1 functions, 0x004dab1c..0x004dab1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dab1c  __rwstd::ref_counted::~ref_counted   (32 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::ref_counted::_dtor
void __cdecl __rwstd::ref_counted::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &__rwstd::ref_counted::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
