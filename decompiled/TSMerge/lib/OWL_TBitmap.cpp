// TSMerge.exe — runtime / library code "OWL_TBitmap"
// 1 functions, 0x00411fc4..0x00411fc4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00411fc4  OWL::TBitmap::~TBitmap   (80 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBitmap::_dtor
void __cdecl OWL::TBitmap::_dtor(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x465330);
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
