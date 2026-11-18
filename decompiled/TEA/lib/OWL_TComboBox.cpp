// TEA.exe — runtime / library code "OWL_TComboBox"
// 10 functions, 0x004acc48..0x004ad684. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004acc48  OWL::TComboBox::TComboBox   (299 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TComboBox's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TComboBox::TComboBox(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c564);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 10);
    self[10] = (int)(self + 7);
    self[0xb] = (int)(self + 8);
    self[1] = (int)(self + 7);
    self[2] = (int)(self + 8);
    self[6] = 0;
    self[9] = 0;
    self[7] = (int)&OWL::TEventHandler::vftable;
    self[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TListBox::TListBox(self,1,param_3,param_4,param_6);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TComboBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050c4b4;
  *(undefined ***)self[2] = &PTR_LAB_0050c4c0;
  *(undefined ***)(*self + 8) = &OWL::TComboBox::vftable_TWindow;
  self[5] = param_5;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004acd74  OWL::TComboBox::~TComboBox   (252 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TComboBox::_dtor
void __cdecl OWL::TComboBox::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c588);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TComboBox::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0050c4b4;
    *(undefined ***)self[2] = &PTR_LAB_0050c4c0;
    *(undefined ***)(*self + 8) = &OWL::TComboBox::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
    OWL::TControl::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 10,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 8,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aceec  OWL::TComboBox::Transfer   (547 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from OWL::TComboBox's OWL::TWindow subobject vtable at 0x0050c4cc (through the this-adjusting thunk at 0x004acc04); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TComboBox::vf29 [rtti:vtable]
undefined4 __cdecl OWL::TComboBox::Transfer(int *self,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *s;
  undefined4 uVar4;
  int iVar5;
  uint i;
  undefined4 *sehChainHead;
  char cVar7;
  int local_3c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c600);
  if (param_3 == 0) {
    FUN_004ac7b4(param_2);
    iVar1 = (**(code **)(self[3] + 0x24))();
    local_3c = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(self[3] + 0x40))();
        if (local_3c < iVar2) {
          local_3c = iVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    s = (uint *)operator_new_array();
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(self[3] + 0x44))();
        cVar7 = '\0';
        uVar4 = (**(code **)(self[3] + 0x48))();
        FUN_004ac9dc(param_2,s,uVar4,cVar7);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    operator_delete_array();
    iVar1 = (**(code **)(self[3] + 0x6c))();
    if (iVar1 < 0) {
      iVar1 = GetWindowTextLengthA(*(HWND *)(*self + 0xc));
      if (iVar1 < 1) {
        FUN_004aca54(param_2,(uint *)&DAT_0050c59c);
      }
      else {
        s = (uint *)operator_new_array();
        GetWindowTextA(*(HWND *)(*self + 0xc),(LPSTR)s,iVar1 + 1);
        FUN_004aca54(param_2,s);
        operator_delete_array();
      }
    }
    else {
      iVar5 = (**(code **)(self[3] + 0x40))();
      if (iVar5 < 1) {
        FUN_004aca54(param_2,(uint *)&DAT_0050c59c);
      }
      else {
        iVar5 = iVar5 + 1;
        s = (uint *)operator_new_array();
        (**(code **)(self[3] + 0x44))(s,self[3],iVar5,self,s,iVar1);
        FUN_004aca54(param_2,s);
        operator_delete_array();
      }
    }
  }
  else if (param_3 == 1) {
    (**(code **)(self[3] + 0x58))();
    FUN_0049bb48(*param_2,(undefined*)FUN_004aced4);
    for (i = 0; i < *(uint *)(param_2[1] + 1); i = i + 1) {
      (**(code **)(self[3] + 0x4c))();
    }
    SetWindowTextA(*(HWND *)(*self + 0xc),(LPCSTR)param_2[4]);
    if (-1 < param_2[6]) {
      (**(code **)(self[3] + 0x2c))();
    }
  }
  *sehChainHead = sehPrevFrame;
  return 0x1c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad110  OWL::TComboBox::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TComboBox's OWL::TWindow subobject vtable at 0x0050c4cc (through the this-adjusting thunk at 0x004acbf1); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TComboBox::vf30 [rtti:vtable]
char * __stdcall OWL::TComboBox::GetClassName(void)

{
  return "COMBOBOX";
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad11c  OWL::TComboBox::SetupWindow   (177 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TComboBox's OWL::TWindow subobject vtable at 0x0050c4cc (through the this-adjusting thunk at 0x004acbde); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TComboBox::vf33 [rtti:vtable]
void __cdecl OWL::TComboBox::SetupWindow(int *self)

{
  HWND hWnd;
  LRESULT lResult;
  int *window;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c690);
  OWL::TWindow::SetupWindow(*self);
  FUN_004ace70(self,self[5]);
  for (hWnd = GetWindow(*(HWND *)(*self + 0xc),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    lResult = FUN_004a614c(hWnd,*(LPARAM *)(*self + 0x6c));
    if (lResult == 0) {
      window = (int *)operator_new();
      if (window != (int *)0x0) {
        OWL::TWindow::TWindow_4a4ed0(window,0,hWnd,(int *)0x0);
      }
      (**(code **)(window[2] + 0x34))();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad1d0  OWL::TComboBox::CleanupWindow   (139 bytes)   [rtti:vtable virtual slot 31]
//   override of OWL::TWindow vtable slot 31, from OWL::TComboBox's OWL::TWindow subobject vtable at 0x0050c4cc (through the this-adjusting thunk at 0x004acbcb); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TComboBox::vf34 [rtti:vtable]
void __cdecl OWL::TComboBox::CleanupWindow(int *self)

{
  HWND hWnd;
  LRESULT lResult;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c6c0);
  for (hWnd = GetWindow(*(HWND *)(*self + 0xc),5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    lResult = FUN_004a614c(hWnd,*(LPARAM *)(*self + 0x6c));
    if (lResult != 0) {
      (*(code *)**(undefined4 **)(lResult + 8))();
    }
  }
  OWL::TWindow::CleanupWindow();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad2e4  OWL::TComboBox::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TComboBox::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TComboBox::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c70c);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TComboBox::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_004071ec,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad34c  OWL::TComboBox::TComboBox_4ad34c   (284 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TComboBox's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TComboBox::TComboBox_4ad34c(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c724);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 10);
    self[10] = (int)(self + 7);
    self[0xb] = (int)(self + 8);
    self[1] = (int)(self + 7);
    self[2] = (int)(self + 8);
    self[6] = 0;
    self[9] = 0;
    self[7] = (int)&OWL::TEventHandler::vftable;
    self[8] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TListBox::TListBox_4bff9c(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  self[3] = (int)&OWL::TComboBox::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050c4b4;
  *(undefined ***)self[2] = &PTR_LAB_0050c4c0;
  *(undefined ***)(*self + 8) = &OWL::TComboBox::vftable_TWindow;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad4f0  OWL::TComboBox::Streamer::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TComboBox::Streamer::vf2(int self,int *param_2)

{
  FUN_004ad520(*(int *)(self + 8),param_2);
  FUN_0049a31c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad684  OWL::TComboBox::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TComboBox::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
