// TSMerge.exe — runtime / library code "OWL_TStreamableClass"
// 1 functions, 0x00421d64..0x00421d64. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00421d64  OWL::TStreamableClass::~TStreamableClass   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TStreamableClass::_dtor
void __cdecl OWL::TStreamableClass::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    if (*(int *)(self + 0xc) != 0) {
      FUN_00421944(*(undefined4 *)(self + 0xc),self);
    }
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
