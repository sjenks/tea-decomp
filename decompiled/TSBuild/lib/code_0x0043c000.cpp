// TSBuild.exe — runtime / library code "code_0x0043c000"
// 52 functions, 0x0043c050..0x0043fe3c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c050  FUN_0043c050   (36 bytes)   [unnamed]
void __cdecl FUN_0043c050(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_004396f0();
  if (*piVar1 != 0) {
    FUN_0043bea9((int *)*piVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c074  FUN_0043c074   (55 bytes)   [unnamed]
void __cdecl FUN_0043c074(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x52) != '\0') {
    if (param_2 != '\0') {
      (**(code **)(*(int *)(param_1 + 0x53) + 0xd))();
      (**(code **)(*(int *)(param_1 + 0x53) + 0x15))();
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x53) + 0x11))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c0c8  DestroyRichEditLoader_43c0c8   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_43c0c8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f40d);
  if (DAT_0047f40c != '\0') {
    OWL::TBrushCache::_dtor(0x48cc54,2);
    DAT_0047f40c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c108  FUN_0043c108   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0043c108(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f428);
  if (DAT_0047f40c == '\0') {
    FUN_0043c1a4((undefined4 *)&DAT_0048cc54);
    DAT_0047f40c = DAT_0047f40c + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048cc54;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c1a4  FUN_0043c1a4   (70 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043c1a4(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f44c);
  param_1[0x30] = 0x10;
  memset(param_1,0,0xc0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c26c  FUN_0043c26c   (77 bytes)   [unnamed]
void __cdecl FUN_0043c26c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1[param_2 * 3];
    uVar2 = param_1[param_2 * 3 + 1];
    uVar3 = param_1[param_2 * 3 + 2];
    FUN_004675a4(param_1 + 3,param_1,param_2 * 0xc);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c2bc  FUN_0043c2bc   (188 bytes)   [unnamed]
undefined1 __cdecl FUN_0043c2bc(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004675a4(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_0043c32e;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_004282f8(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_0043c26c(param_1,uVar1);
LAB_0043c32e:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_00428078(param_2,2);
  return local_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c378  FUN_0043c378   (53 bytes)   [unnamed]
void __cdecl FUN_0043c378(int param_1,int param_2)

{
  int *piVar1;
  int i;
  
  for (i = 0; (i < *(int *)(param_1 + 0xc0) && (*(int *)(param_1 + i * 0xc) != 0));
      i = i + 1) {
    if (param_2 == *(int *)(param_1 + i * 0xc)) {
      piVar1 = (int *)(param_1 + 8 + i * 0xc);
      *piVar1 = *piVar1 + -1;
      return;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c3b0  FUN_0043c3b0   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_0043c3b0(int param_1,int param_2)

{
  int *piVar1;
  int i;
  
  for (i = 0; (i < *(int *)(param_1 + 0xc0) && (*(int *)(param_1 + i * 0xc) != 0));
      i = i + 1) {
    if (param_2 == *(int *)(param_1 + i * 0xc)) {
      piVar1 = (int *)(param_1 + 8 + i * 0xc);
      *piVar1 = *piVar1 + 1;
      return CONCAT31((int3)((uint)(i * 3) >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c3ec  FUN_0043c3ec   (68 bytes)   [unnamed]
undefined4 __cdecl FUN_0043c3ec(undefined4 *param_1,int param_2)

{
  int i;
  
  for (i = 0; (i < (int)param_1[0x30] && (param_1[i * 3] != 0)); i = i + 1) {
    if (param_2 == param_1[i * 3 + 1]) {
      param_1[i * 3 + 2] = param_1[i * 3 + 2] + 1;
      FUN_0043c26c(param_1,i);
      return *param_1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c430  FUN_0043c430   (104 bytes)   [unnamed]
uint * __cdecl FUN_0043c430(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *sehChainHead;
  uint uVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f470);
  FUN_00428470(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_0043c108();
    FUN_0043c3b0((int)puVar1,uVar2);
  }
  else {
    FUN_00428078(*param_1,2);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c4b4  FUN_0043c4b4   (261 bytes)   [unnamed]
uint * __cdecl FUN_0043c4b4(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint color;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH hBrush;
  uint *puVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f494);
  FUN_00428420(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  color = FUN_00420364(param_2);
  if (param_3 != '\0') {
    uVar4 = color;
    puVar3 = (undefined4 *)FUN_0043c108();
    uVar4 = FUN_0043c3ec(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *sehChainHead = sehPrevFrame;
      goto LAB_0043c5a5;
    }
  }
  if ((*param_2 & 0xf0000000) == 0x80000000) {
    hBrush = GetSysColorBrush(*param_2 & 0xffff);
    *param_1 = (uint)hBrush;
  }
  else {
    hBrush = CreateSolidBrush(color);
    *param_1 = (uint)hBrush;
  }
  FUN_00427974((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_00428078(*param_1,2);
  }
  else {
    uVar4 = FUN_00420364(param_2);
    color = *param_1;
    puVar6 = (uint *)FUN_0043c108();
    cVar1 = FUN_0043c2bc(puVar6,color,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_0043c5a5:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c628  FUN_0043c628   (74 bytes)   [unnamed]
uint * __cdecl FUN_0043c628(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f4dc);
  iVar2 = 1;
  hBrush = FUN_0043c6d4(param_2,param_3,param_4);
  FUN_0043c430(param_1,hBrush,iVar2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c698  FUN_0043c698   (58 bytes)   [unnamed]
void __cdecl FUN_0043c698(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH hBrush;
  
  if (*param_1 != 0) {
    FUN_004282f8(*param_1);
  }
  hBrush = FUN_0043c6d4(param_2,param_3,param_4);
  *param_1 = (uint)hBrush;
  FUN_00428078(*param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c6d4  FUN_0043c6d4   (199 bytes)   [unnamed]
HBRUSH __cdecl FUN_0043c6d4(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HGLOBAL dib [5];
  undefined4 *local_f;
  
  __InitExceptBlockLDTC(0x47f510);
  FUN_00440cd0((int *)dib,8,8,2,0);
  memset(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_00440750((int)dib,0,param_3);
  FUN_00440750((int)dib,1,param_2);
  hBrush = CreateDIBPatternBrush(dib[0],0);
  FUN_0042798c((int)hBrush,0x7fe3);
  OWL::TDib::_dtor((int *)dib,2);
  *sehChainHead = sehPrevFrame;
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cb8c  InitRichEditStreamer_43cb8c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_43cb8c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f6c8);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043ceb0;
  puVar1 = FUN_00468310(1,0,0x404a1c);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd18,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cbe2  FUN_0043cbe2   (48 bytes)   [unnamed]
void __stdcall FUN_0043cbe2(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f6dc);
  OWL::TStreamableClass::_dtor(0x48cd18,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cd98  EvRegisteredMsg_43cd98_43cd98   (55 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TButton::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_43cd98_43cd98(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0043cdd0(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_0042db04(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043cdd0  FUN_0043cdd0   (87 bytes)   [unnamed]
void __cdecl FUN_0043cdd0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = OWL::TControl::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ce5c  FUN_0043ce5c   (81 bytes)   [unnamed]
void __cdecl FUN_0043ce5c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TControl::Streamer::Streamer(streamer,piVar1);
  local_8 = 2;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TControl::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ceb0  FUN_0043ceb0   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043ceb0(int *param_1)

{
  undefined4 *streamer;
  int *button;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47f730);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      button = (int *)operator_new();
      if (button == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TButton::TButton_43cc7c(button,0);
        param_1 = (int *)button[2];
      }
    }
    OWL::TButton::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d010  EvGetDlgCode_43d010   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl EvGetDlgCode_43d010(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d358  FUN_0043d358   (54 bytes)   [unnamed]
void __cdecl FUN_0043d358(int *param_1,WPARAM wParam)

{
  FUN_00438338(*param_1,0xf1,wParam,0);
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d390  BNClicked_43d390   (42 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl BNClicked_43d390(int *param_1)

{
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d988  InitRichEditStreamer_43d988   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_43d988(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47fae0);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043dc90;
  puVar1 = FUN_00468310(1,0,0x404ef0);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cd28,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043d9de  FUN_0043d9de   (48 bytes)   [unnamed]
void __stdcall FUN_0043d9de(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47faf4);
  OWL::TStreamableClass::_dtor(0x48cd28,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dbac  FUN_0043dbac   (87 bytes)   [unnamed]
void __cdecl FUN_0043dbac(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042d9a0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  piVar1 = OWL::TWindow::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dc3c  FUN_0043dc3c   (81 bytes)   [unnamed]
void __cdecl FUN_0043dc3c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  OWL::TWindow::Streamer::Streamer(streamer,piVar1);
  local_8 = 3;
  FUN_0042de94(param_2,&local_8,4);
  OWL::TWindow::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dc90  FUN_0043dc90   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043dc90(int *param_1)

{
  undefined4 *streamer;
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47fb48);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      control = (int *)operator_new();
      if (control == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TControl::TControl_43da78(control,0);
        param_1 = (int *)control[2];
      }
    }
    OWL::TControl::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043dda8  FUN_0043dda8   (141 bytes)   [unnamed]
int * __cdecl FUN_0043dda8(undefined4 param_1)

{
  int *controlBar;
  uint *puVar2;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47fbb0);
  controlBar = (int *)operator_new();
  if (controlBar != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_00425224(puVar2,10,'\0',0);
    }
    OWL::TControlBar::TControlBar(controlBar,0,param_1,0,puVar2,iVar3);
  }
  *sehChainHead = sehPrevFrame;
  return controlBar;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043de35  FUN_0043de35   (86 bytes)   [unnamed]
undefined4 __cdecl FUN_0043de35(int param_1,int *param_2)

{
  undefined4 in_EAX;
  BOOL ok;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_1 == *param_2) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1]) {
      if (*(int *)(param_1 + 0xc) == 0) {
        bVar3 = (*(byte *)(param_1 + 0x1b) & 0x10) != 0;
      }
      else {
        ok = IsWindowVisible(*(HWND *)(param_1 + 0xc));
        bVar3 = ok != 0;
      }
      if (bVar3) {
        param_2[2] = param_1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043de8b  FUN_0043de8b   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_0043de8b(int param_1,int *param_2)

{
  if ((param_1 != *param_2) && ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1])) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043deb4  FUN_0043deb4   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_0043deb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0043831c(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043e9b0  FUN_0043e9b0   (387 bytes)   [unnamed]
void __cdecl FUN_0043e9b0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 unused;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 unused2;
  undefined4 unused3;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 unused4;
  byte local_1b;
  byte local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0042a154(&local_40);
  FUN_0042925c(param_1 + 4,param_3,&local_40);
  local_8 = local_35;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_35 = param_2;
  local_31 = local_31 & 0xf0 | 1;
  local_30 = bVar1 | local_30 & 0xf0;
  local_2f = local_2f & 0xf0 | 3;
  unused2 = 0;
  FUN_0042918c(param_1 + 4,param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 1;
  }
  else {
    local_c = 3;
  }
  if (bVar2) {
    local_10 = 3;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 1;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  unused2 = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  unused = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  unused3 = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  unused4 = 0;
  FUN_0042918c(param_1 + 4,param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043eb34  FUN_0043eb34   (451 bytes)   [unnamed]
void __cdecl FUN_0043eb34(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 unused;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 unused2;
  undefined4 unused3;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 unused4;
  int local_1f;
  byte local_1b;
  byte local_1a;
  byte local_19;
  undefined4 unused5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0042a154(&local_40);
  FUN_0042925c((int)(param_1 + 1),param_3,&local_40);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_1f;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_1f = param_2;
    local_1b = local_1b & 0xf0 | 3;
    local_1a = bVar1 | local_1a & 0xf0;
    local_19 = local_19 & 0xf0 | 1;
    unused5 = 0;
  }
  else {
    local_8 = local_35;
    local_35 = param_2;
    local_31 = local_31 & 0xf0 | 3;
    local_30 = local_30 & 0xf0 | 4;
    local_2f = local_2f & 0xf0 | 1;
    unused2 = 0;
  }
  FUN_0042918c((int)(param_1 + 1),param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  if (bVar2) {
    local_10 = 2;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 3;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  unused2 = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  unused = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  unused3 = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  unused4 = 0;
  FUN_0042918c((int)(param_1 + 1),param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ecf8  FUN_0043ecf8   (572 bytes)   [unnamed]
void __cdecl FUN_0043ecf8(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 unused;
  undefined4 unused2;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 unused3;
  byte local_22;
  byte local_21;
  undefined4 unused4;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 unused5;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0042a154(&local_3c);
  FUN_0042925c((int)(param_1 + 1),param_3,&local_3c);
  local_8 = local_3c;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_3c = param_2;
  local_38 = local_38 & 0xf0;
  local_37 = bVar1 | local_37 & 0xf0;
  local_36 = local_36 & 0xf0 | 2;
  unused = 0;
  FUN_0042918c((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 0;
  }
  else {
    local_c = 2;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 3;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  unused = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    unused4 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    unused4 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    unused4 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  unused5 = 0;
  unused3 = 0;
  FUN_0042918c((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ef34  FUN_0043ef34   (638 bytes)   [unnamed]
void __cdecl FUN_0043ef34(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 unused;
  undefined4 unused2;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 unused3;
  int local_26;
  byte local_22;
  byte local_21;
  byte local_20;
  undefined4 unused4;
  undefined4 unused5;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 unused6;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_0042a154(&local_3c);
  FUN_0042925c((int)(param_1 + 1),param_3,&local_3c);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_26;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_26 = param_2;
    local_22 = local_22 & 0xf0 | 2;
    local_21 = bVar1 | local_21 & 0xf0;
    local_20 = local_20 & 0xf0;
    unused4 = 0;
  }
  else {
    local_8 = local_3c;
    local_3c = param_2;
    local_38 = local_38 & 0xf0 | 2;
    local_37 = local_37 & 0xf0 | 4;
    local_36 = local_36 & 0xf0;
    unused = 0;
  }
  FUN_0042918c((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 2;
  }
  else {
    local_c = 0;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 2;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0 | 2;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  unused = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    unused5 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    unused5 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    unused5 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  unused6 = 0;
  unused3 = 0;
  FUN_0042918c((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f3f9  Child4453411_Notify4453432_43f3f9   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4453411, code 4453432)
void __cdecl Child4453411_Notify4453432_43f3f9(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf17((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f40e  FUN_0043f40e   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043f40e(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf16((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f44d  FUN_0043f44d   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043f44d(int param_1,LPMSG lParam)

{
  OWL::TDecoratedFrame::TFrameWindow_vf10((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1),lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f48c  Child4514932_Notify4510180_43f48c   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4514932, code 4510180)
void __cdecl Child4514932_Notify4510180_43f48c(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf5((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f4a1  FUN_0043f4a1   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_0043f4a1(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf4((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f87c  FUN_0043f87c   (28 bytes)   [unnamed]
bool __cdecl FUN_0043f87c(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  return cVar1 == '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x0043f898  FUN_0043f898   (92 bytes)   [unnamed]
void __cdecl FUN_0043f898(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_00435df4(*param_1,param_2,(uint *)0x0,param_4);
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffffd;
  if ((short)((uint)*(undefined4 *)(*param_1 + 0x10) >> 0x10) != 0) {
    operator_delete_array();
  }
  *(undefined4 *)(*param_1 + 0x10) = 0xffff;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 4;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffff7ff;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fbc4  EvSetfont_43fbc4   (34 bytes)   [owl:response-table message-handler]
//   WM_SETFONT
void __cdecl EvSetfont_43fbc4(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x20) != 0) {
    FUN_00436428(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fbe8  EvPaint_43fbe8   (16 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl EvPaint_43fbe8(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fbf8  EvMsg_19_43fbf8   (93 bytes)   [owl:response-table message-handler]
//   message 0x0019
void __cdecl EvMsg_19_43fbf8(int *param_1,HDC hdc,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') &&
     (iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x19))(), iVar1 != 0)) {
    return;
  }
  OWL::TWindow::EvMsg_19(*param_1,hdc,param_3,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc58  EvMsg_400_43fc58   (18 bytes)   [owl:response-table message-handler]
//   message 0x0400
void __cdecl EvMsg_400_43fc58(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc6c  EvMsg_401_43fc6c   (26 bytes)   [owl:response-table message-handler]
//   message 0x0401
bool __cdecl EvMsg_401_43fc6c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00436428(*param_1);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fc88  EvMsg_402_43fc88   (16 bytes)   [owl:response-table message-handler]
//   message 0x0402
void __cdecl EvMsg_402_43fc88(int *param_1)

{
  FUN_00436428(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fd80  FUN_0043fd80   (188 bytes)   [unnamed]
undefined1 __stdcall FUN_0043fd80(HWND hWnd,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  LRESULT lResult;
  int *piVar4;
  int iVar5;
  
  if (param_2 == DAT_0047eb5c) {
    uVar2 = 0;
  }
  else {
    lResult = FUN_00436e00(hWnd,0);
    if (lResult == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lResult + 8);
    }
    piVar4 = FUN_00468488(lResult,iVar5,(int *)&DAT_00403c70,(int *)&DAT_0040293c,0);
    if ((((DAT_0047fe3c != (int *)0x0) && (piVar4 == (int *)0x0)) && (param_2 != 0x1f)) &&
       (param_2 != 10)) {
      *(HWND *)(*DAT_0047fe3c + 0xc) = hWnd;
      FUN_00437d74(*DAT_0047fe3c);
      piVar4 = DAT_0047fe3c;
      DAT_0047fe3c = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = FUN_0041b984();
      if (cVar1 == '\0') {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)(piVar4[3] + 4))();
      }
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fe3c  FUN_0043fe3c   (46 bytes)   [unnamed]
void __cdecl FUN_0043fe3c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00438220(*param_1,(undefined*)FUN_0043f87c);
  if (iVar1 != 0) {
    FUN_004391f0(*param_1,0x7fec);
  }
  return;
}

} // namespace tea
