// TEA.exe — runtime / library code "OWL_TDocTemplate"
// 1 functions, 0x004b51bc..0x004b51bc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b51bc  OWL::TDocTemplate::~TDocTemplate   (149 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocTemplate::_dtor
void __cdecl OWL::TDocTemplate::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50dce8);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TDocTemplate::vftable;
    self[3] = &PTR_LAB_0050dd2c;
    if ((*(byte *)((int)self + 0x16) & 0x80) != 0) {
      operator_delete();
      self[2] = 0;
    }
    operator_delete_array();
    OWL::TStreamableBase::_dtor(self + 3,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
