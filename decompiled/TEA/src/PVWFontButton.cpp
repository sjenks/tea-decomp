// TEA.exe — application module "PVWFontButton"
// 10 functions, 0x004190f0..0x00419874. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004190f0  PVWFontButton::Find   (70 bytes)   [owl:response-table response-table-find; function defined from vtable-slot]
//   also: PVWFontButton::Find [rtti:vtable]; PVWFontButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWFontButton::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWFontButton::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TButton::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419138  PVWFontButton::PVWFontButton   (390 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWFontButton's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWFontButton::PVWFontButton(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5,int param_6 ,int param_7)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee568);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x26);
    self[0x26] = (int)(self + 0x23);
    self[0x27] = (int)(self + 0x24);
    self[1] = (int)(self + 0x23);
    self[2] = (int)(self + 0x24);
    self[0x22] = 0;
    self[0x25] = 0;
    self[0x23] = (int)&OWL::TEventHandler::vftable;
    self[0x24] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x26,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x72;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x72;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TButton::TButton(self,1,uVar1,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x72;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x72;
  self[3] = (int)&PVWFontButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f07dc;
  *(undefined ***)self[2] = &PTR_LAB_004f07e8;
  *(undefined ***)(*self + 8) = &PVWFontButton::vftable_TWindow;
  self[6] = (int)param_3;
  self[7] = 1;
  self[0x1e] = 1;
  self[0x1f] = param_5;
  self[0x20] = param_6;
  self[0x21] = param_7;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004192dc  PVWFontButton::~PVWFontButton   (257 bytes)   [rtti:dtor destructor]
//   written in code as PVWFontButton::_dtor
void __cdecl PVWFontButton::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee58c);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWFontButton::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f07dc;
    *(undefined ***)self[2] = &PTR_LAB_004f07e8;
    *(undefined ***)(*self + 8) = &PVWFontButton::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x72;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x72;
    OWL::TButton::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x72;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x72;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x26,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x24,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004193e0  PVWFontButton::PreProcessMsg   (54 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PVWFontButton's OWL::TWindow subobject vtable at 0x004f07f4 (through the this-adjusting thunk at 0x004227cf); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWFontButton::vf11 [rtti:vtable]
void __cdecl PVWFontButton::PreProcessMsg(int *self,LPMSG lParam)

{
  if (lParam->message == 0x200) {
    (**(code **)(*(int *)(self[6] + 0xc) + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419418  PVWFontButton::SetSampleFont   (109 bytes)   [analysis]
//   sets the font shown on the button and updates the scroller range
void __cdecl PVWFontButton::SetSampleFont(int *self,int *logFont,int *colour,int x,int y,int w,int h)

{
  int i;
  int *piVar2;
  
  piVar2 = self + 8;
  for (i = 0x10; i != 0; i = i + -1) {
    *piVar2 = *logFont;
    logFont = logFont + 1;
    piVar2 = piVar2 + 1;
  }
  self[0x18] = *colour;
  self[0x1a] = x;
  self[0x1b] = y;
  self[0x1c] = w;
  self[0x1d] = h;
  MyScroller::UpdateRange((int)(self + 8));
  self[0x1e] = 0;
  self[7] = 0;
  (**(code **)(*(int *)(*self + 8) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419488  PVWFontButton::EvRegisteredMsg_419488   (30 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __stdcall PVWFontButton::EvRegisteredMsg_419488(void)

{
  ShowContextHelp();
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004194a8  PVWFontButton::vf7   (22 bytes)   [rtti:vtable virtual slot 7]
void __cdecl PVWFontButton::vf7(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004194c0  PVWFontButton::vf6   (22 bytes)   [rtti:vtable virtual slot 6]
void __cdecl PVWFontButton::vf6(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004194d8  PVWFontButton::vf5   (923 bytes)   [rtti:vtable virtual slot 5]
void __cdecl PVWFontButton::vf5(int self,int param_2)

{
  HGDIOBJ hGdiObject;
  uint *puVar2;
  HDC hdc;
  int *piVar4;
  RECT *pRect;
  undefined4 *sehChainHead;
  byte bVar6;
  int mode;
  int local_bc [4];
  tagRECT rect;
  RECT rect2;
  COLORREF color;
  uint local_80;
  COLORREF color2;
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint gdiObject [2];
  LOGBRUSH logBrush;
  undefined4 *local_3c;
  uint brush [2];
  uint gdiObject2 [2];
  HDC hdc2;
  int local_23;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4ee62c);
  ehContext = 8;
  FUN_0048d7c8((undefined4*)&hdc2,*(undefined4 *)(param_2 + 0x18));
  ehDtorCount = ehDtorCount + 1;
  rect2.bottom = *(int *)(param_2 + 0x28);
  rect2.right = *(int *)(param_2 + 0x24);
  rect2.top = *(int *)(param_2 + 0x20);
  rect2.left = *(int *)(param_2 + 0x1c);
  unused = rect2.left;
  if (((*(char *)(self + 0x15) != '\0') && (2 < rect2.right - rect2.left)) &&
     (2 < rect2.bottom - rect2.top)) {
    ehContext = 0x20;
    FUN_0049b6a8(gdiObject2,(uint *)&DAT_0051b1bc,1,0);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_0048d8f4((undefined4*)&hdc2,gdiObject2);
    ehContext = 0x38;
    mode = 0;
    hGdiObject = GetStockObject(5);
    FUN_004ab7e4(brush,hGdiObject,mode);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_0048d938((undefined4*)&hdc2,brush);
    Rectangle(hdc2,rect2.left,rect2.top,rect2.right,rect2.bottom);
    FUN_00494470(&rect2.left,-1,-1);
    FUN_0048da64((undefined4*)&hdc2);
    FUN_0048da38((undefined4*)&hdc2);
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject2,0);
  }
  ehContext = 0x14;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    mode = 6;
  }
  else {
    mode = 7;
  }
  FUN_0049f930(&rect.left,&rect2.left,mode,0);
  ehContext = 0x14;
  FUN_0049fa58(&rect,(undefined4*)&hdc2);
  FUN_0049f9e0(local_bc,&rect.left);
  piVar4 = local_bc;
  pRect = &rect2;
  for (mode = 4; mode != 0; mode = mode + -1) {
    pRect->left = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
  }
  if ((*(int *)(self + 0x78) == 0) && (*(int *)(self + 0x1c) == 0)) {
    ehContext = 0x44;
    MakeLogBrush(&logBrush,*(COLORREF *)(self + 0x60));
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x50;
    FillRect(hdc2,&rect2,(HBRUSH)*local_3c);
    local_80 = *(uint *)(self + 0x20);
    OWL::TDC::vf9(&color2,(int *)&hdc2,&local_80);
    ehContext = 0x5c;
    puVar2 = FUN_0048f7fc(gdiObject,(LOGFONTA *)(self + 0x24));
    ehDtorCount = ehDtorCount + 2;
    OWL::TDC::vf5((undefined4*)&hdc2,puVar2);
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject,0);
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    if (hdc != hdc2) {
      SetBkMode(hdc2,1);
    }
    mode = 1;
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    mode = SetBkMode(hdc,mode);
    ehContext = 0x50;
    OWL::TDC::vf20((undefined4*)&hdc2,*(LPCSTR *)(self + 0x84),-1,&rect2,0x25);
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    if (hdc != hdc2) {
      SetBkMode(hdc2,mode);
    }
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    SetBkMode(hdc,mode);
    OWL::TDC::vf7((undefined4*)&hdc2);
    OWL::TDC::vf9(&color,(int *)&hdc2,&color2);
    FUN_00494470(&rect2.left,-1,-1);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      DrawFocusRect(hdc2,&rect2);
    }
    ehDtorCount = ehDtorCount + -1;
    PVWBrush::_dtor((int)&logBrush,2);
    ehContext = 0x14;
  }
  ehDtorCount = ehDtorCount + -1;
  OWL::TDC::_dtor((int *)&hdc2,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419874  PVWFontButton::BNClicked   (696 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWFontButton::BNClicked(int *self)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *sehChainHead;
  char cVar4;
  byte bVar5;
  int local_1f4;
  int local_1f0;
  int local_1a8 [2];
  undefined4 unused;
  int newStr [16];
  uint local_15c [6];
  int unused2;
  double local_140;
  double local_138;
  uint unused3;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int chooseFontDialog [61];
  undefined1 introductionViewWindows [8];
  int str;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x4ee6c4);
  local_15c[0] = 0;
  ehContext = 0x14;
  IntroductionViewWindows::GetEditText((int)introductionViewWindows,self[0x1f]);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  local_15c[0] = self[8];
  unused = 0;
  local_1a8[0] = self[0x20];
  piVar1 = self + 9;
  piVar3 = newStr;
  unused3 = local_15c[0];
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  (**(code **)(*(int *)(self[6] + 0xc) + 0xa4))();
  ehContext = 0x20;
  piVar1 = OWL::TChooseFontDialog::TChooseFontDialog(chooseFontDialog,0,*self,(int)local_1a8,0,str,0);
  ehDtorCount = ehDtorCount + 5;
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar4 = iVar2 == 1;
  ehDtorCount = ehDtorCount + -5;
  OWL::TChooseFontDialog::_dtor(chooseFontDialog,2);
  if (cVar4 != '\0') {
    piVar1 = newStr;
    piVar3 = &local_1f4;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + (uint)bVar5 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    }
    FUN_0048c12c(local_15c);
    local_138 = (double)local_1f0 * *(double *)(self + 0x1a);
    ehContext = 8;
    if (local_138 <= 0.0) {
      if (local_138 < 0.0) {
        local_1f0 = __ftol();
      }
    }
    else {
      local_1f0 = __ftol();
    }
    local_140 = (double)local_1f4 * *(double *)(self + 0x1c);
    if (local_140 <= 0.0) {
      if (local_140 < 0.0) {
        local_1f4 = __ftol();
      }
    }
    else {
      local_1f4 = __ftol();
    }
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    (**(code **)(*(int *)(self[6] + 0xc) + 0x70))();
  }
  (**(code **)(*(int *)(self[6] + 0xc) + 0xa4))();
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      piVar1 = (int *)(str + -0xc);
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
      if (iVar2 != 0) goto LAB_00419b0f;
    }
    unused2 = str + -0xc;
    operator_delete();
  }
LAB_00419b0f:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
