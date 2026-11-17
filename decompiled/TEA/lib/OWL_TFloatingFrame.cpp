// TEA.exe — runtime / library code "OWL_TFloatingFrame"
// 1 functions, 0x004b1a78..0x004b1a78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b1a78  OWL::TFloatingFrame::~TFloatingFrame   (217 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFloatingFrame::_dtor
void __cdecl OWL::TFloatingFrame::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50d0b0);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -10;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -10;
    OWL::TTinyCaption::_dtor((int *)((int)param_1 + 0x4a),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 10;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 10;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x3a;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x3a;
    OWL::TFrameWindow::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x3a;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x3a;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x25,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x23,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
