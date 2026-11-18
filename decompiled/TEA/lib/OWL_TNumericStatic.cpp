// TEA.exe — runtime / library code "OWL_TNumericStatic"
// 4 functions, 0x004c470c..0x004c62d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c470c  OWL::TNumericStatic::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TNumericStatic::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TNumericStatic::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&OWL::TNumericStatic::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4754  OWL::TNumericStatic::TNumericStatic   (300 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TNumericStatic's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TNumericStatic::TNumericStatic(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510e54);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TStatic::TStatic_4c7a28(self,1,param_3,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TNumericStatic::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00511470;
  *(undefined ***)self[2] = &PTR_LAB_0051147c;
  *(undefined ***)(*self + 8) = &PTR_LAB_00511488;
  self[6] = param_5;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c48a4  OWL::TNumericStatic::EvMsg_464   (208 bytes)   [owl:response-table message-handler]
//   message 0x0464
undefined4 __cdecl OWL::TNumericStatic::EvMsg_464(int *self,int param_2)

{
  LPSTR lpString;
  HWND hWnd;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510e88);
  self[6] = param_2;
  if (0 < self[6]) {
    strlen(*(uint **)(*self + 0x10));
    lpString = (LPSTR)operator_new_array();
    wsprintfA(lpString,*(LPCSTR *)(*self + 0x10),self[6]);
    SetWindowTextA(*(HWND *)(*self + 0xc),lpString);
    operator_delete_array();
  }
  hWnd = GetDlgItem(*(HWND *)(*(int *)(*self + 0x14) + 0xc),-1);
  if (0 < self[6]) {
    FUN_004a7aa0(*self,(HWND)0x0,0,0,0,0,0x53);
    if (hWnd != (HWND)0x0) {
      ShowWindow(hWnd,0);
    }
    UpdateWindow(*(HWND *)(*self + 0xc));
  }
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c62d8  OWL::TNumericStatic::~TNumericStatic   (196 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TNumericStatic::_dtor
void __cdecl OWL::TNumericStatic::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511600);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xb,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 9,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
