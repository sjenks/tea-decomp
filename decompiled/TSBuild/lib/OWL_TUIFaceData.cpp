// TSBuild.exe — runtime / library code "OWL_TUIFaceData"
// 1 functions, 0x0043250c..0x0043250c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043250c  OWL::TUIFaceData::~TUIFaceData   (135 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TUIFaceData::_dtor
void __cdecl OWL::TUIFaceData::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47d480);
  if (self != (uint *)0x0) {
    if (*(uint **)((int)self + 0x11) != (uint *)0x0) {
      OWL::TBitmap::_dtor(*(uint **)((int)self + 0x11),3);
    }
    OWL::TBrush::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
