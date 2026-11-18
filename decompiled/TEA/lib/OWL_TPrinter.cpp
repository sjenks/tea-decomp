// TEA.exe — runtime / library code "OWL_TPrinter"
// 12 functions, 0x004c4c74..0x004c5b60. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4c74  OWL::TPrinter::TPrinter   (217 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPrinter's vtable at its vptr offset (+0x0) in this
int * __cdecl OWL::TPrinter::TPrinter(int *self,int vbasesBuilt)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511000);
  *self = (int)&OWL::TStreamableBase::vftable;
  *self = (int)&OWL::TPrinter::vftable;
  *(undefined4 *)((int)self + 0x16) = 0;
  *(undefined4 *)((int)self + 0x1a) = 0;
  *(undefined4 *)((int)self + 0x1e) = 0;
  *(undefined4 *)((int)self + 0x22) = 0;
  *(undefined4 *)((int)self + 0x26) = 0;
  *(undefined4 *)((int)self + 0x2a) = 0;
  *(undefined4 *)((int)self + 0x2e) = 0;
  *(undefined4 *)((int)self + 0x32) = 0;
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004c3ce4(puVar1);
  }
  self[2] = (int)puVar1;
  self[1] = 0;
  if (vbasesBuilt == 0) {
    iVar2 = 0;
    puVar1 = (undefined4 *)FUN_00487bc0();
    vbasesBuilt = FUN_00487e08(puVar1,iVar2);
  }
  self[3] = vbasesBuilt;
  (**(code **)(*self + 0x18))();
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4d50  OWL::TPrinter::~TPrinter   (106 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrinter::_dtor
void __cdecl OWL::TPrinter::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51103c);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TPrinter::vftable;
    OWL::TPrintDialog::TData::_dtor(self[2],3);
    OWL::TStreamableBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4dbc  OWL::TPrinter::vf1   (28 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TPrinter::vf1(int self)

{
  FUN_004c3ec0(*(int *)(self + 8));
  FUN_004c3eec(*(int *)(self + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4dd8  OWL::TPrinter::vf6   (314 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TPrinter::vf6(int self)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int local_1ac;
  int local_1a8;
  undefined4 streamableBase [2];
  undefined4 window [33];
  
  __InitExceptBlockLDTC(0x511070);
  puVar1 = *(uint **)(self + 8);
  *puVar1 = *puVar1 & 0xfffffeff;
  *puVar1 = *puVar1;
  if (*(int *)(*(int *)(self + 0xc) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(self + 0xc) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(self + 0xc) + 0x2b);
  }
  OWL::TPrintDialog::TPrintDialog(&local_1ac,0,uVar3,*(undefined4 *)(self + 8),0,0,0,0);
  bVar2 = FUN_004c3c90((int)&local_1ac);
  if (!bVar2) {
    *(undefined4 *)(*(int *)(self + 8) + 4) = 0x1008;
  }
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  OWL::TCommonDialog::_dtor(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4f14  OWL::TPrinter::vf7   (28 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TPrinter::vf7(int self,uint *param_2,uint *param_3,uint *param_4)

{
  FUN_004c3f78(*(int *)(self + 8),param_2,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4f8c  OWL::TPrinter::vf8   (264 bytes)   [rtti:vtable virtual slot 8]
uint __cdecl OWL::TPrinter::vf8(int self,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int local_1ac;
  int local_1a8;
  undefined4 streamableBase [2];
  undefined4 window [33];
  
  __InitExceptBlockLDTC(0x5110a0);
  piVar1 = OWL::TPrintDialog::TPrintDialog(&local_1ac,0,param_2,*(undefined4 *)(self + 8),0,0,0,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  uVar3 = (uint)(iVar2 == 1);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  OWL::TCommonDialog::_dtor(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5094  OWL::TPrinter::vf9   (289 bytes)   [rtti:vtable virtual slot 9]
bool __cdecl OWL::TPrinter::vf9(int self,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int local_1ac;
  int local_1a8;
  undefined4 streamableBase [2];
  undefined4 window [33];
  
  __InitExceptBlockLDTC(0x5110c4);
  *(undefined1 *)(*(int *)(self + 8) + 0x48) = 1;
  piVar1 = OWL::TPrintDialog::TPrintDialog(&local_1ac,0,param_2,*(undefined4 *)(self + 8),0,0,0,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  OWL::TCommonDialog::_dtor(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  *(undefined1 *)(*(int *)(self + 8) + 0x48) = 0;
  *sehChainHead = sehPrevFrame;
  return iVar2 == 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c51b8  OWL::TPrinter::vf10   (169 bytes)   [rtti:vtable virtual slot 10]
int __cdecl OWL::TPrinter::vf10(int self,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *printerAbortDlg;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5110f4);
  piVar1 = *(int **)(param_3 + 10);
  printerAbortDlg = (int *)operator_new();
  if (printerAbortDlg != (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar1;
    }
    puVar3 = (uint *)FUN_004c3f58(*(int *)(self + 8));
    puVar4 = (uint *)FUN_004c3f38(*(int *)(self + 8));
    OWL::TPrinterAbortDlg::TPrinterAbortDlg(printerAbortDlg,0,param_2,(uint *)0x7f57,*(uint **)(param_3 + 4),puVar4,puVar3,iVar5);
  }
  if (printerAbortDlg == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *printerAbortDlg;
  }
  (**(code **)(*(int *)(iVar5 + 8) + 0x10))();
  *sehChainHead = sehPrevFrame;
  return iVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5264  OWL::TPrinter::vf5   (75 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TPrinter::vf5(int self,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(self + 0x26) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(self + 0x2a) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(self + 0x2e) = uVar1;
  uVar1 = (**(code **)(*(int *)(param_2 + 5) + 0xc))();
  *(undefined4 *)(self + 0x32) = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5360  OWL::TPrinter::vf3   (1957 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
bool __cdecl OWL::TPrinter::vf3(int *self,int param_2,int *param_3,char param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  HCURSOR hCursor;
  int *piVar5;
  LPCSTR port;
  LPCSTR pwszDevice;
  LPCSTR pwszDriver;
  uint color;
  int c;
  HDC hdc;
  WPARAM wParam;
  LPPOINT lppt;
  undefined4 *sehChainHead;
  DEVMODEA *pdm;
  CHAR in [4];
  COLORREF unused;
  int x;
  int y;
  uint local_80;
  int in2;
  int local_78;
  WPARAM wParam2;
  WPARAM wParam3;
  undefined4 in3;
  int local_68;
  int out;
  CHAR in4 [4];
  int local_5c;
  int local_58;
  WPARAM wParam4;
  WPARAM wParam5;
  HCURSOR hCursor2;
  int *local_48;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int *unused2;
  undefined4 unused3;
  int unused4;
  undefined4 unused5;
  int *local_8;
  
  __InitExceptBlockLDTC(0x511174);
  self[1] = 1;
  local_48 = (int *)0x0;
  hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  hCursor2 = SetCursor(hCursor);
  wParam5 = 0;
  wParam4 = 0;
  (**(code **)(*param_3 + 8))();
  if (wParam5 == 0) {
    *(uint *)self[2] = *(uint *)self[2] | 4;
    *(undefined4 *)(self[2] + 8) = 0;
    *(undefined4 *)(self[2] + 0xc) = 999;
  }
  else {
    *(uint *)self[2] = *(uint *)self[2] & 0xfffffffb;
    *(WPARAM *)(self[2] + 8) = wParam5;
    *(WPARAM *)(self[2] + 0xc) = wParam4;
  }
  if (*(int *)(self[2] + 0x10) == 0) {
    *(uint *)self[2] = *(uint *)self[2] | 8;
  }
  else {
    *(uint *)self[2] = *(uint *)self[2] & 0xfffffff7;
    if (*(int *)(self[2] + 8) < *(int *)(self[2] + 0x10)) {
      *(undefined4 *)(self[2] + 8) = *(undefined4 *)(self[2] + 0x10);
    }
    else if (*(int *)(self[2] + 0x14) < *(int *)(self[2] + 8)) {
      *(undefined4 *)(self[2] + 8) = *(undefined4 *)(self[2] + 0x14);
    }
    if (*(int *)(self[2] + 0xc) < *(int *)(self[2] + 0x10)) {
      *(undefined4 *)(self[2] + 0xc) = *(undefined4 *)(self[2] + 0x10);
    }
    else if (*(int *)(self[2] + 0x14) < *(int *)(self[2] + 0xc)) {
      *(undefined4 *)(self[2] + 0xc) = *(undefined4 *)(self[2] + 0x14);
    }
  }
  if (param_4 == '\0') {
    local_8 = (int *)operator_new();
    piVar5 = local_8;
    if (local_8 != (int *)0x0) {
      ehContext = 0x14;
      pdm = *(DEVMODEA **)(self[2] + 0x56);
      port = (LPCSTR)FUN_004c3f58(self[2]);
      pwszDevice = (LPCSTR)FUN_004c3f38(self[2]);
      pwszDriver = (LPCSTR)FUN_004c3f18(self[2]);
      FUN_0049caa8(local_8,pwszDriver,pwszDevice,port,pdm);
      ehContext = 8;
      piVar5 = local_8;
    }
  }
  else {
    puVar1 = (uint *)self[2];
    *puVar1 = *puVar1 & 0xfffffbbf;
    *puVar1 = *puVar1 | 0x100;
    cVar4 = (**(code **)(*self + 0x20))();
    if ((cVar4 == '\0') && (*(int *)(self[2] + 4) == 0x100c)) {
      (**(code **)(*self + 4))();
      cVar4 = (**(code **)(*self + 0x20))();
    }
    if (cVar4 == '\0') {
      *sehChainHead = sehPrevFrame;
      return false;
    }
    piVar5 = FUN_004c4074(self[2]);
  }
  local_48 = piVar5;
  if (local_48 == (int *)0x0) {
    FUN_004c5f00(0x7fe6);
  }
  (**(code **)(*self + 0x14))();
  (**(code **)(*param_3 + 4))();
  ehContext = 0x20;
  local_58 = (**(code **)(*self + 0x28))();
  ehContext = 0;
  SetCursor(hCursor2);
  (**(code **)(*(int *)(param_2 + 8) + 0x60))();
  SetAbortProc((HDC)*local_48,FUN_004c4f30);
  if (((char)param_3[2] == '\0') ||
     (color = (**(code **)(*(int *)((int)local_48 + 5) + 0xc))(), (color & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    in4[0] = '\x18';
    in4[1] = '\0';
    in4[2] = '\0';
    in4[3] = '\0';
    local_5c = Escape((HDC)*local_48,8,4,in4,(LPVOID)0x0);
    *(bool *)(self + 4) = local_5c != 0;
  }
  else {
    *(undefined4 *)((int)self + 0x16) = 0;
    *(undefined4 *)((int)self + 0x1a) = 0;
    *(undefined4 *)((int)self + 0x1e) = *(undefined4 *)((int)self + 0x26);
    *(undefined4 *)((int)self + 0x22) = *(undefined4 *)((int)self + 0x2a);
  }
  out = 1;
  local_68 = 1;
  if ((*(byte *)self[2] & 0x10) == 0) {
    in3 = *(undefined4 *)(self[2] + 0x18);
    Escape((HDC)*local_48,0x11,4,(LPCSTR)&in3,&out);
  }
  if (((param_4 == '\0') || ((*(byte *)self[2] & 1) == 0)) && (wParam5 == 0)) {
    if ((param_4 == '\0') || ((*(byte *)self[2] & 2) == 0)) {
      if (*(int *)(self[2] + 0x10) == 0) {
        wParam3 = 1;
        wParam2 = 0x7fffffff;
      }
      else {
        wParam3 = *(WPARAM *)(self[2] + 0x10);
        wParam2 = *(WPARAM *)(self[2] + 0x14);
      }
    }
    else {
      wParam3 = *(WPARAM *)(self[2] + 8);
      wParam2 = *(WPARAM *)(self[2] + 0xc);
    }
  }
  else {
    wParam3 = wParam5;
    wParam2 = wParam4;
  }
  (**(code **)(*param_3 + 0xc))();
  piVar5 = (int *)self[2];
  local_78 = piVar5[6];
  do {
    if ((local_78 < 1) || (piVar5 = self, self[1] < 1)) {
      (**(code **)(*param_3 + 0x20))(param_3,*param_3,piVar5,param_3);
      if (1 < out) {
        in[0] = '\x01';
        in[1] = '\0';
        in[2] = '\0';
        in[3] = '\0';
        Escape((HDC)*local_48,0x11,4,in,&out);
      }
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
      (**(code **)(*(int *)(local_58 + 8) + 0x18))();
      unused4 = local_58;
      if (local_58 != 0) {
        unused5 = *(undefined4 *)(local_58 + 8);
        ehContext = 0x50;
        (*(code *)**(undefined4 **)(local_58 + 8))();
        ehContext = 0x44;
      }
      if (*local_48 == DAT_00510fdc) {
        DAT_00510fdc = 0;
      }
      unused2 = local_48;
      if (local_48 != (int *)0x0) {
        unused3 = *(undefined4 *)((int)local_48 + 5);
        ehContext = 0x68;
        (*(code *)**(undefined4 **)((int)local_48 + 5))();
        ehContext = 0x5c;
      }
      if ((*(byte *)((int)self + 5) & 0x40) != 0) {
        (**(code **)(*self + 0x10))();
      }
      c = self[1];
      *sehChainHead = sehPrevFrame;
      return 0 < c;
    }
    if ((1 < out) && (local_78 < out)) {
      in2 = local_78;
      Escape((HDC)*local_48,0x11,4,(LPCSTR)&in2,&out);
    }
    *(undefined4 *)((int)self + 0x11) = 3;
    *(int *)((int)local_48 + 0x25) = param_3[1];
    *(undefined4 *)((int)local_48 + 0x29) = 0;
    *(undefined4 *)((int)local_48 + 0x2d) = 0;
    c = StartDocA((HDC)*local_48,(DOCINFOA *)((int)local_48 + 0x21));
    self[1] = c;
    (**(code **)(*param_3 + 0x10))();
    SendDlgItemMessageA(*(HWND *)(local_58 + 0xc),0x69,0x464,wParam2,0);
    wParam = wParam3;
    while (((0 < self[1] && ((int)wParam <= (int)wParam2)) &&
           (cVar4 = (**(code **)(*param_3 + 0x14))(), cVar4 != '\0'))) {
      SendDlgItemMessageA(*(HWND *)(local_58 + 0xc),0x68,0x464,wParam,0);
      if (bVar2) {
        *(undefined1 *)((int)self + 0x15) = 1;
        c = Escape((HDC)*local_48,3,0,(LPCSTR)0x0,(LPVOID)((int)self + 0x16));
        self[1] = c;
      }
      else {
        c = StartPage((HDC)*local_48);
        self[1] = c;
      }
      while (0 < self[1]) {
        if ((*(int *)((int)self + 0x16) < *(int *)((int)self + 0x1e)) &&
           (*(int *)((int)self + 0x1a) < *(int *)((int)self + 0x22))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) break;
        if (bVar2) {
          FUN_004c52b0((int)self,local_48);
          if ((*(char *)((int)param_3 + 9) != '\0') && ((*(uint *)((int)self + 0x11) & 3) == 1))
          {
            local_80 = 0x1000000;
            x = 0;
            y = 0;
            color = FUN_0048c12c(&local_80);
            unused = SetPixel((HDC)*local_48,x,y,color);
          }
          lppt = (LPPOINT)((int)self + 0x16);
          c = 2;
          hdc = (HDC)(**(code **)(*(int *)((int)local_48 + 5) + 0x5c))();
          DPtoLP(hdc,lppt,c);
        }
        (**(code **)(*param_3 + 0x18))();
        if (!bVar2) break;
        c = Escape((HDC)*local_48,3,0,(LPCSTR)0x0,(LPVOID)((int)self + 0x16));
        self[1] = c;
      }
      if ((0 < self[1]) && (!bVar2)) {
        FUN_0048db40(local_48);
        c = EndPage((HDC)*local_48);
        self[1] = c;
        if (self[1] == 0) {
          self[1] = 1;
        }
      }
      wParam = wParam + 1;
    }
    if (0 < self[1]) {
      EndDoc((HDC)*local_48);
    }
    piVar5 = param_3;
    (**(code **)(*param_3 + 0x1c))();
    local_78 = local_78 - local_68;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5b4c  OWL::TPrinter::vf2   (20 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TPrinter::vf2(int *self)

{
  (**(code **)(*self + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5b60  OWL::TPrinter::vf4   (386 bytes, 2 ranges)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TPrinter::vf4(int self,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  uint multiByteStr [10];
  uint multiByteStr2 [10];
  CHAR multiByteStr3 [82];
  ushort local_2e;
  undefined4 local_2c;
  undefined2 ehContext;
  int ehDtorCount;
  LPSTR local_8;
  
  __InitExceptBlockLDTC(0x511208);
  switch(*(undefined4 *)(self + 4)) {
  case 0xfffffffb:
    local_2e = 0x7f50;
    break;
  case 0xfffffffc:
    local_2e = 0x7f51;
    break;
  case 0xfffffffd:
    local_2e = 0x7f53;
    break;
  case 0xfffffffe:
    local_2e = 0x7f52;
    break;
  case 0xffffffff:
    local_2e = 0x7f54;
    break;
  default:
    *sehChainHead = local_2c;
    return local_2c;
  }
  iVar2 = *(int *)(param_2 + 0x70);
  iVar1 = FUN_004c0cd4(iVar2,0x7f55,multiByteStr3,0x50);
  if (iVar1 == 0) {
    *sehChainHead = local_2c;
    uVar3 = local_2c;
  }
  else {
    iVar1 = FUN_004c0cd4(iVar2,0x7f4f,(LPSTR)multiByteStr2,0x28);
    if (iVar1 == 0) {
      *sehChainHead = local_2c;
      uVar3 = local_2c;
    }
    else {
      iVar2 = FUN_004c0cd4(iVar2,(uint)local_2e,(LPSTR)multiByteStr,0x28);
      if (iVar2 == 0) {
        *sehChainHead = local_2c;
        uVar3 = local_2c;
      }
      else {
        strlen(multiByteStr2);
        strlen(*(uint **)(param_3 + 4));
        strlen(multiByteStr);
        ehContext = 0x14;
        local_8 = (LPSTR)operator_new_array();
        ehDtorCount = ehDtorCount + 1;
        ehContext = 8;
        wsprintfA(local_8,(LPCSTR)multiByteStr2,*(undefined4 *)(param_3 + 4),multiByteStr);
        (**(code **)(*(int *)(*(int *)(param_2 + 0x6c) + 0x1b) + 0x30))();
        ehDtorCount = ehDtorCount + -1;
        uVar3 = operator_delete_array();
        *sehChainHead = local_2c;
      }
    }
  }
  return uVar3;
}

} // namespace tea
