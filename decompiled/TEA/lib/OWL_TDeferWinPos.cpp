// TEA.exe — runtime / library code "OWL_TDeferWinPos"
// 1 functions, 0x00494a94..0x00494a94. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00494a94  OWL::TDeferWinPos::~TDeferWinPos   (39 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDeferWinPos::_dtor
void __cdecl OWL::TDeferWinPos::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_00494a74(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
