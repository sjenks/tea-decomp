// TEA.exe — runtime / library code "code_0x004a8000"
// 53 functions, 0x004a802c..0x004abfda. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a802c  FUN_004a802c   (77 bytes)   [unnamed]
void __cdecl FUN_004a802c(int param_1,int bar,int param_3,int param_4,byte redraw)

{
  SCROLLINFO lpsi;
  
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 1;
  lpsi.nMin = param_3;
  lpsi.nMax = param_4;
  FUN_004a8244(param_1,bar,&lpsi,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a807c  FUN_004a807c   (71 bytes)   [unnamed]
void __cdecl FUN_004a807c(int param_1,int bar,UINT param_3,byte redraw)

{
  SCROLLINFO lpsi;
  
  memset(&lpsi.cbSize,0,0x1c);
  lpsi.cbSize = 0x1c;
  lpsi.fMask = 2;
  lpsi.nPage = param_3;
  FUN_004a8244(param_1,bar,&lpsi,redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a80c4  FUN_004a80c4   (64 bytes)   [unnamed]
UINT __cdecl FUN_004a80c4(int param_1,int bar)

{
  tagSCROLLINFO scrollInfo;
  
  memset(&scrollInfo.cbSize,0,0x1c);
  scrollInfo.cbSize = 0x1c;
  scrollInfo.fMask = 2;
  FUN_004a8260(param_1,bar,&scrollInfo);
  return scrollInfo.nPage;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a819c  FUN_004a819c   (168 bytes)   [unnamed]
void __cdecl FUN_004a819c(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b28c);
  if (*(int *)(param_1 + 100) != 0) {
    if (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0) {
      if (*(int *)(param_1 + 100) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 100) + 0xc))();
      }
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 100),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 100) = param_2;
  if ((*(int *)(param_1 + 100) != 0) && (*(int *)(**(int **)(param_1 + 100) + 0xc) == 0)) {
    puVar1 = (uint *)(**(int **)(param_1 + 100) + 0x18);
    *puVar1 = *puVar1 | 0x8000000;
    (**(code **)(*(int *)(**(int **)(param_1 + 100) + 8) + 0x10))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8244  FUN_004a8244   (28 bytes)   [unnamed]
void __cdecl FUN_004a8244(int param_1,int bar,LPCSCROLLINFO lpsi,byte redraw)

{
  SetScrollInfo(*(HWND *)(param_1 + 0xc),bar,lpsi,(uint)redraw);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8260  FUN_004a8260   (22 bytes)   [unnamed]
void __cdecl FUN_004a8260(int param_1,int bar,LPSCROLLINFO lpsi)

{
  GetScrollInfo(*(HWND *)(param_1 + 0xc),bar,lpsi);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8278  FUN_004a8278   (25 bytes)   [unnamed]
void __stdcall FUN_004a8278(void)

{
  FUN_004cb160();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8294  FUN_004a8294   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a8294(undefined4 *lp)

{
  BOOL ok;
  
  if (lp == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  ok = IsBadReadPtr(lp,8);
  if (ok != 0) {
    return (undefined4 *)0x0;
  }
  if (lp[1] != 0x69777264) {
    return (undefined4 *)0x0;
  }
  ok = IsBadReadPtr((void *)*lp,4);
  if (ok != 0) {
    return (undefined4 *)0x0;
  }
  return lp;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a857c  FUN_004a857c   (86 bytes)   [unnamed]
void __cdecl FUN_004a857c(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x50b38c);
  piVar1 = OWL::TXWindow::TXWindow(local_14,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_14,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8674  FUN_004a8674   (102 bytes)   [unnamed]
int * __cdecl FUN_004a8674(int *param_1,undefined4 param_2)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b414);
  FUN_0048d82c(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TWindowDC::vftable;
  *(undefined4 *)((int)param_1 + 0x21) = param_2;
  hdc = GetWindowDC(*(HWND *)((int)param_1 + 0x21));
  *param_1 = (int)hdc;
  FUN_00493530(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8760  FUN_004a8760   (66 bytes)   [unnamed]
int * __cdecl FUN_004a8760(int *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b45c);
  FUN_004a8674(param_1,0);
  *(undefined ***)((int)param_1 + 5) = &OWL::TScreenDC::vftable;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a87c4  FUN_004a87c4   (27 bytes)   [unnamed]
void __stdcall FUN_004a87c4(void)

{
  FUN_004cb1d4();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a87e0  FUN_004a87e0   (24 bytes)   [unnamed]
undefined4 __stdcall FUN_004a87e0(void)

{
  undefined4 in_stack_00000004;
  
  FUN_004cb1d4();
  return in_stack_00000004;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a87f8  FUN_004a87f8   (25 bytes)   [unnamed]
undefined4 __stdcall FUN_004a87f8(void)

{
  undefined4 in_stack_00000004;
  
  FUN_004cb1d4();
  return in_stack_00000004;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8814  FUN_004a8814   (16 bytes)   [unnamed]
void __stdcall FUN_004a8814(void)

{
  FUN_004cb19c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8824  FUN_004a8824   (97 bytes)   [unnamed]
int * __cdecl FUN_004a8824(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  iVar1 = FUN_00499f04(param_1);
  if (iVar1 == 0) {
    puVar2 = FUN_00499fc4(param_1);
    *param_2 = puVar2;
  }
  else {
    FUN_00499da0(param_1,&local_8,4);
    *param_2 = local_8;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8888  FUN_004a8888   (101 bytes)   [unnamed]
int * __cdecl FUN_004a8888(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  uVar1 = *param_2;
  FUN_0049a31c(param_1);
  if ((short)((uint)uVar1 >> 0x10) == 0) {
    local_8 = *param_2;
    FUN_0049a294(param_1,&local_8,4);
  }
  else {
    FUN_0049a40c(param_1,(uint *)*param_2);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a88f0  FUN_004a88f0   (51 bytes)   [unnamed]
void __cdecl FUN_004a88f0(HWND hWnd,LPCSTR text,LPCSTR caption,UINT type)

{
  WORD wLanguageId;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar2 = FUN_00487e08(puVar1,iVar2);
  if (iVar2 == 0) {
    wLanguageId = 0;
  }
  else {
    wLanguageId = *(WORD *)(iVar2 + 0x2f);
  }
  MessageBoxExA(hWnd,text,caption,type,wLanguageId);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8923  FUN_004a8923   (83 bytes)   [unnamed]
void __stdcall FUN_004a8923(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b54a);
  if (DAT_0050b549 != '\0') {
    DAT_0050b549 = '\0';
  }
  if (DAT_0050b548 != '\0') {
    OWL::TApplicatData::_dtor(0x51b77c,2);
    DAT_0050b548 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8978  FUN_004a8978   (48 bytes)   [unnamed]
undefined4 * __cdecl FUN_004a8978(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b564);
  *param_1 = FUN_004a88f0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a89e8  FUN_004a89e8   (73 bytes)   [unnamed]
undefined * __stdcall FUN_004a89e8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b588);
  if (DAT_0050b548 == '\0') {
    FUN_004a8978((undefined4 *)&DAT_0051b77c);
    DAT_0050b548 = DAT_0050b548 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b77c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8a84  FUN_004a8a84   (85 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_004a8a84(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b5ac);
  if (DAT_0050b549 == '\0') {
    _DAT_0051b780 = 0;
    _DAT_0051b784 = 0;
    _DAT_0051b788 = 0;
    DAT_0050b549 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b780;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8b48  FUN_004a8b48   (183 bytes)   [unnamed]
void __stdcall FUN_004a8b48(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b5c8);
  if (DAT_0050b5c0 == '\0') goto LAB_004a8bef;
  if (DAT_0051b7a0 != 0) {
    if (*(int *)(DAT_0051b7a0 + -0xc) != -1) {
      strRep = (int *)(DAT_0051b7a0 + -0xc);
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
      if (prevRefs != 0) goto LAB_004a8be8;
    }
    operator_delete();
    DAT_0051b7a0 = 0;
  }
LAB_004a8be8:
  DAT_0050b5c0 = '\0';
LAB_004a8bef:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8c00  FUN_004a8c00   (109 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004a8c48) */
undefined * __stdcall FUN_004a8c00(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b5ec);
  if (DAT_0050b5c0 == '\0') {
    (*(undefined * *)&DAT_0051b7a0) = &g_emptyStringData;
    DAT_0050b5c0 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b798;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a8c70  FUN_004a8c70   (528 bytes)   [unnamed]
int * __cdecl FUN_004a8c70(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5)

{
  uint len;
  undefined *puVar2;
  int *rep;
  undefined4 *sehChainHead;
  char cVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b61c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6f) = 0;
    *(undefined ***)((int)param_1 + 0x73) = &OWL::TEventHandler::vftable;
  }
  cVar4 = '\x01';
  puVar2 = FUN_004a8c00();
  OWL::TModule::TModule_4c0a20(param_1 + 1,param_3,(*(int *)&DAT_0051b78c),*(undefined4 *)(puVar2 + 8),cVar4);
  OWL::TMsgThread::TMsgThread((undefined4 *)((int)param_1 + 0x11));
  *(undefined ***)((int)param_1 + 0x1b) = &OWL::TApplication::vftable;
  param_1[1] = (int)&PTR_LAB_0050b6b4;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0050b6c4;
  *(undefined ***)*param_1 = &PTR_LAB_0050b6e4;
  *(undefined4 *)((int)param_1 + 0x1f) = DAT_0051b790;
  *(undefined4 *)((int)param_1 + 0x23) = DAT_0051b794;
  *(undefined4 *)((int)param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0x2f) = 0x400;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  puVar2 = FUN_004a8c00();
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  if (*(int *)(*(int *)(puVar2 + 8) + -0xc) == -1 || *(int *)(*(int *)(puVar2 + 8) + -0xc) + 1 < 0)
  {
    len = *(uint *)(*(int *)(puVar2 + 8) + -4);
    rep = std::string::__getRep((int)param_1 + 0x35,len,len);
    *(int **)((int)param_1 + 0x3d) = rep + 3;
    memcpy(*(undefined4 **)((int)param_1 + 0x3d),*(undefined4 **)(puVar2 + 8),len);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x3d) = *(undefined4 *)(puVar2 + 8);
    rep = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x45) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x53) = 0;
  *(undefined4 *)((int)param_1 + 0x57) = 0;
  *(undefined4 *)((int)param_1 + 0x5b) = 0;
  *(undefined4 *)((int)param_1 + 0x5f) = 0;
  *(undefined4 *)((int)param_1 + 99) = 0;
  *(undefined4 *)((int)param_1 + 0x67) = 0;
  if (param_5 == (undefined *)0x0) {
    param_5 = FUN_00487bc0();
  }
  *(undefined **)((int)param_1 + 0x6b) = param_5;
  FUN_00487e38(*(undefined4 **)((int)param_1 + 0x6b),param_1,0);
  *param_4 = param_1 + 1;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a95d8  FUN_004a95d8   (238 bytes)   [unnamed]
undefined4 __cdecl FUN_004a95d8(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 & 0xffffffef;
    uVar3 = FUN_004a793c(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) != 0) {
      FUN_004a795c(**(int **)(param_1 + 0x2b),uVar3 & 0xfffbffff);
    }
    if (*(int *)(param_1 + 0x31) != 0) {
      if (*(int *)(param_1 + 0x2b) == 0) {
        iVar4 = *(int *)(param_1 + 0x2b);
      }
      else {
        iVar4 = **(int **)(param_1 + 0x2b);
      }
      if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == iVar4) {
        (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
      }
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2b) = param_2;
  if (*(int *)(param_1 + 0x2b) != 0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0x2b) + 0x74);
    *puVar1 = *puVar1 | 0x10;
    uVar3 = FUN_004a793c(**(int **)(param_1 + 0x2b));
    if ((uVar3 & 0x40000) == 0) {
      FUN_004a795c(**(int **)(param_1 + 0x2b),uVar3 | 0x40000);
    }
    if (((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0)) &&
       (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004a96c8  FUN_004a96c8   (63 bytes)   [unnamed]
int __cdecl FUN_004a96c8(int str,undefined4 param_2,uint *s)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50b830);
  std::string::string_from_cstr(str,s);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aabec  FUN_004aabec   (238 bytes)   [unnamed]
void __cdecl FUN_004aabec(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50bcc8);
  if (*(int *)(param_1 + 0x31) != 0) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0) {
      if (*(int *)(param_1 + 0x31) != 0) {
        (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x31) + 0xc))();
      }
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 0x31),0x10,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x31) = param_2;
  if ((((*(int *)(param_1 + 0x31) != 0) && (*(int *)(**(int **)(param_1 + 0x31) + 0xc) == 0)) &&
      (*(int *)(param_1 + 0x2b) != 0)) && (*(int *)(**(int **)(param_1 + 0x2b) + 0xc) != 0)) {
    if (*(int *)(**(int **)(param_1 + 0x31) + 0x14) == 0) {
      (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x34))();
    }
    FUN_004a7988(**(int **)(param_1 + 0x31),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)(param_1 + 0x31) + 8) + 0x10))();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aae70  FUN_004aae70   (62 bytes)   [unnamed]
void __cdecl FUN_004aae70(int param_1,int param_2)

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
// 0x004aaeb0  FUN_004aaeb0   (65 bytes)   [unnamed]
void __cdecl FUN_004aaeb0(int param_1,int param_2)

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
// 0x004aaef4  FUN_004aaef4   (102 bytes)   [unnamed]
void __cdecl FUN_004aaef4(int param_1)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50bd40);
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
// 0x004ab17c  FUN_004ab17c   (78 bytes)   [unnamed]
void __stdcall FUN_004ab17c(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x50bde8);
  piVar1 = OWL::TXInvalidMainWindow::TXInvalidMainWindow(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab210  FUN_004ab210   (77 bytes)   [unnamed]
undefined4 __stdcall FUN_004ab210(HWND hWnd,int *param_2)

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
// 0x004ab25d  FUN_004ab25d   (85 bytes)   [unnamed]
void __cdecl FUN_004ab25d(int *param_1)

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
// 0x004ab2b4  FUN_004ab2b4   (290 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004ab2b4(int param_1,int param_2,uint param_3)

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
  __InitExceptBlockLDTC(0x50be60);
  lParam = &DAT_0050be30;
  piVar6 = &local_40;
  for (i = 3; i != 0; i = i + -1) {
    *piVar6 = *lParam;
    lParam = lParam + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  *(short *)piVar6 = (short)*lParam;
  lParam = (int *)FUN_004a8a84();
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
    lpfn = FUN_004ab210;
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
    lpfn = FUN_004ab210;
    threadId = GetCurrentThreadId();
    EnumThreadWindows(threadId,lpfn,(LPARAM)lParam);
    unused = puVar4;
  }
  ehContext = 8;
  local_30 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  ehContext = 0;
  lParam = (int *)FUN_004a8a84();
  *lParam = local_2c;
  FUN_004ab25d(&local_40);
  *sehChainHead = sehPrevFrame;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab404  FUN_004ab404   (36 bytes)   [unnamed]
void __cdecl FUN_004ab404(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_004a8a84();
  if (*piVar1 != 0) {
    FUN_004ab25d((int *)*piVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab428  FUN_004ab428   (55 bytes)   [unnamed]
void __cdecl FUN_004ab428(int param_1,char param_2)

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
// 0x004ab47c  DestroyRichEditLoader_4ab47c   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_4ab47c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50be75);
  if (DAT_0050be74 != '\0') {
    OWL::TBrushCache::_dtor(0x51b7a8,2);
    DAT_0050be74 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab4bc  FUN_004ab4bc   (73 bytes)   [unnamed]
undefined * __stdcall FUN_004ab4bc(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50be90);
  if (DAT_0050be74 == '\0') {
    FUN_004ab558((undefined4 *)&DAT_0051b7a8);
    DAT_0050be74 = DAT_0050be74 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b7a8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab558  FUN_004ab558   (70 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ab558(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50beb4);
  param_1[0x30] = 0x10;
  memset(param_1,0,0xc0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab620  FUN_004ab620   (77 bytes)   [unnamed]
void __cdecl FUN_004ab620(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    uVar1 = param_1[param_2 * 3];
    uVar2 = param_1[param_2 * 3 + 1];
    uVar3 = param_1[param_2 * 3 + 2];
    FUN_004dc7f8(param_1 + 3,param_1,param_2 * 0xc);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab670  FUN_004ab670   (188 bytes)   [unnamed]
undefined1 __cdecl FUN_004ab670(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1[param_1[0x30] * 3 + -3] == 0) {
    FUN_004dc7f8(param_1 + 3,param_1,(param_1[0x30] - 1) * 0xc);
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
  }
  else {
    uVar1 = param_1[0x30];
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_004ab6e2;
    } while (param_1[uVar1 * 3 + 2] != 0);
    FUN_00493eb4(param_1[uVar1 * 3]);
    param_1[uVar1 * 3] = param_2;
    param_1[uVar1 * 3 + 1] = param_3;
    param_1[uVar1 * 3 + 2] = 1;
    FUN_004ab620(param_1,uVar1);
LAB_004ab6e2:
    if ((int)uVar1 < 0) {
      local_5 = 0;
    }
  }
  FUN_00493c34(param_2,2);
  return local_5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab72c  FUN_004ab72c   (53 bytes)   [unnamed]
void __cdecl FUN_004ab72c(int param_1,int param_2)

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
// 0x004ab764  FUN_004ab764   (57 bytes)   [unnamed]
undefined4 __cdecl FUN_004ab764(int param_1,int param_2)

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
// 0x004ab7a0  FUN_004ab7a0   (68 bytes)   [unnamed]
undefined4 __cdecl FUN_004ab7a0(undefined4 *param_1,int param_2)

{
  int i;
  
  for (i = 0; (i < (int)param_1[0x30] && (param_1[i * 3] != 0)); i = i + 1) {
    if (param_2 == param_1[i * 3 + 1]) {
      param_1[i * 3 + 2] = param_1[i * 3 + 2] + 1;
      FUN_004ab620(param_1,i);
      return *param_1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab7e4  FUN_004ab7e4   (104 bytes)   [unnamed]
uint * __cdecl FUN_004ab7e4(uint *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *sehChainHead;
  uint uVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50bed8);
  FUN_0049402c(param_1,param_2,param_3);
  if ((char)param_1[1] == '\0') {
    uVar2 = *param_1;
    puVar1 = FUN_004ab4bc();
    FUN_004ab764((int)puVar1,uVar2);
  }
  else {
    FUN_00493c34(*param_1,2);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab84c  FUN_004ab84c   (261 bytes)   [unnamed]
uint * __cdecl FUN_004ab84c(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  uint color;
  undefined4 *puVar3;
  uint uVar4;
  HBRUSH hBrush;
  uint *puVar6;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50befc);
  FUN_00493fdc(param_1);
  *(bool *)(param_1 + 1) = param_3 == '\0';
  color = FUN_0048c12c(param_2);
  if (param_3 != '\0') {
    uVar4 = color;
    puVar3 = (undefined4 *)FUN_004ab4bc();
    uVar4 = FUN_004ab7a0(puVar3,uVar4);
    *param_1 = uVar4;
    if (uVar4 != 0) {
      *sehChainHead = sehPrevFrame;
      goto LAB_004ab93d;
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
  FUN_00493530((int *)param_1,0x7fe3);
  if (param_3 == '\0') {
    FUN_00493c34(*param_1,2);
  }
  else {
    uVar4 = FUN_0048c12c(param_2);
    color = *param_1;
    puVar6 = (uint *)FUN_004ab4bc();
    cVar1 = FUN_004ab670(puVar6,color,uVar4);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_004ab93d:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ab954  FUN_004ab954   (94 bytes)   [unnamed]
uint * __cdecl FUN_004ab954(uint *param_1,LOGBRUSH *plbrush)

{
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50bf20);
  FUN_00493fdc(param_1);
  hBrush = CreateBrushIndirect(plbrush);
  *param_1 = (uint)hBrush;
  FUN_00493530((int *)param_1,0x7fe3);
  FUN_00493c34(*param_1,2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aba20  FUN_004aba20   (74 bytes)   [unnamed]
uint * __cdecl FUN_004aba20(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50bf68);
  iVar2 = 1;
  hBrush = FUN_004abacc(param_2,param_3,param_4);
  FUN_004ab7e4(param_1,hBrush,iVar2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aba90  FUN_004aba90   (58 bytes)   [unnamed]
void __cdecl FUN_004aba90(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  HBRUSH hBrush;
  
  if (*param_1 != 0) {
    FUN_00493eb4(*param_1);
  }
  hBrush = FUN_004abacc(param_2,param_3,param_4);
  *param_1 = (uint)hBrush;
  FUN_00493c34(*param_1,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abacc  FUN_004abacc   (199 bytes)   [unnamed]
HBRUSH __cdecl FUN_004abacc(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  HBRUSH hBrush;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HGLOBAL dib [5];
  undefined4 *local_f;
  
  __InitExceptBlockLDTC(0x50bf9c);
  FUN_004b165c((int *)dib,8,8,2,0);
  memset(local_f,0,0x20);
  iVar1 = 0;
  do {
    *(undefined1 *)(local_f + (7 - iVar1)) = *(undefined1 *)(param_1 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_004b10dc((int)dib,0,param_3);
  FUN_004b10dc((int)dib,1,param_2);
  hBrush = CreateDIBPatternBrush(dib[0],0);
  FUN_00493548((int)hBrush,0x7fe3);
  OWL::TDib::_dtor((int *)dib,2);
  *sehChainHead = sehPrevFrame;
  return hBrush;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abf84  InitRichEditStreamer_4abf84   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4abf84(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c154);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004ac2a8;
  puVar1 = FUN_004dd5cc(1,0,0x402b6c);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b86c,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004abfda  FUN_004abfda   (48 bytes)   [unnamed]
void __stdcall FUN_004abfda(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c168);
  OWL::TStreamableClass::_dtor(0x51b86c,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
