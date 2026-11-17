// TEA.exe — runtime / library code "OWL_TControlBar"
// 1 functions, 0x0048d078..0x0048d078. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048d078  OWL::TControlBar::~TControlBar   (222 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TControlBar::_dtor
void __cdecl OWL::TControlBar::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505b70);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&OWL::TControlBar::vftable;
    param_1[1] = (int)&PTR_LAB_00505c04;
    *(undefined ***)param_1[4] = &PTR_LAB_00505c24;
    *(undefined ***)param_1[5] = &PTR_LAB_00505c30;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505c3c;
    OWL::TGadgetWindow::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x5d),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x55),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
