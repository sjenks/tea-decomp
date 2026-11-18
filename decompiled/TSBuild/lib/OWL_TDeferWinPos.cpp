// TSBuild.exe — runtime / library code "OWL_TDeferWinPos"
// 1 functions, 0x00428dbc..0x00428dbc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00428dbc  OWL::TDeferWinPos::~TDeferWinPos   (39 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDeferWinPos::_dtor
void __cdecl OWL::TDeferWinPos::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if (*self != 0) {
      FUN_00428d9c(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
