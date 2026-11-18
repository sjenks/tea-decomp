// TSMerge.exe — runtime / library code "OWL_TBrush"
// 1 functions, 0x00431428..0x00431428. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00431428  OWL::TBrush::~TBrush   (107 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBrush::_dtor
undefined4 __cdecl OWL::TBrush::_dtor(uint *self,byte dtorFlags)

{
  undefined *puVar1;
  undefined4 *sehChainHead;
  uint uVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46b6dc);
  if (self != (uint *)0x0) {
    if ((char)self[1] == '\0') {
      uVar2 = *self;
      puVar1 = FUN_00430f74();
      FUN_004311e4((int)puVar1,uVar2);
    }
    OWL::TGdiObject::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = local_28;
  return local_28;
}

} // namespace tea
