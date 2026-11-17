// TSMerge.exe — runtime / library code "std_basic_istream"
// 2 functions, 0x0044ec08..0x0044f354. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044ec08  std::basic_istream<char>::~basic_istream   (118 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_istream_char::_dtor
void __cdecl std::basic_istream_char::_dtor(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4723e8);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &std::basic_istream_char::vftable;
    *(undefined ***)*param_1 = &PTR_LAB_00473090;
    if ((param_2 & 2) != 0) {
      std::basic_ios_char::_dtor(param_1 + 3,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f354  std::basic_istream<char>::sentry::~sentry   (25 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_istream_char::sentry::_dtor
void __cdecl std::basic_istream_char::sentry::_dtor(int param_1,byte param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
