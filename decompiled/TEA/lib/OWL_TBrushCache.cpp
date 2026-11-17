// TEA.exe — runtime / library code "OWL_TBrushCache"
// 1 functions, 0x004ab5c0..0x004ab5c0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ab5c0  OWL::TBrushCache::~TBrushCache   (93 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBrushCache::_dtor
void __cdecl OWL::TBrushCache::_dtor(int param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xc0); iVar1 = iVar1 + 1) {
      if (*(int *)(param_1 + iVar1 * 0xc) != 0) {
        FUN_00493eb4(*(uint *)(param_1 + iVar1 * 0xc));
        *(undefined4 *)(param_1 + iVar1 * 0xc) = 0;
        *(undefined4 *)(param_1 + 4 + iVar1 * 0xc) = 0;
        *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = 0;
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
