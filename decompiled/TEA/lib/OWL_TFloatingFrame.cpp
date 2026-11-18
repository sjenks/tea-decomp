// TEA.exe — runtime / library code "OWL_TFloatingFrame"
// 1 functions, 0x004b1a78..0x004b1a78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b1a78  OWL::TFloatingFrame::~TFloatingFrame   (217 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFloatingFrame::_dtor
void __cdecl OWL::TFloatingFrame::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50d0b0);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -10;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -10;
    OWL::TTinyCaption::_dtor((int *)((int)self + 0x4a),0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 10;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 10;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x3a;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x3a;
    OWL::TFrameWindow::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x3a;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x3a;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x25,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x23,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
