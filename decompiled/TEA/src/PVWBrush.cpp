// TEA.exe — application module "PVWBrush"
// 1 functions, 0x0041794c..0x0041794c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041794c  PVWBrush::~PVWBrush   (89 bytes)   [rtti:dtor destructor]
//   written in code as PVWBrush::_dtor
void __cdecl PVWBrush::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee090);
  if (self != 0) {
    if (*(uint **)(self + 0xc) != (uint *)0x0) {
      OWL::TBrush::_dtor(*(uint **)(self + 0xc),3);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
