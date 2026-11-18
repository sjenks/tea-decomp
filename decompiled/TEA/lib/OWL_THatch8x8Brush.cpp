// TEA.exe — runtime / library code "OWL_THatch8x8Brush"
// 1 functions, 0x004a14f8..0x004a14f8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a14f8  OWL::THatch8x8Brush::~THatch8x8Brush   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::THatch8x8Brush::_dtor
void __cdecl OWL::THatch8x8Brush::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509d88);
  if (self != (uint *)0x0) {
    OWL::TBrush::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
