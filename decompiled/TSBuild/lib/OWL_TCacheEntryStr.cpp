// TSBuild.exe — runtime / library code "OWL_TCacheEntryStr"
// 1 functions, 0x0043928c..0x0043928c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043928c  OWL::TCacheEntryStr::~TCacheEntryStr   (25 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCacheEntryStr::_dtor
void __cdecl OWL::TCacheEntryStr::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
