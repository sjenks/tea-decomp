// TSMerge.exe — runtime / library code "OWL_TTooltip"
// 2 functions, 0x0042592c..0x00425a00. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042592c  OWL::TTooltip::~TTooltip   (210 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TTooltip::_dtor
void __cdecl OWL::TTooltip::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x469140);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TTooltip::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00469190;
    *(undefined ***)param_1[2] = &PTR_LAB_0046919c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004691a8;
    OWL::TControl::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425a00  OWL::TTooltip::vf9   (10 bytes)   [rtti:vtable virtual slot 9]
char * __stdcall OWL::TTooltip::vf9(void)

{
  return "tooltips_class32";
}

} // namespace tea
