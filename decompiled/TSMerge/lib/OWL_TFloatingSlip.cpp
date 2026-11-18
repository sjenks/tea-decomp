// TSMerge.exe — runtime / library code "OWL_TFloatingSlip"
// 1 functions, 0x00435d9c..0x00435d9c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00435d9c  OWL::TFloatingSlip::~TFloatingSlip   (245 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFloatingSlip::_dtor
void __cdecl OWL::TFloatingSlip::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c38c);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc;
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
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x28,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x26,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
