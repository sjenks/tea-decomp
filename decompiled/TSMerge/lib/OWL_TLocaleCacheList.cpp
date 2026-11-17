// TSMerge.exe — runtime / library code "OWL_TLocaleCacheList"
// 1 functions, 0x0041f8d4..0x0041f8d4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041f8d4  OWL::_TLocaleCacheList::~_TLocaleCacheList   (50 bytes)   [rtti:dtor destructor]
//   written in code as OWL::_TLocaleCacheList::_dtor
void __cdecl OWL::_TLocaleCacheList::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    while (*param_1 != 0) {
      *param_1 = *(int *)(*param_1 + 8);
      operator_delete();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
