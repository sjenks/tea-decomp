// TSBuild.exe — runtime / library code "OWL_TDvFileOpenDialog"
// 2 functions, 0x0044152c..0x004441cc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044152c  OWL::TDvFileOpenDialog::vf1   (82 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TDvFileOpenDialog::vf1(int *param_1,int param_2,undefined4 param_3)

{
  if (((param_2 == 0x111) && ((short)param_3 == 0x470)) && ((short)((uint)param_3 >> 0x10) == 1)) {
    FUN_0044123c(param_1,param_1 + 0x1e,(int)(param_1 + 7));
  }
  OWL::TOpenSaveDialog::vf1(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004441cc  OWL::TDvFileOpenDialog::~TDvFileOpenDialog   (205 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDvFileOpenDialog::_dtor
void __cdecl OWL::TDvFileOpenDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x480a58);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x23,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x21,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
