// TSMerge.exe — runtime / library code "OWL_TDefaultGUIFont"
// 1 functions, 0x00418db0..0x00418db0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00418db0  OWL::TDefaultGUIFont::~TDefaultGUIFont   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TDefaultGUIFont::_dtor
void __cdecl OWL::TDefaultGUIFont::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466e50);
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
