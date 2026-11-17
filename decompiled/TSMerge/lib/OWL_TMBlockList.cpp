// TSMerge.exe — runtime / library code "OWL_TMBlockList"
// 1 functions, 0x00415d44..0x00415d44. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00415d44  OWL::TMBlockList<TStandardAllocator>::~TMBlockList   (25 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMBlockList_TStandardAllocator::_dtor
void __cdecl OWL::TMBlockList_TStandardAllocator::_dtor(int param_1,byte param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    operator_delete_array();
  }
  return;
}

} // namespace tea
