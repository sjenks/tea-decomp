// TSBuild.exe — runtime / library code "OWL_TDocTemplate"
// 1 functions, 0x00444830..0x00444830. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00444830  OWL::TDocTemplate::~TDocTemplate   (149 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocTemplate::_dtor
void __cdecl OWL::TDocTemplate::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x480da8);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TDocTemplate::vftable;
    self[3] = &PTR_LAB_00480dec;
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
