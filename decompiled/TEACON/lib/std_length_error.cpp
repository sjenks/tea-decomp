// TEACON.exe — runtime / library code "std_length_error"
// 1 functions, 0x0041ebdc..0x0041ebdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041ebdc  std::length_error::~length_error   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::length_error::_dtor
void __cdecl std::length_error::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x431a10);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::length_error::vftable;
    std::logic_error::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
