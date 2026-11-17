// TSBuild.exe — runtime / library code "OWL_TApplicatData"
// 1 functions, 0x00439638..0x00439638. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00439638  OWL::TApplicatData::~TApplicatData   (25 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TApplicatData::_dtor
void __cdecl OWL::TApplicatData::_dtor(int param_1,byte param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

} // namespace tea
