// TEA.exe — application module "TEAProgressBar"
// 7 functions, 0x0044fb08..0x004508e0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044fb08  TEAProgressBar::TEAProgressBar   (342 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAProgressBar's vtable at its vptr offset (+0xc) in this
int * __cdecl TEAProgressBar::TEAProgressBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f7908);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x15);
    self[0x15] = (int)(self + 0x12);
    self[0x16] = (int)(self + 0x13);
    self[1] = (int)(self + 0x12);
    self[2] = (int)(self + 0x13);
    self[0x11] = 0;
    self[0x14] = 0;
    self[0x12] = (int)&OWL::TEventHandler::vftable;
    self[0x13] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x15,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2e;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2e;
  OWL::TButton::TButton(self,1,param_3,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2e;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2e;
  self[3] = (int)&TEAProgressBar::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fa260;
  *(undefined ***)self[2] = &PTR_LAB_004fa26c;
  *(undefined ***)(*self + 8) = &TEAProgressBar::vftable_TWindow;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  self[9] = 0;
  self[10] = 0;
  self[0xb] = 0;
  self[0xc] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fc80  TEAProgressBar::~TEAProgressBar   (251 bytes)   [rtti:dtor destructor]
//   written in code as TEAProgressBar::_dtor
void __cdecl TEAProgressBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f792c);
  if (self != (int *)0x0) {
    self[3] = (int)&TEAProgressBar::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004fa260;
    *(undefined ***)self[2] = &PTR_LAB_004fa26c;
    *(undefined ***)(*self + 8) = &TEAProgressBar::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2e;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2e;
    OWL::TButton::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2e;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2e;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x15,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x13,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fd7c  TEAProgressBar::SetRange   (59 bytes)   [analysis]
//   sets the range of the progress bar
void __cdecl TEAProgressBar::SetRange(int *self,int low,int high)

{
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  self[9] = 0;
  self[0xc] = low;
  self[10] = 0;
  self[0xb] = high;
  (**(code **)(*(int *)(*self + 8) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044fdb8  TEAProgressBar::StartDictionary   (266 bytes)   [analysis]
//   sets the bar's range from the number of words to scan in the dictionary's length range
void __cdecl TEAProgressBar::StartDictionary(int *self,int dictList,int dictIndex,int pane,int view)

{
  int length;
  undefined4 *teaViewWindows;
  int wordCount;
  int step;
  int last;
  int first;
  
  self[6] = dictList;
  self[7] = dictIndex;
  self[8] = 0;
  self[9] = 0;
  self[0xc] = 0;
  self[10] = 0;
  self[0xb] = view;
  if ((dictList != 0) && (length = TSDictionaryList::EnsureCurrent(dictList,self[7]), length != 0)) {
    if (*(int *)(*self + 0x14) == 0) {
      length = 0;
    }
    else {
      length = *(int *)(*(int *)(*self + 0x14) + 8);
    }
    teaViewWindows = FUN_004dd744(*(int *)(*self + 0x14),length,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    TEAViewWindows::GetLengthRange((int)teaViewWindows,self[7],&first,&last,&step);
    length = last;
    if (0 < step) {
      length = first;
    }
    for (; (first <= length && (length <= last)); length = length + step) {
      wordCount = TSDictionaryList::GetWordCount(self[6],self[7],length);
      if (0 < wordCount) {
        if (((0 < step) && (length < pane)) ||
           ((step < 0 && ((pane < length && (pane != 0)))))) {
          self[10] = self[10] + wordCount;
        }
        self[0xc] = self[0xc] + wordCount;
        if (self[8] == 0) {
          self[8] = length;
        }
        self[9] = length;
      }
    }
  }
  (**(code **)(*(int *)(*self + 8) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ffb8  TEAProgressBar::SetPosition   (172 bytes)   [analysis]
//   moves the bar (floating-point scaling not visible)
void __cdecl TEAProgressBar::SetPosition(int *self,int position)

{
  int iVar1;
  int iVar2;
  
  self[0xb] = position;
  iVar1 = __ftol();
  iVar2 = __ftol();
  if (iVar1 != iVar2) {
    __ftol();
    (**(code **)(*(int *)(*self + 8) + 0x6c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450068  TEAProgressBar::vf5   (2161 bytes)   [rtti:vtable virtual slot 5; function defined from vtable-slot]
void __cdecl TEAProgressBar::vf5(int self,int param_2)

{
  HDC hdc;
  char *len;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *sehChainHead;
  uint *string_2;
  char cVar7;
  int length;
  tagTEXTMETRICA *lptm;
  tagSIZE *pSize;
  UINT align;
  RECT rect;
  RECT rect2;
  RECT rect3;
  RECT rect4;
  uint string_ [4];
  RECT rect5;
  RECT rect6;
  tagTEXTMETRICA textMetrics;
  tagRECT rect7;
  LONG unused;
  LONG unused2;
  int unused3;
  LONG unused4;
  DWORD sysColor;
  DWORD unused5;
  uint *local_11c;
  int unused6;
  LONG unused7;
  int unused8;
  LONG unused9;
  int unused10;
  LONG unused11;
  LONG unused12;
  LONG unused13;
  int local_f8;
  tagSIZE size;
  char *unused14;
  uint local_e8;
  LONG unused15;
  int unused16;
  int unused17;
  DWORD sysColor2;
  DWORD unused18;
  uint *local_d0;
  double local_cc;
  int local_c4;
  int local_c0;
  tagSIZE size2;
  char *unused19;
  uint local_b0;
  LONG unused20;
  int unused21;
  LONG unused22;
  int unused23;
  int unused24;
  int unused25;
  int unused26;
  int unused27;
  int unused28;
  int local_88;
  int local_84;
  DWORD sysColor3;
  COLORREF color;
  int local_78;
  DWORD local_74 [8];
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  uint brush2 [2];
  HBRUSH brush3 [2];
  HDC hdc2;
  int local_23;
  
  __InitExceptBlockLDTC(0x4f799c);
  local_74[3] = 0xf;
  local_74[2] = 0x12;
  local_74[1] = 0xd;
  ehContext = 8;
  FUN_0048d7c8((undefined4*)&hdc2,*(undefined4 *)(param_2 + 0x18));
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x14;
  rect7.bottom = *(int *)(param_2 + 0x28);
  rect7.right = *(int *)(param_2 + 0x24);
  rect7.top = *(int *)(param_2 + 0x20);
  rect7.left = *(int *)(param_2 + 0x1c);
  FUN_0049fa74((undefined4*)&hdc2,&rect7,6,0xf);
  FUN_00494470(&rect7.left,-2,-2);
  ehContext = 0x20;
  cVar7 = '\x01';
  local_74[0] = GetSysColor(0xf);
  FUN_004ab84c((uint *)brush3,local_74,cVar7);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  if ((*(int *)(self + 0x20) == 0) || (*(int *)(self + 0x30) < 1)) {
    FillRect(hdc2,&rect7,brush3[0]);
    *(LONG *)(self + 0x3c) = rect7.top + 1;
    *(LONG *)(self + 0x40) = rect7.bottom + -1;
    *(LONG *)(self + 0x34) = rect7.left + 1;
    *(LONG *)(self + 0x38) = (rect7.right + -1) - *(int *)(self + 0x34);
  }
  else {
    if (*(int *)(self + 0x24) < *(int *)(self + 0x20)) {
      local_78 = -1;
    }
    else {
      local_78 = 1;
    }
    sysColor3 = GetSysColor(0x12);
    OWL::TDC::vf9(&color,(int *)&hdc2,&sysColor3);
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    if (hdc != hdc2) {
      SetBkMode(hdc2,1);
    }
    length = 1;
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    SetBkMode(hdc,length);
    lptm = &textMetrics;
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    GetTextMetricsA(hdc,lptm);
    local_84 = (rect7.bottom - (textMetrics.tmAscent - textMetrics.tmInternalLeading)) + -2;
    local_88 = local_84 - (textMetrics.tmAscent - textMetrics.tmInternalLeading) / 3;
    if (local_88 == local_84) {
      local_88 = local_88 + -1;
    }
    *(LONG *)(self + 0x3c) = rect7.top + 1;
    *(int *)(self + 0x40) = local_88 + -1;
    rect6.bottom = rect7.top + 1;
    unused27 = rect7.right;
    unused26 = rect7.top;
    unused25 = rect7.left;
    rect6.left = rect7.left;
    rect6.top = rect7.top;
    rect6.right = rect7.right;
    unused28 = rect6.bottom;
    FillRect(hdc2,&rect6,brush3[0]);
    unused24 = rect7.bottom;
    unused23 = rect7.right;
    rect5.top = *(LONG *)(self + 0x40);
    unused21 = rect7.left;
    rect5.left = rect7.left;
    rect5.right = rect7.right;
    rect5.bottom = rect7.bottom;
    unused22 = rect5.top;
    FillRect(hdc2,&rect5,brush3[0]);
    sprintf((undefined1 *)string_,&DAT_004f75f3);
    len = strlen(string_);
    size2.cx = 0;
    size2.cy = 0;
    pSize = &size2;
    string_2 = string_;
    unused19 = len;
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    GetTextExtentPoint32A(hdc,(LPCSTR)string_2,(int)len,pSize);
    local_b0 = size2.cx;
    unused20 = size2.cy;
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    if (hdc != hdc2) {
      SetTextAlign(hdc2,0x18);
    }
    align = 0x18;
    hdc = (HDC)(**(code **)(local_23 + 0x5c))();
    SetTextAlign(hdc,align);
    OWL::TDC::vf17((undefined4*)&hdc2,rect7.left + 1,rect7.bottom + -1,string_,(char *)0xffffffff);
    iVar5 = (int)local_b0 >> 1;
    length = iVar5;
    if (iVar5 < 0) {
      length = iVar5 + (uint)((local_b0 & 1) != 0);
    }
    *(int *)(self + 0x34) = length + rect7.left + 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((local_b0 & 1) != 0);
    }
    *(LONG *)(self + 0x38) = ((rect7.right + -1) - iVar5) - *(int *)(self + 0x34);
    local_c0 = *(int *)(self + 0x30);
    local_c4 = rect7.right + -1;
    length = *(int *)(self + 0x24) + local_78;
    while( true ) {
      local_cc = ((double)local_c0 * (double)*(int *)(self + 0x38)) /
                 (double)*(int *)(self + 0x30);
      ehContext = 0x14;
      iVar5 = __ftol();
      iVar5 = iVar5 + *(int *)(self + 0x34);
      ehContext = 0x2c;
      cVar7 = '\x01';
      sysColor2 = GetSysColor(0x12);
      unused18 = sysColor2;
      local_d0 = FUN_004ab84c(brush2,&sysColor2,cVar7);
      rect4.right = iVar5 + 1;
      ehDtorCount = ehDtorCount + 2;
      unused17 = local_88;
      rect4.top = local_88;
      rect4.bottom = local_84;
      rect4.left = iVar5;
      unused16 = iVar5;
      FillRect(hdc2,&rect4,(HBRUSH)*local_d0);
      ehDtorCount = ehDtorCount + -2;
      OWL::TBrush::_dtor(brush2,2);
      if (length != *(int *)(self + 0x24) + local_78) {
        sprintf((undefined1 *)string_,&DAT_004f75f3);
        len = strlen(string_);
        size.cx = 0;
        size.cy = 0;
        pSize = &size;
        string_2 = string_;
        unused14 = len;
        hdc = (HDC)(**(code **)(local_23 + 0x5c))();
        GetTextExtentPoint32A(hdc,(LPCSTR)string_2,(int)len,pSize);
        local_e8 = size.cx;
        unused15 = size.cy;
        ehContext = 0x14;
        iVar3 = size.cx >> 1;
        iVar4 = iVar3;
        if (iVar3 < 0) {
          iVar4 = iVar3 + (uint)((size.cx & 1U) != 0);
        }
        if ((local_c4 < iVar4 + iVar5) && (length == *(int *)(self + 0x24))) {
          iVar5 = local_c4 - iVar4;
        }
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uint)((size.cx & 1U) != 0);
        }
        if (iVar3 + iVar5 <= local_c4) {
          iVar4 = (int)local_b0 >> 1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)((local_b0 & 1) != 0);
          }
          if (iVar4 + *(int *)(self + 0x34) + 3 < iVar5 - iVar3) {
            OWL::TDC::vf17((undefined4*)&hdc2,iVar5 - iVar3,rect7.bottom + -1,string_,(char *)0xffffffff)
            ;
            iVar4 = (int)local_e8 >> 1;
            if (iVar4 < 0) {
              iVar4 = iVar4 + (uint)((local_e8 & 1) != 0);
            }
            local_c4 = (iVar5 - iVar4) + -3;
          }
        }
      }
      if (length == *(int *)(self + 0x20)) break;
      length = length - local_78;
      iVar5 = TSDictionaryList::GetWordCount(*(int *)(self + 0x18),*(int *)(self + 0x1c),length);
      local_c0 = local_c0 - iVar5;
    }
  }
  if (0 < *(int *)(self + 0x30)) {
    local_f8 = __ftol();
    ehContext = 0x14;
    rect3.bottom = *(LONG *)(self + 0x40);
    rect3.right = *(LONG *)(self + 0x34);
    rect3.top = *(LONG *)(self + 0x3c);
    unused10 = rect7.left;
    rect3.left = rect7.left;
    unused11 = rect3.top;
    unused12 = rect3.right;
    unused13 = rect3.bottom;
    FillRect(hdc2,&rect3,brush3[0]);
    rect2.bottom = *(LONG *)(self + 0x40);
    unused8 = rect7.right;
    rect2.top = *(LONG *)(self + 0x3c);
    rect2.left = *(int *)(self + 0x34) + local_f8;
    rect2.right = rect7.right;
    unused6 = rect2.left;
    unused7 = rect2.top;
    unused9 = rect2.bottom;
    FillRect(hdc2,&rect2,brush3[0]);
    if (0 < local_f8) {
      ehContext = 0x38;
      cVar7 = '\x01';
      sysColor = GetSysColor(0xd);
      unused5 = sysColor;
      local_11c = FUN_004ab84c(brush,&sysColor,cVar7);
      ehDtorCount = ehDtorCount + 2;
      rect.bottom = *(LONG *)(self + 0x40);
      rect.right = *(int *)(self + 0x34) + local_f8;
      rect.top = *(LONG *)(self + 0x3c);
      rect.left = *(LONG *)(self + 0x34);
      unused = rect.left;
      unused2 = rect.top;
      unused3 = rect.right;
      unused4 = rect.bottom;
      FillRect(hdc2,&rect,(HBRUSH)*local_11c);
      ehDtorCount = ehDtorCount + -2;
      OWL::TBrush::_dtor(brush,2);
    }
  }
  ehDtorCount = ehDtorCount + -2;
  OWL::TBrush::_dtor((uint *)brush3,2);
  ehDtorCount = ehDtorCount + -1;
  OWL::TDC::_dtor((int *)&hdc2,2);
  *sehChainHead = local_74[4];
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004508e0  TEAProgressBar::PreProcessMsg   (94 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from TEAProgressBar's OWL::TWindow subobject vtable at 0x004fa278 (through the this-adjusting thunk at 0x0045eecd); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAProgressBar::vf11 [rtti:vtable]
void __cdecl TEAProgressBar::PreProcessMsg(int *self,LPMSG lParam)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (lParam->message == 0x200) {
    if (*(int *)(*self + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*self + 0x14) + 8);
    }
    puVar1 = FUN_004dd744(*(int *)(*self + 0x14),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0044fec4,
                          0);
    (**(code **)(puVar1[3] + 0xac))();
  }
  OWL::TWindow::PreProcessMsg(*self,lParam);
  return;
}

} // namespace tea
