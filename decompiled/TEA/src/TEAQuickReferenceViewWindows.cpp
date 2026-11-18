// TEA.exe — application module "TEAQuickReferenceViewWindows"
// 7 functions, 0x004671dc..0x00467ae8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004671dc  TEAQuickReferenceViewWindows::TEAQuickReferenceViewWindows   (952 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAQuickReferenceViewWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl TEAQuickReferenceViewWindows::TEAQuickReferenceViewWindows(int *self,int vbasesBuilt,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *pvwurl;
  undefined4 *sehChainHead;
  int iVar4;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str3;
  int *pvwurl2;
  undefined1 str2 [8];
  int str4;
  
  __InitExceptBlockLDTC(0x4fc4f0);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x60);
    self[0x60] = (int)(self + 0x5d);
    self[0x61] = (int)(self + 0x5e);
    self[1] = (int)(self + 0x5d);
    self[2] = (int)(self + 0x5e);
    self[0x5c] = 0;
    self[0x5f] = 0;
    self[0x5d] = (int)&OWL::TEventHandler::vftable;
    self[0x5e] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x60,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x110;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x110;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4fc474,uVar1,param_4,(uint *)0x2e68,1,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x110;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x110;
  self[3] = (int)&TEAQuickReferenceViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fc7c4;
  *(undefined ***)self[2] = &PTR_LAB_004fc7d0;
  *(undefined ***)(*self + 8) = &TEAQuickReferenceViewWindows::vftable_TWindow;
  self[0x18] = (int)param_3;
  self[0x2d] = 0;
  self[0x2e] = param_5;
  OWL::TCheckBox::TCheckBox(self + 0x2f,0,*self,0x2eae,0,0);
  self[0x5b] = 0;
  uVar2 = 0;
  do {
    pvwurl2 = (int *)operator_new();
    if (pvwurl2 != (int *)0x0) {
      iVar4 = 1;
      std::string::string_from_cstr((int)str2,(uint *)("TEAQuickReference" + 0x11));
      PVWURL::PVWURL(pvwurl2,0,self,uVar2 + 0x2e86,(int)str2,iVar4);
    }
    self[uVar2 + 0x19] = (int)pvwurl2;
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        pvwurl = (int *)(str4 + -0xc);
        if (pvwurl == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (pvwurl == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *pvwurl = *pvwurl + -1;
          iVar4 = *pvwurl + 1;
        }
        if (iVar4 != 0) goto LAB_0046747f;
      }
      operator_delete();
      str4 = 0;
    }
LAB_0046747f:
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  uVar2 = 0;
  do {
    pvwurl = (int *)operator_new();
    if (pvwurl != (int *)0x0) {
      iVar4 = 0;
      std::string::string_from_cstr((int)str,(uint *)("TEAQuickReference" + 0x11));
      PVWURL::PVWURL(pvwurl,0,self,uVar2 + 0x2e72,(int)str,iVar4);
    }
    self[uVar2 + 0x23] = (int)pvwurl;
    if (str3 != 0) {
      if (*(int *)(str3 + -0xc) != -1) {
        pvwurl = (int *)(str3 + -0xc);
        if (pvwurl == &g_nullStringRep) {
          iVar4 = 1;
        }
        else if (pvwurl == &g_nullStringRep) {
          iVar4 = 1;
        }
        else {
          *pvwurl = *pvwurl + -1;
          iVar4 = *pvwurl + 1;
        }
        if (iVar4 != 0) goto LAB_00467572;
      }
      operator_delete();
      str3 = 0;
    }
LAB_00467572:
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      *sehChainHead = sehPrevFrame;
      return self;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00467594  TEAQuickReferenceViewWindows::~TEAQuickReferenceViewWindows   (520 bytes)   [rtti:dtor destructor]
//   written in code as TEAQuickReferenceViewWindows::_dtor
void __cdecl TEAQuickReferenceViewWindows::_dtor(int *self,uint dtorFlags)

{
  uint uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fc5a8);
  if (self != (int *)0x0) {
    self[3] = (int)&TEAQuickReferenceViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004fc7c4;
    *(undefined ***)self[2] = &PTR_LAB_004fc7d0;
    *(undefined ***)(*self + 8) = &TEAQuickReferenceViewWindows::vftable_TWindow;
    uVar1 = 0;
    do {
      if (self[uVar1 + 0x19] != 0) {
        (*(code *)**(undefined4 **)(self[uVar1 + 0x19] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    uVar1 = 0;
    do {
      if (self[uVar1 + 0x23] != 0) {
        (*(code *)**(undefined4 **)(self[uVar1 + 0x23] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    if ((uint *)self[0x2d] != (uint *)0x0) {
      OWL::TBrush::_dtor((uint *)self[0x2d],3);
    }
    if ((uint *)self[0x5b] != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)self[0x5b],0);
      operator_delete();
    }
    OWL::TCheckBox::_dtor(self + 0x2f,2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x110;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x110;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x110;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x110;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x60,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x5e,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004677b8  TEAQuickReferenceViewWindows::IsShown   (42 bytes)   [analysis]
//   whether the window is visible (for saving the QuickReference setting)
bool __cdecl TEAQuickReferenceViewWindows::IsShown(int self)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*(int *)(self + 0xbc),0xf0,0,0);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004677e4  TEAQuickReferenceViewWindows::OnTextClicked   (96 bytes)   [rtti:vtable virtual slot 32]
//   vtable slot 32 (introduced by PropertiesViewWindows); text of a control was clicked (Quick Reference: puts the clicked example into the query)
void __cdecl TEAQuickReferenceViewWindows::OnTextClicked(int self,int param_2)

{
  uint text [250];
  
  if ((param_2 < 0x2e86) || (0x2e99 < param_2)) {
    GetWindowTextA(*(HWND *)(**(int **)(self + -0xb93c + param_2 * 4) + 0xc),(LPSTR)text,999
                  );
    TEAViewWindows::SetQuery(*(int **)(self + 0x60),text);
  }
  else {
    ShowContextHelp();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467844  TEAQuickReferenceViewWindows::DeleteBrush   (84 bytes)   [analysis]
//   frees the background brush
void __cdecl TEAQuickReferenceViewWindows::DeleteBrush(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fc62c);
  if (*(uint **)(self + 0xb4) != (uint *)0x0) {
    OWL::TBrush::_dtor(*(uint **)(self + 0xb4),3);
  }
  *(undefined4 *)(self + 0xb4) = 0;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467898  TEAQuickReferenceViewWindows::SetupWindow   (592 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TEAQuickReferenceViewWindows's OWL::TWindow subobject vtable at 0x004fc7dc (through the this-adjusting thunk at 0x00467c0d); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAQuickReferenceViewWindows::vf11 [rtti:vtable]
void __cdecl TEAQuickReferenceViewWindows::SetupWindow(int *self)

{
  HGDIOBJ hGdiObject;
  int iVar2;
  int *strRep;
  tagRECT *pRect;
  LONG *pLVar5;
  undefined4 *sehChainHead;
  byte bVar6;
  LOGFONTA logFont;
  tagRECT rect;
  int x;
  int y;
  int local_7c;
  int local_78;
  tagRECT rect2;
  LONG local_64;
  int local_60;
  int local_5c;
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *local_18;
  undefined1 result [8];
  int str;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4fc67c);
  PropertiesViewWindows::SetupWindow(self);
  ehContext = 0x14;
  PropertiesViewWindows::LoadString((int)result,(int)self,(uint *)"Position",
               (uint *)("TEAQuickReference" + 0x11));
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  if (*(int *)(str + -4) == 0) {
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 0;
    rect2.bottom = 0;
    FUN_004a7a30(**(int **)(*(int *)(*self + 0x6c) + 0x2b),&rect2);
    pRect = &rect2;
    pLVar5 = &local_64;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar5 = pRect->left;
      pRect = (tagRECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
      pLVar5 = pLVar5 + (uint)bVar6 * -2 + 1;
    }
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a30(*self,&rect);
    pRect = &rect;
    pLVar5 = &x;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pLVar5 = pRect->left;
      pRect = (tagRECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
      pLVar5 = pLVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00494454(&x,local_5c - x,local_60 - y);
    FUN_004a7aa0(*self,(HWND)0x0,x,y,local_7c - x,local_78 - y,0x21c)
    ;
  }
  FUN_004ac750(self + 0x2f,(uint)(self[0x2e] != 0));
  hGdiObject = GetStockObject(0xb);
  if (hGdiObject != (HGDIOBJ)0x0) {
    EnumChildWindows(*(HWND *)(*self + 0xc),SetFontOnControlsProc,(LPARAM)hGdiObject);
  }
  hGdiObject = GetStockObject(0xc);
  if ((hGdiObject != (HGDIOBJ)0x0) && (iVar2 = GetObjectA(hGdiObject,0x3c,&logFont), iVar2 != 0)) {
    logFont.lfWeight = 700;
    local_18 = (uint *)operator_new();
    if (local_18 != (uint *)0x0) {
      ehContext = 0x2c;
      FUN_0048f7fc(local_18,&logFont);
      ehContext = 0x20;
    }
    self[0x5b] = (int)local_18;
    EnumChildWindows(*(HWND *)(*self + 0xc),SetFontOnControlsProc2,*local_18);
    ehContext = 8;
  }
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_00467ad7;
    }
    unused = str + -0xc;
    operator_delete();
  }
LAB_00467ad7:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467ae8  TEAQuickReferenceViewWindows::EvCtlColor   (271 bytes)   [rtti:vtable virtual slot 39]
//   vtable slot 39 (introduced by PropertiesViewWindows); colours for a child control (WM_CTLCOLOR*: static, edit, button)
undefined4 __cdecl TEAQuickReferenceViewWindows::EvCtlColor(int *self,HDC hdc,HWND hWnd,int param_4)

{
  int ctrlId;
  DWORD color;
  undefined4 *sehChainHead;
  char cVar3;
  DWORD sysColor;
  undefined4 local_30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4fc6d0);
  local_30 = PropertiesViewWindows::EvCtlColor(self,hdc,hWnd,param_4);
  ctrlId = GetDlgCtrlID(hWnd);
  if ((((ctrlId == 0x2f44) || ((0x2e85 < ctrlId && (ctrlId < 0x2e9a)))) ||
      ((0x2e99 < ctrlId && (ctrlId < 0x2eae)))) || ((0x2e71 < ctrlId && (ctrlId < 0x2e86)))) {
    if ((0x2e71 < ctrlId) && (ctrlId < 0x2e86)) {
      color = GetSysColor(2);
      SetTextColor(hdc,color);
    }
    color = GetSysColor(5);
    SetBkColor(hdc,color);
    if (self[0x2d] == 0) {
      local_8 = (uint *)operator_new();
      if (local_8 != (uint *)0x0) {
        ehContext = 0x14;
        cVar3 = '\x01';
        sysColor = GetSysColor(5);
        FUN_004ab84c(local_8,&sysColor,cVar3);
      }
      self[0x2d] = (int)local_8;
    }
    local_30 = *(undefined4 *)self[0x2d];
    *sehChainHead = sehPrevFrame;
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  return local_30;
}

} // namespace tea
