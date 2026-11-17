// TSBuild.exe — runtime / library code "std_locale"
// 1 functions, 0x0041c2dc..0x0041c2dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c2dc  std::locale::facet::~facet   (92 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::facet::_dtor
void __cdecl std::locale::facet::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x478dd4);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::locale::facet::vftable;
    __rwstd::ref_counted::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
