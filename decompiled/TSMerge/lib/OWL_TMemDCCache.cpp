// TSMerge.exe — runtime / library code "OWL_TMemDCCache"
// 1 functions, 0x00420674..0x00420674. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00420674  OWL::TMemDCCache::~TMemDCCache   (59 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemDCCache::_dtor
void __cdecl OWL::TMemDCCache::_dtor(int self,byte dtorFlags)

{
  int i;
  
  if (self != 0) {
    for (i = 0; (i < 0x10 && (*(int *)(self + i * 5) != 0)); i = i + 1) {
      DeleteDC(*(HDC *)(self + i * 5));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
