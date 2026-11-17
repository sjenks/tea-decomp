// TSMerge.exe — runtime / library code "std_basic_ifstream"
// 1 functions, 0x0044edf4..0x0044edf4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044edf4  std::basic_ifstream<char>::~basic_ifstream   (157 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ifstream_char::_dtor
void __cdecl std::basic_ifstream_char::_dtor(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x472454);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &std::basic_ifstream_char::vftable;
    *(undefined ***)*param_1 = &PTR_LAB_00473048;
    std::basic_filebuf_char::_dtor(param_1 + 3,2);
    std::basic_istream_char::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      std::basic_ios_char::_dtor(param_1 + 0x14,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
