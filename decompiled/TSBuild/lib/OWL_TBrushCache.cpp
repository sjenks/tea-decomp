// TSBuild.exe — runtime / library code "OWL_TBrushCache"
// 1 functions, 0x0043c20c..0x0043c20c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c20c  OWL::TBrushCache::~TBrushCache   (93 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBrushCache::_dtor
void __cdecl OWL::TBrushCache::_dtor(int self,byte dtorFlags)

{
  int i;
  
  if (self != 0) {
    for (i = 0; i < *(int *)(self + 0xc0); i = i + 1) {
      if (*(int *)(self + i * 0xc) != 0) {
        FUN_004282f8(*(uint *)(self + i * 0xc));
        *(undefined4 *)(self + i * 0xc) = 0;
        *(undefined4 *)(self + 4 + i * 0xc) = 0;
        *(undefined4 *)(self + 8 + i * 0xc) = 0;
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
