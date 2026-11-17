// TEA.exe — runtime / library code "OWL_TFormattedStatic"
// 2 functions, 0x004c4530..0x004c466c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4530  OWL::TFormattedStatic::~TFormattedStatic   (313 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFormattedStatic::_dtor
void __cdecl OWL::TFormattedStatic::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510db4);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TFormattedStatic::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00511558;
    *(undefined ***)param_1[2] = &PTR_LAB_00511564;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511570;
    operator_delete_array();
    operator_delete_array();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TControl::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xc,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 10,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c466c  OWL::TFormattedStatic::vf12   (158 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TFormattedStatic::vf12(int *param_1)

{
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510de8);
  OWL::TWindow::vf30(*param_1);
  strlen(*(uint **)(*param_1 + 0x10));
  strlen((uint *)param_1[6]);
  strlen((uint *)param_1[7]);
  lpString = (LPCSTR)operator_new_array();
  FUN_004e0344(lpString,*(byte **)(*param_1 + 0x10));
  SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
  operator_delete_array();
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
