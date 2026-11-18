// TEA.exe — application module "PVWEnumeration"
// 6 functions, 0x0041be30..0x0041c1e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041be30  PVWEnumeration::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWEnumeration::Find [rtti:vtable]; PVWEnumeration::vf8 [rtti:vtable]
undefined4 __cdecl PVWEnumeration::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWEnumeration::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TControl::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041be78  PVWEnumeration::PVWEnumeration   (328 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWEnumeration's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWEnumeration::PVWEnumeration(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 )

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eed4c);
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
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TComboBox::TComboBox(self,1,uVar1,param_4,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc;
  self[3] = (int)&PVWEnumeration::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f02e8;
  *(undefined ***)self[2] = &PTR_LAB_004f02f4;
  *(undefined ***)(*self + 8) = &PVWEnumeration::vftable_TWindow;
  self[6] = param_5;
  self[7] = param_6;
  self[8] = (int)param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041bfe0  PVWEnumeration::~PVWEnumeration   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWEnumeration::_dtor
void __cdecl PVWEnumeration::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eed70);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWEnumeration::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f02e8;
    *(undefined ***)self[2] = &PTR_LAB_004f02f4;
    *(undefined ***)(*self + 8) = &PVWEnumeration::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc;
    OWL::TComboBox::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc;
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
// 0x0041c0dc  PVWEnumeration::SetupWindow   (237 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from PVWEnumeration's OWL::TWindow subobject vtable at 0x004f0300 (through the this-adjusting thunk at 0x004224f6); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWEnumeration::vf33 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PVWEnumeration::SetupWindow(int self)

{
  int prevRefs;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int str;
  
  __InitExceptBlockLDTC(0x4eeda4);
  iVar2 = 0;
  do {
    if (*(int *)(self + 0x18) <= iVar2) {
      *sehChainHead = sehPrevFrame;
      return;
    }
    (**(code **)(*(int *)(*(int *)(self + 0x20) + 0xc) + 0xa8))();
    (**(code **)(*(int *)(self + 0xc) + 100))();
    if (str != 0) {
      if (*(int *)(str + -0xc) != -1) {
        strRep = (int *)(str + -0xc);
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
        if (prevRefs != 0) goto LAB_0041c1a9;
      }
      operator_delete();
      str = 0;
    }
LAB_0041c1a9:
    iVar2 = iVar2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c1cc  PVWEnumeration::Reset   (22 bytes)   [analysis]
//   clears the selection
void __cdecl PVWEnumeration::Reset(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c1e4  PVWEnumeration::NotifyAtChild_9   (44 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 9)
void __cdecl PVWEnumeration::NotifyAtChild_9(int *self)

{
  int iVar1;
  int ctrlId;
  undefined4 uVar3;
  int *self2;
  
  ctrlId = GetDlgCtrlID(*(HWND *)(*self + 0xc));
  self2 = self;
  uVar3 = (**(code **)(self[3] + 0x6c))();
  iVar1 = self[8];
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1,*(int *)(iVar1 + 0xc),self2,iVar1,uVar3,ctrlId);
  return;
}

} // namespace tea
