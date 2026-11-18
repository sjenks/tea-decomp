// TEA.exe — application module "PVWRadioButton"
// 9 functions, 0x00417dec..0x004182b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00417dec  PVWRadioButton::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWRadioButton::Find [rtti:vtable]; PVWRadioButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWRadioButton::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWRadioButton::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TRadioButton::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e34  PVWRadioButton::EvMouseMove   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
void __stdcall PVWRadioButton::EvMouseMove(int self)

{
                    /* WARNING: Could not recover jumptable at 0x00417e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0xc) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417e40  PVWRadioButton::PVWRadioButton   (410 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWRadioButton's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00417f95) */
int * __cdecl PVWRadioButton::PVWRadioButton(int *self,int vbasesBuilt,undefined4 *param_3,uint param_4,int param_5)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee1c8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x12);
    self[0x12] = (int)(self + 0xf);
    self[0x13] = (int)(self + 0x10);
    self[1] = (int)(self + 0xf);
    self[2] = (int)(self + 0x10);
    self[0xe] = 0;
    self[0x11] = 0;
    self[0xf] = (int)&OWL::TEventHandler::vftable;
    self[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x12,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x1e;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x1e;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_3;
  }
  OWL::TRadioButton::TRadioButton(self,1,uVar2,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x1e;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x1e;
  self[3] = (int)&PVWRadioButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f0a90;
  *(undefined ***)self[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*self + 8) = &PVWRadioButton::vftable_TWindow;
  self[7] = 0;
  self[8] = (int)param_3;
  self[0xc] = 0;
  self[0xc] = (int)&g_emptyStringData;
  if (param_5 != 0) {
    pvVar1 = LoadImageA(*(HINSTANCE *)(*(int *)(*self + 0x6c) + 0xc),(LPCSTR)(param_4 & 0xffff),0
                        ,0,0,0x1000);
    self[7] = (int)pvVar1;
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00417ffc  PVWRadioButton::~PVWRadioButton   (401 bytes)   [rtti:dtor destructor]
//   written in code as PVWRadioButton::_dtor
void __cdecl PVWRadioButton::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee1f8);
  if (self == (int *)0x0) goto LAB_0041817d;
  self[3] = (int)&PVWRadioButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f0a90;
  *(undefined ***)self[2] = &PTR_LAB_004f0a9c;
  *(undefined ***)(*self + 8) = &PVWRadioButton::vftable_TWindow;
  if ((HGDIOBJ)self[7] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)self[7]);
  }
  if (self[0xc] != 0) {
    if (*(int *)(self[0xc] + -0xc) != -1) {
      strRep = (int *)(self[0xc] + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004180e5;
    }
    operator_delete();
    self[0xc] = 0;
  }
LAB_004180e5:
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x1e;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x1e;
  OWL::TCheckBox::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x1e;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x1e;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x12,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x10,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0041817d:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418190  PVWRadioButton::PreProcessMsg   (54 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PVWRadioButton's OWL::TWindow subobject vtable at 0x004f0aa8 (through the this-adjusting thunk at 0x00422960); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWRadioButton::vf12 [rtti:vtable]
void __cdecl PVWRadioButton::PreProcessMsg(int *self,LPMSG lParam)

{
  if (lParam->message == 0x200) {
    (**(code **)(*(int *)(self[8] + 0xc) + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004181c8  PVWRadioButton::vf13   (114 bytes)   [rtti:vtable virtual slot 13]
void __cdecl PVWRadioButton::vf13(int *self)

{
  (**(code **)(*(int *)(self[8] + 0xc) + 0xac))();
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041823c  PVWRadioButton::SetupWindow   (47 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from PVWRadioButton's OWL::TWindow subobject vtable at 0x004f0aa8 (through the this-adjusting thunk at 0x00422927); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWRadioButton::vf10 [rtti:vtable]
void __cdecl PVWRadioButton::SetupWindow(int *self)

{
  OWL::TButton::SetupWindow(self);
  if (self[7] != 0) {
    FUN_004a76a8(*self,0xf7,0,self[7]);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041826c  PVWRadioButton::BNClicked   (72 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWRadioButton::BNClicked(int *self)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*self,0xf0,0,0);
  if (iVar1 != 0) {
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    (**(code **)(*(int *)(self[8] + 0xc) + 0x4c))();
    return;
  }
  FUN_004a5774(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004182b4  PVWRadioButton::EvShowWindow   (155 bytes)   [owl:response-table message-handler]
//   WM_SHOWWINDOW
void __cdecl PVWRadioButton::EvShowWindow(int *self,char param_2)

{
  int textLen;
  uint string_ [250];
  
  if ((param_2 == '\0') || (*(int *)(self[0xc] + -4) == 0)) {
    if (param_2 == '\0') {
      if (*(int *)(self[0xc] + -4) == 0) {
        textLen = GetWindowTextA(*(HWND *)(*self + 0xc),(LPSTR)string_,1000);
        if (textLen < 0x3e6) {
          std::string::assign_cstr((int)(self + 10),string_);
        }
      }
      if (*(int *)(self[0xc] + -4) != 0) {
        SetWindowTextA(*(HWND *)(*self + 0xc),"Beta Test Expiry" + 0x10);
      }
    }
  }
  else {
    SetWindowTextA(*(HWND *)(*self + 0xc),(LPCSTR)self[0xc]);
  }
  FUN_004a5774(*self);
  return;
}

} // namespace tea
