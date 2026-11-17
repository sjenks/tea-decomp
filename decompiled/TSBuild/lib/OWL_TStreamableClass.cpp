// TSBuild.exe — runtime / library code "OWL_TStreamableClass"
// 1 functions, 0x0042cef8..0x0042cef8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042cef8  OWL::TStreamableClass::~TStreamableClass   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TStreamableClass::_dtor
void __cdecl OWL::TStreamableClass::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0042cad8(*(undefined4 *)(param_1 + 0xc),param_1);
    }
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
