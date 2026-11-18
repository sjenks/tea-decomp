// TEA.exe — runtime / library code "OWL_TMBlockList"
// 1 functions, 0x0048cc48..0x0048cc48. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048cc48  OWL::TMBlockList<TStandardAllocator>::~TMBlockList   (25 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMBlockList_TStandardAllocator::_dtor
void __cdecl OWL::TMBlockList_TStandardAllocator::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete_array();
  }
  return;
}

} // namespace tea
