// TSBuild.exe — runtime / library code "OWL_TToolbarRes"
// 1 functions, 0x0042f754..0x0042f754. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042f754  OWL::TToolbarRes::~TToolbarRes   (129 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TToolbarRes::_dtor
void __cdecl OWL::TToolbarRes::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47cc84);
  if (param_1 != (undefined4 *)0x0) {
    if ((*(char *)(param_1 + 3) != '\0') && ((uint *)param_1[2] != (uint *)0x0)) {
      OWL::TBitmap::_dtor((uint *)param_1[2],3);
    }
    OWL::TResource_OWL_TOOLBARTEMPLATE_241::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
