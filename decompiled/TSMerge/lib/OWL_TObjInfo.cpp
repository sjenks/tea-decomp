// TSMerge.exe — runtime / library code "OWL_TObjInfo"
// 1 functions, 0x0041d364..0x0041d364. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d364  OWL::TObjInfo::~TObjInfo   (25 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TObjInfo::_dtor
void __cdecl OWL::TObjInfo::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
