// TSBuild.exe — runtime / library code "std_pair"
// 1 functions, 0x0046382c..0x0046382c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0046382c  std::pair<const int,std::string>::~pair   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::pair_const_int_std_string::_dtor
void __cdecl std::pair_const_int_std_string::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x48778c);
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
