// TSBuild.exe — runtime / library code "OWL_TCheckBox"
// 4 functions, 0x0043cfc8..0x0043d314. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043cfc8  OWL::TCheckBox::vf8   (69 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TCheckBox::vf8(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&DAT_0047f778,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TButton::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d1f8  OWL::TCheckBox::~TCheckBox   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCheckBox::_dtor
void __cdecl OWL::TCheckBox::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47f8e8);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TCheckBox::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_0047f804;
    *(undefined ***)param_1[2] = &PTR_LAB_0047f810;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047f81c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TButton::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x2a),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x22),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d2f4  OWL::TCheckBox::vf9   (31 bytes)   [rtti:vtable virtual slot 9]
char * __cdecl OWL::TCheckBox::vf9(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    return "BorCheck";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d314  OWL::TCheckBox::vf11   (67 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TCheckBox::vf11(int *param_1,ushort *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = FUN_00438338(*param_1,0xf0,0,0);
    *param_2 = (ushort)uVar1;
  }
  else if (param_3 == 1) {
    FUN_0043d358(param_1,(uint)*param_2);
  }
  return 2;
}

} // namespace tea
