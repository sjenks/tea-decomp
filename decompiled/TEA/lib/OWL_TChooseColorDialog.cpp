// TEA.exe — runtime / library code "OWL_TChooseColorDialog"
// 4 functions, 0x0048b078..0x0048b3dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048b078  OWL::TChooseColorDialog::vf14   (69 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TChooseColorDialog::vf14(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&DAT_00505448,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b2c4  OWL::TChooseColorDialog::~TChooseColorDialog   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TChooseColorDialog::_dtor
void __cdecl OWL::TChooseColorDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x505494);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TChooseColorDialog::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_005054f8;
    *(undefined ***)param_1[2] = &PTR_LAB_00505504;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505510;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x28;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x28;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x28;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x28;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x15,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x13,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b3c0  OWL::TChooseColorDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TChooseColorDialog::vf1(int *param_1,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048b3dc  OWL::TChooseColorDialog::vf6   (100 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TChooseColorDialog::vf6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(code **)(param_1 + 0x38) = FUN_004b070c;
  iVar1 = FUN_0048c23c();
  if (iVar1 == 0) {
    uVar2 = FUN_0048c2ac();
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = uVar2;
    uVar2 = 2;
  }
  else {
    **(undefined4 **)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = *(undefined4 *)(param_1 + 0x28);
    uVar2 = 1;
  }
  return uVar2;
}

} // namespace tea
