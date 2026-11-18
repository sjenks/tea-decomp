// TSBuild.exe — application module "DMApplication"
// 9 functions, 0x00403778..0x00404158. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00403778  DMApplication::vf17   (218 bytes)   [rtti:vtable virtual slot 17]
void __cdecl DMApplication::vf17(int self)

{
  int *frameWindow;
  int *dmDialog;
  int iVar3;
  undefined4 *sehChainHead;
  char cVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474cd4);
  frameWindow = (int *)operator_new();
  if (frameWindow != (int *)0x0) {
    iVar5 = 0;
    cVar4 = '\x01';
    dmDialog = (int *)operator_new();
    if (dmDialog == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      DMDialog::DMDialog(dmDialog,0,0,(uint *)0x66);
      iVar3 = *dmDialog;
    }
    OWL::TFrameWindow::TFrameWindow(frameWindow,0,0,(uint *)"TEA&Sympathy Dictionary Builder",iVar3,cVar4,iVar5);
  }
  *(uint *)(*frameWindow + 0x18) = *(uint *)(*frameWindow + 0x18) & 0xfffaffff;
  FUN_0044d2f0(frameWindow,self + 4,0x6c);
  FUN_0043a224(self,frameWindow);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403870  OwlMain   (163 bytes)   [analysis]
//   creates and runs the "TEA&Sympathy Dictionary Builder" application
//   file placement: inferred (address adjacency)
undefined4 __stdcall OwlMain(void)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined ***application;
  undefined **unused;
  undefined **unused2;
  undefined **dmApplication;
  undefined4 unused3;
  undefined **eventHandler;
  
  __InitExceptBlockLDTC(0x474d10);
  application = &eventHandler;
  unused3 = 0;
  eventHandler = &OWL::TEventHandler::vftable;
  FUN_004398dc((int *)&application,1,(uint *)"TEA&Sympathy Dictionary Builder",&DAT_00484890,
               (undefined *)0x0);
  dmApplication = &DMApplication::vftable;
  unused = &PTR_LAB_00474dc4;
  unused2 = &PTR_LAB_00474dd4;
  *application = &PTR_LAB_00474df4;
  uVar1 = (*(code *)dmApplication[2])();
  OWL::TApplication::_dtor((undefined4*)&application,0);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403978  DMApplication::~DMApplication   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as DMApplication::_dtor
void __cdecl DMApplication::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474d4c);
  if (self != (undefined4 *)0x0) {
    OWL::TApplication::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403ae8  OWL::TFileSaveDialog::~TFileSaveDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileSaveDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileSaveDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474d54);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x5c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x22,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x20,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403e58  OWL::TFileOpenDialog::~TFileOpenDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileOpenDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileOpenDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x474d5c);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x5c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x5c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x22,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x20,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404090  OWL::TApplication::vf9   (5 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __stdcall OWL::TApplication::vf9(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404098  OWL::TApplication::vf13   (11 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TApplication::vf13(int self)

{
  return *(undefined4 *)(self + 0x31);
}

// ----------------------------------------------------------------------------------------------------
// 0x00404100  std::logic_error::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined4 __cdecl std::logic_error::vf1(int self)

{
  return *(undefined4 *)(self + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00404158  std::exception::vf1   (10 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::exception::vf1(void)

{
  return PTR_s_no_named_exception_thrown_004888e4;
}

} // namespace tea
