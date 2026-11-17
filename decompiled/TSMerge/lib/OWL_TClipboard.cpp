// TSMerge.exe — runtime / library code "OWL_TClipboard"
// 1 functions, 0x00414e0c..0x00414e0c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414e0c  OWL::TClipboard::~TClipboard   (37 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TClipboard::_dtor
void __cdecl OWL::TClipboard::_dtor(char *param_1,byte param_2)

{
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      CloseClipboard();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
