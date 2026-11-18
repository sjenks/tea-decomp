// TSMerge.exe — runtime / library code "OWL_TUrlLink"
// 25 functions, 0x00427f00..0x00447a08. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00427f00  OWL::TUrlLink::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TUrlLink::Find [rtti:vtable]; OWL::TUrlLink::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TUrlLink::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_004179f4(self[1],(int *)&OWL::TUrlLink::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TStatic::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427f64  OWL::TUrlLink::~TUrlLink   (479 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TUrlLink::_dtor
void __cdecl OWL::TUrlLink::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x469b24);
  if (self == (int *)0x0) goto LAB_00428132;
  self[3] = (int)&OWL::TUrlLink::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046a2a0;
  *(undefined ***)self[2] = &PTR_LAB_0046a2ac;
  *(undefined ***)(*self + 8) = &OWL::TUrlLink::vftable_TWindow;
  if ((uint *)self[6] != (uint *)0x0) {
    OWL::TGdiObject::_dtor((uint *)self[6],0);
    operator_delete();
  }
  if (self[0xd] != 0) {
    if (*(int *)(self[0xd] + -0xc) != -1) {
      strRep = (int *)(self[0xd] + -0xc);
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
      if (prevRefs != 0) goto LAB_00428070;
    }
    operator_delete();
    self[0xd] = 0;
  }
LAB_00428070:
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x27;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x27;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TControl::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x27;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x27;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor((undefined4 *)((int)self + 0x4f),0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x47),0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00428132:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428144  OWL::TUrlLink::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a376); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf11 [rtti:vtable]
char * __stdcall OWL::TUrlLink::GetClassName(void)

{
  return "OWL_UrlLink";
}

// ----------------------------------------------------------------------------------------------------
// 0x00428150  OWL::TUrlLink::SetupWindow   (743 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a363); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf15 [rtti:vtable]
void __cdecl OWL::TUrlLink::SetupWindow(int *self)

{
  int iVar1;
  uint *puVar2;
  char *len;
  undefined4 *sehChainHead;
  char cVar4;
  tagRECT rect;
  LOGFONTA logFont;
  uint *local_7c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 lParam [12];
  uint *local_24;
  uint gdiObject [2];
  uint *local_18;
  uint gdiObject2 [2];
  uint *tmpBufferBase [2];
  
  __InitExceptBlockLDTC(0x469bdc);
  OWL::TWindow::SetupWindow(*self);
  iVar1 = FUN_0042d1a4(*(int *)(*self + 0x14),0x31,0,0);
  if (iVar1 == 0) {
    ehContext = 0x2c;
    puVar2 = FUN_00418cd8(gdiObject);
    ehDtorCount = ehDtorCount + 3;
    iVar1 = GetObjectA((HANDLE)*puVar2,0x3c,&logFont);
    cVar4 = iVar1 != 0;
    ehDtorCount = ehDtorCount + -3;
    OWL::TGdiObject::_dtor(gdiObject,0);
    if (cVar4 != '\0') {
      logFont.lfUnderline = (BYTE)self[0xf];
      local_24 = (uint *)operator_new();
      if (local_24 != (uint *)0x0) {
        ehContext = 0x44;
        FUN_004189e8(local_24,&logFont);
      }
      self[6] = (int)local_24;
    }
  }
  else {
    ehContext = 8;
    local_7c = FUN_004188f4(gdiObject2,iVar1,0);
    ehDtorCount = ehDtorCount + 2;
    iVar1 = GetObjectA((HANDLE)*local_7c,0x3c,&logFont);
    cVar4 = iVar1 != 0;
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject2,0);
    if (cVar4 != '\0') {
      logFont.lfUnderline = (BYTE)self[0xf];
      local_18 = (uint *)operator_new();
      if (local_18 != (uint *)0x0) {
        ehContext = 0x20;
        FUN_004189e8(local_18,&logFont);
      }
      self[6] = (int)local_18;
    }
  }
  ehContext = 0x50;
  FUN_0042027c((int *)tmpBufferBase,0x104);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x5c;
  GetWindowTextA(*(HWND *)(*self + 0xc),(LPSTR)tmpBufferBase[0],0x104);
  if (*(int *)(self[0xd] + -4) == 0) {
    std::string::assign_cstr((int)(self + 0xb),tmpBufferBase[0]);
  }
  len = strlen(tmpBufferBase[0]);
  if (len == (char *)0x0) {
    SetWindowTextA(*(HWND *)(*self + 0xc),(LPCSTR)self[0xd]);
  }
  FUN_00428e6c(self);
  if ((self[7] != 0) && (*(int *)(*(int *)self[7] + 0xc) == 0)) {
    FUN_0042d484(*(int *)self[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)self[7] + 8) + 0x10))();
  }
  if (self[7] != 0) {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_0042d568(*self,&rect);
    ehContext = 0x68;
    FUN_00425634(lParam,*(undefined4 *)(*self + 0xc),&rect.left,0x3eb,(uint *)0xffffffff);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x74;
    FUN_004256d0((int)lParam,(uint *)self[0xd],'\x01');
    FUN_0042d1a4(*(int *)self[7],0x404,0,(LPARAM)lParam);
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
    ehContext = 0x5c;
  }
  ehDtorCount = ehDtorCount + -2;
  OWL::TTmpBufferBase::_dtor((undefined4*)tmpBufferBase,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428438  OWL::TUrlLink::EnableTooltip   (148 bytes)   [rtti:vtable virtual slot 2]
//   override of OWL::TWindow vtable slot 2, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a3d5); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf13 [rtti:vtable]
void __cdecl OWL::TUrlLink::EnableTooltip(int *self,byte wParam)

{
  int *tooltip;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x469c78);
  if (self[7] == 0) {
    tooltip = (int *)operator_new();
    if (tooltip != (int *)0x0) {
      OWL::TTooltip::TTooltip(tooltip,0,*self,'\x01',0);
    }
    FUN_004284cc(self,(int)tooltip);
  }
  else if (*(int *)(*(int *)self[7] + 0xc) != 0) {
    FUN_0042d1a4(*(int *)self[7],0x401,(uint)wParam,0);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428628  OWL::TUrlLink::PreProcessMsg   (134 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a3c2); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf14 [rtti:vtable]
void __cdecl OWL::TUrlLink::PreProcessMsg(int *self,LPMSG lParam)

{
  BOOL ok;
  
  if (self[7] != 0) {
    ok = IsWindow(*(HWND *)(*(int *)self[7] + 0xc));
    if (ok != 0) {
      if (*(HWND *)(*self + 0xc) != lParam->hwnd) {
        ok = IsChild(*(HWND *)(*self + 0xc),lParam->hwnd);
        if (ok == 0) goto LAB_0042869e;
      }
      if ((0x1ff < lParam->message) && (lParam->message < 0x20e)) {
        FUN_0042d1a4(*(int *)self[7],0x407,0,(LPARAM)lParam);
      }
    }
  }
LAB_0042869e:
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004286dc  OWL::TUrlLink::GetWindowClass   (116 bytes)   [rtti:vtable virtual slot 28]
//   override of OWL::TWindow vtable slot 28, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a389); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf16 [rtti:vtable]
void __cdecl OWL::TUrlLink::GetWindowClass(int *self,LPWNDCLASSA wndClass)

{
  BOOL ok;
  LPCSTR pCVar2;
  
  ok = GetClassInfoA((HINSTANCE)0x0,"STATIC",wndClass);
  if (ok == 0) {
    OWL::TWindow::GetWindowClass(*self,&wndClass->style);
    wndClass->style = 0x83;
    wndClass->hbrBackground = (HBRUSH)0x10;
    wndClass->hCursor = *(HCURSOR *)(*self + 0x58);
  }
  else {
    wndClass->hInstance = *(HINSTANCE *)(*(int *)(*self + 0x70) + 8);
    wndClass->style = 0x83;
    pCVar2 = (LPCSTR)(**(code **)(self[3] + 0x2c))();
    wndClass->lpszClassName = pCVar2;
    wndClass->lpfnWndProc = FUN_004286b0;
    wndClass->hCursor = *(HCURSOR *)(*self + 0x58);
    wndClass->hbrBackground = (HBRUSH)0x10;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428750  OWL::TUrlLink::Paint   (616 bytes)   [rtti:vtable virtual slot 21]
//   override of OWL::TWindow vtable slot 21, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a3af); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf17 [rtti:vtable]
void __cdecl OWL::TUrlLink::Paint(int *self,int param_2)

{
  uint *puVar1;
  bool bVar2;
  HWND hWnd;
  HGDIOBJ hGdiObject;
  int i;
  undefined4 *sehChainHead;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT rect [2];
  int unused;
  LPSTR string_;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *unused2;
  uint *unused3;
  uint *local_10;
  LPSTR unused4;
  uint *gdiObject;
  
  __InitExceptBlockLDTC(0x469d78);
  gdiObject = (uint *)0x0;
  unused4 = (LPSTR)0x0;
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  puVar1 = gdiObject;
  if (self[6] == 0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x31;
    hWnd = GetParent(*(HWND *)(*self + 0xc));
    hGdiObject = (HGDIOBJ)SendMessageA(hWnd,Msg,wParam,lParam);
    if (hGdiObject == (HGDIOBJ)0x0) {
      bVar2 = FUN_004109c0();
      if (bVar2) {
        i = 0xc;
      }
      else {
        i = 0xd;
      }
      hGdiObject = GetStockObject(i);
    }
    puVar1 = gdiObject;
    if (hGdiObject != (HGDIOBJ)0x0) {
      local_10 = (uint *)operator_new();
      if (local_10 != (uint *)0x0) {
        ehContext = 0x38;
        FUN_004188f4(local_10,hGdiObject,0);
        ehContext = 0x2c;
      }
      puVar1 = local_10;
      unused3 = gdiObject;
      if (gdiObject != (uint *)0x0) {
        ehContext = 0x44;
        ehDtorCount = ehDtorCount + -1;
        OWL::TGdiObject::_dtor(gdiObject,0);
        operator_delete();
        ehContext = 0x2c;
      }
    }
  }
  gdiObject = puVar1;
  if (self[6] == 0) {
    if (gdiObject != (uint *)0x0) {
      (**(code **)(*(int *)(param_2 + 5) + 0x14))();
    }
  }
  else {
    (**(code **)(*(int *)(param_2 + 5) + 0x14))();
  }
  i = GetWindowTextLengthA(*(HWND *)(*self + 0xc));
  ehContext = 0x14;
  string_ = (LPSTR)operator_new_array();
  operator_delete_array();
  unused4 = string_;
  GetWindowTextA(*(HWND *)(*self + 0xc),string_,i + 1);
  rect[0].left = 0;
  rect[0].top = 0;
  rect[0].right = 0;
  rect[0].bottom = 0;
  FUN_0042d568(*self,rect);
  unused = self[8];
  if (*(char *)((int)self + 0x3e) == '\0') {
    if (*(char *)((int)self + 0x3d) != '\0') {
      unused = self[9];
    }
  }
  else {
    unused = self[10];
  }
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x50))();
  (**(code **)(*(int *)(param_2 + 5) + 0x20))();
  (**(code **)(*(int *)(param_2 + 5) + 0x24))();
  if ((self[6] != 0) || (gdiObject != (uint *)0x0)) {
    (**(code **)(*(int *)(param_2 + 5) + 0x1c))();
  }
  ehDtorCount = ehDtorCount + -1;
  operator_delete_array();
  unused2 = gdiObject;
  if (gdiObject != (uint *)0x0) {
    ehContext = 0x68;
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject,0);
    operator_delete();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428a1c  OWL::TUrlLink::EvPaint   (121 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_PAINT
void __cdecl OWL::TUrlLink::EvPaint(int *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int paintDC [26];
  
  __InitExceptBlockLDTC(0x469e0c);
  FUN_004239f8(paintDC,*(HWND *)(*self + 0xc));
  (**(code **)(self[3] + 0x44))();
  OWL::TPaintDC::_dtor(paintDC,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428a98  OWL::TUrlLink::EvMsg_19   (180 bytes)   [owl:response-table message-handler]
//   message 0x0019
uint __cdecl OWL::TUrlLink::EvMsg_19(int *self,HDC hdc,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *sehChainHead;
  COLORREF color;
  COLORREF color2;
  COLORREF color3;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int tdc [9];
  
  __InitExceptBlockLDTC(0x469e4c);
  ehContext = 8;
  FUN_00416a98(tdc,hdc);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  if (*(char *)((int)self + 0x3e) == '\0') {
    if (*(char *)((int)self + 0x3d) == '\0') {
      OWL::TDC::vf9(&color,tdc,(uint *)(self + 8));
    }
    else {
      OWL::TDC::vf9(&color2,tdc,(uint *)(self + 9));
    }
  }
  else {
    OWL::TDC::vf9(&color3,tdc,(uint *)(self + 10));
  }
  uVar1 = OWL::TWindow::EvMsg_19(*self,hdc,param_3,param_4);
  ehDtorCount = ehDtorCount + -1;
  OWL::TDC::_dtor(tdc,2);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428b4c  OWL::TUrlLink::EvLButtonDown   (104 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONDOWN
void __cdecl OWL::TUrlLink::EvLButtonDown(int *self)

{
  int iVar1;
  
  OWL::TWindow::EvLButtonDown(*self);
  iVar1 = (**(code **)(self[3] + 0x4c))();
  if (iVar1 < 0x21) {
    MessageBeep(0x30);
    (**(code **)(self[3] + 0x50))();
  }
  else {
    ReleaseCapture();
    *(undefined1 *)((int)self + 0x3e) = 0;
    (**(code **)(*(int *)(*self + 8) + 0x68))();
    FUN_00428e48(self,1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428bb4  OWL::TUrlLink::EvMouseMove   (162 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl OWL::TUrlLink::EvMouseMove(int *self,undefined4 modKeys,int *point)

{
  bool bVar1;
  tagRECT rect;
  
  FUN_0042b294(*self);
  if (*(char *)((int)self + 0x3e) == '\0') {
    SetCapture(*(HWND *)(*self + 0xc));
    *(undefined1 *)((int)self + 0x3e) = 1;
    (**(code **)(*(int *)(*self + 8) + 0x68))();
  }
  else {
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_0042d568(*self,&rect);
    if ((((*point < rect.left) || (rect.right <= *point)) || (point[1] < rect.top)
        ) || (rect.bottom <= point[1])) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      ReleaseCapture();
      *(undefined1 *)((int)self + 0x3e) = 0;
      (**(code **)(*(int *)(*self + 8) + 0x68))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428c58  OWL::TUrlLink::EvGetfont   (25 bytes)   [owl:response-table message-handler]
//   WM_GETFONT
undefined4 __cdecl OWL::TUrlLink::EvGetfont(int self)

{
  undefined4 uVar1;
  
  if (*(int *)(self + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(self + 0x18);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428c74  OWL::TUrlLink::EvSetfont   (248 bytes)   [owl:response-table message-handler]
//   WM_SETFONT
void __cdecl OWL::TUrlLink::EvSetfont(int *self,undefined4 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  char cVar3;
  LOGFONTA logFont;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *local_14;
  uint gdiObject [2];
  uint *gdiObject2;
  
  __InitExceptBlockLDTC(0x469e9c);
  FUN_0042b294(*self);
  gdiObject2 = (uint *)self[6];
  if (gdiObject2 != (uint *)0x0) {
    ehContext = 0x14;
    ehDtorCount = ehDtorCount + -1;
    OWL::TGdiObject::_dtor(gdiObject2,0);
    operator_delete();
  }
  ehContext = 0x20;
  puVar1 = FUN_004188f4(gdiObject,param_2,0);
  ehDtorCount = ehDtorCount + 2;
  iVar2 = GetObjectA((HANDLE)*puVar1,0x3c,&logFont);
  cVar3 = iVar2 != 0;
  ehDtorCount = ehDtorCount + -2;
  OWL::TGdiObject::_dtor(gdiObject,0);
  if (cVar3 != '\0') {
    logFont.lfUnderline = (BYTE)self[0xf];
    local_14 = (uint *)operator_new();
    if (local_14 != (uint *)0x0) {
      ehContext = 0x38;
      FUN_004189e8(local_14,&logFont);
      ehContext = 0x2c;
    }
    self[6] = (int)local_14;
  }
  if (param_3 != '\0') {
    (**(code **)(*(int *)(*self + 8) + 0x68))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428d6c  OWL::TUrlLink::EvGetDlgCode   (10 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
undefined4 __stdcall OWL::TUrlLink::EvGetDlgCode(void)

{
  return 0x104;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428d78  OWL::TUrlLink::vf18   (205 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TUrlLink::vf18(int *self)

{
  LPSTR lpBuffer;
  HMODULE hInstance;
  HCURSOR hIcon;
  HICON hIcon2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x469f00);
  FUN_0042d6f8(*self,*(int *)(*self + 0x70),0x3f8);
  if (*(int *)(*self + 0x58) == 0) {
    lpBuffer = (LPSTR)operator_new_array();
    GetWindowsDirectoryA(lpBuffer,0x104);
    FUN_00455ae4(lpBuffer,"\\winhlp32.exe");
    hInstance = LoadLibraryA(lpBuffer);
    if (hInstance != (HMODULE)0x0) {
      hIcon = LoadCursorA(hInstance,(LPCSTR)0x6a);
      if (hIcon != (HCURSOR)0x0) {
        hIcon2 = CopyIcon(hIcon);
        *(HICON *)(*self + 0x58) = hIcon2;
      }
      FreeLibrary(hInstance);
    }
    operator_delete_array();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428fcc  OWL::TUrlLink::vf19   (2799 bytes)   [rtti:vtable virtual slot 19]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
uint __cdecl OWL::TUrlLink::vf19(undefined4 self,uint *param_2,UINT cmdShow)

{
  uint uVar1;
  undefined *puVar2;
  char *len;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined4 unused2;
  undefined4 unused3;
  int unused4;
  int unused5;
  undefined1 *unused6;
  undefined4 unused7;
  LPCSTR unused8;
  LPCSTR unused9;
  int *strRep2;
  uint pos;
  undefined1 s;
  undefined1 *unused10;
  undefined4 unused11;
  int *unused12;
  int *unused13;
  int *strRep3;
  int *newData2;
  int *unused14;
  uint unused15;
  undefined1 *unused16;
  int *newRep;
  int *unused17;
  uint len2;
  int *strRep4;
  undefined1 *unused18;
  int *unused19;
  undefined4 unused20;
  uint *msgText;
  uint local_19c;
  uint local_198;
  undefined1 s2;
  uint local_190;
  undefined1 *unused21;
  undefined4 unused22;
  int *unused23;
  int *unused24;
  int *strRep5;
  int *unused25;
  int *unused26;
  uint unused27;
  undefined1 *unused28;
  int *newRep2;
  int *unused29;
  uint len3;
  int *strRep6;
  undefined1 *unused30;
  int *unused31;
  undefined4 unused32;
  uint *msgText2;
  uint local_140;
  undefined1 *unused33;
  undefined4 unused34;
  int unused35;
  int unused36;
  int *strRep7;
  undefined1 *unused37;
  undefined4 unused38;
  int unused39;
  int unused40;
  int *strRep8;
  undefined4 *local_104;
  uint pos2;
  undefined4 *local_f4;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str7;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused41;
  undefined1 str2 [8];
  int *str8;
  undefined **outOfRange2 [2];
  undefined1 newStr2 [8];
  int *unused42;
  undefined1 str3 [8];
  int str9;
  undefined1 str4 [8];
  int str10;
  undefined4 regValue [6];
  undefined4 regValue2 [6];
  undefined1 str5 [8];
  LPCSTR cmdLine;
  undefined1 str6 [8];
  int str11;
  
  __InitExceptBlockLDTC(0x46a03c);
  uVar1 = FUN_0044b070();
  if (0x20 < uVar1) goto LAB_00429aa9;
  ehContext = 0x14;
  std::string::string_from_cstr((int)str6,(uint *)&DAT_004699fe /* ".htm" */);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  iVar4 = str11;
  puVar2 = FUN_00410b08();
  local_f4 = FUN_00410e2c(regValue2,puVar2,iVar4);
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)str5,(uint *)local_f4[1]);
  OWL::TRegValue::_dtor((int)regValue2,2);
  ehContext = 8;
  if (*(int *)(cmdLine + -4) != 0) {
    std::string::operator_assign((int)str6,(int)str5);
    pos2 = *(uint *)(str11 + -4);
    len = strlen((uint *)"\\shell\\open\\command");
    std::string::replace((int)str6,pos2,0,0x469a03,(uint)len,0,(uint)len);
    ehContext = 0x2c;
    iVar4 = str11;
    puVar2 = FUN_00410b08();
    local_104 = FUN_00410e2c(regValue,puVar2,iVar4);
    ehDtorCount = ehDtorCount + 1;
    std::string::assign_cstr((int)str5,(uint *)local_104[1]);
    ehDtorCount = ehDtorCount + -1;
    OWL::TRegValue::_dtor((int)regValue,2);
    if (*(int *)(cmdLine + -4) != 0) {
      ehContext = 0x44;
      iVar4 = std::string::string_from_cstr((int)str4,(uint *)&DAT_00469a17 /* ""%1"" */);
      ehDtorCount = ehDtorCount + 1;
      uVar1 = FUN_00452cd8((int)str5,*(byte **)(iVar4 + 8),0,*(int *)(*(int *)(iVar4 + 8) + -4))
      ;
      ehDtorCount = ehDtorCount + -1;
      if (str10 != 0) {
        if (*(int *)(str10 + -0xc) != -1) {
          strRep8 = (int *)(str10 + -0xc);
          if (strRep8 == &g_nullStringRep) {
            iVar4 = 1;
          }
          else if (strRep8 == &g_nullStringRep) {
            iVar4 = 1;
          }
          else {
            *strRep8 = *strRep8 + -1;
            iVar4 = *strRep8 + 1;
          }
          if (iVar4 != 0) goto LAB_00429218;
        }
        unused40 = str10 + -0xc;
        unused39 = str10 + -0xc;
        operator_delete();
        unused38 = 0;
        str10 = 0;
        unused37 = str4;
        unused3 = 0;
      }
LAB_00429218:
      ehContext = 0x38;
      if (uVar1 == 0xffffffff) {
        ehContext = 0x5c;
        iVar4 = std::string::string_from_cstr((int)str3,(uint *)&DAT_00469a1c);
        ehDtorCount = ehDtorCount + 1;
        uVar1 = FUN_00452cd8((int)str5,*(byte **)(iVar4 + 8),0,
                             *(int *)(*(int *)(iVar4 + 8) + -4));
        ehDtorCount = ehDtorCount + -1;
        if (str9 != 0) {
          if (*(int *)(str9 + -0xc) != -1) {
            strRep7 = (int *)(str9 + -0xc);
            if (strRep7 == &g_nullStringRep) {
              iVar4 = 1;
            }
            else if (strRep7 == &g_nullStringRep) {
              iVar4 = 1;
            }
            else {
              *strRep7 = *strRep7 + -1;
              iVar4 = *strRep7 + 1;
            }
            if (iVar4 != 0) goto LAB_0042930e;
          }
          unused36 = str9 + -0xc;
          unused35 = str9 + -0xc;
          operator_delete();
          unused34 = 0;
          str9 = 0;
          unused33 = str3;
          unused2 = 0;
        }
LAB_0042930e:
        ehContext = 0x38;
        if (uVar1 != 0xffffffff) {
          local_140 = (*(uint *)&g_stringNpos);
          if (*(uint *)(cmdLine + -4) < uVar1) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            uVar7 = 1;
            puVar2 = &LAB_00403038;
            objectDtor = 0;
            ehContext = 0x80;
            msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,
                                             PTR_s_string_index_out_of_range_in_fun_00474074);
            std::string::string_from_cstr((int)str2,msgText2);
            ehDtorCount = ehDtorCount + 2;
            outOfRange2[0] = &std::logic_error::vftable;
            unused32 = 0;
            unused42 = (int *)0x0;
            ehContext = 0x8c;
            if (str8[-3] == -1 || str8[-3] + 1 < 0) {
              len3 = str8[-1];
              newRep2 = std::string::__getRep(newStr2,len3,len3);
              newData = newRep2 + 3;
              unused28 = newStr2;
              unused27 = len3;
              unused26 = str8;
              unused25 = newData;
              unused29 = newData;
              unused42 = newData;
              memcpy(newData,str8,len3);
            }
            else {
              unused31 = str8;
              unused42 = str8;
              unused30 = newStr2;
              strRep6 = str8 + -3;
              if (strRep6 != &g_nullStringRep) {
                *strRep6 = *strRep6 + 1;
              }
            }
            ehContext = 0x80;
            outOfRange2[0] = &std::out_of_range::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str8 != (int *)0x0) {
              if (str8[-3] != -1) {
                strRep5 = str8 + -3;
                if (strRep5 == &g_nullStringRep) {
                  iVar4 = 1;
                }
                else if (strRep5 == &g_nullStringRep) {
                  iVar4 = 1;
                }
                else {
                  *strRep5 = *strRep5 + -1;
                  iVar4 = *strRep5 + 1;
                }
                if (iVar4 != 0) goto LAB_0042959c;
              }
              unused24 = str8 + -3;
              unused23 = str8 + -3;
              operator_delete();
              unused22 = 0;
              str8 = (int *)0x0;
              unused21 = str2;
              unused = 0;
            }
LAB_0042959c:
            ehContext = 0x74;
            _ThrowExceptionLDTC((uint *)&DAT_00402fdc,(undefined4*)outOfRange2,objectDtor,puVar2,uVar7,throwFlags,throwFile,throwLine);
          }
          local_190 = *(int *)(cmdLine + -4) - uVar1;
          s2 = 0;
          local_198 = local_190;
          if (local_140 < local_190) {
            local_198 = local_140;
          }
          std::string::replace((int)str5,uVar1,local_198,(uint)&s2,0,0,0);
        }
      }
      else {
        local_19c = (*(uint *)&g_stringNpos);
        if (*(uint *)(cmdLine + -4) < uVar1) {
          throwLine = 0;
          throwFile = 0;
          throwFlags = 0;
          uVar7 = 1;
          puVar2 = &LAB_00403038;
          objectDtor = 0;
          ehContext = 0xbc;
          msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,PTR_s_string_index_out_of_range_in_fun_00474074
                                          );
          std::string::string_from_cstr((int)str,msgText);
          ehDtorCount = ehDtorCount + 2;
          outOfRange[0] = &std::logic_error::vftable;
          unused20 = 0;
          unused41 = (int *)0x0;
          ehContext = 200;
          if (str7[-3] == -1 || str7[-3] + 1 < 0) {
            len2 = str7[-1];
            newRep = std::string::__getRep(newStr,len2,len2);
            newData2 = newRep + 3;
            unused16 = newStr;
            unused15 = len2;
            unused14 = str7;
            unused17 = newData2;
            unused41 = newData2;
            memcpy(newData2,str7,len2);
          }
          else {
            unused19 = str7;
            unused41 = str7;
            unused18 = newStr;
            strRep4 = str7 + -3;
            if (strRep4 != &g_nullStringRep) {
              *strRep4 = *strRep4 + 1;
            }
          }
          ehContext = 0xbc;
          outOfRange[0] = &std::out_of_range::vftable;
          ehDtorCount = ehDtorCount + 2;
          if (str7 != (int *)0x0) {
            if (str7[-3] != -1) {
              strRep3 = str7 + -3;
              if (strRep3 == &g_nullStringRep) {
                iVar4 = 1;
              }
              else if (strRep3 == &g_nullStringRep) {
                iVar4 = 1;
              }
              else {
                *strRep3 = *strRep3 + -1;
                iVar4 = *strRep3 + 1;
              }
              if (iVar4 != 0) goto LAB_004298a6;
            }
            unused13 = str7 + -3;
            unused12 = str7 + -3;
            operator_delete();
            unused11 = 0;
            str7 = (int *)0x0;
            unused10 = str;
          }
LAB_004298a6:
          ehContext = 0xb0;
          _ThrowExceptionLDTC((uint *)&DAT_00402fdc,(undefined4*)outOfRange,objectDtor,puVar2,uVar7,throwFlags,throwFile,throwLine);
        }
        uVar7 = *(int *)(cmdLine + -4) - uVar1;
        s = 0;
        if (local_19c < uVar7) {
          uVar7 = local_19c;
        }
        std::string::replace((int)str5,uVar1,uVar7,(uint)&s,0,0,0);
      }
      uVar1 = *(uint *)(cmdLine + -4);
      len = strlen((uint *)&DAT_00469a42);
      std::string::replace((int)str5,uVar1,0,0x469a42,(uint)len,0,(uint)len);
      pos = *(uint *)(cmdLine + -4);
      len = strlen(param_2);
      std::string::replace((int)str5,pos,0,(uint)param_2,(uint)len,0,(uint)len);
      uVar1 = WinExec(cmdLine,cmdShow);
      ehContext = 8;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  if (cmdLine != (LPCSTR)0x0) {
    if (*(int *)(cmdLine + -0xc) != -1) {
      strRep2 = (int *)(cmdLine + -0xc);
      if (strRep2 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        iVar4 = *strRep2 + 1;
      }
      if (iVar4 != 0) goto LAB_00429a0b;
    }
    unused9 = cmdLine + -0xc;
    unused8 = cmdLine + -0xc;
    operator_delete();
    unused7 = 0;
    cmdLine = (LPCSTR)0x0;
    unused6 = str5;
  }
LAB_00429a0b:
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  if (str11 != 0) {
    if (*(int *)(str11 + -0xc) != -1) {
      strRep = (int *)(str11 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar4 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar4 = *strRep + 1;
      }
      if (iVar4 != 0) goto LAB_00429aa9;
    }
    unused5 = str11 + -0xc;
    unused4 = str11 + -0xc;
    operator_delete();
  }
LAB_00429aa9:
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429abc  OWL::TUrlLink::vf20   (581 bytes, 2 ranges)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TUrlLink::vf20(int *self,undefined4 param_2)

{
  int prevRefs;
  uint uVar2;
  int *strRep;
  undefined4 *sehChainHead;
  CHAR local_160 [264];
  int unused;
  undefined1 *unused2;
  undefined4 unused3;
  LPCSTR unused4;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_24 [8];
  int str;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x46a160);
  switch(param_2) {
  case 0:
    uVar2 = 0x7ff9;
    break;
  default:
    ehContext = 8;
    FUN_00444058((int)local_14,*(int *)(*self + 0x70),0x7fd8);
    ehDtorCount = ehDtorCount + 1;
    wsprintfA(local_160,local_c,param_2);
    ehDtorCount = ehDtorCount + -1;
    if (local_c != (LPCSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        strRep = (int *)(local_c + -0xc);
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
        if (prevRefs != 0) goto LAB_00429c75;
      }
      unused4 = local_c + -0xc;
      operator_delete();
      unused3 = 0;
      local_c = (LPCSTR)0x0;
      unused2 = local_14;
    }
LAB_00429c75:
    (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
    *sehChainHead = sehPrevFrame;
    return;
  case 2:
    uVar2 = 0x7fcf;
    break;
  case 3:
    uVar2 = 0x7fce;
    break;
  case 5:
    uVar2 = 0x7fd1;
    break;
  case 8:
    uVar2 = 0x7ff9;
    break;
  case 0xb:
    uVar2 = 0x7fd0;
    break;
  case 0x1a:
    uVar2 = 0x7fd7;
    break;
  case 0x1b:
    uVar2 = 0x7fd2;
    break;
  case 0x1c:
    uVar2 = 0x7fd5;
    break;
  case 0x1d:
    uVar2 = 0x7fd4;
    break;
  case 0x1e:
    uVar2 = 0x7fd3;
    break;
  case 0x1f:
    uVar2 = 0x7fd6;
    break;
  case 0x20:
    uVar2 = 0x7fcf;
  }
  ehContext = 0x20;
  FUN_00444058((int)local_24,*(int *)(*self + 0x70),uVar2);
  ehDtorCount = ehDtorCount + 1;
  (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  ehDtorCount = ehDtorCount + -1;
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
      if (prevRefs != 0) goto LAB_00429d49;
    }
    unused = str + -0xc;
    operator_delete();
  }
LAB_00429d49:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429de0  OWL::TUrlLink::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TUrlLink::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TUrlLink::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a198);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TUrlLink::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00429d5c,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429e48  OWL::TUrlLink::TUrlLink   (358 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TUrlLink's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00429f95) */
int * __cdecl OWL::TUrlLink::TUrlLink(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46a1b0);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x4f;
    *(int *)((int)self + 0x4f) = (int)self + 0x43;
    *(int *)((int)self + 0x53) = (int)self + 0x47;
    self[1] = (int)self + 0x43;
    self[2] = (int)self + 0x47;
    *(undefined4 *)((int)self + 0x3f) = 0;
    *(undefined4 *)((int)self + 0x4b) = 0;
    *(undefined ***)((int)self + 0x43) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x47) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84((int *)((int)self + 0x4f),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x27;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x27;
  OWL::TStatic::TStatic_447bb4(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x27;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x27;
  self[3] = (int)&OWL::TUrlLink::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0046a2a0;
  *(undefined ***)self[2] = &PTR_LAB_0046a2ac;
  *(undefined ***)(*self + 8) = &OWL::TUrlLink::vftable_TWindow;
  self[8] = 0;
  self[9] = 0;
  self[10] = 0;
  self[0xd] = 0;
  self[0xd] = (int)&g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429fb0  OWL::TUrlLink::Streamer::vf1   (201 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TUrlLink::Streamer::vf1(int self,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0042a07c(*(int *)(self + 8),param_2);
  *(undefined4 *)(*(int *)(self + 8) + 0x18) = 0;
  FUN_0042280c(param_2,*(int *)(self + 8) + 0x20,4);
  FUN_0042280c(param_2,*(int *)(self + 8) + 0x24,4);
  FUN_0042280c(param_2,*(int *)(self + 8) + 0x28,4);
  iVar1 = *(int *)(self + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar2 != 0;
  iVar1 = *(int *)(self + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x3d) = iVar2 != 0;
  iVar1 = *(int *)(self + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x3e) = iVar2 != 0;
  (**(code **)(*(int *)(*(int *)(self + 8) + 0xc) + 0x48))();
  return *(undefined4 *)(self + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a0d4  OWL::TUrlLink::Streamer::vf2   (187 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TUrlLink::Streamer::vf2(int self,int *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0042a190(*(int *)(self + 8),param_2);
  local_8 = *(undefined4 *)(*(int *)(self + 8) + 0x20);
  FUN_00422d00(param_2,&local_8,4);
  local_c = *(undefined4 *)(*(int *)(self + 8) + 0x24);
  FUN_00422d00(param_2,&local_c,4);
  local_10 = *(undefined4 *)(*(int *)(self + 8) + 0x28);
  FUN_00422d00(param_2,&local_10,4);
  FUN_00422d88(param_2);
  FUN_00422d88(param_2);
  FUN_00422d88(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a338  OWL::TUrlLink::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TUrlLink::Streamer::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042a344  OWL::TUrlLink::GetTooltip   (11 bytes)   [rtti:vtable virtual slot 1]
//   override of OWL::TWindow vtable slot 1, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a3e8); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TUrlLink::vf12 [rtti:vtable]
undefined4 __cdecl OWL::TUrlLink::GetTooltip(int self)

{
  return *(undefined4 *)(self + 0x1c);
}

// ----------------------------------------------------------------------------------------------------
// 0x00447a08  OWL::TUrlLink::Transfer   (56 bytes)   [rtti:vtable virtual slot 22]
//   override of OWL::TWindow vtable slot 22, from OWL::TUrlLink's OWL::TWindow subobject vtable at 0x0046a2b8 (through the this-adjusting thunk at 0x0042a39c); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TStatic::vf10 [rtti:vtable]
int __cdecl OWL::TUrlLink::Transfer(int *self,LPSTR string_,int param_3)

{
  if (param_3 == 0) {
    GetWindowTextA(*(HWND *)(*self + 0xc),string_,self[5]);
  }
  else if (param_3 == 1) {
    SetWindowTextA(*(HWND *)(*self + 0xc),string_);
  }
  return self[5];
}

} // namespace tea
