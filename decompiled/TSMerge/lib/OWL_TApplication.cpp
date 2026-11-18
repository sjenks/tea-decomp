// TSMerge.exe — runtime / library code "OWL_TApplication"
// 19 functions, 0x0042e9b4..0x004308c8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042e9b4  OWL::TApplication::~TApplication   (636 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TApplication::_dtor
void __cdecl OWL::TApplication::_dtor(undefined4 *self,uint dtorFlags)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46af04);
  if (self == (undefined4 *)0x0) goto LAB_0042ec1f;
  *(undefined ***)((int)self + 0x1b) = &OWL::TApplication::vftable;
  self[1] = &PTR_LAB_0046ae70;
  *(undefined ***)((int)self + 0x11) = &PTR_LAB_0046ae80;
  *(undefined ***)*self = &PTR_LAB_0046aea0;
  FUN_004309ac((int)self);
  if (*(int *)((int)self + 0x53) != 0) {
    (**(code **)(*(int *)((int)self + 0x53) + 0x11))();
    if (*(undefined4 **)((int)self + 0x53) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)self + 0x53))();
    }
  }
  if (*(int *)((int)self + 0x4e) != 0) {
    (**(code **)(*(int *)((int)self + 0x4e) + 0x15))();
    if (*(undefined4 **)((int)self + 0x4e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)self + 0x4e))();
    }
  }
  piVar1 = (int *)FUN_0042f090((int)self,0);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 8) + 0x18))();
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 8))();
    }
    if (*(int *)((int)self + 0x31) != 0) {
      (*(code *)**(undefined4 **)(*(int *)((int)self + 0x31) + 0xc))();
    }
  }
  if (*(int *)((int)self + 0x27) != 0) {
    (*(code *)**(undefined4 **)(*(int *)((int)self + 0x27) + 8))();
  }
  FUN_0041171c(*(undefined4 **)((int)self + 0x6b));
  if (*(int *)((int)self + 0x3d) != 0) {
    if (*(int *)(*(int *)((int)self + 0x3d) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)((int)self + 0x3d) + -0xc);
      if (piVar1 == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (piVar1 == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042ebed;
    }
    operator_delete();
    *(undefined4 *)((int)self + 0x3d) = 0;
  }
LAB_0042ebed:
  OWL::TModule::_dtor(self + 1,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0042ec1f:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042ef1c  OWL::TApplication::vf12   (146 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TApplication::vf12(int self)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((*(char *)(self + 0x4d) == '\0') || (*(int *)(self + 0x4e) == 0)) {
    FUN_00430ee0(self,'\x01');
    puVar2 = (undefined4 *)FUN_0042e4c0();
    uVar1 = (*(code *)*puVar2)();
    FUN_00430ee0(self,'\0');
  }
  else {
    uVar1 = (**(code **)(*(int *)(self + 0x4e) + 0x31))();
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042efb0  OWL::TApplication::vf15   (5 bytes)   [rtti:vtable virtual slot 15]
void __stdcall OWL::TApplication::vf15(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042efb8  OWL::TApplication::vf16   (82 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TApplication::vf16(int self)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = self + 0x11;
  uVar2 = OWL::TMsgThread::vf4();
  (**(code **)(*(int *)(self + 0x1b) + 0x44))(uVar2,*(int *)(self + 0x1b),iVar3,self);
  if (*(int *)(self + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(self + 0x2b) + 0x74);
    *puVar1 = *puVar1 | 0x10;
    (**(code **)(*(int *)(**(int **)(self + 0x2b) + 8) + 0x10))();
    (**(code **)(*(int *)(**(int **)(self + 0x2b) + 8) + 100))();
    return;
  }
  FUN_00430c34();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f00c  OWL::TApplication::vf17   (106 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TApplication::vf17(int self)

{
  int *frameWindow;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46afbc);
  frameWindow = (int *)operator_new();
  if (frameWindow != (int *)0x0) {
    OWL::TFrameWindow::TFrameWindow(frameWindow,0,0,*(uint **)(self + 8),0,'\0',0);
  }
  FUN_0042f090(self,frameWindow);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f078  OWL::TApplication::vf18   (23 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TApplication::vf18(int self,undefined4 param_2)

{
  OWL::TMsgThread::vf5(self + 0x11,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f1c0  OWL::TApplication::vf2   (172 bytes, 3 ranges)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TApplication::vf2(int self)

{
  int self2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b0fc);
  if (*(int *)(self + 0x2b) == 0) {
    self2 = self;
    if (*(int *)(self + 0x1f) == 0) {
      (**(code **)(*(int *)(self + 0x1b) + 0x3c))();
    }
    (**(code **)(*(int *)(self + 0x1b) + 0x40))(self,*(int *)(self + 0x1b),self2,self);
  }
  *(undefined1 *)(self + 0x1a) = 1;
  (**(code **)(*(int *)(self + 0x1b) + 0x10))();
  FUN_00421844();
  *(undefined1 *)(self + 0x1a) = 0;
  (**(code **)(*(int *)(self + 0x1b) + 0x48))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042f648  OWL::TApplication::vf3   (91 bytes, 2 ranges)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __cdecl OWL::TApplication::vf3(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b244);
  if (*(int *)(self + 0x1f) == 0) {
    (**(code **)(*(int *)(self + 0x1b) + 0x3c))();
  }
  (**(code **)(*(int *)(self + 0x1b) + 0x40))();
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042fc08  OWL::TApplication::vf4   (267 bytes, 2 ranges)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TApplication::vf4(int self)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b3b0);
  *(undefined4 *)(self + 0x16) = 0;
  while (*(char *)(self + 0x15) == '\0') {
    cVar2 = (**(code **)(*(int *)(self + 0x1b) + 0x14))();
    if (cVar2 == '\0') {
      DVar3 = MsgWaitForMultipleObjects
                        (*(DWORD *)(self + 0x45),*(HANDLE **)(self + 0x49),0,0xffffffff,0xff);
      if (DVar3 < *(uint *)(self + 0x45)) {
        (**(code **)(*(int *)(self + 0x1b) + 0x24))();
      }
      else if ((0x7f < DVar3) && (DVar3 < *(int *)(self + 0x45) + 0x80U)) {
        (**(code **)(*(int *)(self + 0x1b) + 0x24))();
      }
    }
    FUN_004217e8((int *)(self + 0x11));
  }
  *(undefined1 *)(self + 0x15) = 0;
  uVar1 = *(undefined4 *)(self + 0x16);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430344  OWL::TApplication::vf5   (36 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl OWL::TApplication::vf5(int self)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(self + 0x2b) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x2b) + 0xc) + 0x2c))();
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430368  OWL::TApplication::vf6   (186 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TApplication::vf6(undefined4 *self,MSG *pMsg)

{
  char cVar1;
  undefined4 uVar2;
  UINT local_24 [3];
  undefined4 unused;
  UINT local_14;
  WPARAM unused2;
  undefined4 unused3;
  
  cVar1 = (**(code **)(*(int *)((int)self + 0x1b) + 0x1c))();
  if (cVar1 == '\0') {
    TranslateMessage(pMsg);
    if (pMsg->hwnd == (HWND)0x0) {
      unused2 = pMsg->wParam;
      local_14 = pMsg->message;
      unused3 = 0;
      cVar1 = (**(code **)(*(int *)((int)self + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_004179cc(*self,(int)&local_14);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      local_24[0] = pMsg->message;
      local_24[1] = 0;
      unused = 0;
      cVar1 = (**(code **)(*(int *)((int)self + 0x1b) + 0x2c))();
      if (cVar1 != '\0') {
        uVar2 = FUN_004179cc(*self,(int)local_24);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    DispatchMessageA(pMsg);
    FUN_004309ac((int)self);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430424  OWL::TApplication::vf7   (232 bytes)   [rtti:vtable virtual slot 7]
undefined4 __cdecl OWL::TApplication::vf7(int self,int *lParam)

{
  BOOL ok;
  LRESULT lResult;
  undefined4 uVar3;
  HWND hWnd;
  
  if ((((*(int *)(self + 0x31) != 0) &&
       (ok = IsWindow(*(HWND *)(**(int **)(self + 0x31) + 0xc)), ok != 0)) &&
      ((*lParam == *(int *)(**(int **)(self + 0x2b) + 0xc) ||
       (ok = IsChild(*(HWND *)(**(int **)(self + 0x2b) + 0xc),(HWND)*lParam), ok != 0))))
     && ((0x1ff < (uint)lParam[1] && ((uint)lParam[1] < 0x20e)))) {
    FUN_0042d1a4(**(int **)(self + 0x31),0x407,0,(LPARAM)lParam);
  }
  hWnd = (HWND)*lParam;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    if (DAT_0046b440 == '\0') {
      DAT_0046b43c = GetDesktopWindow();
      DAT_0046b440 = DAT_0046b440 + '\x01';
    }
    if (hWnd == DAT_0046b43c) break;
    lResult = FUN_0042bc6c(hWnd,self);
    if ((lResult != 0) && (uVar3 = (**(code **)(*(int *)(lResult + 8) + 0x28))(), (char)uVar3 != '\0'))
    {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    hWnd = GetParent(hWnd);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043050c  OWL::TApplication::vf8   (228 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TApplication::vf8(int self,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  bVar1 = false;
  if (*(int *)(self + 0x49) != 0) {
    bVar1 = false;
    for (iVar2 = 0; iVar2 < *(int *)(self + 0x45); iVar2 = iVar2 + 1) {
      if (*(int *)(*(int *)(self + 0x49) + iVar2 * 4) == param_2) {
        bVar1 = true;
        unaff_EDI = iVar2;
      }
    }
  }
  if (param_3 == '\0') {
    if (bVar1) {
      if (*(int *)(self + 0x45) == 1) {
        operator_delete_array();
        *(undefined4 *)(self + 0x49) = 0;
        *(undefined4 *)(self + 0x45) = 0;
      }
      else {
        iVar2 = operator_new_array();
        iVar3 = 0;
        if (0 < unaff_EDI) {
          do {
            *(undefined4 *)(iVar2 + iVar3 * 4) =
                 *(undefined4 *)(*(int *)(self + 0x49) + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < unaff_EDI);
        }
        while (unaff_EDI = unaff_EDI + 1, unaff_EDI < *(int *)(self + 0x45)) {
          *(undefined4 *)(iVar2 + -4 + unaff_EDI * 4) =
               *(undefined4 *)(*(int *)(self + 0x49) + unaff_EDI * 4);
        }
        operator_delete_array();
        *(int *)(self + 0x49) = iVar2;
        *(int *)(self + 0x45) = *(int *)(self + 0x45) + -1;
      }
    }
  }
  else if (!bVar1) {
    iVar2 = operator_new_array();
    for (iVar3 = 0; iVar3 < *(int *)(self + 0x45); iVar3 = iVar3 + 1) {
      *(undefined4 *)(iVar2 + iVar3 * 4) = *(undefined4 *)(*(int *)(self + 0x49) + iVar3 * 4);
    }
    operator_delete_array();
    *(int *)(self + 0x49) = iVar2;
    *(int *)(*(int *)(self + 0x49) + *(int *)(self + 0x45) * 4) = param_2;
    *(int *)(self + 0x45) = *(int *)(self + 0x45) + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305f0  OWL::TApplication::vf14   (178 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TApplication::vf14(int self,byte wParam)

{
  int *tooltip;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b454);
  if (*(int *)(self + 0x31) == 0) {
    if (*(int *)(self + 0x2b) == 0) {
      uVar2 = *(undefined4 *)(self + 0x2b);
    }
    else {
      uVar2 = **(undefined4 **)(self + 0x2b);
    }
    if (*(int *)(**(int **)(self + 0x2b) + 0xc) == 0) {
      uVar2 = 0;
    }
    tooltip = (int *)operator_new();
    if (tooltip != (int *)0x0) {
      OWL::TTooltip::TTooltip(tooltip,0,uVar2,'\x01',0);
    }
    FUN_004306a4(self,tooltip);
  }
  else if (*(int *)(**(int **)(self + 0x31) + 0xc) != 0) {
    FUN_0042d1a4(**(int **)(self + 0x31),0x401,(uint)wParam,0);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430794  OWL::TApplication::EvActivateApp   (45 bytes)   [owl:response-table message-handler]
//   WM_ACTIVATEAPP
void __cdecl OWL::TApplication::EvActivateApp(int self,char param_2)

{
  if ((param_2 != '\0') && (*(int *)(self + 0x2b) != 0)) {
    FUN_0042d59c(**(int **)(self + 0x2b),(HWND)0x0,0,0,0,0,0x13);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004307c4  OWL::TApplication::Cmd24310   (40 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24310)
void __cdecl OWL::TApplication::Cmd24310(int self)

{
  if (*(int **)(self + 0x2b) != (int *)0x0) {
    FUN_0042d1a4(**(int **)(self + 0x2b),0x10,0,0);
    FUN_004309ac(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004307ec  OWL::TApplication::Find   (98 bytes)   [owl:response-table response-table-find]
//   also: OWL::TApplication::vf11 [rtti:vtable]
undefined4 __cdecl OWL::TApplication::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)self + 0x27) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(*(int *)((int)self + 0x27) + 8) + 0x6c))();
  }
  if ((char)uVar1 == '\0') {
    param_2[2] = (int)self;
    uVar1 = FUN_004179f4(*self,(int *)&OWL::TApplication::__entries,param_2,param_3);
    if (((char)uVar1 == '\0') && (uVar1 = OWL::TEventHandler::vf0(), (char)uVar1 == '\0')) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430850  OWL::TApplication::vf1   (118 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TApplication::vf1(int self)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 unused;
  undefined4 unused2;
  
  local_14 = 0x7ff9;
  unused = 0;
  unused2 = 0;
  if (*(int *)(self + 0x2b) == 0) {
LAB_00430882:
    if (*(int *)(self + 0x27) != 0) {
      cVar1 = (**(code **)(*(int *)(*(int *)(self + 0x27) + 8) + 0x6c))();
      if (cVar1 != '\0') {
        iVar2 = FUN_004179cc(**(undefined4 **)(self + 0x27),(int)&local_14);
        if (iVar2 == 0) goto LAB_004308b8;
      }
    }
    uVar3 = 1;
  }
  else {
    cVar1 = (**(code **)(*(int *)(**(int **)(self + 0x2b) + 8) + 0x3c))();
    if (cVar1 != '\0') goto LAB_00430882;
LAB_004308b8:
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004308c8  OWL::TApplication::vf10   (96 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TApplication::vf10(int self)

{
  char cVar1;
  undefined4 local_14;
  undefined4 unused;
  undefined4 unused2;
  
  local_14 = 0x7ffa;
  unused = 0;
  unused2 = 0;
  if (*(int *)(self + 0x27) != 0) {
    cVar1 = (**(code **)(*(int *)(*(int *)(self + 0x27) + 8) + 0x6c))();
    if (cVar1 != '\0') {
      FUN_004179cc(**(undefined4 **)(self + 0x27),(int)&local_14);
      DrawMenuBar(*(HWND *)(**(int **)(self + 0x2b) + 0xc));
    }
  }
  return;
}

} // namespace tea
