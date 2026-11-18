// TSMerge.exe — runtime / library code "OWL_TRegKey"
// 1 functions, 0x00410d44..0x00410d44. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00410d44  OWL::TRegKey::~TRegKey   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRegKey::_dtor
void __cdecl OWL::TRegKey::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if ((*self != 0) && ((char)self[4] != '\0')) {
      RegCloseKey((HKEY)*self);
    }
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
