// TEA.exe — runtime / library code "OWL_TPaintDC"
// 1 functions, 0x0049b014..0x0049b014. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049b014  OWL::TPaintDC::~TPaintDC   (126 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPaintDC::_dtor
void __cdecl OWL::TPaintDC::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508890);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TPaintDC::vftable;
    FUN_0048db40(self);
    if ((char)self[1] != '\0') {
      EndPaint(*(HWND *)((int)self + 0x61),(PAINTSTRUCT *)((int)self + 0x21));
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
