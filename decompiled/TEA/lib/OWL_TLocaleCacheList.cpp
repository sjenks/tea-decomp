// TEA.exe — runtime / library code "OWL_TLocaleCacheList"
// 1 functions, 0x004968f0..0x004968f0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004968f0  OWL::_TLocaleCacheList::~_TLocaleCacheList   (50 bytes)   [rtti:dtor destructor]
//   written in code as OWL::_TLocaleCacheList::_dtor
void __cdecl OWL::_TLocaleCacheList::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    while (*self != 0) {
      *self = *(int *)(*self + 8);
      operator_delete();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
