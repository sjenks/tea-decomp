// TSMerge.exe — runtime / library code "OWL_TDecoratedFrame"
// 18 functions, 0x00432d4c..0x00434210. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00432d4c  OWL::TDecoratedFrame::Find   (88 bytes)   [owl:response-table response-table-find]
//   also: OWL::TDecoratedFrame::TFrameWindow_vf18 [rtti:vtable]; OWL::TDecoratedFrame::vf14 [rtti:vtable]
undefined4 __cdecl OWL::TDecoratedFrame::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[2],(int *)&OWL::TDecoratedFrame::__entries,param_2,param_3);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = OWL::TFrameWindow::Find((undefined4 *)*self,param_2,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = OWL::TLayoutWindow::Find(self + 1,param_2,param_3), (char)uVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432dc8  OWL::TDecoratedFrame::~TDecoratedFrame   (384 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDecoratedFrame::_dtor
void __cdecl OWL::TDecoratedFrame::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46be74);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 0x35) = &OWL::TDecoratedFrame::vftable;
    self[4] = (int)&PTR_LAB_0046bf54;
    *(undefined ***)self[2] = &PTR_LAB_0046bf6c;
    *(undefined ***)self[3] = &PTR_LAB_0046bf78;
    *(undefined ***)(self[1] + 8) = &OWL::TDecoratedFrame::vftable_TWindow;
    *(undefined ***)(*self + 0xc) = &OWL::TDecoratedFrame::vftable_TFrameWindow;
    operator_delete();
    operator_delete();
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x12;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x12;
    OWL::TLayoutWindow::_dtor(self + 1,0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x12;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x12;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
      OWL::TFrameWindow::_dtor((int *)((int)self + 0xe1),0);
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x57),0);
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x4f),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432f48  OWL::TDecoratedFrame::TFrameWindow_vf16   (133 bytes)   [rtti:vtable virtual slot 16]
//   override of OWL::TFrameWindow vtable slot 16 (OWL::TFrameWindow::SetupWindow), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x0043427a)
//   also: OWL::TDecoratedFrame::vf9 [rtti:vtable]
void __cdecl OWL::TDecoratedFrame::TFrameWindow_vf16(int *self)

{
  int i;
  int *piVar2;
  tagRECT *pRect;
  LONG *pLVar4;
  tagRECT rect;
  LONG newStr [2];
  int local_c;
  int local_8;
  
  OWL::TFrameWindow::SetupWindow((int *)*self);
  rect.left = 0;
  rect.top = 0;
  rect.right = 0;
  rect.bottom = 0;
  FUN_0042d568(self[1],&rect);
  pRect = &rect;
  pLVar4 = newStr;
  for (i = 4; i != 0; i = i + -1) {
    *pLVar4 = pRect->left;
    pRect = (tagRECT *)&pRect->top;
    pLVar4 = pLVar4 + 1;
  }
  self[5] = local_c;
  self[6] = local_8;
  piVar2 = (int *)self[1];
  if (((*(byte *)(piVar2 + 0x1d) & 0x10) != 0) && (*(int *)(*self + 0x25) != 0)) {
    piVar2 = self;
    (**(code **)(*(int *)((int)self + 0x35) + 0x20))();
  }
  (**(code **)(self[4] + 4))(self + 1,self[4],piVar2,self + 1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432fd0  OWL::TDecoratedFrame::TFrameWindow_vf17   (52 bytes)   [rtti:vtable virtual slot 17]
//   override of OWL::TFrameWindow vtable slot 17 (OWL::TFrameWindow::CleanupWindow), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x00434265)
//   also: OWL::TDecoratedFrame::vf10 [rtti:vtable]
void __cdecl OWL::TDecoratedFrame::TFrameWindow_vf17(int *self)

{
  int iVar1;
  int *frameWindow;
  
  frameWindow = (int *)*self;
  OWL::TFrameWindow::CleanupWindow(frameWindow);
  if (*(int *)(*self + 0x25) != 0) {
    iVar1 = (**(code **)(*(int *)((int)self + 0x35) + 0x14))
                      (*self,*(int *)((int)self + 0x35),frameWindow,self);
    if (iVar1 != 0) {
      FUN_0044aae4(*(undefined4 *)(*self + 0x25),iVar1);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433004  OWL::TDecoratedFrame::TFrameWindow_vf7   (419 bytes)   [rtti:vtable virtual slot 7]
//   override of OWL::TFrameWindow vtable slot 7 (OWL::TFrameWindow::vf7), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x004342e3)
//   also: OWL::TDecoratedFrame::vf4 [rtti:vtable]
int __cdecl OWL::TDecoratedFrame::TFrameWindow_vf7(int *self,int *window)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *sehChainHead;
  int *local_68 [2];
  int *local_5d;
  int *local_52;
  int *local_47;
  int local_3c;
  int local_38;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int unused;
  undefined4 unused2;
  int *local_8;
  
  __InitExceptBlockLDTC(0x46bea8);
  FUN_0041efe0((undefined4*)local_68);
  FUN_0041e0e8((int)(self + 1),*(int *)(*self + 0x15),(undefined4*)local_68);
  if ((window == (int *)0x0) &&
     (window = (int *)operator_new(), local_8 = window, window != (int *)0x0)) {
    ehContext = 0x14;
    OWL::TWindow::TWindow_42aa94(window,0,self[1],(uint *)&DAT_0046be00,0);
    ehContext = 8;
    window = local_8;
  }
  (**(code **)(window[2] + 0x34))();
  FUN_0041e018((int)(self + 1),(int)window,(undefined4*)local_68);
  piVar1 = (int *)(**(code **)(*(int *)(*self + 0xc) + 0x18))();
  if (*(int *)(self[1] + 0x7a) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(int *)(*(int *)(self[1] + 0x7a) + 0x7e);
  }
  iVar3 = local_38;
  if (local_38 != 0) {
    do {
      local_3c = iVar3;
      uVar2 = FUN_0041e0e8((int)(self + 1),local_3c,(undefined4*)local_68);
      if ((char)uVar2 != '\0') {
        if (piVar1 == local_68[0]) {
          local_68[0] = window;
        }
        if (piVar1 == local_5d) {
          local_5d = window;
        }
        if (piVar1 == local_52) {
          local_52 = window;
        }
        if (piVar1 == local_47) {
          local_47 = window;
        }
        FUN_0041e018((int)(self + 1),local_3c,(undefined4*)local_68);
      }
      local_3c = *(int *)(local_3c + 0x7e);
      iVar3 = local_3c;
    } while (local_3c != local_38);
  }
  *(undefined1 *)((int)self + 0x3e) = 1;
  iVar3 = OWL::TFrameWindow::vf7((int *)*self,window);
  *(undefined1 *)((int)self + 0x3e) = 0;
  if (((short)((uint)*(undefined4 *)(iVar3 + 0x10) >> 0x10) != 0) &&
     (**(char **)(iVar3 + 0x10) == '\a')) {
    (**(code **)(*(int *)(iVar3 + 8) + 0x18))();
    unused = iVar3;
    if (iVar3 != 0) {
      unused2 = *(undefined4 *)(iVar3 + 8);
      ehContext = 0x2c;
      (*(code *)**(undefined4 **)(iVar3 + 8))();
      ehContext = 0x20;
    }
    iVar3 = 0;
  }
  (**(code **)(self[4] + 4))();
  *sehChainHead = sehPrevFrame;
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004331a8  OWL::TDecoratedFrame::TFrameWindow_vf8   (64 bytes)   [rtti:vtable virtual slot 8]
//   override of OWL::TFrameWindow vtable slot 8 (OWL::TFrameWindow::RemoveChild), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x004342ce)
//   also: OWL::TDecoratedFrame::vf11 [rtti:vtable]
void __cdecl OWL::TDecoratedFrame::TFrameWindow_vf8(int *self,int param_2)

{
  if ((param_2 == *(int *)(*self + 0x15)) && (*(char *)((int)self + 0x3e) == '\0')) {
    (**(code **)(*(int *)((int)self + 0x35) + 0x10))();
  }
  OWL::TFrameWindow::RemoveChild((int *)*self,param_2);
  OWL::TLayoutWindow::RemoveChild(self + 1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004331e8  OWL::TDecoratedFrame::TFrameWindow_vf10   (110 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TFrameWindow vtable slot 10 (OWL::TFrameWindow::PreProcessMsg), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x004342b9)
//   also: OWL::TDecoratedFrame::vf3 [rtti:vtable]
undefined4 __cdecl OWL::TDecoratedFrame::TFrameWindow_vf10(int *self,LPMSG lParam)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(self[1] + 0x7a) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(self[1] + 0x7a) + 0x7e);
  }
  iVar4 = iVar5;
  if (iVar5 != 0) {
    do {
      if ((((iVar4 != *(int *)(*self + 0x15)) && (*(int *)(iVar4 + 0xc) != 0)) &&
          (uVar2 = GetWindowLongA(*(HWND *)(iVar4 + 0xc),-0x10), (uVar2 & 0x10000000) != 0)) &&
         (uVar3 = (**(code **)(*(int *)(iVar4 + 8) + 0x28))(), (char)uVar3 != '\0')) {
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      piVar1 = (int *)(iVar4 + 0x7e);
      iVar4 = *piVar1;
    } while (iVar5 != *piVar1);
  }
  uVar3 = OWL::TFrameWindow::PreProcessMsg((int *)*self,lParam);
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433258  OWL::TDecoratedFrame::vf2   (437 bytes)   [rtti:vtable virtual slot 2]
char * __cdecl OWL::TDecoratedFrame::vf2(int *self,uint param_2,uint *multiByteStr,char *multiByte,int param_5)

{
  HMENU hMenu;
  BOOL ok;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  CHAR multiByteStr2 [256];
  char *local_8;
  
  if (param_2 == 0xffffffff) {
    return (char *)0x0;
  }
  pcVar4 = (char *)0x0;
  if (param_5 == 2) {
    hMenu = GetMenu(*(HWND *)(self[1] + 0xc));
    ok = IsMenu(hMenu);
    if (ok != 0) {
      GetMenu(*(HWND *)(self[1] + 0xc));
      iVar2 = FUN_00445198();
      if (iVar2 != 0) {
        pcVar4 = thunk_strchr((char *)multiByteStr,'\t');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = thunk_strchr((char *)multiByteStr,'\b');
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strlen(multiByteStr);
        while ((pcVar4 = pcVar4 + -1, -1 < (int)pcVar4 &&
               (*(char *)((int)multiByteStr + (int)pcVar4) == '.'))) {
          *(char *)((int)multiByteStr + (int)pcVar4) = '\0';
        }
        iVar2 = -1;
        do {
          iVar2 = iVar2 + 1;
          if (*(char *)((int)multiByteStr + iVar2) == '\0') goto LAB_00433324;
        } while (*(char *)((int)multiByteStr + iVar2) != '&');
        do {
          *(undefined1 *)((int)multiByteStr + iVar2) = *(undefined1 *)((int)multiByteStr + iVar2 + 1);
          iVar2 = iVar2 + 1;
        } while (*(char *)((int)multiByteStr + iVar2) != '\0');
LAB_00433324:
        pcVar4 = strlen(multiByteStr);
        goto LAB_004333aa;
      }
    }
    iVar2 = FUN_00443f20(*(int *)(self[1] + 0x70),param_2,multiByteStr2,0x100);
    if ((iVar2 == 0) && (*(int *)(*self + 0x1d) != 0)) {
      iVar2 = FUN_00443f20(*(int *)(*self + 0x1d),param_2,multiByteStr2,0x100);
    }
    if ((iVar2 != 0) && (local_8 = thunk_strchr(multiByteStr2,'\n'), local_8 != (char *)0x0)) {
      strncpy(multiByteStr,(uint *)(local_8 + 1),multiByte);
      pcVar4 = strlen(multiByteStr);
    }
  }
LAB_004333aa:
  if (param_5 == 1) {
    pcVar4 = (char *)FUN_00443f20(*(int *)(self[1] + 0x70),param_2,(LPSTR)multiByteStr,(int)multiByte);
    if ((pcVar4 == (char *)0x0) && (*(int *)(*self + 0x1d) != 0)) {
      pcVar4 = (char *)FUN_00443f20(*(int *)(*self + 0x1d),param_2,(LPSTR)multiByteStr,(int)multiByte);
    }
    if ((pcVar4 != (char *)0x0) &&
       (pcVar3 = thunk_strchr((char *)multiByteStr,'\n'), pcVar3 != (char *)0x0)) {
      *pcVar3 = '\0';
      pcVar4 = pcVar3 + (-1 - (int)multiByteStr);
    }
  }
  return pcVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433410  OWL::TDecoratedFrame::EvMenuSelect   (229 bytes)   [owl:response-table message-handler]
//   WM_MENUSELECT
void __cdecl OWL::TDecoratedFrame::EvMenuSelect(int self,int menuItemId,uint flags,int hMenu)

{
  int iVar1;
  undefined4 *puVar2;
  UINT UVar3;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 menu [3];
  
  __InitExceptBlockLDTC(0x46bef0);
  if (*(char *)(self + 0x39) != '\0') {
    if ((flags == 0xffff) && (hMenu == 0)) {
      iVar1 = FUN_0042d188(*(int *)(self + 4));
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar1 + 8);
      }
      puVar2 = FUN_004567e4(iVar1,iVar4,(int *)&DAT_0040467c,(int *)&DAT_00421420,0);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)(puVar2[6] + 0x6c))();
      }
      *(undefined4 *)(self + 0x3a) = 0;
    }
    else if ((flags & 0x10) == 0) {
      if ((flags & 0x860) == 0) {
        *(int *)(self + 0x3a) = menuItemId;
      }
      else {
        *(undefined4 *)(self + 0x3a) = 0xffffffff;
      }
    }
    else {
      puVar2 = OWL::TMenu::TMenu_420a90(menu,hMenu,0);
      UVar3 = FUN_00420b74((int)puVar2,menuItemId);
      *(UINT *)(self + 0x3a) = UVar3;
      OWL::TMenu::_dtor(menu,2);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004334f8  OWL::TDecoratedFrame::EvSize   (46 bytes)   [owl:response-table message-handler]
//   WM_SIZE
void __cdecl OWL::TDecoratedFrame::EvSize(undefined4 *self,WPARAM sizeType,int *size)

{
  OWL::TLayoutWindow::EvSize(self + 1,sizeType,size);
  FUN_00443094((int *)*self,sizeType,(LPARAM)size);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433528  OWL::TDecoratedFrame::EvEnteridle   (179 bytes)   [owl:response-table message-handler]
//   WM_ENTERIDLE
void __cdecl OWL::TDecoratedFrame::EvEnteridle(undefined4 *self,int param_2,HWND hWnd)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 == 2) && (*(int *)((int)self + 0x3a) != 0)) {
    iVar1 = FUN_0042d188(self[1]);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
    }
    puVar3 = FUN_004567e4(iVar1,iVar2,(int *)&DAT_0040467c,(int *)&DAT_00421420,0);
    if (puVar3 != (undefined4 *)0x0) {
      if (*(int *)((int)self + 0x3a) != -1) {
        (**(code **)(*(int *)((int)self + 0x35) + 8))();
      }
      (**(code **)(puVar3[6] + 0x6c))();
    }
    *(undefined4 *)((int)self + 0x3a) = 0;
  }
  OWL::TWindow::EvEnteridle(*(int *)*self,param_2,hWnd);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004335dc  OWL::TDecoratedFrame::TFrameWindow_vf14   (352 bytes, 2 ranges)   [rtti:vtable virtual slot 14]
//   override of OWL::TFrameWindow vtable slot 14 (OWL::TFrameWindow::EvCommand), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x004342a4)
//   also: OWL::TDecoratedFrame::vf12 [rtti:vtable]
undefined4 __cdecl OWL::TDecoratedFrame::TFrameWindow_vf14(int *self,int param_2,HWND hWnd,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  BOOL ok;
  undefined4 uVar4;
  bool bVar5;
  int local_10;
  
  if ((hWnd == (HWND)0x0) && (iVar2 = FUN_0042d188(self[1]), iVar2 != 0)) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      bVar5 = (*(byte *)(iVar2 + 0x1b) & 0x10) != 0;
    }
    else {
      ok = IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      bVar5 = ok != 0;
    }
    if (bVar5) {
      FUN_0041e11c((int)(self + 1),iVar2);
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0x18);
      local_10 = 0;
      if ((*(byte *)(iVar2 + 0x75) & 0x80) == 0) {
        FUN_0042d08c(self[1],(undefined*)FUN_00432ca1);
      }
      else {
        local_10 = FUN_0042d08c(self[1],(undefined*)FUN_00432cf7);
      }
      if (local_10 == 0) {
        local_10 = *(int *)(*self + 0x15);
      }
      switch((uVar1 & 0xf00) >> 8) {
      case 1:
        FUN_0043381c((int)self,iVar2,local_10);
        break;
      case 2:
        FUN_004339a0(self,iVar2,local_10);
        break;
      case 3:
        FUN_00433b64(self,iVar2,local_10);
        break;
      case 4:
        FUN_00433da0(self,iVar2,local_10);
      }
    }
    (**(code **)(self[4] + 4))();
    (**(code **)(*(int *)(iVar2 + 8) + 100))();
    uVar4 = 0;
  }
  else {
    uVar4 = OWL::TFrameWindow::EvCommand((int *)*self,param_2,hWnd,param_4);
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433754  OWL::TDecoratedFrame::TFrameWindow_vf15   (198 bytes)   [rtti:vtable virtual slot 15]
//   override of OWL::TFrameWindow vtable slot 15 (OWL::TFrameWindow::EvCommandEnable), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x0043428f)
//   also: OWL::TDecoratedFrame::vf13 [rtti:vtable]
void __cdecl OWL::TDecoratedFrame::TFrameWindow_vf15(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_0041261c,(int *)&DAT_00425a64,0);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)(*(int *)((int)self + 0x35) + 8))(), iVar2 == 0)) {
    iVar2 = FUN_0042d188(self[1]);
    if (iVar2 == 0) {
      OWL::TFrameWindow::EvCommandEnable((undefined4 *)*self,param_2);
    }
    else {
      (**(code **)*param_2)();
      if (*(int *)(iVar2 + 0xc) != 0) {
        IsWindowVisible(*(HWND *)(iVar2 + 0xc));
      }
      (**(code **)(*param_2 + 8))();
    }
  }
  else {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434020  OWL::TDecoratedFrame::vf1   (177 bytes, 2 ranges)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TDecoratedFrame::vf1(int *self,int param_2,int param_3)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffff0ff | param_3 << 8;
  FUN_0042d484(self[1],0,0x4000000,0);
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  FUN_0041e11c((int)(self + 1),param_2);
  if ((*(byte *)(param_2 + 0x1b) & 0x10) != 0) {
    switch(param_3) {
    case 1:
      FUN_0043381c((int)self,param_2,*(int *)(*self + 0x15));
      break;
    case 2:
      FUN_004339a0(self,param_2,*(int *)(*self + 0x15));
      break;
    case 3:
      FUN_00433b64(self,param_2,*(int *)(*self + 0x15));
      break;
    case 4:
      FUN_00433da0(self,param_2,*(int *)(*self + 0x15));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004340e8  OWL::TDecoratedFrame::vf5   (121 bytes)   [rtti:vtable virtual slot 5]
undefined4 * __cdecl OWL::TDecoratedFrame::vf5(int self)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_0042d188(*(int *)(self + 4));
  if (iVar1 == 0) {
    iVar1 = FUN_0042d08c(*(int *)(self + 4),(undefined*)FUN_00432d20);
    if (iVar1 != 0) {
      iVar1 = FUN_0042d188(iVar1);
      if (iVar1 != 0) goto LAB_00434136;
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
LAB_00434136:
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
    puVar2 = FUN_004567e4(iVar1,iVar3,(int *)&DAT_0040467c,(int *)&DAT_00416440,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434164  OWL::TDecoratedFrame::vf8   (105 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDecoratedFrame::vf8(int *self)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(*(int *)((int)self + 0x35) + 0x14))();
  if (iVar2 == 0) {
    piVar3 = (int *)(**(code **)(*(int *)((int)self + 0x3f) + 0x10))();
    *(undefined4 *)(*piVar3 + 0x34) = 0x7d29;
  }
  cVar1 = (**(code **)(**(int **)(*self + 0x25) + 4))();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)((int)self + 0x43) + 0x10))();
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004341d0  OWL::TDecoratedFrame::TFrameWindow_vf4   (64 bytes)   [rtti:vtable virtual slot 4]
//   override of OWL::TFrameWindow vtable slot 4 (OWL::TFrameWindow::vf4), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x0043430d)
//   also: OWL::TDecoratedFrame::vf6 [rtti:vtable]
undefined4 __cdecl OWL::TDecoratedFrame::TFrameWindow_vf4(int *self)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(self[1] + 0xc) != 0) && (*(int *)(*self + 0x25) != 0)) {
    iVar1 = (**(code **)(*(int *)((int)self + 0x35) + 0x14))();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(*self + 0x25) + 8))();
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00434210  OWL::TDecoratedFrame::TFrameWindow_vf5   (61 bytes)   [rtti:vtable virtual slot 5]
//   override of OWL::TFrameWindow vtable slot 5 (OWL::TFrameWindow::vf5), from OWL::TDecoratedFrame's OWL::TFrameWindow subobject vtable at 0x0046c014 (through the this-adjusting thunk at 0x004342f8)
//   also: OWL::TDecoratedFrame::vf7 [rtti:vtable]
undefined4 __cdecl OWL::TDecoratedFrame::TFrameWindow_vf5(int *self)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(self[1] + 0xc) != 0) && (*(int *)(*self + 0x25) != 0)) {
    iVar1 = (**(code **)(*(int *)((int)self + 0x35) + 0x14))();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(*self + 0x25) + 0xc))();
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}

} // namespace tea
