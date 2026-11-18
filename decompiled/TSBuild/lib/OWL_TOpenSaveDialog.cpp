// TSBuild.exe — runtime / library code "OWL_TOpenSaveDialog"
// 5 functions, 0x00450c68..0x00451034. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450c68  OWL::TOpenSaveDialog::TData::~TData   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::TData::_dtor
void __cdecl OWL::TOpenSaveDialog::TData::_dtor(int self,byte dtorFlags)

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
// 0x00450d4c  OWL::TOpenSaveDialog::vf14   (69 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TOpenSaveDialog::vf14(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[1],(int *)&DAT_004834d4,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450e94  OWL::TOpenSaveDialog::TOpenSaveDialog   (347 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TOpenSaveDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TOpenSaveDialog::TOpenSaveDialog(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483500);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x22);
    self[0x22] = (int)(self + 0x1f);
    self[0x23] = (int)(self + 0x20);
    self[1] = (int)(self + 0x1f);
    self[2] = (int)(self + 0x20);
    self[0x1e] = 0;
    self[0x21] = 0;
    self[0x1f] = (int)&OWL::TEventHandler::vftable;
    self[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0x22,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x5c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x5c;
  OWL::TCommonDialog::TCommonDialog(self,1,param_3,0,param_7);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x5c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x5c;
  self[3] = (int)&OWL::TOpenSaveDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00483798;
  *(undefined ***)self[2] = &PTR_LAB_004837a4;
  *(undefined ***)(*self + 8) = &PTR_LAB_004837b0;
  self[0x1d] = param_4;
  FUN_00450d94(self,param_5);
  self[0x13] = param_6;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450ff0  OWL::TOpenSaveDialog::vf1   (67 bytes)   [rtti:vtable virtual slot 1]
bool __cdecl OWL::TOpenSaveDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = OWL::TDialog::vf1(self,param_2,param_3);
  if (bVar1) {
    bVar1 = true;
  }
  else if (param_2 == DAT_004834ec) {
    iVar2 = (**(code **)(self[3] + 0x3c))();
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451034  OWL::TOpenSaveDialog::vf15   (7 bytes)   [rtti:vtable virtual slot 15]
undefined4 __stdcall OWL::TOpenSaveDialog::vf15(void)

{
  return 0;
}

} // namespace tea
