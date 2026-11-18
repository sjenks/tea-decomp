// TEA.exe — runtime / library code "OWL_TPreviewDCBase"
// 2 functions, 0x0049bd50..0x0049c9e8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049bd50  OWL::TPreviewDCBase::vf23   (13 bytes)   [rtti:vtable virtual slot 23]
undefined4 __cdecl OWL::TPreviewDCBase::vf23(int self)

{
  return **(undefined4 **)(self + 0x35);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c9e8  OWL::TPreviewDCBase::~TPreviewDCBase   (70 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPreviewDCBase::_dtor
void __cdecl OWL::TPreviewDCBase::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508df0);
  if (self != (int *)0x0) {
    OWL::TCreatedDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
