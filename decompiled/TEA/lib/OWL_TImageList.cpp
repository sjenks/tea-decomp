// TEA.exe — runtime / library code "OWL_TImageList"
// 1 functions, 0x0049468c..0x0049468c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049468c  OWL::TImageList::~TImageList   (103 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TImageList::_dtor
void __cdecl OWL::TImageList::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x507430);
  if (param_1 != 0) {
    FUN_00487178();
    FUN_00487090();
    if (*(uint **)(param_1 + 4) != (uint *)0x0) {
      OWL::TBitmap::_dtor(*(uint **)(param_1 + 4),3);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
