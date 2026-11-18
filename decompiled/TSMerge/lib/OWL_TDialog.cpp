// TSMerge.exe — runtime / library code "OWL_TDialog"
// 16 functions, 0x0043444c..0x00435388. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043444c  OWL::TDialog::Find   (70 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x004345d4); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TDialog::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&DAT_0046c064,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*self,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434494  OWL::TDialog::TDialog   (292 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TDialog::TDialog(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c164);
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
    OWL::TWindow::TWindow_42ab84(self + 10,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  self[3] = (int)&OWL::TDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046c1c8;
  *(undefined ***)self[2] = &PTR_LAB_0046c1d4;
  *(undefined ***)(*self + 8) = &OWL::TDialog::vftable_TWindow;
  FUN_00434704(self,param_3,0,param_5);
  if ((short)((uint)param_4 >> 0x10) != 0) {
    param_4 = (uint *)FUN_0041fd2c(param_4);
  }
  self[4] = (int)param_4;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434760  OWL::TDialog::~TDialog   (369 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDialog::_dtor
void __cdecl OWL::TDialog::_dtor(int *self,uint dtorFlags)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46c280);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TDialog::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0046c1c8;
    *(undefined ***)self[2] = &PTR_LAB_0046c1d4;
    *(undefined ***)(*self + 8) = &OWL::TDialog::vftable_TWindow;
    if (self == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *self;
    }
    if ((*(byte *)(iVar1 + 0x76) & 0xf) == 0) {
      if ((short)((uint)self[4] >> 0x10) != 0) {
        operator_delete_array();
      }
    }
    else {
      if (self == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *self;
      }
      if ((*(byte *)(iVar1 + 0x76) & 10) != 0) {
        if (self == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *self;
        }
        if ((*(byte *)(iVar1 + 0x76) & 2) == 0) {
          if (self == (int *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *self;
          }
          if ((*(byte *)(iVar1 + 0x76) & 1) != 0) {
            hMem = GlobalHandle((LPCVOID)self[4]);
            GlobalUnlock(hMem);
          }
        }
        else {
          GlobalFree((HGLOBAL)self[4]);
        }
      }
    }
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
// 0x004348d4  OWL::TDialog::PreProcessMsg   (146 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x00434633); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf7 [rtti:vtable]
bool __cdecl OWL::TDialog::PreProcessMsg(int *self,LPMSG lParam)

{
  bool bVar1;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd2;
  BOOL ok;
  
  bVar1 = OWL::TWindow::PreProcessMsg(*self,lParam);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    if (*(int *)(*self + 0xc) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = GetParent(*(HWND *)(*self + 0xc));
    }
    if ((((hWnd != (HWND)0x0) && (hWnd_00 = GetParent(hWnd), hWnd_00 != (HWND)0x0)) &&
        (hWnd2 = (HWND)SendMessageA(hWnd_00,0x229,0,0), hWnd == hWnd2)) &&
       (ok = TranslateMDISysAccel(hWnd_00,lParam), ok != 0)) {
      return true;
    }
    ok = IsDialogMessageA(*(HWND *)(*self + 0xc),lParam);
    bVar1 = ok != 0;
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434968  OWL::TDialog::GetClassName   (31 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x004345fa); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf12 [rtti:vtable]
char * __cdecl OWL::TDialog::GetClassName(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    return "BorDlg";
  }
  return (char *)0x8002;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434988  OWL::TDialog::GetWindowClass   (166 bytes)   [rtti:vtable virtual slot 28]
//   override of OWL::TWindow vtable slot 28, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x0043460d); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf13 [rtti:vtable]
void __cdecl OWL::TDialog::GetWindowClass(int *self,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(*(int *)(*self + 0x6c) + 0x4d) != '\0') {
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x4e) + 0x11))();
  }
  uVar1 = FUN_00445154();
  if (uVar1 == 0) {
    iVar2 = FUN_00445154();
    uVar1 = (uint)(iVar2 != 0);
  }
  uVar3 = (**(code **)(self[3] + 0x30))(uVar1);
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(*self + 0x70) + 8);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434b04  OWL::TDialog::vf1   (230 bytes)   [rtti:vtable virtual slot 1]
bool __cdecl OWL::TDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  LONG dwNewLong;
  int local_20 [3];
  undefined4 unused;
  undefined4 unused2;
  int unused3;
  undefined4 unused4;
  
  if (param_2 != 0xc) {
    if (param_2 == 0x30) {
      if ((*(byte *)(*self + 0x74) & 0x20) == 0) {
        local_20[0] = param_2;
        local_20[1] = 0;
        unused = 0;
        cVar2 = (**(code **)(self[3] + 0x38))();
        if (cVar2 != '\0') {
          iVar3 = FUN_004179cc(self[1],(int)local_20);
          return iVar3 == 0;
        }
      }
      return true;
    }
    if (1 < param_2 - 0x85U) {
      if (param_2 != 0x110) {
        return false;
      }
      uVar1 = (**(code **)(self[3] + 8))();
      return (bool)uVar1;
    }
  }
  if (*(char *)(*(int *)(*self + 0x6c) + 0x52) != '\0') {
    unused4 = param_3;
    unused3 = param_2;
    unused2 = *(undefined4 *)(*self + 0xc);
    dwNewLong = (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x53) + 0x35))();
    SetWindowLongA(*(HWND *)(*self + 0xc),0,dwNewLong);
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434cd8  OWL::TDialog::Create   (119 bytes)   [rtti:vtable virtual slot 4]
//   override of OWL::TWindow vtable slot 4, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x004346a5); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf3 [rtti:vtable]
undefined4 __cdecl OWL::TDialog::Create(int *self)

{
  char cVar1;
  undefined4 uVar2;
  
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) & 0xffefffff;
  cVar1 = (**(code **)(*(int *)(*self + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_0042e05c(*self,0x7fed);
  }
  DAT_0046c060 = self;
  FUN_0042c89c(*self);
  FUN_00434ca8(self);
  (**(code **)(self[3] + 0x10))();
  if (*(int *)(*self + 0xc) == 0) {
    FUN_0042e05c(*self,0x7feb);
  }
  uVar2 = FUN_0042d338(*self,'\0');
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00434d50  OWL::TDialog::PerformCreate   (124 bytes)   [rtti:vtable virtual slot 5]
//   override of OWL::TWindow vtable slot 5, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x00434692); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf4 [rtti:vtable]
void __cdecl OWL::TDialog::PerformCreate(int *self,LPCDLGTEMPLATEA templateName)

{
  HWND hWnd;
  
  if ((*(byte *)(*self + 0x76) & 0xf) == 0) {
    if (*(int *)(*self + 0x14) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *(HWND *)(*(int *)(*self + 0x14) + 0xc);
    }
    hWnd = CreateDialogParamA(*(HINSTANCE *)(*(int *)(*self + 0x70) + 8),(LPCSTR)templateName,hWnd
                                ,FUN_00434bec,self[5]);
  }
  else {
    if (*(int *)(*self + 0x14) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *(HWND *)(*(int *)(*self + 0x14) + 0xc);
    }
    hWnd = CreateDialogIndirectParamA
                       (*(HINSTANCE *)(*(int *)(*self + 0x70) + 8),templateName,hWnd,FUN_00434bec,
                        self[5]);
  }
  *(HWND *)(*self + 0xc) = hWnd;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434dcc  OWL::TDialog::Execute   (95 bytes)   [rtti:vtable virtual slot 7]
//   override of OWL::TWindow vtable slot 7, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x0043466c); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf5 [rtti:vtable]
int __cdecl OWL::TDialog::Execute(int *self)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 0x100000;
  cVar1 = (**(code **)(*(int *)(*self + 8) + 0xc))();
  if (cVar1 == '\0') {
    FUN_0042e05c(*self,0x7fed);
  }
  DAT_0046c060 = self;
  FUN_00434ca8(self);
  iVar2 = (**(code **)(self[3] + 0x18))();
  if (iVar2 == -1) {
    FUN_0042e05c(*self,0x7fea);
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434e2c  OWL::TDialog::DoExecute   (146 bytes)   [rtti:vtable virtual slot 8]
//   override of OWL::TWindow vtable slot 8, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x00434659); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf6 [rtti:vtable]
void __cdecl OWL::TDialog::DoExecute(int *self)

{
  HWND hWnd;
  
  if ((*(byte *)(*self + 0x76) & 0x20) != 0) {
    OWL::TWindow::DoExecute(*self);
    return;
  }
  if ((*(byte *)(*self + 0x76) & 0xf) != 0) {
    if (*(int *)(*self + 0x14) == 0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *(HWND *)(*(int *)(*self + 0x14) + 0xc);
    }
    DialogBoxIndirectParamA
              (*(HINSTANCE *)(*(int *)(*self + 0x70) + 8),(LPCDLGTEMPLATEA)self[4],hWnd,
               FUN_00434bec,self[5]);
    return;
  }
  if (*(int *)(*self + 0x14) == 0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(*(int *)(*self + 0x14) + 0xc);
  }
  DialogBoxParamA(*(HINSTANCE *)(*(int *)(*self + 0x70) + 8),(LPCSTR)self[4],hWnd,
                  FUN_00434bec,self[5]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434ff4  OWL::TDialog::vf2   (45 bytes)   [rtti:vtable virtual slot 2]
undefined4 __cdecl OWL::TDialog::vf2(int *self)

{
  undefined4 uVar1;
  
  FUN_0042d338(*self,'\0');
  FUN_00434ec0(self);
  uVar1 = (**(code **)(self[3] + 0x2c))();
  *(uint *)(*self + 0x74) = *(uint *)(*self + 0x74) | 0x20;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00435024  OWL::TDialog::SetupWindow   (65 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x004345e7); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf11 [rtti:vtable]
void __cdecl OWL::TDialog::SetupWindow(int *self)

{
  if (*(char *)(*(int *)(*self + 0x6c) + 0x52) != '\0') {
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x53) + 0x1d))();
  }
  FUN_00435124(self,*(uint **)(*self + 0x10));
  OWL::TWindow::SetupWindow(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435068  OWL::TDialog::CloseWindow   (85 bytes)   [rtti:vtable virtual slot 9]
//   override of OWL::TWindow vtable slot 9, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x00434646); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf8 [rtti:vtable]
void __cdecl OWL::TDialog::CloseWindow(int *self,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  if ((*(byte *)(*self + 0x76) & 0x10) == 0) {
    OWL::TWindow::CloseWindow(*self,param_2);
  }
  else {
    iVar3 = *self;
    cVar2 = (**(code **)(*(int *)(iVar3 + 8) + 0x3c))();
    if (cVar2 != '\0') {
      iVar1 = *self;
      (**(code **)(*(int *)(iVar1 + 8) + 0x5c))(iVar1,*(int *)(iVar1 + 8),iVar3,iVar1,0);
      (**(code **)(self[3] + 0x24))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004350c0  OWL::TDialog::Destroy   (100 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x0043467f); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf9 [rtti:vtable]
void __cdecl OWL::TDialog::Destroy(int *self,INT_PTR result)

{
  if ((((*(byte *)(*self + 0x76) & 0x20) == 0) && ((*(byte *)(*self + 0x76) & 0x10) != 0)) &&
     (*(int *)(*self + 0xc) != 0)) {
    FUN_0042d0cc(*self,(undefined*)FUN_0042c6ec);
    EndDialog(*(HWND *)(*self + 0xc),result);
  }
  else {
    OWL::TWindow::Destroy(*self,result);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00435388  OWL::TDialog::IdleAction   (114 bytes)   [rtti:vtable virtual slot 11]
//   override of OWL::TWindow vtable slot 11, from OWL::TDialog's OWL::TWindow subobject vtable at 0x0046c1e0 (through the this-adjusting thunk at 0x00434620); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TDialog::vf10 [rtti:vtable]
undefined4 __cdecl OWL::TDialog::IdleAction(int *self,int param_2)

{
  HWND hWnd;
  LONG windowLong;
  BOOL ok;
  undefined4 controlEnabler [4];
  
  OWL::TWindow::IdleAction(*self,param_2);
  if (param_2 == 0) {
    hWnd = GetWindow(*(HWND *)(*self + 0xc),5);
    while( true ) {
      ok = IsWindow(hWnd);
      if (ok == 0) break;
      windowLong = GetWindowLongA(hWnd,-0xc);
      OWL::TControlEnabler::TControlEnabler(controlEnabler,windowLong,hWnd);
      FUN_0042b67c((undefined4 *)*self,*(HWND *)(*self + 0xc),controlEnabler);
      hWnd = GetWindow(hWnd,2);
    }
  }
  return 0;
}

} // namespace tea
