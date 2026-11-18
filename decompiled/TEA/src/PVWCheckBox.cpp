// TEA.exe — application module "PVWCheckBox"
// 5 functions, 0x00418350..0x004186c0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00418350  PVWCheckBox::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWCheckBox::Find [rtti:vtable]; PVWCheckBox::vf8 [rtti:vtable]
undefined4 __cdecl PVWCheckBox::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWCheckBox::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TCheckBox::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418398  PVWCheckBox::PVWCheckBox   (359 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWCheckBox's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x004184e5) */
int * __cdecl PVWCheckBox::PVWCheckBox(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee270);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x10);
    self[0x10] = (int)(self + 0xd);
    self[0x11] = (int)(self + 0xe);
    self[1] = (int)(self + 0xd);
    self[2] = (int)(self + 0xe);
    self[0xc] = 0;
    self[0xf] = 0;
    self[0xd] = (int)&OWL::TEventHandler::vftable;
    self[0xe] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x16;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x16;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TCheckBox::TCheckBox(self,1,uVar1,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x16;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x16;
  self[3] = (int)&PVWCheckBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f09a4;
  *(undefined ***)self[2] = &PTR_LAB_004f09b0;
  *(undefined ***)(*self + 8) = &PVWCheckBox::vftable_TWindow;
  self[7] = (int)param_3;
  self[10] = 0;
  self[10] = (int)&g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041851c  PVWCheckBox::~PVWCheckBox   (382 bytes)   [rtti:dtor destructor]
//   written in code as PVWCheckBox::_dtor
void __cdecl PVWCheckBox::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee2a0);
  if (self == (int *)0x0) goto LAB_0041868a;
  self[3] = (int)&PVWCheckBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f09a4;
  *(undefined ***)self[2] = &PTR_LAB_004f09b0;
  *(undefined ***)(*self + 8) = &PVWCheckBox::vftable_TWindow;
  if (self[10] != 0) {
    if (*(int *)(self[10] + -0xc) != -1) {
      strRep = (int *)(self[10] + -0xc);
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
      if (prevRefs != 0) goto LAB_004185f5;
    }
    operator_delete();
    self[10] = 0;
  }
LAB_004185f5:
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x16;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x16;
  OWL::TCheckBox::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x16;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x16;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x10,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0xe,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0041868a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041869c  PVWCheckBox::BNClicked   (36 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWCheckBox::BNClicked(int *self)

{
  GetDlgCtrlID(*(HWND *)(*self + 0xc));
  (**(code **)(*(int *)(self[7] + 0xc) + 0x4c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004186c0  PVWCheckBox::EvShowWindow   (155 bytes)   [owl:response-table message-handler]
//   WM_SHOWWINDOW
void __cdecl PVWCheckBox::EvShowWindow(int *self,char param_2)

{
  int textLen;
  uint string_ [250];
  
  if ((param_2 == '\0') || (*(int *)(self[10] + -4) == 0)) {
    if (param_2 == '\0') {
      if (*(int *)(self[10] + -4) == 0) {
        textLen = GetWindowTextA(*(HWND *)(*self + 0xc),(LPSTR)string_,1000);
        if (textLen < 0x3e6) {
          std::string::assign_cstr((int)(self + 8),string_);
        }
      }
      if (*(int *)(self[10] + -4) != 0) {
        SetWindowTextA(*(HWND *)(*self + 0xc),"Beta Test Expiry" + 0x10);
      }
    }
  }
  else {
    SetWindowTextA(*(HWND *)(*self + 0xc),(LPCSTR)self[10]);
  }
  FUN_004a5774(*self);
  return;
}

} // namespace tea
