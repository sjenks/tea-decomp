// TSBuild.exe — runtime / library code "OWL_TTmpBufferBase"
// 1 functions, 0x0042b4b0..0x0042b4b0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042b4b0  OWL::TTmpBufferBase::~TTmpBufferBase   (68 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTmpBufferBase::_dtor
void __cdecl OWL::TTmpBufferBase::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  
  if (self != (undefined4 *)0x0) {
    if ((int)self[1] < 0) {
      operator_delete_array();
    }
    else {
      puVar1 = (undefined4 *)*self;
      puVar3 = FUN_0042acec();
      puVar2 = *(undefined4 **)(puVar3 + self[1] * 4 + 300);
      *puVar1 = *puVar2;
      *puVar2 = puVar1;
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
