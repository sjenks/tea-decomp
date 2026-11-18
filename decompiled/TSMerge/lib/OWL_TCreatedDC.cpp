// TSMerge.exe — runtime / library code "OWL_TCreatedDC"
// 1 functions, 0x00416674..0x00416674. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00416674  OWL::TCreatedDC::~TCreatedDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCreatedDC::_dtor
void __cdecl OWL::TCreatedDC::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4663e0);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TCreatedDC::vftable;
    FUN_00416d80(self);
    if (((char)self[1] != '\0') && (*self != 0)) {
      DeleteDC((HDC)*self);
    }
    OWL::TDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
