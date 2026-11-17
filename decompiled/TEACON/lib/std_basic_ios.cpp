// TEACON.exe — runtime / library code "std_basic_ios"
// 1 functions, 0x0041886c..0x0041886c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041886c  std::basic_ios<char>::~basic_ios   (93 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ios_char::_dtor
void __cdecl std::basic_ios_char::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x43009c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::basic_ios_char::vftable;
    std::ios_base::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
