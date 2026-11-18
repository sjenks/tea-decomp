// TSMerge.exe — runtime / library code "OWL_TFrameWindow"
// 28 functions, 0x00425ab0..0x004432e0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00425ab0  OWL::TFrameWindow::vf4   (7 bytes)   [rtti:vtable virtual slot 4; function defined from vtable-slot]
undefined4 __stdcall OWL::TFrameWindow::vf4(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425ab8  OWL::TFrameWindow::vf5   (7 bytes)   [rtti:vtable virtual slot 5]
undefined4 __stdcall OWL::TFrameWindow::vf5(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004418d4  OWL::TFrameWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TFrameWindow::Find [rtti:vtable]; OWL::TFrameWindow::vf18 [rtti:vtable]
undefined4 __cdecl OWL::TFrameWindow::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&OWL::TFrameWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*self,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004419a0  OWL::TFrameWindow::TFrameWindow   (316 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TFrameWindow's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TFrameWindow::TFrameWindow(int *self,int vbasesBuilt,undefined4 param_3,uint *param_4,int param_5,char param_6, int param_7)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46eb5c);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x5a;
    *(int *)((int)self + 0x5a) = (int)self + 0x4e;
    *(int *)((int)self + 0x5e) = (int)self + 0x52;
    self[1] = (int)self + 0x4e;
    self[2] = (int)self + 0x52;
    *(undefined4 *)((int)self + 0x4a) = 0;
    *(undefined4 *)((int)self + 0x56) = 0;
    *(undefined ***)((int)self + 0x4e) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x52) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84((int *)((int)self + 0x5a),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  self[3] = (int)&OWL::TFrameWindow::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046ed1c;
  *(undefined ***)self[2] = &PTR_LAB_0046ed28;
  *(undefined ***)(*self + 8) = &OWL::TFrameWindow::vftable_TWindow;
  *(undefined4 *)((int)self + 0x2e) = 0;
  *(undefined4 *)((int)self + 0x36) = 0;
  *(undefined4 *)((int)self + 0x3a) = 0;
  *(undefined4 *)((int)self + 0x3e) = 0;
  FUN_0042ac60(*self,param_3,param_4,param_7);
  *(undefined4 *)((int)self + 0x2e) = 0;
  FUN_00441adc(self,param_5,param_6);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441be8  OWL::TFrameWindow::~TFrameWindow   (382 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFrameWindow::_dtor
void __cdecl OWL::TFrameWindow::_dtor(int *self,uint dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46eba0);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TFrameWindow::vftable;
    *(undefined ***)self[1] = &PTR_LAB_0046ed1c;
    *(undefined ***)self[2] = &PTR_LAB_0046ed28;
    *(undefined ***)(*self + 8) = &OWL::TFrameWindow::vftable_TWindow;
    if (self == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *self;
    }
    if ((*(byte *)(iVar1 + 0x74) & 0x10) != 0) {
      if (self == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *self;
      }
      if (*(int **)(*(int *)(iVar1 + 0x6c) + 0x2b) == self) {
        if (self == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *self;
        }
        *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x2b) = 0;
      }
    }
    if (*(undefined4 **)((int)self + 0x21) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)self + 0x21))();
    }
    if ((*(char *)((int)self + 0x29) != '\0') &&
       (*(undefined4 **)((int)self + 0x25) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)((int)self + 0x25))();
    }
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x5a),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x52),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441db4  OWL::TFrameWindow::EvInitMenuPopup   (132 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_INITMENUPOPUP
void __cdecl OWL::TFrameWindow::EvInitMenuPopup(int *self,HMENU hPopupMenu,undefined4 index,char sysMenu)

{
  int itemCount;
  HMENU hMenu;
  uint uVar3;
  undefined4 local_c;
  
  if ((sysMenu == '\0') && (hPopupMenu != (HMENU)0x0)) {
    itemCount = GetMenuItemCount(hPopupMenu);
    local_c = 0;
    hMenu = GetMenu(*(HWND *)(*self + 0xc));
    if (hPopupMenu == hMenu) {
      local_c = FUN_00441750(hPopupMenu,itemCount);
    }
    OWL::TWindow::EvInitMenuPopup(*self,hPopupMenu,index,'\0');
    hMenu = GetMenu(*(HWND *)(*self + 0xc));
    if (hPopupMenu == hMenu) {
      uVar3 = FUN_00441750(hPopupMenu,itemCount);
      if (uVar3 != local_c) {
        DrawMenuBar(*(HWND *)(*self + 0xc));
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441eb4  OWL::TFrameWindow::vf9   (129 bytes)   [rtti:vtable virtual slot 9]
HWND __cdecl OWL::TFrameWindow::vf9(int *self)

{
  HWND hWnd;
  int iVar1;
  BOOL ok;
  
  hWnd = GetFocus();
  iVar1 = (**(code **)(self[3] + 0x18))();
  if (((hWnd == (HWND)0x0) || (iVar1 == 0)) ||
     (ok = IsChild(*(HWND *)(iVar1 + 0xc),hWnd), ok == 0)) {
    if (iVar1 == 0) {
      if ((hWnd == (HWND)0x0) || (ok = IsChild(*(HWND *)(*self + 0xc),hWnd), ok == 0)) {
        if (*(int *)((int)self + 0x11) == 0) {
          hWnd = *(HWND *)(*self + 0xc);
        }
        else {
          hWnd = *(HWND *)((int)self + 0x11);
        }
      }
    }
    else {
      hWnd = *(HWND *)(iVar1 + 0xc);
    }
  }
  return hWnd;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441f38  OWL::TFrameWindow::EvCommand   (111 bytes)   [rtti:vtable virtual slot 18]
//   override of OWL::TWindow vtable slot 18, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x00443203); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TFrameWindow::EvCommand(int *self,int param_2,HWND hWnd2,undefined4 param_4)

{
  HWND hWnd;
  LRESULT lResult;
  undefined4 uVar2;
  
  if (hWnd2 == (HWND)0x0) {
    for (hWnd = (HWND)(**(code **)(self[3] + 0x24))();
        (hWnd != (HWND)0x0 && (hWnd != *(HWND *)(*self + 0xc))); hWnd = GetParent(hWnd)) {
      lResult = FUN_0042bc6c(hWnd,*(LPARAM *)(*self + 0x6c));
      if (lResult != 0) {
        uVar2 = (**(code **)(*(int *)(lResult + 8) + 0x48))();
        return uVar2;
      }
    }
  }
  uVar2 = OWL::TWindow::EvCommand((undefined4 *)*self,param_2,hWnd2,param_4);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441fa8  OWL::TFrameWindow::EvCommandEnable   (32 bytes)   [rtti:vtable virtual slot 20]
//   override of OWL::TWindow vtable slot 20, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x004431f0); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf15 [rtti:vtable]
void __cdecl OWL::TFrameWindow::EvCommandEnable(undefined4 *self,undefined4 *param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)(**(code **)(self[3] + 0x24))();
  FUN_0042b67c((undefined4 *)*self,hWnd,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00441fc8  OWL::TFrameWindow::PreProcessMsg   (134 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x0044324f); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf10 [rtti:vtable]
undefined4 __cdecl OWL::TFrameWindow::PreProcessMsg(int *self,LPMSG lParam)

{
  bool bVar1;
  undefined3 regHigh;
  HWND hWnd;
  int cmp;
  BOOL ok;
  undefined4 uVar4;
  CHAR className [16];
  
  bVar1 = OWL::TWindow::PreProcessMsg(*self,lParam);
  if (bVar1) {
    uVar4 = CONCAT31(regHigh,1);
  }
  else {
    if ((((char)self[4] != '\0') && (0xff < lParam->message)) && (lParam->message < 0x109)) {
      hWnd = GetParent(lParam->hwnd);
      GetClassNameA(hWnd,className,0x10);
      cmp = strcmp(className,"COMBOBOX");
      if (cmp == 0) {
        hWnd = GetParent(hWnd);
      }
      if ((hWnd != (HWND)0x0) && (ok = IsDialogMessageA(hWnd,lParam), ok != 0)) {
        return CONCAT31((int3)((uint)ok >> 8),1);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442050  OWL::TFrameWindow::vf2   (72 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TFrameWindow::vf2(int *self,HMENU hMenu)

{
  BOOL ok;
  
  if ((*(byte *)(*self + 0x74) & 0x10) != 0) {
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x28))();
  }
  ok = SetMenu(*(HWND *)(*self + 0xc),hMenu);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442098  OWL::TFrameWindow::vf1   (193 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TFrameWindow::vf1(int *self,uint *param_2)

{
  HMENU hMenu;
  BOOL ok;
  undefined4 uVar2;
  
  if (*(uint **)(*self + 0x30) != param_2) {
    if ((short)((uint)*(undefined4 *)(*self + 0x30) >> 0x10) != 0) {
      operator_delete();
    }
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_0041fd2c(param_2);
    }
    *(uint **)(*self + 0x30) = param_2;
  }
  if (*(int *)(*self + 0xc) == 0) {
    uVar2 = CONCAT31((int3)((uint)*self >> 8),1);
  }
  else {
    hMenu = GetMenu(*(HWND *)(*self + 0xc));
    FUN_00444d34(*(int *)(*self + 0x70),*(LPCSTR *)(*self + 0x30));
    ok = (**(code **)(self[3] + 8))();
    if ((char)ok == '\0') {
      uVar2 = 0;
    }
    else {
      if (hMenu != (HMENU)0x0) {
        ok = DestroyMenu(hMenu);
      }
      uVar2 = CONCAT31((int3)((uint)ok >> 8),1);
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004422bc  OWL::TFrameWindow::vf6   (11 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TFrameWindow::vf6(int self)

{
  return *(undefined4 *)(self + 0x15);
}

// ----------------------------------------------------------------------------------------------------
// 0x004422c8  OWL::TFrameWindow::vf7   (209 bytes)   [rtti:vtable virtual slot 7]
int __cdecl OWL::TFrameWindow::vf7(int *self,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int iVar4;
  
  iVar1 = *(int *)((int)self + 0x15);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  (**(code **)(self[3] + 0x20))();
  if (iVar4 == *(int *)((int)self + 0x11)) {
    *(undefined4 *)((int)self + 0x11) = 0;
  }
  *(undefined4 *)((int)self + 0x15) = param_2;
  if (*(int *)((int)self + 0x15) == 0) {
    *(undefined4 *)(*self + 0x5c) = (*(undefined4 *)&DAT_00476bac);
  }
  else {
    (**(code **)(*(int *)(*(int *)((int)self + 0x15) + 8) + 0x34))();
    iVar4 = *self;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(*(int *)((int)self + 0x15) + 0xc) == 0) {
        iVar4 = *(int *)((int)self + 0x15);
        (**(code **)(*(int *)(iVar4 + 8) + 0x10))();
      }
      iVar2 = *(int *)((int)self + 0x15);
      (**(code **)(*(int *)(iVar2 + 8) + 100))(iVar2,*(int *)(iVar2 + 8),iVar4,iVar2,4);
    }
    *(undefined4 *)(*self + 0x5c) = (*(undefined4 *)&DAT_00476bb0);
    FUN_00442958(self,'\x01');
  }
  if ((*(int *)((int)self + 0x15) != 0) && (*(int *)(*(int *)((int)self + 0x15) + 0xc) != 0))
  {
    hWnd = GetFocus();
    if (hWnd == *(HWND *)(*self + 0xc)) {
      SetFocus(*(HWND *)(*(int *)((int)self + 0x15) + 0xc));
      *(undefined4 *)((int)self + 0x11) = *(undefined4 *)(*(int *)((int)self + 0x15) + 0xc);
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044239c  OWL::TFrameWindow::RemoveChild   (53 bytes)   [rtti:vtable virtual slot 32]
//   override of OWL::TWindow vtable slot 32, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x004431b7); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf8 [rtti:vtable]
void __cdecl OWL::TFrameWindow::RemoveChild(int *self,int param_2)

{
  OWL::TWindow::RemoveChild(*self,param_2);
  if (param_2 != 0) {
    if (param_2 == *(int *)((int)self + 0x15)) {
      *(undefined4 *)((int)self + 0x15) = 0;
    }
    if (*(int *)(param_2 + 0xc) == *(int *)((int)self + 0x11)) {
      *(undefined4 *)((int)self + 0x11) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004423d4  OWL::TFrameWindow::SetDocTitle   (458 bytes)   [rtti:vtable virtual slot 14]
//   override of OWL::TWindow vtable slot 14, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x00443216); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf13 [rtti:vtable]
/* WARNING: Removing unreachable block (ram,0x0044241d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl OWL::TFrameWindow::SetDocTitle(int *self,uint *param_2,uint param_3)

{
  uint uVar1;
  BOOL ok;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  uint local_48 [3];
  uint pos;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  LPCSTR string_;
  
  ok = __InitExceptBlockLDTC(0x46ec04);
  if (-1 < (int)param_3) {
    string_ = &g_emptyStringData;
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x20;
    if ((*(int *)(*self + 0x10) != 0) && (**(char **)(*self + 0x10) != '\0')) {
      std::string::assign_cstr((int)str,*(uint **)(*self + 0x10));
      uVar1 = *(uint *)(string_ + -4);
      len = strlen((uint *)&DAT_0046ea55 /* " - " */);
      std::string::replace((int)str,uVar1,0,0x46ea55,(uint)len,0,(uint)len);
    }
    if (param_2 != (uint *)0x0) {
      pos = *(uint *)(string_ + -4);
      len = strlen(param_2);
      std::string::replace((int)str,pos,0,(uint)param_2,(uint)len,0,(uint)len);
    }
    if (0 < (int)param_3) {
      uVar1 = *(uint *)(string_ + -4);
      len = strlen((uint *)&DAT_0046ea59);
      std::string::replace((int)str,uVar1,0,0x46ea59,(uint)len,0,(uint)len);
      FUN_0045b7a8(param_3,(char *)local_48,10);
      uVar1 = *(uint *)(string_ + -4);
      len = strlen(local_48);
      std::string::replace((int)str,uVar1,0,(uint)local_48,(uint)len,0,(uint)len);
    }
    ok = SetWindowTextA(*(HWND *)(*self + 0xc),string_);
    ehDtorCount = ehDtorCount + -1;
    if (string_ != (LPCSTR)0x0) {
      if (*(int *)(string_ + -0xc) != -1) {
        strRep = (int *)(string_ + -0xc);
        if (strRep == &g_nullStringRep) {
          ok = 1;
        }
        else if (strRep == &g_nullStringRep) {
          ok = 1;
        }
        else {
          *strRep = *strRep + -1;
          ok = *strRep + 1;
        }
        if (ok != 0) goto LAB_0044258b;
      }
      operator_delete();
      ok = 0;
    }
  }
LAB_0044258b:
  *sehChainHead = sehPrevFrame;
  return CONCAT31((int3)((uint)ok >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004425a0  OWL::TFrameWindow::EvPaint   (238 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl OWL::TFrameWindow::EvPaint(int *self)

{
  BOOL ok;
  HICON hIcon;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HDC paintDC [26];
  
  __InitExceptBlockLDTC(0x46ec5c);
  ok = IsIconic(*(HWND *)(*self + 0xc));
  if ((ok == 0) || ((*(int *)((int)self + 0x2e) == 0 && (*(int *)((int)self + 0x15) == 0)))
     ) {
    OWL::TWindow::EvPaint(*self);
  }
  else {
    FUN_004239f8((int *)paintDC,*(HWND *)(*self + 0xc));
    if (*(int *)((int)self + 0x2e) == 0) {
      (**(code **)(*(int *)(*(int *)((int)self + 0x15) + 8) + 0x54))();
    }
    else {
      FUN_0042d1a4(*self,0x27,(WPARAM)paintDC[0],0);
      if (*(int *)((int)self + 0x42) == 0) {
        hIcon = FUN_00441794();
      }
      else {
        hIcon = *(HICON *)((int)self + 0x42);
      }
      DrawIcon(paintDC[0],0,0,hIcon);
    }
    OWL::TPaintDC::_dtor((int *)paintDC,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442690  OWL::TFrameWindow::EvEraseBkgnd   (105 bytes)   [owl:response-table message-handler]
//   WM_ERASEBKGND
bool __cdecl OWL::TFrameWindow::EvEraseBkgnd(int *self,undefined4 hdc)

{
  BOOL ok;
  int iVar2;
  bool bVar3;
  
  ok = IsIconic(*(HWND *)(*self + 0xc));
  if (ok == 0) {
    bVar3 = OWL::TWindow::EvEraseBkgnd(*self,hdc);
  }
  else if ((*(int *)((int)self + 0x2e) == 0) && (*(int *)((int)self + 0x15) != 0)) {
    iVar2 = FUN_0042bbb4(*(int *)((int)self + 0x15),0x14,hdc,0);
    bVar3 = iVar2 != 0;
  }
  else {
    FUN_0042bbb4(*self,0x27,hdc,0);
    bVar3 = true;
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004426fc  OWL::TFrameWindow::EvQuerydragicon   (70 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_QUERYDRAGICON
HICON __cdecl OWL::TFrameWindow::EvQuerydragicon(int *self)

{
  HICON hIcon;
  
  if (*(int *)((int)self + 0x2e) == 0) {
    hIcon = (HICON)FUN_0042b294(*self);
  }
  else {
    hIcon = (HICON)FUN_004450dc();
    if (hIcon == (HICON)0x0) {
      hIcon = FUN_00441794();
      return hIcon;
    }
  }
  return hIcon;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442778  OWL::TFrameWindow::HoldFocusHWnd   (92 bytes)   [rtti:vtable virtual slot 12]
//   override of OWL::TWindow vtable slot 12, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x00443229); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf12 [rtti:vtable]
bool __cdecl OWL::TFrameWindow::HoldFocusHWnd(int *self,HWND hWnd,HWND hWnd2)

{
  BOOL ok;
  
  ok = IsChild(*(HWND *)(*self + 0xc),hWnd);
  if (ok != 0) {
    if ((hWnd2 == (HWND)0x0) || (ok = IsChild(*(HWND *)(*self + 0xc),hWnd2), ok == 0))
    {
      *(HWND *)((int)self + 0x11) = hWnd;
    }
    return true;
  }
  return hWnd == *(HWND *)(*self + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x004427d4  OWL::TFrameWindow::EvSetFocus   (103 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl OWL::TFrameWindow::EvSetFocus(int *self)

{
  HWND hWnd;
  BOOL ok;
  
  FUN_0042b294(*self);
  if (*(int *)((int)self + 0x11) == 0) {
    hWnd = (HWND)(**(code **)(self[3] + 0x24))();
    if (hWnd != (HWND)0x0) {
      ok = IsChild(*(HWND *)(*self + 0xc),hWnd);
      if (ok != 0) {
        *(HWND *)((int)self + 0x11) = hWnd;
      }
    }
  }
  if (*(int *)((int)self + 0x11) != 0) {
    ok = IsWindow(*(HWND *)((int)self + 0x11));
    if (ok == 0) {
      *(undefined4 *)((int)self + 0x11) = 0;
    }
    else {
      SetFocus(*(HWND *)((int)self + 0x11));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044283c  OWL::TFrameWindow::EvParentNotify   (163 bytes)   [owl:response-table message-handler]
//   WM_PARENTNOTIFY
void __cdecl OWL::TFrameWindow::EvParentNotify(int *self,int param_2,HWND hWnd)

{
  LRESULT lResult;
  BOOL ok;
  
  if (param_2 == 2) {
    if ((*(int *)((int)self + 0x15) != 0) &&
       (*(HWND *)(*(int *)((int)self + 0x15) + 0xc) == hWnd)) {
      PostMessageA(*(HWND *)(*self + 0xc),0x10,0,0);
    }
    lResult = FUN_0042bc6c(hWnd,*(LPARAM *)(*self + 0x6c));
    if (lResult != 0) {
      *(uint *)(lResult + 0x74) = *(uint *)(lResult + 0x74) & 0xffffffdf;
    }
  }
  else if ((((param_2 == 5) && ((*(byte *)(*self + 0x74) & 8) != 0)) &&
           (*(int *)((int)self + 0x15) != 0)) &&
          ((*(HWND *)(*(int *)((int)self + 0x15) + 0xc) == hWnd &&
           (ok = IsIconic(*(HWND *)(*self + 0xc)), ok == 0)))) {
    FUN_00442958(self,'\x01');
  }
  FUN_0042b294(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004428e0  OWL::TFrameWindow::EvQuerynewpalette   (68 bytes)   [owl:response-table message-handler]
//   WM_QUERYNEWPALETTE
bool __cdecl OWL::TFrameWindow::EvQuerynewpalette(int *self)

{
  int iVar1;
  char cVar2;
  int *self2;
  
  self2 = self;
  iVar1 = (**(code **)(self[3] + 0x18))();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    iVar1 = (**(code **)(self[3] + 0x18))(iVar1,self[3],self2,self);
    iVar1 = FUN_0042d204(iVar1,cVar2);
    return iVar1 != 0;
  }
  iVar1 = FUN_0042b294(*self);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442924  OWL::TFrameWindow::EvPalettechanged   (52 bytes)   [owl:response-table message-handler]
//   WM_PALETTECHANGED
void __cdecl OWL::TFrameWindow::EvPalettechanged(int *self)

{
  int iVar1;
  char cVar2;
  int *self2;
  
  self2 = self;
  iVar1 = (**(code **)(self[3] + 0x18))();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    iVar1 = (**(code **)(self[3] + 0x18))(iVar1,self[3],self2,self);
    FUN_0042d204(iVar1,cVar2);
    return;
  }
  FUN_0042b294(*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00442eb4  OWL::TFrameWindow::SetupWindow   (423 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x004431dd); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf16 [rtti:vtable]
void __cdecl OWL::TFrameWindow::SetupWindow(int *self)

{
  bool bVar1;
  char cVar2;
  HMENU hMenu;
  int iVar4;
  undefined4 uVar5;
  undefined4 *sehChainHead;
  WINDOWPLACEMENT placement;
  undefined4 unused;
  undefined4 unused2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int menu [3];
  
  __InitExceptBlockLDTC(0x46ec9c);
  OWL::TWindow::SetupWindow(*self);
  FUN_00442958(self,'\x01');
  unused = 0xffffffff;
  unused2 = 0xffffffff;
  if ((*(int *)((int)self + 0x3a) == -1) && (*(int *)((int)self + 0x3e) == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    placement.length = 0x2c;
    GetWindowPlacement(*(HWND *)(*self + 0xc),&placement);
    placement.flags = 1;
    placement.showCmd = 8;
    placement.ptMinPosition.x = *(LONG *)((int)self + 0x3a);
    placement.ptMinPosition.y = *(LONG *)((int)self + 0x3e);
    placement.length = 0x2c;
    SetWindowPlacement(*(HWND *)(*self + 0xc),&placement);
  }
  if (((*(byte *)(*self + 0x74) & 0x10) != 0) && (*(int *)((int)self + 0x21) != 0)) {
    hMenu = GetMenu(*(HWND *)(*self + 0xc));
    ehContext = 8;
    OWL::TMenu::TMenu_420a20(menu,*(int **)((int)self + 0x21),0);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x14;
    (**(code **)(menu[0] + 4))();
    cVar2 = (**(code **)(self[3] + 8))();
    if (cVar2 == '\0') {
      hMenu = (HMENU)(**(code **)(menu[0] + 4))();
      DestroyMenu(hMenu);
    }
    else if (hMenu != (HMENU)0x0) {
      DestroyMenu(hMenu);
    }
    ehDtorCount = ehDtorCount + -1;
    OWL::TMenu::_dtor(menu,2);
    ehContext = 0;
  }
  if (*(int *)((int)self + 0x11) == 0) {
    iVar4 = FUN_00442748(self);
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(*self + 0xc);
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    *(undefined4 *)((int)self + 0x11) = uVar5;
  }
  if (*(int *)((int)self + 0x42) != 0) {
    FUN_0042d1a4(*self,0x80,1,*(LPARAM *)((int)self + 0x42));
  }
  if (*(int *)((int)self + 0x46) != 0) {
    FUN_0042d1a4(*self,0x80,0,*(LPARAM *)((int)self + 0x46));
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044305c  OWL::TFrameWindow::CleanupWindow   (56 bytes)   [rtti:vtable virtual slot 31]
//   override of OWL::TWindow vtable slot 31, from OWL::TFrameWindow's OWL::TWindow subobject vtable at 0x0046ed34 (through the this-adjusting thunk at 0x004431ca); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TFrameWindow::vf17 [rtti:vtable]
void __cdecl OWL::TFrameWindow::CleanupWindow(int *self)

{
  FUN_0044215c(self,0,0);
  FUN_004421e8(self,0,(HANDLE)0x0);
  OWL::TWindow::CleanupWindow();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004430c0  OWL::TFrameWindow::EvSize   (6 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __stdcall OWL::TFrameWindow::EvSize(int self,int sizeType,int *size)

{
  undefined4 uVar1;
  int i;
  tagRECT *pRect;
  LONG *pLVar4;
  int aiStack_38 [4];
  tagRECT rect;
  int iStack_18;
  int iStack_14;
  int unused;
  int unused2;
  char cStack_5;
  
  OWL::TWindow::EvSize(*(int *)self,sizeType);
  if (*(int *)(self + 0x15) != 0) {
    cStack_5 = '\0';
    if (sizeType != 1) {
      uVar1 = FUN_00442958((int *)self,'\x01');
      cStack_5 = (char)uVar1;
      rect.left = 0;
      rect.top = 0;
      rect.right = 0;
      rect.bottom = 0;
      FUN_0042d568(*(int *)(self + 0x15),&rect);
      pRect = &rect;
      pLVar4 = aiStack_38;
      for (i = 4; i != 0; i = i + -1) {
        *pLVar4 = pRect->left;
        pRect = (tagRECT *)&pRect->top;
        pLVar4 = pLVar4 + 1;
      }
      iStack_14 = aiStack_38[3] - aiStack_38[1];
      iStack_18 = aiStack_38[2] - aiStack_38[0];
      *size = iStack_18;
      size[1] = iStack_14;
      unused = iStack_18;
      unused2 = iStack_14;
    }
    if (cStack_5 == '\0') {
      FUN_0042d204(*(int *)(self + 0x15),'\x01');
    }
  }
  FUN_00443094((int *)self,sizeType,(LPARAM)size);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004432e0  OWL::TFrameWindow::vf3   (349 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __cdecl OWL::TFrameWindow::vf3(int *self,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  HMENU hMenu;
  BOOL ok;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int menu [3];
  int menu2 [3];
  
  __InitExceptBlockLDTC(0x46edf8);
  if ((*(int *)((int)self + 0x21) == 0) || (*(int *)(*self + 0xc) == 0)) {
    uVar2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    *(undefined4 *)((int)self + 0x1d) = *(undefined4 *)((int)param_2 + 9);
    OWL::TMenu::TMenu_420adc(menu2,*(HWND *)(*self + 0xc),0);
    OWL::TMenu::TMenu(menu,0);
    FUN_0044349c(*(int **)((int)self + 0x21),param_2,(int)menu);
    if ((*(byte *)(*self + 0x74) & 0x10) != 0) {
      (**(code **)(menu[0] + 4))();
      (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x28))();
    }
    (**(code **)(menu[0] + 4))();
    cVar1 = (**(code **)(self[3] + 8))();
    if (cVar1 == '\0') {
      hMenu = (HMENU)(**(code **)(menu[0] + 4))();
      DestroyMenu(hMenu);
      uVar2 = 0;
      OWL::TMenu::_dtor(menu,2);
      OWL::TMenu::_dtor(menu2,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      hMenu = (HMENU)(**(code **)(menu2[0] + 4))();
      ok = DestroyMenu(hMenu);
      uVar2 = CONCAT31((int3)((uint)ok >> 8),1);
      OWL::TMenu::_dtor(menu,2);
      OWL::TMenu::_dtor(menu2,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  return uVar2;
}

} // namespace tea
