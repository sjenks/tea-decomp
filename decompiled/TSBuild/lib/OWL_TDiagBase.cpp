// TSBuild.exe — runtime / library code "OWL_TDiagBase"
// 1 functions, 0x0041f780..0x0041f780. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041f780  OWL::TDiagBase::~TDiagBase   (41 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDiagBase::_dtor
void __cdecl OWL::TDiagBase::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TDiagBase::vftable;
    FUN_0041f7d8((int)param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
