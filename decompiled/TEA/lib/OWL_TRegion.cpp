// TEA.exe — runtime / library code "OWL_TRegion"
// 1 functions, 0x0049cf24..0x0049cf24. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049cf24  OWL::TRegion::~TRegion   (59 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRegion::_dtor
BOOL __cdecl OWL::TRegion::_dtor(undefined4 *param_1,byte param_2)

{
  BOOL in_EAX;
  
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      in_EAX = DeleteObject((HGDIOBJ)*param_1);
      if (in_EAX == 0) {
        FUN_00493800(0x7fde,*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      in_EAX = operator_delete();
    }
  }
  return in_EAX;
}

} // namespace tea
