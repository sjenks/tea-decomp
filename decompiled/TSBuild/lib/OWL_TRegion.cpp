// TSBuild.exe — runtime / library code "OWL_TRegion"
// 1 functions, 0x0042fa08..0x0042fa08. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042fa08  OWL::TRegion::~TRegion   (59 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRegion::_dtor
void __cdecl OWL::TRegion::_dtor(undefined4 *param_1,byte param_2)

{
  BOOL BVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + 1) != '\0') {
      BVar1 = DeleteObject((HGDIOBJ)*param_1);
      if (BVar1 == 0) {
        FUN_00427c44(0x7fde,*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
