// TSBuild.exe — runtime / library code "OWL_TMemDCCache"
// 1 functions, 0x0042b7e8..0x0042b7e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042b7e8  OWL::TMemDCCache::~TMemDCCache   (59 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemDCCache::_dtor
void __cdecl OWL::TMemDCCache::_dtor(int param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; (iVar1 < 0x10 && (*(int *)(param_1 + iVar1 * 5) != 0)); iVar1 = iVar1 + 1) {
      DeleteDC(*(HDC *)(param_1 + iVar1 * 5));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
