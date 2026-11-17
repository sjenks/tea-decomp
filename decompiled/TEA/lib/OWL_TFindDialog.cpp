// TEA.exe — runtime / library code "OWL_TFindDialog"
// 2 functions, 0x004b9f70..0x004bd140. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b9f70  OWL::TFindDialog::~TFindDialog   (165 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFindDialog::_dtor
void __cdecl OWL::TFindDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ecc4);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x16,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x14,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bd140  OWL::TFindDialog::vf4   (33 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TFindDialog::vf4(int *param_1)

{
  undefined4 uVar1;
  
  param_1[0xf] = (int)FUN_004b070c;
  uVar1 = FUN_0048c2dc();
  *(undefined4 *)(*param_1 + 0xc) = uVar1;
  return;
}

} // namespace tea
