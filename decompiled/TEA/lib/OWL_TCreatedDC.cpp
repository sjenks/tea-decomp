// TEA.exe — runtime / library code "OWL_TCreatedDC"
// 1 functions, 0x0048d3a4..0x0048d3a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048d3a4  OWL::TCreatedDC::~TCreatedDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCreatedDC::_dtor
void __cdecl OWL::TCreatedDC::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x505d40);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TCreatedDC::vftable;
    FUN_0048db40(self);
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
