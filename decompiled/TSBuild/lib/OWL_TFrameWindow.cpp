// TSBuild.exe — runtime / library code "OWL_TFrameWindow"
// 27 functions, 0x00430c44..0x0044e474. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00430c44  OWL::TFrameWindow::vf4   (7 bytes)   [rtti:vtable virtual slot 4; function defined from vtable-slot]
undefined4 __stdcall OWL::TFrameWindow::vf4(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430c4c  OWL::TFrameWindow::vf5   (7 bytes)   [rtti:vtable virtual slot 5]
undefined4 __stdcall OWL::TFrameWindow::vf5(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ca68  OWL::TFrameWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TFrameWindow::vf18 [rtti:vtable]
undefined4 __cdecl OWL::TFrameWindow::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&OWL::TFrameWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') &&
     (uVar1 = OWL::TWindow::Find((undefined4 *)*param_1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cd7c  OWL::TFrameWindow::~TFrameWindow   (382 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFrameWindow::_dtor
void __cdecl OWL::TFrameWindow::_dtor(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x48297c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&OWL::TFrameWindow::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_00482af8;
    *(undefined ***)param_1[2] = &PTR_LAB_00482b04;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00482b10;
    if (param_1 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1;
    }
    if ((*(byte *)(iVar1 + 0x74) & 0x10) != 0) {
      if (param_1 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_1;
      }
      if (*(int **)(*(int *)(iVar1 + 0x6c) + 0x2b) == param_1) {
        if (param_1 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *param_1;
        }
        *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 0x2b) = 0;
      }
    }
    if (*(undefined4 **)((int)param_1 + 0x21) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x21))();
    }
    if ((*(char *)((int)param_1 + 0x29) != '\0') &&
       (*(undefined4 **)((int)param_1 + 0x25) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x25))();
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x5a),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x52),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cf48  OWL::TFrameWindow::EvInitMenuPopup   (132 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_INITMENUPOPUP
void __cdecl OWL::TFrameWindow::EvInitMenuPopup(int *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  HMENU pHVar2;
  uint uVar3;
  undefined4 local_c;
  
  if ((param_4 == '\0') && (param_2 != (HMENU)0x0)) {
    iVar1 = GetMenuItemCount(param_2);
    local_c = 0;
    pHVar2 = GetMenu(*(HWND *)(*param_1 + 0xc));
    if (param_2 == pHVar2) {
      local_c = FUN_0044c8e4(param_2,iVar1);
    }
    OWL::TWindow::EvInitMenuPopup(*param_1,param_2,param_3,'\0');
    pHVar2 = GetMenu(*(HWND *)(*param_1 + 0xc));
    if (param_2 == pHVar2) {
      uVar3 = FUN_0044c8e4(param_2,iVar1);
      if (uVar3 != local_c) {
        DrawMenuBar(*(HWND *)(*param_1 + 0xc));
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d048  OWL::TFrameWindow::vf9   (129 bytes)   [rtti:vtable virtual slot 9]
HWND __cdecl OWL::TFrameWindow::vf9(int *param_1)

{
  HWND hWnd;
  int iVar1;
  BOOL BVar2;
  
  hWnd = GetFocus();
  iVar1 = (**(code **)(param_1[3] + 0x18))();
  if (((hWnd == (HWND)0x0) || (iVar1 == 0)) ||
     (BVar2 = IsChild(*(HWND *)(iVar1 + 0xc),hWnd), BVar2 == 0)) {
    if (iVar1 == 0) {
      if ((hWnd == (HWND)0x0) || (BVar2 = IsChild(*(HWND *)(*param_1 + 0xc),hWnd), BVar2 == 0)) {
        if (*(int *)((int)param_1 + 0x11) == 0) {
          hWnd = *(HWND *)(*param_1 + 0xc);
        }
        else {
          hWnd = *(HWND *)((int)param_1 + 0x11);
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
// 0x0044d0cc  OWL::TFrameWindow::vf14   (111 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TFrameWindow::vf14(int *param_1,int param_2,HWND param_3,undefined4 param_4)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  
  if (param_3 == (HWND)0x0) {
    for (hWnd = (HWND)(**(code **)(param_1[3] + 0x24))();
        (hWnd != (HWND)0x0 && (hWnd != *(HWND *)(*param_1 + 0xc))); hWnd = GetParent(hWnd)) {
      LVar1 = FUN_00436e00(hWnd,*(LPARAM *)(*param_1 + 0x6c));
      if (LVar1 != 0) {
        uVar2 = (**(code **)(*(int *)(LVar1 + 8) + 0x48))();
        return uVar2;
      }
    }
  }
  uVar2 = OWL::TWindow::vf18((undefined4 *)*param_1,param_2,param_3,param_4);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d13c  OWL::TFrameWindow::vf15   (32 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TFrameWindow::vf15(undefined4 *param_1,undefined4 *param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)(**(code **)(param_1[3] + 0x24))();
  FUN_00436810((undefined4 *)*param_1,pHVar1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d15c  OWL::TFrameWindow::vf10   (134 bytes)   [rtti:vtable virtual slot 10]
undefined4 __cdecl OWL::TFrameWindow::vf10(int *param_1,LPMSG param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  HWND hWnd;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  CHAR local_14 [16];
  
  bVar1 = OWL::TWindow::vf10(*param_1,param_2);
  if (bVar1) {
    uVar4 = CONCAT31(extraout_var,1);
  }
  else {
    if ((((char)param_1[4] != '\0') && (0xff < param_2->message)) && (param_2->message < 0x109)) {
      hWnd = GetParent(param_2->hwnd);
      GetClassNameA(hWnd,local_14,0x10);
      iVar2 = FUN_004679a4(local_14,"COMBOBOX");
      if (iVar2 == 0) {
        hWnd = GetParent(hWnd);
      }
      if ((hWnd != (HWND)0x0) && (BVar3 = IsDialogMessageA(hWnd,param_2), BVar3 != 0)) {
        return CONCAT31((int3)((uint)BVar3 >> 8),1);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d1e4  OWL::TFrameWindow::vf2   (72 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TFrameWindow::vf2(int *param_1,HMENU param_2)

{
  BOOL BVar1;
  
  if ((*(byte *)(*param_1 + 0x74) & 0x10) != 0) {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x28))();
  }
  BVar1 = SetMenu(*(HWND *)(*param_1 + 0xc),param_2);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d22c  OWL::TFrameWindow::vf1   (193 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TFrameWindow::vf1(int *param_1,uint *param_2)

{
  HMENU hMenu;
  BOOL BVar1;
  undefined4 uVar2;
  
  if (*(uint **)(*param_1 + 0x30) != param_2) {
    if ((short)((uint)*(undefined4 *)(*param_1 + 0x30) >> 0x10) != 0) {
      operator_delete();
    }
    if ((short)((uint)param_2 >> 0x10) != 0) {
      param_2 = (uint *)FUN_0042aea0(param_2);
    }
    *(uint **)(*param_1 + 0x30) = param_2;
  }
  if (*(int *)(*param_1 + 0xc) == 0) {
    uVar2 = CONCAT31((int3)((uint)*param_1 >> 8),1);
  }
  else {
    hMenu = GetMenu(*(HWND *)(*param_1 + 0xc));
    FUN_0044fec8(*(int *)(*param_1 + 0x70),*(LPCSTR *)(*param_1 + 0x30));
    BVar1 = (**(code **)(param_1[3] + 8))();
    if ((char)BVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      if (hMenu != (HMENU)0x0) {
        BVar1 = DestroyMenu(hMenu);
      }
      uVar2 = CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d450  OWL::TFrameWindow::vf6   (11 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TFrameWindow::vf6(int param_1)

{
  return *(undefined4 *)(param_1 + 0x15);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d45c  OWL::TFrameWindow::vf7   (209 bytes)   [rtti:vtable virtual slot 7]
int __cdecl OWL::TFrameWindow::vf7(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x15);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  (**(code **)(param_1[3] + 0x20))();
  if (iVar4 == *(int *)((int)param_1 + 0x11)) {
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  if (*(int *)((int)param_1 + 0x15) == 0) {
    *(undefined4 *)(*param_1 + 0x5c) = (*(undefined4 *)&DAT_0048c654);
  }
  else {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    iVar4 = *param_1;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(*(int *)((int)param_1 + 0x15) + 0xc) == 0) {
        iVar4 = *(int *)((int)param_1 + 0x15);
        (**(code **)(*(int *)(iVar4 + 8) + 0x10))();
      }
      iVar2 = *(int *)((int)param_1 + 0x15);
      (**(code **)(*(int *)(iVar2 + 8) + 100))(iVar2,*(int *)(iVar2 + 8),iVar4,iVar2,4);
    }
    *(undefined4 *)(*param_1 + 0x5c) = (*(undefined4 *)&DAT_0048c658);
    FUN_0044daec(param_1,'\x01');
  }
  if ((*(int *)((int)param_1 + 0x15) != 0) && (*(int *)(*(int *)((int)param_1 + 0x15) + 0xc) != 0))
  {
    pHVar3 = GetFocus();
    if (pHVar3 == *(HWND *)(*param_1 + 0xc)) {
      SetFocus(*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc));
      *(undefined4 *)((int)param_1 + 0x11) = *(undefined4 *)(*(int *)((int)param_1 + 0x15) + 0xc);
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d530  OWL::TFrameWindow::vf8   (53 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TFrameWindow::vf8(int *param_1,int param_2)

{
  OWL::TWindow::vf32(*param_1,param_2);
  if (param_2 != 0) {
    if (param_2 == *(int *)((int)param_1 + 0x15)) {
      *(undefined4 *)((int)param_1 + 0x15) = 0;
    }
    if (*(int *)(param_2 + 0xc) == *(int *)((int)param_1 + 0x11)) {
      *(undefined4 *)((int)param_1 + 0x11) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d568  OWL::TFrameWindow::vf13   (458 bytes)   [rtti:vtable virtual slot 13]
/* WARNING: Removing unreachable block (ram,0x0044d5b1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl OWL::TFrameWindow::vf13(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_48 [3];
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  BVar2 = __InitExceptBlockLDTC(0x4829e0);
  if (-1 < (int)param_3) {
    local_c = &DAT_00485bd8;
    local_1c = local_1c + 1;
    local_28 = 0x20;
    if ((*(int *)(*param_1 + 0x10) != 0) && (**(char **)(*param_1 + 0x10) != '\0')) {
      FUN_00459b6c((int)local_14,*(uint **)(*param_1 + 0x10));
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = strlen((uint *)&DAT_00482831 /* " - " */);
      FUN_0045a224((int)local_14,uVar1,0,0x482831,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (param_2 != (uint *)0x0) {
      local_3c = *(uint *)(local_c + -4);
      pcVar3 = strlen(param_2);
      FUN_0045a224((int)local_14,local_3c,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (0 < (int)param_3) {
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = strlen((uint *)&DAT_00482835);
      FUN_0045a224((int)local_14,uVar1,0,0x482835,(uint)pcVar3,0,(uint)pcVar3);
      FUN_0046e108(param_3,(char *)local_48,10);
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = strlen(local_48);
      FUN_0045a224((int)local_14,uVar1,0,(uint)local_48,(uint)pcVar3,0,(uint)pcVar3);
    }
    BVar2 = SetWindowTextA(*(HWND *)(*param_1 + 0xc),local_c);
    local_1c = local_1c + -1;
    if (local_c != (LPCSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00485bcc) {
          BVar2 = 1;
        }
        else if (piVar4 == &DAT_00485bcc) {
          BVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          BVar2 = *piVar4 + 1;
        }
        if (BVar2 != 0) goto LAB_0044d71f;
      }
      operator_delete();
      BVar2 = 0;
    }
  }
LAB_0044d71f:
  *in_FS_OFFSET = local_38;
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d734  OWL::TFrameWindow::EvPaint   (238 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl OWL::TFrameWindow::EvPaint(int *param_1)

{
  BOOL BVar1;
  HICON hIcon;
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  HDC local_6c [26];
  
  __InitExceptBlockLDTC(0x482a38);
  BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
  if ((BVar1 == 0) || ((*(int *)((int)param_1 + 0x2e) == 0 && (*(int *)((int)param_1 + 0x15) == 0)))
     ) {
    OWL::TWindow::EvPaint(*param_1);
  }
  else {
    FUN_0042eb8c((int *)local_6c,*(HWND *)(*param_1 + 0xc));
    if (*(int *)((int)param_1 + 0x2e) == 0) {
      (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x54))();
    }
    else {
      FUN_00438338(*param_1,0x27,(WPARAM)local_6c[0],0);
      if (*(int *)((int)param_1 + 0x42) == 0) {
        hIcon = FUN_0044c928();
      }
      else {
        hIcon = *(HICON *)((int)param_1 + 0x42);
      }
      DrawIcon(local_6c[0],0,0,hIcon);
    }
    OWL::TPaintDC::_dtor((int *)local_6c,2);
  }
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d824  OWL::TFrameWindow::EvEraseBkgnd   (105 bytes)   [owl:response-table message-handler]
//   WM_ERASEBKGND
bool __cdecl OWL::TFrameWindow::EvEraseBkgnd(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  int iVar2;
  bool bVar3;
  
  BVar1 = IsIconic(*(HWND *)(*param_1 + 0xc));
  if (BVar1 == 0) {
    bVar3 = OWL::TWindow::EvEraseBkgnd(*param_1,param_2);
  }
  else if ((*(int *)((int)param_1 + 0x2e) == 0) && (*(int *)((int)param_1 + 0x15) != 0)) {
    iVar2 = FUN_00436d48(*(int *)((int)param_1 + 0x15),0x14,param_2,0);
    bVar3 = iVar2 != 0;
  }
  else {
    FUN_00436d48(*param_1,0x27,param_2,0);
    bVar3 = true;
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d890  OWL::TFrameWindow::EvQuerydragicon   (70 bytes, 2 ranges)   [owl:response-table message-handler]
//   WM_QUERYDRAGICON
HICON __cdecl OWL::TFrameWindow::EvQuerydragicon(int *param_1)

{
  HICON pHVar1;
  
  if (*(int *)((int)param_1 + 0x2e) == 0) {
    pHVar1 = (HICON)FUN_00436428(*param_1);
  }
  else {
    pHVar1 = (HICON)FUN_00450270();
    if (pHVar1 == (HICON)0x0) {
      pHVar1 = FUN_0044c928();
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d90c  OWL::TFrameWindow::vf12   (92 bytes)   [rtti:vtable virtual slot 12]
bool __cdecl OWL::TFrameWindow::vf12(int *param_1,HWND param_2,HWND param_3)

{
  BOOL BVar1;
  
  BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_2);
  if (BVar1 != 0) {
    if ((param_3 == (HWND)0x0) || (BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),param_3), BVar1 == 0))
    {
      *(HWND *)((int)param_1 + 0x11) = param_2;
    }
    return true;
  }
  return param_2 == *(HWND *)(*param_1 + 0xc);
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d968  OWL::TFrameWindow::EvSetFocus   (103 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
void __cdecl OWL::TFrameWindow::EvSetFocus(int *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  
  FUN_00436428(*param_1);
  if (*(int *)((int)param_1 + 0x11) == 0) {
    hWnd = (HWND)(**(code **)(param_1[3] + 0x24))();
    if (hWnd != (HWND)0x0) {
      BVar1 = IsChild(*(HWND *)(*param_1 + 0xc),hWnd);
      if (BVar1 != 0) {
        *(HWND *)((int)param_1 + 0x11) = hWnd;
      }
    }
  }
  if (*(int *)((int)param_1 + 0x11) != 0) {
    BVar1 = IsWindow(*(HWND *)((int)param_1 + 0x11));
    if (BVar1 == 0) {
      *(undefined4 *)((int)param_1 + 0x11) = 0;
    }
    else {
      SetFocus(*(HWND *)((int)param_1 + 0x11));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d9d0  OWL::TFrameWindow::EvParentNotify   (163 bytes)   [owl:response-table message-handler]
//   WM_PARENTNOTIFY
void __cdecl OWL::TFrameWindow::EvParentNotify(int *param_1,int param_2,HWND param_3)

{
  LRESULT LVar1;
  BOOL BVar2;
  
  if (param_2 == 2) {
    if ((*(int *)((int)param_1 + 0x15) != 0) &&
       (*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc) == param_3)) {
      PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
    }
    LVar1 = FUN_00436e00(param_3,*(LPARAM *)(*param_1 + 0x6c));
    if (LVar1 != 0) {
      *(uint *)(LVar1 + 0x74) = *(uint *)(LVar1 + 0x74) & 0xffffffdf;
    }
  }
  else if ((((param_2 == 5) && ((*(byte *)(*param_1 + 0x74) & 8) != 0)) &&
           (*(int *)((int)param_1 + 0x15) != 0)) &&
          ((*(HWND *)(*(int *)((int)param_1 + 0x15) + 0xc) == param_3 &&
           (BVar2 = IsIconic(*(HWND *)(*param_1 + 0xc)), BVar2 == 0)))) {
    FUN_0044daec(param_1,'\x01');
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044da74  OWL::TFrameWindow::EvQuerynewpalette   (68 bytes)   [owl:response-table message-handler]
//   WM_QUERYNEWPALETTE
bool __cdecl OWL::TFrameWindow::EvQuerynewpalette(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = param_1;
  iVar1 = (**(code **)(param_1[3] + 0x18))();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    iVar1 = (**(code **)(param_1[3] + 0x18))(iVar1,param_1[3],piVar3,param_1);
    iVar1 = FUN_00438398(iVar1,cVar2);
    return iVar1 != 0;
  }
  iVar1 = FUN_00436428(*param_1);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044dab8  OWL::TFrameWindow::EvPalettechanged   (52 bytes)   [owl:response-table message-handler]
//   WM_PALETTECHANGED
void __cdecl OWL::TFrameWindow::EvPalettechanged(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = param_1;
  iVar1 = (**(code **)(param_1[3] + 0x18))();
  if (iVar1 != 0) {
    cVar2 = '\x01';
    iVar1 = (**(code **)(param_1[3] + 0x18))(iVar1,param_1[3],piVar3,param_1);
    FUN_00438398(iVar1,cVar2);
    return;
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e048  OWL::TFrameWindow::vf16   (423 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TFrameWindow::vf16(int *param_1)

{
  bool bVar1;
  char cVar2;
  HMENU pHVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  WINDOWPLACEMENT local_68;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_24;
  int local_18;
  int local_10 [3];
  
  __InitExceptBlockLDTC(0x482a78);
  OWL::TWindow::vf30(*param_1);
  FUN_0044daec(param_1,'\x01');
  local_3c = 0xffffffff;
  local_38 = 0xffffffff;
  if ((*(int *)((int)param_1 + 0x3a) == -1) && (*(int *)((int)param_1 + 0x3e) == -1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_68.length = 0x2c;
    GetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_68);
    local_68.flags = 1;
    local_68.showCmd = 8;
    local_68.ptMinPosition.x = *(LONG *)((int)param_1 + 0x3a);
    local_68.ptMinPosition.y = *(LONG *)((int)param_1 + 0x3e);
    local_68.length = 0x2c;
    SetWindowPlacement(*(HWND *)(*param_1 + 0xc),&local_68);
  }
  if (((*(byte *)(*param_1 + 0x74) & 0x10) != 0) && (*(int *)((int)param_1 + 0x21) != 0)) {
    pHVar3 = GetMenu(*(HWND *)(*param_1 + 0xc));
    local_24 = 8;
    FUN_0042bb94(local_10,*(int **)((int)param_1 + 0x21),0);
    local_18 = local_18 + 1;
    local_24 = 0x14;
    (**(code **)(local_10[0] + 4))();
    cVar2 = (**(code **)(param_1[3] + 8))();
    if (cVar2 == '\0') {
      pHVar3 = (HMENU)(**(code **)(local_10[0] + 4))();
      DestroyMenu(pHVar3);
    }
    else if (pHVar3 != (HMENU)0x0) {
      DestroyMenu(pHVar3);
    }
    local_18 = local_18 + -1;
    OWL::TMenu::_dtor(local_10,2);
    local_24 = 0;
  }
  if (*(int *)((int)param_1 + 0x11) == 0) {
    iVar4 = FUN_0044d8dc(param_1);
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(*param_1 + 0xc);
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    *(undefined4 *)((int)param_1 + 0x11) = uVar5;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    FUN_00438338(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
  }
  if (*(int *)((int)param_1 + 0x46) != 0) {
    FUN_00438338(*param_1,0x80,0,*(LPARAM *)((int)param_1 + 0x46));
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e1f0  OWL::TFrameWindow::vf17   (56 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TFrameWindow::vf17(int *param_1)

{
  FUN_0044d2f0(param_1,0,0);
  FUN_0044d37c(param_1,0,(HANDLE)0x0);
  OWL::TWindow::vf31();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e254  OWL::TFrameWindow::EvSize   (6 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __stdcall OWL::TFrameWindow::EvSize(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  tagRECT *ptVar3;
  LONG *pLVar4;
  int aiStack_38 [4];
  tagRECT tStack_28;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  char cStack_5;
  
  OWL::TWindow::EvSize(*(int *)param_1,param_2);
  if (*(int *)(param_1 + 0x15) != 0) {
    cStack_5 = '\0';
    if (param_2 != 1) {
      uVar1 = FUN_0044daec((int *)param_1,'\x01');
      cStack_5 = (char)uVar1;
      tStack_28.left = 0;
      tStack_28.top = 0;
      tStack_28.right = 0;
      tStack_28.bottom = 0;
      FUN_004386fc(*(int *)(param_1 + 0x15),&tStack_28);
      ptVar3 = &tStack_28;
      pLVar4 = aiStack_38;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = ptVar3->left;
        ptVar3 = (tagRECT *)&ptVar3->top;
        pLVar4 = pLVar4 + 1;
      }
      iStack_14 = aiStack_38[3] - aiStack_38[1];
      iStack_18 = aiStack_38[2] - aiStack_38[0];
      *param_3 = iStack_18;
      param_3[1] = iStack_14;
      iStack_10 = iStack_18;
      iStack_c = iStack_14;
    }
    if (cStack_5 == '\0') {
      FUN_00438398(*(int *)(param_1 + 0x15),'\x01');
    }
  }
  FUN_0044e228((int *)param_1,param_2,(LPARAM)param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e474  OWL::TFrameWindow::vf3   (349 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __cdecl OWL::TFrameWindow::vf3(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  HMENU pHVar3;
  BOOL BVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  int local_1c [3];
  int local_10 [3];
  
  __InitExceptBlockLDTC(0x482bd4);
  if ((*(int *)((int)param_1 + 0x21) == 0) || (*(int *)(*param_1 + 0xc) == 0)) {
    uVar2 = 0;
    *in_FS_OFFSET = local_40;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)param_2 + 9);
    FUN_0042bc50(local_10,*(HWND *)(*param_1 + 0xc),0);
    FUN_0042bb1c(local_1c,0);
    FUN_0044e630(*(int **)((int)param_1 + 0x21),param_2,(int)local_1c);
    if ((*(byte *)(*param_1 + 0x74) & 0x10) != 0) {
      (**(code **)(local_1c[0] + 4))();
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x28))();
    }
    (**(code **)(local_1c[0] + 4))();
    cVar1 = (**(code **)(param_1[3] + 8))();
    if (cVar1 == '\0') {
      pHVar3 = (HMENU)(**(code **)(local_1c[0] + 4))();
      DestroyMenu(pHVar3);
      uVar2 = 0;
      OWL::TMenu::_dtor(local_1c,2);
      OWL::TMenu::_dtor(local_10,2);
      *in_FS_OFFSET = local_40;
    }
    else {
      pHVar3 = (HMENU)(**(code **)(local_10[0] + 4))();
      BVar4 = DestroyMenu(pHVar3);
      uVar2 = CONCAT31((int3)((uint)BVar4 >> 8),1);
      OWL::TMenu::_dtor(local_1c,2);
      OWL::TMenu::_dtor(local_10,2);
      *in_FS_OFFSET = local_40;
    }
  }
  return uVar2;
}

} // namespace tea
