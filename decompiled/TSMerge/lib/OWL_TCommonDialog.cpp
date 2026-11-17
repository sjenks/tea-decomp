// TSMerge.exe — runtime / library code "OWL_TCommonDialog"
// 7 functions, 0x004155a8..0x0041588c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004155a8  OWL::TCommonDialog::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TCommonDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TCommonDialog::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_004179f4(param_1[1],(int *)&OWL::TCommonDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDialog::vf14(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004155f0  OWL::TCommonDialog::EvClose   (16 bytes)   [owl:response-table message-handler]
//   WM_CLOSE
void __cdecl OWL::TCommonDialog::EvClose(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415600  OWL::TCommonDialog::CmRange1to2   (16 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: id 1; id 2
//   also: OWL::TCommonDialog::CmRange1to2 [owl:response-table]
void __cdecl OWL::TCommonDialog::CmRange1to2(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415764  OWL::TCommonDialog::~TCommonDialog   (249 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TCommonDialog::_dtor
void __cdecl OWL::TCommonDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46601c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TCommonDialog::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00466080;
    *(undefined ***)param_1[2] = &PTR_LAB_0046608c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00466098;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    OWL::TDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415860  OWL::TCommonDialog::vf11   (35 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TCommonDialog::vf11(int *param_1)

{
  OWL::TDialog::vf11(param_1);
  if (param_1[6] != 0) {
    FUN_00435124(param_1,(uint *)param_1[6]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415884  OWL::TCommonDialog::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall OWL::TCommonDialog::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041588c  OWL::TCommonDialog::vf6   (10 bytes)   [rtti:vtable virtual slot 6]
undefined4 __stdcall OWL::TCommonDialog::vf6(void)

{
  return 2;
}

} // namespace tea
