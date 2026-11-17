// TEA.exe — runtime / library code "OWL_TCelArray"
// 1 functions, 0x00489edc..0x00489edc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00489edc  OWL::TCelArray::~TCelArray   (101 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCelArray::_dtor
void __cdecl OWL::TCelArray::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x504e08);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TCelArray::vftable;
    if ((*(char *)(param_1 + 2) != '\0') && ((uint *)param_1[1] != (uint *)0x0)) {
      OWL::TBitmap::_dtor((uint *)param_1[1],3);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
