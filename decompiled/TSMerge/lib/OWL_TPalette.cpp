// TSMerge.exe — runtime / library code "OWL_TPalette"
// 1 functions, 0x00412350..0x00412350. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00412350  OWL::TPalette::~TPalette   (66 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPalette::_dtor
void __cdecl OWL::TPalette::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465424);
  if (self != (uint *)0x0) {
    OWL::TGdiObject::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
