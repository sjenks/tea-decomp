// TEA.exe — runtime / library code "OWL_TImageList"
// 1 functions, 0x0049468c..0x0049468c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049468c  OWL::TImageList::~TImageList   (103 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TImageList::_dtor
void __cdecl OWL::TImageList::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507430);
  if (self != 0) {
    FUN_00487178();
    FUN_00487090();
    if (*(uint **)(self + 4) != (uint *)0x0) {
      OWL::TBitmap::_dtor(*(uint **)(self + 4),3);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
