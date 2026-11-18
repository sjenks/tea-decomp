// TEA.exe — application module "PVWColourButton"
// 10 functions, 0x0041875c..0x00418e14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041875c  PVWColourButton::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PVWColourButton::Find [rtti:vtable]; PVWColourButton::vf8 [rtti:vtable]
undefined4 __cdecl PVWColourButton::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&PVWColourButton::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = OWL::TButton::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004187a4  PVWColourButton::PVWColourButton   (336 bytes)   [rtti:vtable-store constructor]
//   constructor: stores PVWColourButton's vtable at its vptr offset (+0xc) in this
int * __cdecl PVWColourButton::PVWColourButton(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee360);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xf);
    self[0xf] = (int)(self + 0xc);
    self[0x10] = (int)(self + 0xd);
    self[1] = (int)(self + 0xc);
    self[2] = (int)(self + 0xd);
    self[0xb] = 0;
    self[0xe] = 0;
    self[0xc] = (int)&OWL::TEventHandler::vftable;
    self[0xd] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xf,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x16;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x16;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TButton::TButton(self,1,uVar1,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x16;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x16;
  self[3] = (int)&PVWColourButton::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f08c0;
  *(undefined ***)self[2] = &PTR_LAB_004f08cc;
  *(undefined ***)(*self + 8) = &PVWColourButton::vftable_TWindow;
  self[6] = (int)param_3;
  self[7] = 1;
  self[9] = 1;
  self[10] = param_5;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418914  PVWColourButton::~PVWColourButton   (251 bytes)   [rtti:dtor destructor]
//   written in code as PVWColourButton::_dtor
void __cdecl PVWColourButton::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ee384);
  if (self != (int *)0x0) {
    self[3] = (int)&PVWColourButton::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004f08c0;
    *(undefined ***)self[2] = &PTR_LAB_004f08cc;
    *(undefined ***)(*self + 8) = &PVWColourButton::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x16;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x16;
    OWL::TButton::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x16;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x16;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xf,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xd,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a10  PVWColourButton::PreProcessMsg   (54 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PVWColourButton's OWL::TWindow subobject vtable at 0x004f08d8 (through the this-adjusting thunk at 0x00422855); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PVWColourButton::vf11 [rtti:vtable]
void __cdecl PVWColourButton::PreProcessMsg(int *self,LPMSG lParam)

{
  if (lParam->message == 0x200) {
    (**(code **)(*(int *)(self[6] + 0xc) + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a48  PVWColourButton::SetColour   (40 bytes)   [analysis]
//   the colour shown by the button
void __cdecl PVWColourButton::SetColour(int *self,int *colour)

{
  self[8] = *colour;
  self[9] = 0;
  self[7] = 0;
  (**(code **)(*(int *)(*self + 8) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a70  PVWColourButton::EvRegisteredMsg_418a70   (30 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __stdcall PVWColourButton::EvRegisteredMsg_418a70(void)

{
  ShowContextHelp();
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a90  PVWColourButton::vf7   (22 bytes)   [rtti:vtable virtual slot 7]
void __cdecl PVWColourButton::vf7(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418aa8  PVWColourButton::vf6   (22 bytes)   [rtti:vtable virtual slot 6]
void __cdecl PVWColourButton::vf6(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x14))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418ac0  PVWColourButton::vf5   (609 bytes)   [rtti:vtable virtual slot 5]
void __cdecl PVWColourButton::vf5(int self,int param_2)

{
  HGDIOBJ hGdiObject;
  int *piVar2;
  RECT *pRect;
  undefined4 *sehChainHead;
  byte bVar4;
  int iVar5;
  int local_a8 [4];
  tagRECT rect;
  RECT rect2;
  int unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  LOGBRUSH logBrush;
  undefined4 *local_3c;
  uint brush [2];
  uint gdiObject [2];
  HDC tdc [9];
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4ee414);
  ehContext = 8;
  FUN_0048d7c8((undefined4*)tdc,*(undefined4 *)(param_2 + 0x18));
  ehDtorCount = ehDtorCount + 1;
  rect2.bottom = *(int *)(param_2 + 0x28);
  rect2.right = *(int *)(param_2 + 0x24);
  rect2.top = *(int *)(param_2 + 0x20);
  rect2.left = *(int *)(param_2 + 0x1c);
  unused = rect2.left;
  if (((*(char *)(self + 0x15) != '\0') && (2 < rect2.right - rect2.left)) &&
     (2 < rect2.bottom - rect2.top)) {
    ehContext = 0x20;
    FUN_0049b6a8(gdiObject,(uint *)&DAT_0051b1bc,1,0);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_0048d8f4((undefined4*)tdc,gdiObject);
    ehContext = 0x38;
    iVar5 = 0;
    hGdiObject = GetStockObject(5);
    FUN_004ab7e4(brush,hGdiObject,iVar5);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_0048d938((undefined4*)tdc,brush);
    Rectangle(tdc[0],rect2.left,rect2.top,rect2.right,rect2.bottom);
    FUN_00494470(&rect2.left,-1,-1);
    FUN_0048da64((undefined4*)tdc);
    FUN_0048da38((undefined4*)tdc);
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject,0);
  }
  ehContext = 0x14;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    iVar5 = 6;
  }
  else {
    iVar5 = 7;
  }
  FUN_0049f930(&rect.left,&rect2.left,iVar5,0);
  ehContext = 0x14;
  FUN_0049fa58(&rect,(undefined4*)tdc);
  FUN_0049f9e0(local_a8,&rect.left);
  piVar2 = local_a8;
  pRect = &rect2;
  for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    pRect->left = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    pRect = (RECT *)((int)pRect + ((uint)bVar4 * -2 + 1) * 4);
  }
  if (*(int *)(self + 0x24) == 0) {
    ehContext = 0x44;
    MakeLogBrush(&logBrush,*(COLORREF *)(self + 0x20));
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x50;
    FillRect(tdc[0],&rect2,(HBRUSH)*local_3c);
    FUN_00494470(&rect2.left,-1,-1);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      DrawFocusRect(tdc[0],&rect2);
    }
    ehDtorCount = ehDtorCount + -1;
    PVWBrush::_dtor((int)&logBrush,2);
    ehContext = 0x14;
  }
  ehDtorCount = ehDtorCount + -1;
  OWL::TDC::_dtor((int *)tdc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418e14  PVWColourButton::BNClicked   (498 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl PVWColourButton::BNClicked(int *self)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  char cVar3;
  undefined4 sehPrevFrame;
  int chooseColorDialog [55];
  undefined1 introductionViewWindows [8];
  int str;
  undefined4 local_18 [2];
  uint local_10;
  undefined *unused;
  undefined4 unused2;
  
  __InitExceptBlockLDTC(0x4ee4bc);
  unused2 = 0;
  local_18[0] = 9;
  unused = &DAT_004ee30c;
  local_10 = self[8];
  IntroductionViewWindows::GetEditText((int)introductionViewWindows,self[10]);
  (**(code **)(*(int *)(self[6] + 0xc) + 0xa4))();
  piVar1 = OWL::TChooseColorDialog::TChooseColorDialog(chooseColorDialog,0,*self,(int)local_18,0,str,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  OWL::TChooseColorDialog::_dtor(chooseColorDialog,2);
  if (cVar3 != '\0') {
    GetDlgCtrlID(*(HWND *)(*self + 0xc));
    FUN_0048c12c(&local_10);
    (**(code **)(*(int *)(self[6] + 0xc) + 0x6c))();
  }
  (**(code **)(*(int *)(self[6] + 0xc) + 0xa4))();
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
      if (iVar2 != 0) goto LAB_00418fd3;
    }
    operator_delete();
    str = 0;
  }
LAB_00418fd3:
  operator_delete_array();
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
