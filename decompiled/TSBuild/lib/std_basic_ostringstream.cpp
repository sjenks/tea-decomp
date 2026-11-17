// TSBuild.exe — runtime / library code "std_basic_ostringstream"
// 1 functions, 0x0045c5a4..0x0045c5a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045c5a4  std::basic_ostringstream<char>::~basic_ostringstream   (157 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_ostringstream_char::_dtor
void __cdecl std::basic_ostringstream_char::_dtor(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x486574);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &std::basic_ostringstream_char::vftable;
    *(undefined ***)*param_1 = &PTR_LAB_004875f8;
    std::basic_stringbuf_char::_dtor(param_1 + 2,2);
    std::basic_ostream_char::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      std::basic_ios_char::_dtor(param_1 + 0xe,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
