// TSBuild.exe — runtime / library code "OWL_TBrush"
// 1 functions, 0x0043c5bc..0x0043c5bc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c5bc  OWL::TBrush::~TBrush   (107 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBrush::_dtor
undefined4 __cdecl OWL::TBrush::_dtor(uint *param_1,byte param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  uint uVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f4b8);
  if (param_1 != (uint *)0x0) {
    if ((char)param_1[1] == '\0') {
      uVar2 = *param_1;
      puVar1 = FUN_0043c108();
      FUN_0043c378((int)puVar1,uVar2);
    }
    OWL::TGdiObject::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return local_28;
}

} // namespace tea
