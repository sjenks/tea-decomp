// TEA.exe — application module "PVWStatic"
// 6 functions, 0x0041b638..0x0041bad8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041b638  PVWStatic::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWStatic::Find [rtti:vtable]; PVWStatic::vf8 [rtti:vtable]
undefined4 __cdecl PVWStatic::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWStatic::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TStatic::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b680  PVWStatic::PVWStatic   (313 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWStatic's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWStatic::PVWStatic(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eebcc);
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
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TStatic::TStatic_4c7a28(self,1,uVar1,param_4,param_5,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&PVWStatic::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f04b0;
  *(undefined ***)self[2] = &PTR_LAB_004f04bc;
  *(undefined ***)(*self + 8) = &PVWStatic::vftable_TWindow;
  self[6] = (int)param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b7d4  PVWStatic::~PVWStatic   (291 bytes)   [rtti:dtor destructor]
//   written in code as PVWStatic::_dtor
void __cdecl PVWStatic::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eebf0);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWStatic::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f04b0;
    *(undefined ***)self[2] = &PTR_LAB_004f04bc;
    *(undefined ***)(*self + 8) = &PVWStatic::vftable_TWindow;
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

// ----------------------------------------------------------------------------------------------------
// 0x0041b8f8  PVWStatic::IsTransparent   (28 bytes)   [analysis]
//   whether the static draws on the parent's background
bool __cdecl PVWStatic::IsTransparent(int *self)

{
  uint uVar1;
  
  uVar1 = FUN_004a78f0(*self);
  return (uVar1 & 0x100) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b914  PVWStatic::GetText   (450 bytes)   [analysis]
//   the text as a std::string
int __cdecl PVWStatic::GetText(int self,int *out)

{
  uint len;
  int iVar2;
  uint *lpString;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4eec44);
  iVar2 = GetWindowTextLengthA(*(HWND *)(*out + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(*out + 0xc),(LPSTR)lpString,iVar2 + 1);
  std::string::string_from_cstr((int)str,lpString);
  operator_delete_array();
  *(undefined4 *)(self + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    rep = std::string::__getRep(self,len,len);
    *(int **)(self + 8) = rep + 3;
    memcpy(*(undefined4 **)(self + 8),local_c,len);
  }
  else {
    *(undefined4 **)(self + 8) = local_c;
    rep = (int *)(*(int *)(self + 8) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      rep = local_c + -3;
      if (rep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar2 = *rep + 1;
      }
      if (iVar2 != 0) goto LAB_0041babb;
    }
    operator_delete();
  }
LAB_0041babb:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bad8  PVWStatic::BNClicked   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWStatic::BNClicked(int *self)

{
  GetDlgCtrlID(*(HWND *)(*self + 0xc));
  (**(code **)(*(int *)(self[6] + 0xc) + 0x50))();
  return;
}

} // namespace tea
