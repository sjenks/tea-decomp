// TSMerge.exe — runtime / library code "OWL_TFindReplaceDialog"
// 7 functions, 0x0043e154..0x00441078. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043e154  OWL::TFindReplaceDialog::~TFindReplaceDialog   (162 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFindReplaceDialog::_dtor
void __cdecl OWL::TFindReplaceDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46df40);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x16,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x14,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440e00  OWL::TFindReplaceDialog::TData::~TData   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFindReplaceDialog::TData::_dtor
void __cdecl OWL::TFindReplaceDialog::TData::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    operator_delete_array();
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440e30  OWL::TFindReplaceDialog::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TFindReplaceDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TFindReplaceDialog::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&OWL::TFindReplaceDialog::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00440f14  OWL::TFindReplaceDialog::TFindReplaceDialog   (318 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TFindReplaceDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TFindReplaceDialog::TFindReplaceDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46e710);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x16);
    self[0x16] = (int)(self + 0x13);
    self[0x17] = (int)(self + 0x14);
    self[1] = (int)(self + 0x13);
    self[2] = (int)(self + 0x14);
    self[0x12] = 0;
    self[0x15] = 0;
    self[0x13] = (int)&OWL::TEventHandler::vftable;
    self[0x14] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84(self + 0x16,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2c;
  OWL::TCommonDialog::TCommonDialog(self,1,param_3,param_6,param_7);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2c;
  self[3] = (int)&OWL::TFindReplaceDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046e99c;
  *(undefined ***)self[2] = &PTR_LAB_0046e9a8;
  *(undefined ***)(*self + 8) = &PTR_LAB_0046e9b4;
  self[0x11] = param_4;
  FUN_00440e78(self,param_5);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441054  OWL::TFindReplaceDialog::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall OWL::TFindReplaceDialog::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044105c  OWL::TFindReplaceDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TFindReplaceDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441078  OWL::TFindReplaceDialog::EvNCDestroy   (24 bytes)   [owl:response-table message-handler]
//   WM_NCDESTROY
void __cdecl OWL::TFindReplaceDialog::EvNCDestroy(int *self)

{
  *(int *)self[0x11] = self[10];
  OWL::TWindow::EvNCDestroy(*self);
  return;
}

} // namespace tea
