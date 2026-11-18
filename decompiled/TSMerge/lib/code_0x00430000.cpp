// TSMerge.exe — runtime / library code "code_0x00430000"
// 45 functions, 0x004306a4..0x00433da0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004306a4  FUN_004306a4   (238 bytes)   [unnamed]
void __cdecl FUN_004306a4(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b484);
  if (*(int *)(param_1 + 0x31) != 0) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x31) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x31) + 0xc))();
      }
    }
    else {
      FUN_0042d1a4(**(int **)(param_1 + 0x31),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x31) = param_2;
  if ((((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0)) &&
      (*(int *)(param_1 + 0x2b) != 0)) && (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
    FUN_0042d484(**(int **)(param_1 + 0x31),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x10))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430928  FUN_00430928   (62 bytes)   [unnamed]
void __cdecl FUN_00430928(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  *(undefined4 *)(param_2 + 0x7e) = 0;
  if (*(int *)(param_1 + 0x67) == 0) {
    *(int *)(param_1 + 0x67) = param_2;
  }
  else {
    for (iVar1 = *(int *)(param_1 + 0x67); *(int *)(iVar1 + 0x7e) != 0;
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    *(int *)(iVar1 + 0x7e) = param_2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430968  FUN_00430968   (65 bytes)   [unnamed]
void __cdecl FUN_00430968(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x67) != 0)) {
    iVar1 = 0;
    if (param_2 != *(int *)(param_1 + 0x67)) {
      for (iVar1 = *(int *)(param_1 + 0x67); param_2 != *(int *)(iVar1 + 0x7e);
          iVar1 = *(int *)(iVar1 + 0x7e)) {
        if (*(int *)(iVar1 + 0x7e) == 0) {
          return;
        }
      }
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(param_2 + 0x7e);
      return;
    }
    *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x7e);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004309ac  FUN_004309ac   (102 bytes)   [unnamed]
void __cdecl FUN_004309ac(int param_1)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b4fc);
  while (*(int *)(param_1 + 0x67) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x67) + 0x7e);
    if (*(int *)(param_1 + 0x67) != 0) {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x67) + 8))();
    }
    *(undefined4 *)(param_1 + 0x67) = uVar1;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430c34  FUN_00430c34   (78 bytes)   [unnamed]
void __stdcall FUN_00430c34(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x46b5a4);
  piVar1 = OWL::TXInvalidMainWindow::TXInvalidMainWindow(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430cc8  FUN_00430cc8   (77 bytes)   [unnamed]
undefined4 __stdcall FUN_00430cc8(HWND hWnd,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = GetWindowLongA(hWnd,-0x10);
  if (((uVar2 & 0x40000000) == 0) && (hWnd != (HWND)*param_2)) {
    uVar2 = IsWindowEnabled(hWnd);
    if (uVar2 != 0) {
      if (*(int *)((int)param_2 + 6) == 0) {
        *(short *)(param_2 + 1) = (short)param_2[1] + 1;
      }
      else {
        puVar1 = *(undefined4 **)((int)param_2 + 6);
        *(int *)((int)param_2 + 6) = *(int *)((int)param_2 + 6) + 4;
        *puVar1 = hWnd;
        uVar2 = EnableWindow(hWnd,0);
      }
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d15  FUN_00430d15   (85 bytes)   [unnamed]
void __cdecl FUN_00430d15(int *param_1)

{
  BOOL ok;
  int *i;
  
  if (*(int *)((int)param_1 + 6) == 0) {
    if (*param_1 != 0) {
      ok = IsWindow((HWND)*param_1);
      if (ok != 0) {
        EnableWindow((HWND)*param_1,1);
        *param_1 = 0;
      }
    }
  }
  else {
    for (i = *(int **)((int)param_1 + 6); *i != 0; i = i + 1) {
      EnableWindow((HWND)*i,1);
    }
    operator_delete_array();
    *(undefined4 *)((int)param_1 + 6) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d6c  FUN_00430d6c   (290 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_00430d6c(int param_1,int param_2,uint param_3)

{
  int *lParam;
  DWORD threadId;
  BOOL ok;
  undefined4 *puVar4;
  int i;
  int *piVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  code *lpfn;
  int local_40;
  short local_3c;
  undefined4 *unused;
  undefined4 local_30;
  int local_2c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x46b61c);
  lParam = &DAT_0046b5ec;
  piVar6 = &local_40;
  for (i = 3; i != 0; i = i + -1) {
    *piVar6 = *lParam;
    lParam = lParam + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  *(short *)piVar6 = (short)*lParam;
  lParam = (int *)FUN_0042e55c();
  local_2c = *lParam;
  *lParam = (int)&local_40;
  if ((param_3 & 0x1000) != 0) {
    param_3 = param_3 & 0xffffefff | 0x2000;
  }
  if ((param_3 & 0x2000) == 0) {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
      (**(code **)(*(int *)(param_2 + 8) + 0x60))();
    }
  }
  else {
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + 0xc);
    }
    lParam = &local_40;
    lpfn = FUN_00430cc8;
    threadId = GetCurrentThreadId();
    ok = EnumThreadWindows(threadId,lpfn,(LPARAM)lParam);
    if (ok == 0) {
      *sehChainHead = sehPrevFrame;
      return 0xffffffff;
    }
    puVar4 = (undefined4 *)operator_new_array();
    unused = puVar4;
    memset(puVar4,0,(local_3c + 1) * 4);
    lParam = &local_40;
    lpfn = FUN_00430cc8;
    threadId = GetCurrentThreadId();
    EnumThreadWindows(threadId,lpfn,(LPARAM)lParam);
    unused = puVar4;
  }
  ehContext = 8;
  local_30 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  ehContext = 0;
  lParam = (int *)FUN_0042e55c();
  *lParam = local_2c;
  FUN_00430d15(&local_40);
  *sehChainHead = sehPrevFrame;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430ebc  FUN_00430ebc   (36 bytes)   [unnamed]
void __cdecl FUN_00430ebc(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_0042e55c();
  if (*piVar1 != 0) {
    FUN_00430d15((int *)*piVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430ee0  FUN_00430ee0   (55 bytes)   [unnamed]
void __cdecl FUN_00430ee0(int param_1,char param_2)

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
// 0x00430f34  DestroyRichEditLoader_430f34   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_430f34(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b631);
  if (DAT_0046b630 != '\0') {
    OWL::TBrushCache::_dtor(0x4771ac,2);
    DAT_0046b630 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430f74  FUN_00430f74   (73 bytes)   [unnamed]
undefined * __stdcall FUN_00430f74(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b64c);
  if (DAT_0046b630 == '\0') {
    FUN_00431010((undefined4 *)&DAT_004771ac);
    DAT_0046b630 = DAT_0046b630 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_004771ac;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431010  FUN_00431010   (70 bytes)   [unnamed]
undefined4 * __cdecl FUN_00431010(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b670);
  param_1[0x30] = 0x10;
  memset(param_1,0,0xc0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004310d8  FUN_004310d8   (77 bytes)   [unnamed]
void __cdecl FUN_004310d8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1[param_2 * 3];
    uVar2 = param_1[param_2 * 3 + 1];
    uVar3 = param_1[param_2 * 3 + 2];
    FUN_004559f4(param_1 + 3,param_1,param_2 * 0xc);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431128  FUN_00431128   (188 bytes)   [unnamed]
undefined1 __cdecl FUN_00431128(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004559f4(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_0043119a;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_0041d184(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_004310d8(param_1,uVar1);
LAB_0043119a:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_0041cf04(param_2,2);
  return local_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004311e4  FUN_004311e4   (53 bytes)   [unnamed]
void __cdecl FUN_004311e4(int param_1,int param_2)

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
// 0x0043121c  FUN_0043121c   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_0043121c(int param_1,int param_2)

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
// 0x00431258  FUN_00431258   (68 bytes)   [unnamed]
undefined4 __cdecl FUN_00431258(undefined4 *param_1,int param_2)

{
  int i;
  
  for (i = 0; (i < (int)param_1[0x30] && (param_1[i * 3] != 0)); i = i + 1) {
    if (param_2 == param_1[i * 3 + 1]) {
      param_1[i * 3 + 2] = param_1[i * 3 + 2] + 1;
      FUN_004310d8(param_1,i);
      return *param_1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043129c  FUN_0043129c   (104 bytes)   [unnamed]
uint * __cdecl FUN_0043129c(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *sehChainHead;
  uint uVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b694);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_00430f74();
    FUN_0043121c((int)puVar1,uVar2);
  }
  else {
    FUN_0041cf04(*param_1,2);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431320  FUN_00431320   (261 bytes)   [unnamed]
uint * __cdecl FUN_00431320(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint color;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH hBrush;
  uint *puVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b6b8);
  FUN_0041d2ac(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  color = FUN_00415340(param_2);
  if (param_3 != '\0') {
    uVar4 = color;
    puVar3 = (undefined4 *)FUN_00430f74();
    uVar4 = FUN_00431258(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *sehChainHead = sehPrevFrame;
      goto LAB_00431411;
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
  FUN_0041c800((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_0041cf04(*param_1,2);
  }
  else {
    uVar4 = FUN_00415340(param_2);
    color = *param_1;
    puVar6 = (uint *)FUN_00430f74();
    cVar1 = FUN_00431128(puVar6,color,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_00431411:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431494  FUN_00431494   (74 bytes)   [unnamed]
uint * __cdecl FUN_00431494(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b700);
  iVar2 = 1;
  hBrush = FUN_00431540(param_2,param_3,param_4);
  FUN_0043129c(param_1,hBrush,iVar2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431504  FUN_00431504   (58 bytes)   [unnamed]
void __cdecl FUN_00431504(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH hBrush;
  
  if (*param_1 != 0) {
    FUN_0041d184(*param_1);
  }
  hBrush = FUN_00431540(param_2,param_3,param_4);
  *param_1 = (uint)hBrush;
  FUN_0041cf04(*param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431540  FUN_00431540   (199 bytes)   [unnamed]
HBRUSH __cdecl FUN_00431540(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HGLOBAL dib [5];
  undefined4 *local_f;
  
  __InitExceptBlockLDTC(0x46b734);
  FUN_00435b3c((int *)dib,8,8,2,0);
  memset(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_004355bc((int)dib,0,param_3);
  FUN_004355bc((int)dib,1,param_2);
  hBrush = CreateDIBPatternBrush(dib[0],0);
  FUN_0041c818((int)hBrush,0x7fe3);
  OWL::TDib::_dtor((int *)dib,2);
  *sehChainHead = sehPrevFrame;
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004319f8  InitRichEditStreamer_4319f8   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4319f8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b8ec);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00431d1c;
  puVar1 = FUN_0045666c(1,0,0x405354);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477270,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431a4e  FUN_00431a4e   (48 bytes)   [unnamed]
void __stdcall FUN_00431a4e(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b900);
  OWL::TStreamableClass::_dtor(0x477270,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431c04  EvRegisteredMsg_431c04_431c04   (55 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TButton::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_431c04_431c04(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00431c3c(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00422970(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00431c3c  FUN_00431c3c   (87 bytes)   [unnamed]
void __cdecl FUN_00431c3c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
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
// 0x00431cc8  FUN_00431cc8   (81 bytes)   [unnamed]
void __cdecl FUN_00431cc8(int param_1,int *param_2)

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
  FUN_00422d00(param_2,&local_8,4);
  OWL::TControl::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431d1c  FUN_00431d1c   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00431d1c(int *param_1)

{
  undefined4 *streamer;
  int *button;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46b954);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      button = (int *)operator_new();
      if (button == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TButton::TButton_431ae8(button,0);
        param_1 = (int *)button[2];
      }
    }
    OWL::TButton::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431e7c  EvGetDlgCode_431e7c   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl EvGetDlgCode_431e7c(int *param_1)

{
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004321c4  FUN_004321c4   (54 bytes)   [unnamed]
void __cdecl FUN_004321c4(int *param_1,WPARAM wParam)

{
  FUN_0042d1a4(*param_1,0xf1,wParam,0);
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004321fc  BNClicked_4321fc   (42 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl BNClicked_4321fc(int *param_1)

{
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  FUN_0042b294(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004327f4  InitRichEditStreamer_4327f4   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4327f4(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46bd04);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00432afc;
  puVar1 = FUN_0045666c(1,0,0x40580c);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477280,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043284a  FUN_0043284a   (48 bytes)   [unnamed]
void __stdcall FUN_0043284a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46bd18);
  OWL::TStreamableClass::_dtor(0x477280,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432a18  FUN_00432a18   (87 bytes)   [unnamed]
void __cdecl FUN_00432a18(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_0042280c(param_2,&local_8,4);
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
// 0x00432aa8  FUN_00432aa8   (81 bytes)   [unnamed]
void __cdecl FUN_00432aa8(int param_1,int *param_2)

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
  FUN_00422d00(param_2,&local_8,4);
  OWL::TWindow::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432afc  FUN_00432afc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00432afc(int *param_1)

{
  undefined4 *streamer;
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46bd6c);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      control = (int *)operator_new();
      if (control == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TControl::TControl_4328e4(control,0);
        param_1 = (int *)control[2];
      }
    }
    OWL::TControl::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432c14  FUN_00432c14   (141 bytes)   [unnamed]
int * __cdecl FUN_00432c14(undefined4 param_1)

{
  int *controlBar;
  uint *puVar2;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46bdd4);
  controlBar = (int *)operator_new();
  if (controlBar != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_0041a0b0(puVar2,10,'\0',0);
    }
    OWL::TControlBar::TControlBar(controlBar,0,param_1,0,puVar2,iVar3);
  }
  *sehChainHead = sehPrevFrame;
  return controlBar;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432ca1  FUN_00432ca1   (86 bytes)   [unnamed]
undefined4 __cdecl FUN_00432ca1(int param_1,int *param_2)

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
// 0x00432cf7  FUN_00432cf7   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_00432cf7(int param_1,int *param_2)

{
  if ((param_1 != *param_2) && ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1])) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432d20  FUN_00432d20   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_00432d20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0042d188(param_1);
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
// 0x0043381c  FUN_0043381c   (387 bytes)   [unnamed]
void __cdecl FUN_0043381c(int param_1,int param_2,int param_3)

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
  
  FUN_0041efe0(&local_40);
  FUN_0041e0e8(param_1 + 4,param_3,&local_40);
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
  FUN_0041e018(param_1 + 4,param_3,&local_40);
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
  FUN_0041e018(param_1 + 4,param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004339a0  FUN_004339a0   (451 bytes)   [unnamed]
void __cdecl FUN_004339a0(int *param_1,int param_2,int param_3)

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
  
  FUN_0041efe0(&local_40);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_40);
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
  FUN_0041e018((int)(param_1 + 1),param_3,&local_40);
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
  FUN_0041e018((int)(param_1 + 1),param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433b64  FUN_00433b64   (572 bytes)   [unnamed]
void __cdecl FUN_00433b64(int *param_1,int param_2,int param_3)

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
  
  FUN_0041efe0(&local_3c);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0041e018((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0041e018((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433da0  FUN_00433da0   (638 bytes)   [unnamed]
void __cdecl FUN_00433da0(int *param_1,int param_2,int param_3)

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
  
  FUN_0041efe0(&local_3c);
  FUN_0041e0e8((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0041e018((int)(param_1 + 1),param_3,&local_3c);
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
  FUN_0041e018((int)(param_1 + 1),param_2,&local_3c);
  return;
}

} // namespace tea
