// TSMerge.exe — runtime / library code "code_0x00418000"
// 40 functions, 0x00418210..0x0041b748. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00418210  FUN_00418210   (83 bytes)   [unnamed]
void __cdecl FUN_00418210(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 txOwl [3];
  
  __InitExceptBlockLDTC(0x466a58);
  piVar1 = OWL::TXOwl::TXOwl(txOwl,param_1,param_2);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(txOwl,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418264  FUN_00418264   (478 bytes)   [unnamed]
int __cdecl FUN_00418264(int param_1,char *param_2,uint param_3,int param_4)

{
  uint len;
  char cVar2;
  int iVar3;
  int *strRep;
  undefined4 *sehChainHead;
  uint multiByteStr [34];
  undefined4 *unused;
  undefined4 *unused2;
  undefined4 *dest;
  undefined4 *unused3;
  uint unused4;
  int unused5;
  int *newRep;
  int *newData;
  int unused6;
  undefined4 *unused7;
  undefined4 unused8;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x466aac);
  if (param_4 == 0) {
LAB_004182a1:
    cVar2 = '\0';
  }
  else {
    iVar3 = FUN_00443f20(param_4,param_3,(LPSTR)multiByteStr,0x80);
    if (iVar3 == 0) goto LAB_004182a1;
    cVar2 = '\x01';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = cVar2;
  }
  if (cVar2 == '\0') {
    sprintf((undefined1 *)multiByteStr,(byte *)"Exception #%u (Could not load description string; <owl/except.rc> not bound\?).");
  }
  ehContext = 8;
  std::string::string_from_cstr((int)str,multiByteStr);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  unused8 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    len = local_c[-1];
    newRep = std::string::__getRep(param_1,len,len);
    newData = newRep + 3;
    *(int **)(param_1 + 8) = newData;
    unused5 = param_1;
    unused3 = local_c;
    dest = *(undefined4 **)(param_1 + 8);
    unused4 = len;
    memcpy(dest,local_c,len);
  }
  else {
    unused7 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    unused6 = param_1;
    strRep = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  ehContext = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_00418427;
    }
    unused2 = local_c + -3;
    unused = local_c + -3;
    operator_delete();
  }
LAB_00418427:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418444  FUN_00418444   (258 bytes)   [unnamed]
int __cdecl FUN_00418444(int str,uint param_2,undefined4 param_3,int param_4)

{
  int prevRefs;
  byte *strRep;
  undefined4 *sehChainHead;
  uint local_158 [69];
  byte *unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x466b3c);
  ehContext = 0x14;
  FUN_00418264((int)local_14,(char *)0x0,param_2,param_4);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  sprintf((undefined1 *)local_158,local_c);
  ehContext = 0x20;
  std::string::string_from_cstr(str,local_158);
  ehContext = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0041852b;
    }
    unused = local_c + -0xc;
    operator_delete();
  }
LAB_0041852b:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418548  FUN_00418548   (258 bytes)   [unnamed]
int __cdecl FUN_00418548(int str,uint param_2,undefined4 param_3,int param_4)

{
  int prevRefs;
  byte *strRep;
  undefined4 *sehChainHead;
  uint local_158 [69];
  byte *unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x466bc0);
  ehContext = 0x14;
  FUN_00418264((int)local_14,(char *)0x0,param_2,param_4);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  sprintf((undefined1 *)local_158,local_c);
  ehContext = 0x20;
  std::string::string_from_cstr(str,local_158);
  ehContext = 0x2c;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0041862f;
    }
    unused = local_c + -0xc;
    operator_delete();
  }
LAB_0041862f:
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418860  FUN_00418860   (78 bytes)   [unnamed]
void __stdcall FUN_00418860(void)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x466c8c);
  piVar1 = OWL::TXOutOfMemory::TXOutOfMemory(local_10);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004188f4  FUN_004188f4   (82 bytes)   [unnamed]
uint * __cdecl FUN_004188f4(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466cec);
  FUN_0041d2fc(param_1,param_2,param_3);
  if ((char)param_1[1] != '\0') {
    FUN_0041cf04(*param_1,3);
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418948  FUN_00418948   (158 bytes)   [unnamed]
uint * __cdecl FUN_00418948(uint *param_1,LPCSTR faceName,int cHeight,int cWidth,int cEscapement,int cOrientation, int cWeight,byte pitchAndFamily,byte italic,byte underline,byte strikeOut,byte charSet, byte outPrecision,byte clipPrecision,byte quality)

{
  HFONT hFont;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466d10);
  FUN_0041d2ac(param_1);
  hFont = CreateFontA(cHeight,cWidth,cEscapement,cOrientation,cWeight,(uint)italic,(uint)underline,
                       (uint)strikeOut,(uint)charSet,(uint)outPrecision,(uint)clipPrecision,(uint)quality,
                       (uint)pitchAndFamily,faceName);
  *param_1 = (uint)hFont;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004189e8  FUN_004189e8   (94 bytes)   [unnamed]
uint * __cdecl FUN_004189e8(uint *param_1,LOGFONTA *pLogFont)

{
  HFONT hFont;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466d34);
  FUN_0041d2ac(param_1);
  hFont = CreateFontIndirectA(pLogFont);
  *param_1 = (uint)hFont;
  FUN_0041c800((int *)param_1,0x7fe3);
  FUN_0041cf04(*param_1,3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a48  FUN_00418a48   (60 bytes)   [unnamed]
void __cdecl FUN_00418a48(undefined4 param_1,LPTEXTMETRICA lptm,int param_3)

{
  HDC hdc;
  BOOL ok;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  ok = GetTextMetricsA(hdc,lptm);
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))(ok,ok != 0,*(int *)(param_3 + 5),param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418a84  FUN_00418a84   (98 bytes)   [unnamed]
void __cdecl FUN_00418a84(undefined4 param_1,LPTEXTMETRICA lptm)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x466d68);
  FUN_0042e298(windowDC);
  FUN_00418a48(param_1,lptm,(int)windowDC);
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418ae8  FUN_00418ae8   (131 bytes)   [unnamed]
LONG * __cdecl FUN_00418ae8(LONG *param_1,undefined4 param_2)

{
  int i;
  tagTEXTMETRICA *pTextMetrics;
  LONG *pLVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  tagTEXTMETRICA textMetrics;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int windowDC [10];
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x466da8);
  ehContext = 8;
  FUN_0042e298(windowDC);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  FUN_00418a48(param_2,&textMetrics,(int)windowDC);
  pTextMetrics = &textMetrics;
  pLVar3 = param_1;
  for (i = 0xe; i != 0; i = i + -1) {
    *pLVar3 = pTextMetrics->tmHeight;
    pTextMetrics = (tagTEXTMETRICA *)((int)pTextMetrics + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  ehDtorCount = ehDtorCount + -3;
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418b6c  FUN_00418b6c   (108 bytes)   [unnamed]
LONG * __cdecl FUN_00418b6c(LONG *param_1,undefined4 param_2,uint *string_)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int windowDC [10];
  
  __InitExceptBlockLDTC(0x466de8);
  FUN_0042e298(windowDC);
  FUN_00418bd8(param_1,param_2,(int)windowDC,string_);
  OWL::TWindowDC::_dtor(windowDC,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418bd8  FUN_00418bd8   (122 bytes)   [unnamed]
LONG * __cdecl FUN_00418bd8(LONG *param_1,undefined4 param_2,int param_3,uint *string_)

{
  char *c;
  HDC hdc;
  tagSIZE *psizl;
  tagSIZE size;
  char *unused;
  LONG local_c;
  LONG local_8;
  
  (**(code **)(*(int *)(param_3 + 5) + 0x14))();
  c = strlen(string_);
  size.cx = 0;
  size.cy = 0;
  psizl = &size;
  unused = c;
  hdc = (HDC)(**(code **)(*(int *)(param_3 + 5) + 0x5c))();
  GetTextExtentPoint32A(hdc,(LPCSTR)string_,(int)c,psizl);
  local_c = size.cx;
  local_8 = size.cy;
  (**(code **)(*(int *)(param_3 + 5) + 0x1c))();
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418c54  FUN_00418c54   (90 bytes)   [unnamed]
int __cdecl FUN_00418c54(int str,undefined4 *param_2)

{
  undefined4 *sehChainHead;
  undefined1 pv [28];
  uint s [10];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x466e18);
  GetObjectA((HANDLE)*param_2,0x3c,pv);
  ehContext = 8;
  std::string::string_from_cstr(str,s);
  *sehChainHead = sehPrevFrame;
  return str;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cb0  FUN_00418cb0   (39 bytes)   [unnamed]
undefined1 __cdecl FUN_00418cb0(undefined4 *param_1)

{
  undefined1 pv [27];
  undefined1 local_25;
  
  GetObjectA((HANDLE)*param_1,0x3c,pv);
  return local_25;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418cd8  FUN_00418cd8   (82 bytes)   [unnamed]
uint * __cdecl FUN_00418cd8(uint *param_1)

{
  bool bVar1;
  HGDIOBJ hGdiObject;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x466e3c);
  iVar3 = 0;
  bVar1 = FUN_004109c0();
  if (bVar1) {
    hGdiObject = GetStockObject(0x11);
  }
  else {
    hGdiObject = GetStockObject(0xd);
  }
  FUN_004188f4(param_1,hGdiObject,iVar3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418df8  FUN_00418df8   (24 bytes)   [unnamed]
int __cdecl FUN_00418df8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2 + 4;
  if (iVar1 < 0) {
    iVar1 = param_1 * param_2 + 0xb;
  }
  return iVar1 >> 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418e10  FUN_00418e10   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00418e10(int param_1)

{
  if (((param_1 != 0) && (param_1 != -1)) && ((param_1 < 30000 || (30999 < param_1)))) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00418e38  FUN_00418e38   (291 bytes)   [unnamed]
void __cdecl FUN_00418e38(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int metric;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_2 = (int)(char)param_1[1];
    *param_4 = (int)*(char *)((int)param_1 + 6);
    *param_3 = (int)*(char *)((int)param_1 + 5);
    *param_5 = (int)*(char *)((int)param_1 + 7);
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00418df8((int)(char)param_1[1],param_6);
    *param_2 = iVar1;
    iVar1 = FUN_00418df8((int)*(char *)((int)param_1 + 6),param_6);
    *param_4 = iVar1;
    iVar1 = FUN_00418df8((int)*(char *)((int)param_1 + 5),param_6);
    *param_3 = iVar1;
    iVar1 = FUN_00418df8((int)*(char *)((int)param_1 + 7),param_6);
    *param_5 = iVar1;
  }
  else if (iVar1 == 2) {
    iVar1 = GetSystemMetrics(DAT_0046973c);
    metric = GetSystemMetrics(DAT_00469744);
    *param_2 = (char)param_1[1] * iVar1;
    *param_4 = *(char *)((int)param_1 + 6) * metric;
    *param_3 = *(char *)((int)param_1 + 5) * iVar1;
    *param_5 = *(char *)((int)param_1 + 7) * metric;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00418f62  FUN_00418f62   (282 bytes)   [unnamed]
int __stdcall FUN_00418f62(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  
  bVar5 = 0;
  piVar1 = (int *)(unaff_EBP + 8);
  __InitExceptBlockLDTC(0x466e68);
  *(undefined2 *)(unaff_EBP + -0x14) = 8;
  *(undefined ***)*piVar1 = &OWL::TGadget::vftable;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 10) = 0;
  *(undefined4 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x12) = 0;
  *(undefined4 *)(iVar2 + 0x16) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2a) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 0;
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x1e) = 0;
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 0x2e) = 1;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x33) = *(undefined1 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x32) = *(undefined1 *)(iVar2 + 0x33);
  *(undefined4 *)(*piVar1 + 6) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puVar3 = (undefined4 *)(unaff_EBP + -0x34);
  puVar4 = (undefined4 *)(*piVar1 + 10);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined2 *)(*piVar1 + 0x42) = 3;
  *(undefined1 *)(*piVar1 + 0x38) = 0;
  *(undefined1 *)(*piVar1 + 0x39) = 0;
  *(undefined1 *)(*piVar1 + 4) = 0;
  *(undefined1 *)(*piVar1 + 5) = 0;
  *(undefined1 *)(*piVar1 + 0x37) = 1;
  *(undefined1 *)(*piVar1 + 0x36) = 1;
  *(undefined4 *)(*piVar1 + 0x3e) = 0;
  *(undefined4 *)(*piVar1 + 0x3a) = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_004191cc(*piVar1,*(undefined4 *)(unaff_EBP + 0x10));
  *sehChainHead = *(undefined4 *)(unaff_EBP + -0x24);
  return *piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041919c  FUN_0041919c   (45 bytes)   [unnamed]
void __cdecl FUN_0041919c(int param_1,undefined4 *param_2)

{
  int i;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1e);
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_0041b748(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004191cc  FUN_004191cc   (78 bytes)   [unnamed]
void __cdecl FUN_004191cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  iVar1 = *(int *)(param_1 + 0x1a);
  if (iVar1 != 0) {
    if (iVar1 - 1U < 3) {
      uVar2 = 1;
      goto LAB_004191fa;
    }
    if (iVar1 - 4U < 6) {
      uVar2 = 2;
      goto LAB_004191fa;
    }
  }
  uVar2 = 0;
LAB_004191fa:
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_0041b748(*(int *)(param_1 + 6));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004195a8  FUN_004195a8   (95 bytes)   [unnamed]
void __cdecl FUN_004195a8(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    (**(code **)(*(int *)(**(int **)(param_1 + 6) + 8) + 0x6c))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419608  FUN_00419608   (73 bytes)   [unnamed]
void __cdecl FUN_00419608(int param_1)

{
  FUN_004195a8(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419654  FUN_00419654   (38 bytes)   [unnamed]
void __cdecl FUN_00419654(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    UpdateWindow(*(HWND *)(**(int **)(param_1 + 6) + 0xc));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419838  FUN_00419838   (184 bytes)   [unnamed]
void __cdecl FUN_00419838(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int metric;
  int metric2;
  
  if (*(int *)(param_1 + 6) != 0) {
    metric = GetSystemMetrics(DAT_0046973c);
    metric2 = GetSystemMetrics(DAT_00469744);
    FUN_00418e38((int *)(param_1 + 0x2e),param_2,param_3,param_4,param_5,
                 (uint)*(byte *)(*(int *)(param_1 + 6) + 0x30));
    *param_2 = *(int *)(param_1 + 0x1e) * metric + *param_2;
    *param_3 = *param_3 + *(int *)(param_1 + 0x22) * metric;
    *param_4 = *param_4 + *(int *)(param_1 + 0x26) * metric2;
    *param_5 = *param_5 + *(int *)(param_1 + 0x2a) * metric2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004198f0  FUN_004198f0   (105 bytes)   [unnamed]
void __cdecl FUN_004198f0(int param_1,int *param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_00419838(param_1,&local_8,&local_c,&local_10,&local_14);
  *param_2 = local_8;
  param_2[2] = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)) - local_c;
  param_2[1] = local_10;
  param_2[3] = (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe)) - local_14;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419ec8  FUN_00419ec8   (74 bytes)   [unnamed]
int * __cdecl FUN_00419ec8(int param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x2c))(), cVar2 == '\0'))) {
    piVar1 = *(int **)((int)piVar1 + 0x3e);
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a0b0  FUN_0041a0b0   (421 bytes)   [unnamed]
uint * __cdecl FUN_0041a0b0(uint *param_1,int param_2,char param_3,byte italic)

{
  byte pitchAndFamily;
  uint *puVar2;
  int cWeight;
  int cHeight;
  int *strRep;
  undefined4 *sehChainHead;
  int nDenominator;
  int cWidth;
  int cEscapement;
  int cOrientation;
  byte underline;
  byte strikeOut;
  byte charSet;
  byte outPrecision;
  byte clipPrecision;
  byte quality;
  undefined4 sehPrevFrame;
  int windowDC;
  int local_47;
  undefined1 str [8];
  LPCSTR faceName;
  uint gdiObject [2];
  uint gdiObject2 [2];
  
  __InitExceptBlockLDTC(0x46728c);
  quality = 0;
  clipPrecision = 0;
  outPrecision = 0;
  charSet = 1;
  strikeOut = 0;
  underline = 0;
  puVar2 = FUN_00418cd8(gdiObject2);
  pitchAndFamily = FUN_00418cb0(puVar2);
  if (param_3 == '\0') {
    cWeight = 400;
  }
  else {
    cWeight = 700;
  }
  cOrientation = 0;
  cEscapement = 0;
  cWidth = 0;
  FUN_0042e298(&windowDC);
  nDenominator = 0x48;
  cHeight = (**(code **)(local_47 + 0xc))();
  cHeight = MulDiv(-param_2,cHeight,nDenominator);
  OWL::TWindowDC::_dtor(&windowDC,0);
  puVar2 = FUN_00418cd8(gdiObject);
  FUN_00418c54((int)str,puVar2);
  FUN_00418948(param_1,faceName,cHeight,cWidth,cEscapement,cOrientation,cWeight,pitchAndFamily,italic,underline,strikeOut,charSet,
               outPrecision,clipPrecision,quality);
  if (faceName != (LPCSTR)0x0) {
    if (*(int *)(faceName + -0xc) != -1) {
      strRep = (int *)(faceName + -0xc);
      if (strRep == &g_nullStringRep) {
        cWeight = 1;
      }
      else if (strRep == &g_nullStringRep) {
        cWeight = 1;
      }
      else {
        *strRep = *strRep + -1;
        cWeight = *strRep + 1;
      }
      if (cWeight != 0) goto LAB_0041a208;
    }
    operator_delete();
    faceName = (LPCSTR)0x0;
  }
LAB_0041a208:
  OWL::TGdiObject::_dtor(gdiObject,0);
  OWL::TGdiObject::_dtor(gdiObject2,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a798  FUN_0041a798   (68 bytes)   [unnamed]
uint __cdecl FUN_0041a798(int *param_1)

{
  UINT_PTR timerId;
  
  if (*(int *)(*param_1 + 0xc) == 0) {
    *(undefined1 *)(param_1 + 0x12) = 1;
    return CONCAT31((int3)((uint)*param_1 >> 8),1);
  }
  if (*(int *)((int)param_1 + 0x49) == 0) {
    timerId = SetTimer(*(HWND *)(*param_1 + 0xc),0xbaca,1000,(TIMERPROC)0x0);
    *(UINT_PTR *)((int)param_1 + 0x49) = timerId;
  }
  return (uint)(*(int *)((int)param_1 + 0x49) != 0);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a7dc  FUN_0041a7dc   (36 bytes)   [unnamed]
undefined4 __cdecl FUN_0041a7dc(int *param_1,int param_2)

{
  HWND hWnd;
  
  if (param_1[8] != 0) {
    return 0;
  }
  param_1[8] = param_2;
  hWnd = SetCapture(*(HWND *)(*param_1 + 0xc));
  return CONCAT31((int3)((uint)hWnd >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a800  FUN_0041a800   (26 bytes)   [unnamed]
void __cdecl FUN_0041a800(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    ReleaseCapture();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a81c  FUN_0041a81c   (189 bytes)   [unnamed]
void __cdecl FUN_0041a81c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x14);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar3 + 8);
    }
    puVar1 = FUN_004567e4(iVar3,iVar2,(int *)&DAT_0040467c,(int *)&DAT_004126c4,0);
  }
  while ((iVar3 != 0 && (puVar1 == (undefined4 *)0x0))) {
    iVar3 = *(int *)(iVar3 + 0x14);
    if (iVar3 != 0) {
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar3 + 8);
      }
      puVar1 = FUN_004567e4(iVar3,iVar2,(int *)&DAT_0040467c,(int *)&DAT_004126c4,0);
    }
  }
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 < 1) {
      FUN_0042bbb4(puVar1[1],0x11f,0xffff0000,0);
    }
    else {
      FUN_0042bbb4(puVar1[1],0x11f,param_2,0);
    }
    FUN_0042bbb4(puVar1[1],0x121,2,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041a9e0  FUN_0041a9e0   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_0041a9e0(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x467558);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041aa7c  FUN_0041aa7c   (79 bytes)   [unnamed]
int __cdecl FUN_0041aa7c(int *param_1)

{
  int in_EAX;
  
  if ((*(char *)((int)param_1 + 0x31) != '\0') || (*(char *)((int)param_1 + 0x32) != '\0')) {
    in_EAX = (**(code **)(param_1[6] + 0x38))();
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0;
    }
    if (*(char *)((int)param_1 + 0x32) != '\0') {
      in_EAX = *param_1;
      *(undefined4 *)(in_EAX + 0x2c) = 0;
    }
  }
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ae00  FUN_0041ae00   (718 bytes)   [unnamed]
void __cdecl FUN_0041ae00(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int local_80;
  int unused;
  int local_78;
  int local_74;
  int local_70;
  undefined4 unused2;
  int local_68;
  undefined4 unused3;
  int local_60;
  undefined4 unused4;
  int unused5;
  int local_54;
  int *unused6;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 unused7;
  int local_28;
  undefined4 unused8;
  int local_20;
  undefined4 unused9;
  undefined4 unused10;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  local_70 = 0;
  unused2 = 0;
  local_68 = 0;
  unused3 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  FUN_00418e38((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  unused9 = 0;
  unused10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_0041a9e0);
  operator_delete_array();
  param_2[2] = (int)piVar1;
  if (*(char *)(param_1 + 0x33) == '\0') {
    local_20 = 0;
  }
  else {
    iVar5 = 0;
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0;
        piVar1 = *(int **)((int)piVar1 + 0x3e)) {
      if (*(char *)((int)piVar1 + 5) == '\0') {
        local_28 = 0;
        unused8 = 0;
        (**(code **)(*piVar1 + 8))();
        iVar5 = iVar5 + local_28;
      }
      if (*(int *)((int)piVar1 + 0x3e) != 0) {
        local_30 = 0;
        unused7 = 0;
        (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
        iVar5 = iVar5 + local_30;
      }
    }
    local_34 = 0;
    local_38 = ((local_68 - local_70) - iVar5) / (int)(uint)*(byte *)(param_1 + 0x33);
    if (local_38 < 1) {
      piVar1 = &local_34;
    }
    else {
      piVar1 = &local_38;
    }
    local_20 = *piVar1;
  }
  local_3c = local_8;
  local_40 = local_10;
  local_44 = 0;
  iVar5 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    local_4c = 0;
    local_48 = 0;
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(param_2[2] + iVar5 * 0x10) = local_4c;
    *(int *)(param_2[2] + 4 + iVar5 * 0x10) = local_48;
    if (local_48 < local_44) {
      piVar2 = &local_44;
    }
    else {
      piVar2 = &local_48;
    }
    local_44 = *piVar2;
    iVar5 = iVar5 + 1;
  }
  iVar6 = 0;
  for (iVar5 = *(int *)(param_1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3e)) {
    unused6 = (int *)(iVar5 + 10);
    piVar1 = (int *)(iVar5 + 10);
    piVar2 = &local_80;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
    }
    local_54 = *(int *)(param_2[2] + 4 + iVar6 * 0x10);
    iVar3 = *(int *)(param_2[2] + iVar6 * 0x10);
    unused5 = iVar3;
    local_80 = local_3c;
    iVar4 = local_44 - local_54 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((local_44 - local_54 & 1U) != 0);
    }
    unused = iVar4 + local_40;
    if (*(char *)(iVar5 + 5) == '\0') {
      local_78 = local_3c + iVar3;
    }
    else {
      if (iVar3 < local_20) {
        iVar3 = local_20;
      }
      local_78 = iVar3 + local_3c;
    }
    local_74 = iVar4 + local_40 + local_54;
    piVar1 = &local_80;
    piVar2 = (int *)(param_2[2] + iVar6 * 0x10);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar7 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar7 * -2 + 1;
    }
    local_60 = local_78;
    local_3c = local_78;
    if (*(int *)(iVar5 + 0x3e) != 0) {
      unused4 = 0;
      (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
      local_3c = local_60;
    }
    if (*param_2 < local_78 + local_c) {
      local_78 = local_78 + local_c;
    }
    else {
      local_78 = *param_2;
    }
    *param_2 = local_78;
    if (param_2[1] < local_74 + local_14) {
      local_74 = local_74 + local_14;
    }
    else {
      local_74 = param_2[1];
    }
    param_2[1] = local_74;
    iVar6 = iVar6 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b0d0  FUN_0041b0d0   (536 bytes)   [unnamed]
void __cdecl FUN_0041b0d0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int local_6c;
  int unused;
  int local_64;
  int local_60;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  int local_4c;
  int local_48 [3];
  int local_3c;
  int local_38;
  int *unused6;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 unused7;
  undefined4 unused8;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar6 = 0;
  unused2 = 0;
  unused3 = 0;
  unused4 = 0;
  unused5 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  FUN_00418e38((int *)(param_1 + 0x28),&local_8,&local_c,&local_10,&local_14,
               (uint)*(byte *)(param_1 + 0x30));
  unused7 = 0;
  unused8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar1 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_0041a9e0);
  operator_delete_array();
  param_2[2] = (int)piVar1;
  local_20 = local_10;
  local_24 = local_8;
  local_28 = 0;
  iVar4 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = *(int **)((int)piVar1 + 0x3e)
      ) {
    local_30 = 0;
    local_2c = 0;
    (**(code **)(*piVar1 + 8))();
    *(int *)(param_2[2] + iVar4 * 0x10) = local_30;
    *(undefined4 *)(param_2[2] + 4 + iVar4 * 0x10) = local_2c;
    if (local_30 < local_28) {
      piVar2 = &local_28;
    }
    else {
      piVar2 = &local_30;
    }
    local_28 = *piVar2;
    iVar4 = iVar4 + 1;
  }
  iVar5 = 0;
  for (iVar4 = *(int *)(param_1 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3e)) {
    unused6 = (int *)(iVar4 + 10);
    piVar1 = (int *)(iVar4 + 10);
    piVar2 = &local_6c;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    }
    local_38 = *(int *)(param_2[2] + 4 + iVar5 * 0x10);
    local_3c = *(int *)(param_2[2] + iVar5 * 0x10);
    unused = local_20;
    local_48[2] = local_20 + local_38;
    local_60 = local_48[2];
    iVar3 = local_28 - local_3c >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_28 - local_3c & 1U) != 0);
    }
    local_6c = iVar3 + local_24;
    local_64 = iVar3 + local_24 + local_3c;
    piVar1 = &local_6c;
    piVar2 = (int *)(param_2[2] + iVar5 * 0x10);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar1;
      piVar1 = piVar1 + (uint)bVar6 * -2 + 1;
      piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
    }
    local_20 = local_48[2];
    if (*(int *)(iVar4 + 0x3e) != 0) {
      local_48[1] = 0;
      (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
      local_20 = local_48[2];
    }
    local_48[0] = local_64 + local_c;
    piVar1 = param_2;
    if (*param_2 < local_64 + local_c) {
      piVar1 = local_48;
    }
    *param_2 = *piVar1;
    piVar1 = param_2 + 1;
    local_4c = local_60 + local_14;
    if (*piVar1 < local_60 + local_14) {
      piVar1 = &local_4c;
    }
    param_2[1] = *piVar1;
    iVar5 = iVar5 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b2e8  FUN_0041b2e8   (208 bytes)   [unnamed]
void __cdecl FUN_0041b2e8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int *param_7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  *param_7 = 0;
  iVar1 = param_2;
  for (iVar5 = param_3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3e)) {
    piVar2 = (int *)(*(int *)(param_6 + 8) + iVar1 * 0x10 + 0xc);
    if (*piVar2 < *param_7) {
      piVar2 = param_7;
    }
    *param_7 = *piVar2;
    if (iVar5 == param_4) break;
    iVar1 = iVar1 + 1;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    uVar4 = *param_7 - *(int *)(*(int *)(param_6 + 8) + 0xc + param_2 * 0x10);
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    *(int *)(*(int *)(param_6 + 8) + 4 + param_2 * 0x10) = iVar5 + param_5;
    piVar2 = (int *)(*(int *)(param_6 + 8) + 0xc + param_2 * 0x10);
    *piVar2 = *piVar2 + *(int *)(*(int *)(param_6 + 8) + 4 + param_2 * 0x10);
    piVar2 = (int *)(param_6 + 4);
    piVar3 = (int *)(*(int *)(param_6 + 8) + param_2 * 0x10 + 0xc);
    if (*piVar2 < *piVar3) {
      piVar2 = piVar3;
    }
    *(int *)(param_6 + 4) = *piVar2;
    if (param_3 == param_4) break;
    param_3 = *(int *)(param_3 + 0x3e);
    param_2 = param_2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b3b8  FUN_0041b3b8   (851 bytes)   [unnamed]
void __cdecl FUN_0041b3b8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int i;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int local_88;
  undefined4 unused;
  int local_80;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  undefined4 unused5;
  undefined4 unused6;
  int local_68;
  int local_64;
  undefined4 unused7;
  int *unused8;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_3e;
  bool local_3d;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  undefined4 unused9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 unused10;
  undefined4 unused11;
  
  bVar7 = 0;
  unused3 = 0;
  unused4 = 0;
  unused5 = 0;
  unused6 = 0;
  (**(code **)(*(int *)(param_1 + 0x18) + 0x40))();
  unused10 = 0;
  unused11 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  piVar2 = _vector_new_ldtc_((int *)0x0,0x10,*(int *)(param_1 + 0xc),1,(undefined*)FUN_0041a9e0);
  operator_delete_array();
  param_2[2] = (int)piVar2;
  FUN_00418e38((int *)(param_1 + 0x28),&local_10,&local_14,&local_18,&local_1c,
               (uint)*(byte *)(param_1 + 0x30));
  local_20 = local_10;
  local_24 = local_18;
  local_28 = *(int *)(param_1 + 0x40) - local_14;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)((int)piVar2 + 0x3e)
      ) {
    local_30 = 0;
    unused9 = 0;
    (**(code **)(*piVar2 + 8))();
    local_34 = local_20 + local_30 + local_14;
    if (local_34 < local_28) {
      piVar3 = &local_28;
    }
    else {
      piVar3 = &local_34;
    }
    local_28 = *piVar3;
  }
  local_3d = false;
  local_3e = '\0';
  iVar5 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_38 = *(int **)(param_1 + 8);
  local_3c = *(int **)(param_1 + 8);
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = *(int **)((int)piVar2 + 0x3e)
      ) {
    *(ushort *)((int)piVar2 + 0x42) = *(ushort *)((int)piVar2 + 0x42) & 0xfffb;
    local_58 = 0;
    local_54 = 0;
    (**(code **)(*piVar2 + 8))();
    unused8 = (int *)((int)piVar2 + 10);
    piVar3 = (int *)((int)piVar2 + 10);
    piVar6 = &local_88;
    for (i = 4; i != 0; i = i + -1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_88 = local_20;
    local_80 = local_20 + local_58;
    unused = 0;
    unused2 = local_54;
    if ((((local_28 < local_80) || (local_3e != '\0')) && (piVar2 != local_38)) &&
       ((*(byte *)((int)piVar2 + 0x42) & 2) != 0)) {
      *(ushort *)((int)local_3c + 0x42) = *(ushort *)((int)local_3c + 0x42) | 4;
      if (*param_2 < *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14) {
        iVar5 = *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14;
      }
      else {
        iVar5 = *param_2;
      }
      *param_2 = iVar5;
      FUN_0041b2e8(param_1,local_44,(int)local_38,(int)local_3c,local_24,(int)param_2,&local_50);
      piVar2 = local_3c;
      local_3d = (*(byte *)((int)local_3c + 0x42) & 2) != 0;
      local_20 = local_10;
      local_24 = local_24 + local_50;
      if (!local_3d) {
        local_24 = local_24 + *(int *)(param_1 + 0x44);
      }
      puVar1 = (undefined4 *)((int)local_3c + 0x3e);
      local_3c = (int *)*puVar1;
      local_38 = (int *)*puVar1;
      local_44 = local_4c + 1;
      local_3e = '\0';
      iVar5 = local_4c;
    }
    else {
      piVar3 = &local_88;
      piVar6 = (int *)(param_2[2] + iVar5 * 0x10);
      for (i = 4; i != 0; i = i + -1) {
        *piVar6 = *piVar3;
        piVar3 = piVar3 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      if ((*(byte *)((int)piVar2 + 0x42) & 2) == 0) {
        local_3c = piVar2;
        local_4c = iVar5;
        if (local_3d != false) {
          local_3e = '\x01';
        }
      }
      else if ((*(byte *)((int)local_3c + 0x42) & 2) == 0) {
        if ((*(int *)((int)piVar2 + 0x3e) == 0) ||
           ((*(byte *)(*(int *)((int)piVar2 + 0x3e) + 0x42) & 2) == 0)) {
          local_48 = iVar5;
        }
      }
      else {
        local_48 = iVar5;
        local_3c = piVar2;
        local_4c = iVar5;
      }
      local_20 = local_80;
      if (*(int *)((int)piVar2 + 0x3e) != 0) {
        unused7 = 0;
        local_64 = local_80;
        (**(code **)(*(int *)(param_1 + 0x18) + 0x50))();
        local_20 = local_64;
      }
    }
    iVar5 = iVar5 + 1;
  }
  local_68 = *(int *)(param_2[2] + 8 + local_48 * 0x10) + local_14;
  piVar2 = param_2;
  if (*param_2 < local_68) {
    piVar2 = &local_68;
  }
  *param_2 = *piVar2;
  FUN_0041b2e8(param_1,local_44,(int)local_38,0,local_24,(int)param_2,&local_50);
  param_2[1] = param_2[1] + local_1c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041b748  FUN_0041b748   (16 bytes)   [unnamed]
void __cdecl FUN_0041b748(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x34))();
  return;
}

} // namespace tea
