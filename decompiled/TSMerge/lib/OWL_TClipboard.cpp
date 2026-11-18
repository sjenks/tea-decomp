// TSMerge.exe — runtime / library code "OWL_TClipboard"
// 1 functions, 0x00414e0c..0x00414e0c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414e0c  OWL::TClipboard::~TClipboard   (37 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TClipboard::_dtor
void __cdecl OWL::TClipboard::_dtor(char *self,byte dtorFlags)

{
  if (self != (char *)0x0) {
    if (*self != '\0') {
      CloseClipboard();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
