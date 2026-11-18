// TEA.exe — runtime / library code "OWL_TXWindow"
// 6 functions, 0x004a82e0..0x004a85d4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a82e0  OWL::TXWindow::TXWindow   (248 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXWindow's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXWindow::TXWindow(undefined4 *self,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  uint uVar4;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x50b2cc);
  iVar2 = DAT_00512a1c;
  uVar4 = param_3;
  puVar1 = FUN_004a4b6b(param_2);
  FUN_0048f258((int)str,param_3,puVar1,iVar2);
  OWL::TXOwl::TXOwl(self,(int)str,uVar4);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004a83a8;
    }
    operator_delete();
  }
LAB_004a83a8:
  *self = &OWL::TXWindow::vftable;
  self[3] = param_2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a83f4  OWL::TXWindow::TXWindow_4a83f4   (105 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXWindow's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXWindow::TXWindow_4a83f4(undefined4 *self,int *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b314);
  OWL::TXBase::TXBase_48e99c(self,param_2);
  self[2] = param_2[2];
  *self = &OWL::TXOwl::vftable;
  *self = &OWL::TXWindow::vftable;
  self[3] = param_2[3];
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8460  OWL::TXWindow::vf4   (28 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TXWindow::vf4(int self,int *param_2)

{
  *(undefined4 *)(self + 0xc) = 0;
  OWL::TXOwl::vf4(self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a847c  OWL::TXWindow::vf2   (82 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXWindow::vf2(int *self)

{
  undefined4 *txWindow;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b338);
  txWindow = (undefined4 *)operator_new();
  if (txWindow != (undefined4 *)0x0) {
    OWL::TXWindow::TXWindow_4a83f4(txWindow,self);
  }
  *sehChainHead = sehPrevFrame;
  return txWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a84d0  OWL::TXWindow::vf3   (84 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXWindow::vf3(int *self)

{
  undefined4 objectDtor;
  code *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 txWindow [4];
  
  __InitExceptBlockLDTC(0x50b368);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = OWL::TXWindow::TXWindow_4a83f4;
  objectDtor = 0;
  OWL::TXWindow::TXWindow_4a83f4(txWindow,self);
  _ThrowExceptionLDTC((uint *)&DAT_004a8524,txWindow,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a85d4  OWL::TXWindow::~TXWindow   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXWindow::_dtor
void __cdecl OWL::TXWindow::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b3ac);
  if (self != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
