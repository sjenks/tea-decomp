// TSMerge.exe — runtime / library code "OWL_TApplicatData"
// 1 functions, 0x0042e4a4..0x0042e4a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042e4a4  OWL::TApplicatData::~TApplicatData   (25 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TApplicatData::_dtor
void __cdecl OWL::TApplicatData::_dtor(int self,byte dtorFlags)

{
  if ((self != 0) && ((dtorFlags & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
