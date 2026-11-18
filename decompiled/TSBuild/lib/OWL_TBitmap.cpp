// TSBuild.exe — runtime / library code "OWL_TBitmap"
// 1 functions, 0x0041cfe8..0x0041cfe8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041cfe8  OWL::TBitmap::~TBitmap   (80 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TBitmap::_dtor
void __cdecl OWL::TBitmap::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4790e4);
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
