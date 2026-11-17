// TEA.exe — runtime / library code "OWL_TFindReplaceDialog"
// 6 functions, 0x004ba0c0..0x004bcfe4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ba0c0  OWL::TFindReplaceDialog::~TFindReplaceDialog   (162 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFindReplaceDialog::_dtor
void __cdecl OWL::TFindReplaceDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x50ecd4);
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
// 0x004bcd6c  OWL::TFindReplaceDialog::TData::~TData   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFindReplaceDialog::TData::_dtor
void __cdecl OWL::TFindReplaceDialog::TData::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    operator_delete_array();
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcd9c  OWL::TFindReplaceDialog::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TFindReplaceDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TFindReplaceDialog::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TFindReplaceDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcfc0  OWL::TFindReplaceDialog::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall OWL::TFindReplaceDialog::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcfc8  OWL::TFindReplaceDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TFindReplaceDialog::vf1(int *param_1,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bcfe4  OWL::TFindReplaceDialog::EvNCDestroy   (24 bytes)   [owl:response-table message-handler]
//   WM_NCDESTROY
void __cdecl OWL::TFindReplaceDialog::EvNCDestroy(int *param_1)

{
  *(int *)param_1[0x11] = param_1[10];
  OWL::TWindow::EvNCDestroy(*param_1);
  return;
}

} // namespace tea
