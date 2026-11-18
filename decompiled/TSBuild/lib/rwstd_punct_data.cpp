// TSBuild.exe — runtime / library code "rwstd_punct_data"
// 1 functions, 0x004638e4..0x004638e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004638e4  __rwstd::punct_data<char>::~punct_data   (69 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::punct_data_char::_dtor
void __cdecl __rwstd::punct_data_char::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4877a4);
  if (self != 0) {
    std::string::_dtor(self + 8,2);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
