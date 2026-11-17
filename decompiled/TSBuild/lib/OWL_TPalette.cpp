// TSBuild.exe — runtime / library code "OWL_TPalette"
// 1 functions, 0x0041d374..0x0041d374. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041d374  OWL::TPalette::~TPalette   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPalette::_dtor
void __cdecl OWL::TPalette::_dtor(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4791d8);
  if (param_1 != (uint *)0x0) {
    OWL::TGdiObject::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
