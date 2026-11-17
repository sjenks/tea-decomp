// TEA.exe — runtime / library code "OWL_TTinyCaption"
// 3 functions, 0x004c7fe4..0x004c8b78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c7fe4  OWL::TTinyCaption::vf2   (34 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TTinyCaption::vf2(int param_1,int *param_2,undefined *param_3)

{
  param_2[2] = param_1;
  FUN_0048e808(*(undefined4 *)(param_1 + 4),(int *)&DAT_00511b7c,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8028  OWL::TTinyCaption::~TTinyCaption   (246 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TTinyCaption::_dtor
void __cdecl OWL::TTinyCaption::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x511c74);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TTinyCaption::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00511e28;
    *(undefined ***)param_1[2] = &PTR_LAB_00511e34;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511e40;
    if (*(uint **)((int)param_1 + 0x26) != (uint *)0x0) {
      OWL::TGdiObject::_dtor(*(uint **)((int)param_1 + 0x26),0);
      operator_delete();
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0xe,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c8b78  OWL::TTinyCaption::vf1   (63 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TTinyCaption::vf1(int *param_1,uint param_2,HWND param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_004c8bb8(param_1,param_2,param_3,param_4,&local_8);
  if (iVar1 != 1) {
    local_8 = OWL::TWindow::vf18((undefined4 *)*param_1,param_2,param_3,param_4);
  }
  return local_8;
}

} // namespace tea
