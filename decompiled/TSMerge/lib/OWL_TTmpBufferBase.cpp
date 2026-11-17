// TSMerge.exe — runtime / library code "OWL_TTmpBufferBase"
// 1 functions, 0x0042033c..0x0042033c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042033c  OWL::TTmpBufferBase::~TTmpBufferBase   (68 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTmpBufferBase::_dtor
void __cdecl OWL::TTmpBufferBase::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_1[1] < 0) {
      operator_delete_array();
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      puVar3 = FUN_0041fb78();
      puVar2 = *(undefined4 **)(puVar3 + param_1[1] * 4 + 300);
      *puVar1 = *puVar2;
      *puVar2 = puVar1;
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
