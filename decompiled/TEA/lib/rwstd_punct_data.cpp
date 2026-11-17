// TEA.exe — runtime / library code "rwstd_punct_data"
// 1 functions, 0x004d8b38..0x004d8b38. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d8b38  __rwstd::punct_data<char>::~punct_data   (69 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::punct_data_char::_dtor
void __cdecl __rwstd::punct_data_char::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x515a70);
  if (param_1 != 0) {
    std::string::_dtor(param_1 + 8,2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
