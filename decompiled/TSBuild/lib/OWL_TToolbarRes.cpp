// TSBuild.exe — runtime / library code "OWL_TToolbarRes"
// 1 functions, 0x0042f754..0x0042f754. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042f754  OWL::TToolbarRes::~TToolbarRes   (129 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TToolbarRes::_dtor
void __cdecl OWL::TToolbarRes::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cc84);
  if (self != (undefined4 *)0x0) {
    if ((*(char *)(self + 3) != '\0') && ((uint *)self[2] != (uint *)0x0)) {
      OWL::TBitmap::_dtor((uint *)self[2],3);
    }
    OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
