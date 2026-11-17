// TEA.exe — application module "PVWBrush"
// 1 functions, 0x0041794c..0x0041794c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041794c  PVWBrush::~PVWBrush   (89 bytes)   [rtti:dtor destructor]
//   written in code as PVWBrush::_dtor
void __cdecl PVWBrush::_dtor(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4ee090);
  if (param_1 != 0) {
    if (*(uint **)(param_1 + 0xc) != (uint *)0x0) {
      OWL::TBrush::_dtor(*(uint **)(param_1 + 0xc),3);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
