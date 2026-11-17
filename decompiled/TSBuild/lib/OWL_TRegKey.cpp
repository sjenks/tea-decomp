// TSBuild.exe — runtime / library code "OWL_TRegKey"
// 1 functions, 0x0041bd68..0x0041bd68. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041bd68  OWL::TRegKey::~TRegKey   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TRegKey::_dtor
void __cdecl OWL::TRegKey::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if ((*param_1 != 0) && ((char)param_1[4] != '\0')) {
      RegCloseKey((HKEY)*param_1);
    }
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
