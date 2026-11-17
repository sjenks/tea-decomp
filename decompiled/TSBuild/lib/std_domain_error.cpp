// TSBuild.exe — runtime / library code "std_domain_error"
// 1 functions, 0x00467300..0x00467300. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00467300  std::domain_error::~domain_error   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::domain_error::_dtor
void __cdecl std::domain_error::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4889c8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::domain_error::vftable;
    std::logic_error::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
