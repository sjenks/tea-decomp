// TEA.exe — application module "PVWEdit"
// 14 functions, 0x0041aef0..0x0041b600. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041aef0  PVWEdit::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PVWEdit::Find [rtti:vtable]; PVWEdit::vf8 [rtti:vtable]
undefined4 __cdecl PVWEdit::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWEdit::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TEdit::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041af38  PVWEdit::PVWEdit   (321 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWEdit's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWEdit::PVWEdit(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eea68);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xd);
    self[0xd] = (int)(self + 10);
    self[0xe] = (int)(self + 0xb);
    self[1] = (int)(self + 10);
    self[2] = (int)(self + 0xb);
    self[9] = 0;
    self[0xc] = 0;
    self[10] = (int)&OWL::TEventHandler::vftable;
    self[0xb] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xd,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TEdit::TEdit_4b6184(self,1,uVar1,param_4,param_5,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
  self[3] = (int)&PVWEdit::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f05c0;
  *(undefined ***)self[2] = &PTR_LAB_004f05cc;
  *(undefined ***)(*self + 8) = &PVWEdit::vftable_TWindow;
  self[7] = (int)param_3;
  self[8] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b094  PVWEdit::~PVWEdit   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWEdit::_dtor
void __cdecl PVWEdit::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eea8c);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWEdit::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f05c0;
    *(undefined ***)self[2] = &PTR_LAB_004f05cc;
    *(undefined ***)(*self + 8) = &PVWEdit::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8;
    OWL::TEdit::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xd,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xb,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b190  PVWEdit::NotifyAtChild_512   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 512)
void __cdecl PVWEdit::NotifyAtChild_512(int *self)

{
  GetDlgCtrlID(*(HWND *)(*self + 0xc));
  (**(code **)(*(int *)(self[7] + 0xc) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b1b4  PVWEdit::NotifyAtChild_768   (54 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 768)
void __cdecl PVWEdit::NotifyAtChild_768(int *self)

{
  if (self[8] == 0) {
    self[8] = 1;
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    (**(code **)(*(int *)(self[7] + 0xc) + 0x58))();
    self[8] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b1ec  PVWEdit::SetText   (43 bytes)   [analysis]
//   SetWindowText
void __cdecl PVWEdit::SetText(int *self,LPCSTR text)

{
  if (self[8] == 0) {
    self[8] = 1;
    SetWindowTextA(*(HWND *)(*self + 0xc),text);
    self[8] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b218  PVWEdit::SetInt   (49 bytes)   [analysis]
//   shows a number
void __cdecl PVWEdit::SetInt(int *self)

{
  CHAR text [32];
  
  sprintf(text,&DAT_004ed2ea);
  PVWEdit::SetText(self,text);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b24c  PVWEdit::SetLong   (49 bytes)   [analysis]
//   shows a number ("%ld")
void __cdecl PVWEdit::SetLong(int *self)

{
  CHAR text [32];
  
  sprintf(text,&DAT_004ed32e /* "%ld" */);
  PVWEdit::SetText(self,text);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b280  PVWEdit::GetInt   (45 bytes)   [analysis]
//   the text as a number (atoi)
int __cdecl PVWEdit::GetInt(int *self)

{
  int iVar1;
  CHAR string_ [32];
  
  iVar1 = GetWindowTextA(*(HWND *)(*self + 0xc),string_,0x1f);
  string_[iVar1] = '\0';
  iVar1 = atoi(string_);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b2b0  PVWEdit::GetText   (450 bytes)   [analysis]
//   the text as a std::string
int __cdecl PVWEdit::GetText(int self,int *out)

{
  uint len;
  int iVar2;
  uint *lpString;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4eeae0);
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
      if (iVar2 != 0) goto LAB_0041b457;
    }
    operator_delete();
  }
LAB_0041b457:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b474  PVWEdit::SetIntValue   (24 bytes)   [analysis]
//   shows a number
void __cdecl PVWEdit::SetIntValue(int *self,int value)

{
  PVWEdit::SetText(self,*(LPCSTR *)(value + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b48c  PVWEdit::SetPathText   (326 bytes)   [analysis]
//   shows a path shortened with an ellipsis to fit the control (DrawText measuring)
void __cdecl PVWEdit::SetPathText(int *self,int path)

{
  int iVar1;
  undefined4 *sehChainHead;
  tagRECT rect;
  CHAR text [519];
  undefined1 unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint gdiObject [2];
  HDC hdc;
  int local_27;
  
  __InitExceptBlockLDTC(0x4eeb60);
  iVar1 = FUN_004a76a8(*self,0x31,0,0);
  if (iVar1 != 0) {
    ehContext = 8;
    FUN_004a8674((int *)&hdc,*(undefined4 *)(*self + 0xc));
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x20;
    FUN_0048f708(gdiObject,iVar1,0);
    ehDtorCount = ehDtorCount + 2;
    (**(code **)(local_27 + 0x14))();
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject,0);
    strncpy((undefined4 *)text,*(uint **)(path + 8),(char *)0x207);
    unused = 0;
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    ehContext = 0x14;
    FUN_004a76a8(*self,0xb2,0,(LPARAM)&rect);
    DrawTextA(hdc,text,-1,&rect,0x14420);
    PVWEdit::SetText(self,text);
    ehDtorCount = ehDtorCount + -2;
    OWL::TWindowDC::_dtor((int *)&hdc,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b5d4  PVWEdit::vf9   (44 bytes)   [rtti:vtable virtual slot 9]
void __cdecl PVWEdit::vf9(int *self)

{
  if (self[8] == 0) {
    self[8] = 1;
    SetWindowTextA(*(HWND *)(*self + 0xc),"Beta Test Expiry" + 0x10);
    self[8] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b600  PVWEdit::PreProcessMsg   (54 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PVWEdit's OWL::TWindow subobject vtable at 0x004f05d8 (through the this-adjusting thunk at 0x004226a7); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWEdit::vf22 [rtti:vtable]
void __cdecl PVWEdit::PreProcessMsg(int *self,LPMSG lParam)

{
  if (lParam->message == 0x200) {
    (**(code **)(*(int *)(self[7] + 0xc) + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

} // namespace tea
