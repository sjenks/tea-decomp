// TSMerge.exe — runtime / library code "OWL_TGadgetWindowFont"
// 1 functions, 0x0041c6d8..0x0041c6d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c6d8  OWL::TGadgetWindowFont::~TGadgetWindowFont   (69 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadgetWindowFont::_dtor
void __cdecl OWL::TGadgetWindowFont::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4676b4);
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
