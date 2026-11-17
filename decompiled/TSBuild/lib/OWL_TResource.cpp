// TSBuild.exe — runtime / library code "OWL_TResource"
// 1 functions, 0x0042f7d8..0x0042f7d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042f7d8  OWL::TResource<OWL::TOOLBARTEMPLATE,241>::~TResource   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor
void __cdecl OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
