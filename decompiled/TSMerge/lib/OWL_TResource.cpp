// TSMerge.exe — runtime / library code "OWL_TResource"
// 1 functions, 0x00424644..0x00424644. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00424644  OWL::TResource<OWL::TOOLBARTEMPLATE,241>::~TResource   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor
void __cdecl OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    *self = 0;
    self[1] = 0;
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
