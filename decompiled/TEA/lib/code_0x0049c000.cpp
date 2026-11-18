// TEA.exe — runtime / library code "code_0x0049c000"
// 50 functions, 0x0049c744..0x0049fec8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049c744  FUN_0049c744   (35 bytes)   [unnamed]
void __cdecl FUN_0049c744(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x86) = param_2;
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0x68))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ca30  FUN_0049ca30   (120 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049ca30(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508e0c);
  FUN_0048d35c(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPrintDC::vftable;
  memset((undefined4 *)((int)param_1 + 0x21),0,0x14);
  *(undefined4 *)((int)param_1 + 0x21) = 0x14;
  *(undefined **)((int)param_1 + 0x29) = &DAT_00508df8;
  *(undefined **)((int)param_1 + 0x2d) = &DAT_00508df8;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049caa8  FUN_0049caa8   (126 bytes)   [unnamed]
int * __cdecl FUN_0049caa8(int *param_1,LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR port,DEVMODEA *pdm)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508e30);
  FUN_0048d2f8(param_1,pwszDriver,pwszDevice,port,pdm);
  *(undefined ***)((int)param_1 + 5) = &OWL::TPrintDC::vftable;
  memset((undefined4 *)((int)param_1 + 0x21),0,0x14);
  *(undefined4 *)((int)param_1 + 0x21) = 0x14;
  *(undefined **)((int)param_1 + 0x29) = &DAT_00508df8;
  *(undefined **)((int)param_1 + 0x2d) = &DAT_00508df8;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ccc8  FUN_0049ccc8   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_0049ccc8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0049ccd8(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ccd8  FUN_0049ccd8   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0049ccd8(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cce4  FUN_0049cce4   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_0049cce4(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ccf0  FUN_0049ccf0   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0049ccf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return *(undefined2 *)(iVar1 + 6);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cd08  FUN_0049cd08   (20 bytes)   [unnamed]
int __cdecl FUN_0049cd08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return iVar1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cd1c  FUN_0049cd1c   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0049cd1c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return *(undefined2 *)(iVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cd34  FUN_0049cd34   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_0049cd34(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0049ccc8(param_1);
  return *(undefined2 *)(iVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ce10  FUN_0049ce10   (81 bytes)   [unnamed]
undefined * __cdecl FUN_0049ce10(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_004dc978((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_00496938(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_00508efc;
      }
    }
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ce64  FUN_0049ce64   (82 bytes)   [unnamed]
int * __cdecl FUN_0049ce64(int *param_1)

{
  HRGN hRgn;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508f2c);
  FUN_004934c8(param_1);
  hRgn = CreateRectRgn(0,0,0,0);
  *param_1 = (int)hRgn;
  FUN_00493530(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ced4  FUN_0049ced4   (77 bytes)   [unnamed]
int * __cdecl FUN_0049ced4(int *param_1,RECT *pRect)

{
  HRGN hRgn;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508f50);
  FUN_004934c8(param_1);
  hRgn = CreateRectRgnIndirect(pRect);
  *param_1 = (int)hRgn;
  FUN_00493530(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cf60  FUN_0049cf60   (96 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049cf60(undefined4 *param_1,RECT *pRect)

{
  int *piVar1;
  undefined4 *sehChainHead;
  int iMode;
  undefined4 sehPrevFrame;
  int region [2];
  
  __InitExceptBlockLDTC(0x508f74);
  iMode = 2;
  piVar1 = FUN_0049ced4(region,pRect);
  CombineRgn((HRGN)*param_1,(HRGN)*param_1,(HRGN)*piVar1,iMode);
  OWL::TRegion::_dtor(region,2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049cfc0  FUN_0049cfc0   (96 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049cfc0(undefined4 *param_1,RECT *pRect)

{
  int *piVar1;
  undefined4 *sehChainHead;
  int iMode;
  undefined4 sehPrevFrame;
  int region [2];
  
  __InitExceptBlockLDTC(0x508f98);
  iMode = 3;
  piVar1 = FUN_0049ced4(region,pRect);
  CombineRgn((HRGN)*param_1,(HRGN)*param_1,(HRGN)*piVar1,iMode);
  OWL::TRegion::_dtor(region,2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d0a8  FUN_0049d0a8   (85 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_0049d0a8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508fe7);
  if (DAT_00508fd6 == '\0') {
    _DAT_0051b408 = 0;
    DAT_0051b40c = 0;
    DAT_0051b410 = 0;
    DAT_00508fd6 = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b408;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d0fd  FUN_0049d0fd   (73 bytes)   [unnamed]
void __stdcall FUN_0049d0fd(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50902c);
  if (DAT_00508fd6 != '\0') {
    operator_delete_array();
    operator_delete_array();
    DAT_00508fd6 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d148  FUN_0049d148   (612 bytes)   [unnamed]
void __cdecl FUN_0049d148(int *param_1,int param_2,ushort param_3,uint *param_4)

{
  uint len2;
  int *newRep;
  int iVar3;
  char *len;
  uint *puVar5;
  undefined4 *sehChainHead;
  char *i;
  undefined4 sehPrevFrame;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined1 alloc [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x50906c);
  if (param_1[2] != 0) goto LAB_0049d39b;
  FUN_004c0e0c((int)local_24,param_2,(uint)param_3);
  local_c = (uint *)0x0;
  if (local_1c[-3] == 0xffffffff || (int)(local_1c[-3] + 1) < 0) {
    len2 = local_1c[-1];
    newRep = std::string::__getRep(alloc,len2,len2);
    local_c = (uint *)(newRep + 3);
    memcpy(local_c,local_1c,len2);
  }
  else {
    local_c = local_1c;
    puVar5 = local_1c + -3;
    if (puVar5 != &g_nullStringRep) {
      *puVar5 = *puVar5 + 1;
    }
  }
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (puVar5 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0049d29a;
    }
    operator_delete();
    local_1c = (uint *)0x0;
  }
LAB_0049d29a:
  if (local_c[-1] != 0) {
    param_4 = local_c;
  }
  iVar3 = FUN_00496d48(param_4);
  param_1[1] = iVar3;
  *param_1 = 1;
  for (i = (char *)param_1[1]; *i != '\0'; i = i + 1) {
    if (*i == '|') {
      *i = '\0';
      *param_1 = *param_1 + 1;
    }
  }
  iVar3 = operator_new_array();
  param_1[2] = iVar3;
  puVar5 = (uint *)param_1[1];
  for (iVar3 = 0; iVar3 < *param_1; iVar3 = iVar3 + 1) {
    *(uint **)(param_1[2] + iVar3 * 4) = puVar5;
    len = strlen(puVar5);
    puVar5 = (uint *)((int)puVar5 + (int)(len + 1));
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar5 = local_c + -3;
      if (puVar5 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (puVar5 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar3 = *puVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_0049d39b;
    }
    operator_delete();
  }
LAB_0049d39b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049d994  FUN_0049d994   (152 bytes)   [unnamed]
undefined4 __cdecl FUN_0049d994(int *gadgetWindow)

{
  int *piVar1;
  int i;
  int *piVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  int local_3c [4];
  undefined4 local_2c;
  undefined2 ehContext;
  int *sizeGripGadget;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x5091b4);
  sizeGripGadget = (int *)operator_new();
  if (sizeGripGadget != (int *)0x0) {
    ehContext = 0x14;
    OWL::TSizeGripGadget::TSizeGripGadget(sizeGripGadget,0x7537);
    ehContext = 8;
  }
  piVar1 = sizeGripGadget;
  OWL::TGadgetWindow::vf5(gadgetWindow,(int)sizeGripGadget,1,0);
  piVar3 = (int *)((int)piVar1 + 10);
  piVar4 = local_3c;
  for (i = 4; i != 0; i = i + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00494470(local_3c,1,1);
  (**(code **)(*piVar1 + 0xc))();
  *(int *)((int)gadgetWindow + 0x5e) = *(int *)((int)gadgetWindow + 0x5e) + 1;
  *sehChainHead = local_2c;
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049da2c  FUN_0049da2c   (47 bytes)   [unnamed]
undefined4 __cdecl FUN_0049da2c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x5e);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (iVar1 == param_2) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 0x3e);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0049dec0  InitRichEditStreamer_49dec0   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_49dec0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50935a);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0049e6d8;
  puVar1 = FUN_004dd5cc(1,0,0x40299c);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b414,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049df16  FUN_0049df16   (48 bytes)   [unnamed]
void __stdcall FUN_0049df16(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50936e);
  OWL::TStreamableClass::_dtor(0x51b414,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e070  FUN_0049e070   (78 bytes)   [unnamed]
int * __cdecl FUN_0049e070(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0049a1b0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004dd744((int)local_8,iVar1,(int *)&DAT_004027f0,(int *)&DAT_0040299c,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e0c0  FUN_0049e0c0   (38 bytes)   [unnamed]
int * __cdecl FUN_0049e0c0(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_0049a490(param_1,piVar1,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e6d8  FUN_0049e6d8   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049e6d8(int *param_1)

{
  undefined4 *streamer;
  int *window;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5093c4);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      window = (int *)operator_new();
      if (window == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TWindow::TWindow(window,0);
        param_1 = (int *)window[1];
      }
    }
    OWL::TWindow::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e814  FUN_0049e814   (72 bytes)   [unnamed]
uint * __cdecl FUN_0049e814(uint *param_1,uint *param_2,char *len,uint param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5094c8);
  *param_1 = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = param_4;
  *param_1 = *param_1 | 8;
  FUN_0049e85c(param_1,param_2,len);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049e85c  FUN_0049e85c   (42 bytes)   [unnamed]
void __cdecl FUN_0049e85c(uint *param_1,uint *param_2,char *len)

{
  param_1[3] = (uint)param_2;
  if (len == (char *)0x0) {
    len = strlen(param_2);
  }
  param_1[4] = (uint)len;
  *param_1 = *param_1 | 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ed04  FUN_0049ed04   (63 bytes)   [unnamed]
void __cdecl FUN_0049ed04(int param_1)

{
  int local_14 [4];
  
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  FUN_004906a0(param_1,local_14);
  FUN_00490358(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049ed44  FUN_0049ed44   (117 bytes)   [unnamed]
void __cdecl FUN_0049ed44(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *len;
  
  if (((param_2 != (uint *)0x0) && (*(int *)(param_1 + 0x44) != 0)) &&
     (iVar1 = FUN_004dc978((char *)param_2,*(char **)(param_1 + 0x44)), iVar1 == 0)) {
    return;
  }
  operator_delete_array();
  if (param_2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar2 = FUN_00496d48(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    len = strlen(*(uint **)(param_1 + 0x44));
    *(char **)(param_1 + 0x48) = len;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_00492634(*(int *)(param_1 + 6));
  }
  FUN_0049ed04(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f044  FUN_0049f044   (19 bytes)   [unnamed]
void __cdecl FUN_0049f044(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = DAT_0051b1e0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f058  FUN_0049f058   (19 bytes)   [unnamed]
void __cdecl FUN_0049f058(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = DAT_0051b1ec;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f098  FUN_0049f098   (42 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0049f098(int *param_1,int *param_2,int param_3)

{
  *param_1 = (*param_2 - _DAT_0051b425) * 0x15180 + param_3 * 0xe10 + DAT_00518fb4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f0c4  FUN_0049f0c4   (240 bytes)   [unnamed]
int * __cdecl FUN_0049f0c4(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 < 0x7c3) {
    if (param_2 == 0x7b6) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_18,6,1,0x7b6);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_0048d474(&local_14,0x17,2,0x7b7);
      FUN_0049f098(param_1,piVar1,iVar2);
    }
    else {
      FUN_0048d474(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_0048d6d8(&local_10,&local_c,7);
      FUN_0049f098(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_0048d474(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_0048d6d8(&local_20,&local_8,7);
    FUN_0048d78c(&local_1c,&local_20,iVar2);
    FUN_0049f098(param_1,&local_1c,iVar3);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f1b4  FUN_0049f1b4   (69 bytes)   [unnamed]
int * __cdecl FUN_0049f1b4(int *param_1,uint param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  FUN_0048d474(&local_8,0x1f,10,param_2);
  iVar1 = 1;
  FUN_0048d6d8(&local_c,&local_8,7);
  FUN_0049f098(param_1,&local_c,iVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f1fc  FUN_0049f1fc   (160 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint * __cdecl FUN_0049f1fc(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509720);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_0051b425) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_00518fb4;
    }
    iVar1 = FUN_0049f300(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_0049f300(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_0049f300(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f29c  FUN_0049f29c   (97 bytes)   [unnamed]
uint * __cdecl FUN_0049f29c(uint *param_1,FILETIME *pFileTime)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *sehChainHead;
  _SYSTEMTIME sysTime;
  int local_30;
  uint local_2c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509728);
  FileTimeToSystemTime(pFileTime,&sysTime);
  uVar4 = (uint)sysTime.wSecond;
  uVar1 = (uint)sysTime.wMinute;
  uVar5 = (uint)sysTime.wHour;
  piVar2 = FUN_0048d4ac(&local_30,&sysTime.wYear);
  puVar3 = FUN_0049f1fc(&local_2c,piVar2,uVar5,uVar1,uVar4);
  *param_1 = *puVar3;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f300  FUN_0049f300   (116 bytes)   [unnamed]
undefined4 __cdecl FUN_0049f300(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_00518fb8 != 0) {
    piVar1 = FUN_0048d424(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_0048d764(piVar1);
    FUN_0049f0c4((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_0049f1b4((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f374  FUN_0049f374   (126 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f374(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x509754);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  if (param_2 != '\0') {
    uVar1 = operator_new_array();
    operator_delete_array();
    param_1[0xb] = uVar1;
    param_1[9] = param_1[0xb];
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f414  FUN_0049f414   (130 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f414(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x509778);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0049f504((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_0049f534((int)param_1,param_5,'\0');
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f498  FUN_0049f498   (108 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f498(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50979c);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0049f51c((int)param_1,param_3,param_2);
  FUN_0049f534((int)param_1,param_4,'\0');
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f504  FUN_0049f504   (24 bytes)   [unnamed]
void __cdecl FUN_0049f504(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f51c  FUN_0049f51c   (24 bytes)   [unnamed]
void __cdecl FUN_0049f51c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f534  FUN_0049f534   (84 bytes)   [unnamed]
void __cdecl FUN_0049f534(int param_1,uint *param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == (uint *)0xffffffff) || (param_2 == (uint *)0x0)) || (param_3 == '\0')) {
    *(uint **)(param_1 + 0x24) = param_2;
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = FUN_00496d48(param_2);
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f588  FUN_0049f588   (25 bytes)   [unnamed]
void __cdecl FUN_0049f588(int param_1,uint *src)

{
  strncpy((undefined4 *)(param_1 + 0x10),src,(char *)0x50);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f930  FUN_0049f930   (93 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f930(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x509994);
  puVar2 = param_1;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = *(undefined4 *)(&DAT_005098f4 + param_3 * 8);
  param_1[5] = *(uint *)(&DAT_005098f8 + param_3 * 8) | param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f990  FUN_0049f990   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049f990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x50999c);
  puVar2 = param_1;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = param_3;
  param_1[5] = param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049f9e0  FUN_0049f9e0   (119 bytes)   [unnamed]
int * __cdecl FUN_0049f9e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (uint)((*(byte *)(param_2 + 4) & 3) != 0) + (uint)((*(byte *)(param_2 + 4) & 0xc) != 0);
  iVar1 = param_2[3];
  iVar2 = param_2[2];
  iVar3 = param_2[1];
  *param_1 = *param_2 + iVar4;
  param_1[1] = iVar3 + iVar4;
  param_1[2] = iVar2 - iVar4;
  param_1[3] = iVar1 - iVar4;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049fa58  FUN_0049fa58   (26 bytes)   [unnamed]
void __cdecl FUN_0049fa58(LPRECT qrc,undefined4 *param_2)

{
  FUN_0049fa74(param_2,qrc,qrc[1].left,qrc[1].top);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049fa74  FUN_0049fa74   (1107 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0049fa74(undefined4 *param_1,LPRECT qrc,uint edge,uint grfFlags)

{
  BOOL ok;
  DWORD lastError;
  undefined4 uVar3;
  uint uVar4;
  int i;
  LPRECT ptVar6;
  int *piVar7;
  undefined4 *sehChainHead;
  byte bVar8;
  int x;
  int y;
  int local_4c;
  int local_48;
  LPRECT unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  uint brush2 [2];
  uint brush3 [2];
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x509a04);
  if (DAT_0050994c != 0) {
    ok = DrawEdge((HDC)*param_1,qrc,edge,grfFlags);
    if (ok != 0) {
      *sehChainHead = sehPrevFrame;
      return CONCAT31((int3)((uint)ok >> 8),1);
    }
    lastError = GetLastError();
    if (lastError != 0x78) {
      *sehChainHead = sehPrevFrame;
      return 0;
    }
    DAT_0050994c = 0;
  }
  unused = qrc;
  ptVar6 = qrc;
  piVar7 = &x;
  for (i = 4; i != 0; i = i + -1) {
    *piVar7 = ptVar6->left;
    ptVar6 = (LPRECT)((int)ptVar6 + (uint)bVar8 * -8 + 4);
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  if ((grfFlags & 0x8000) == 0) {
    if ((grfFlags & 0x4000) == 0) {
      if ((edge & 3) != 0) {
        if (DAT_00509960 == '\0') {
          _DAT_00509950 = DAT_0051b1fc;
          DAT_00509960 = '\x01';
          _DAT_00509954 = (*(undefined4 *)&DAT_0051b1f4);
          _DAT_00509958 = DAT_0051b1e4;
          _DAT_0050995c = DAT_0051b1f8;
        }
        if (DAT_00509971 == '\0') {
          _DAT_00509961 = DAT_0051b1f8;
          DAT_00509971 = '\x01';
          _DAT_00509965 = DAT_0051b1f8;
          _DAT_00509969 = (*(undefined4 *)&DAT_0051b1f4);
          _DAT_0050996d = (*(undefined4 *)&DAT_0051b1f4);
        }
        if ((edge & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (grfFlags & 0x1000) != 0;
        FUN_0049fec8(param_1,&x,grfFlags,(uint *)(&DAT_00509950 + uVar4 * 4),
                     (uint *)(&DAT_00509961 + uVar4 * 4));
        qrc = (LPRECT)FUN_00494470(&x,-1,-1);
      }
      if ((edge & 0xc) != 0) {
        if (DAT_00509982 == '\0') {
          _DAT_00509972 = (*(undefined4 *)&DAT_0051b1f4);
          DAT_00509982 = '\x01';
          _DAT_00509976 = DAT_0051b1fc;
          _DAT_0050997a = DAT_0051b1f8;
          _DAT_0050997e = DAT_0051b1e4;
        }
        if (DAT_00509993 == '\0') {
          _DAT_00509983 = DAT_0051b1e4;
          DAT_00509993 = '\x01';
          _DAT_00509987 = DAT_0051b1e4;
          _DAT_0050998b = DAT_0051b1fc;
          _DAT_0050998f = DAT_0051b1fc;
        }
        if ((edge & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (grfFlags & 0x1000) != 0;
        FUN_0049fec8(param_1,&x,grfFlags,(uint *)(&DAT_00509972 + uVar4 * 4),
                     (uint *)(&DAT_00509983 + uVar4 * 4));
        qrc = (LPRECT)FUN_00494470(&x,-1,-1);
      }
      if ((grfFlags & 0x800) != 0) {
        ehContext = 0x38;
        FUN_004ab84c(brush,&DAT_0051b1e0,'\x01');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x44;
        FUN_0048d938(param_1,brush);
        PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
        FUN_0048da64(param_1);
        ehDtorCount = ehDtorCount + -2;
        qrc = (LPRECT)OWL::TBrush::_dtor(brush,2);
      }
      uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
      *sehChainHead = sehPrevFrame;
    }
    else {
      if ((edge & 3) != 0) {
        FUN_0049fec8(param_1,&x,grfFlags,&DAT_0051b1e4,&DAT_0051b1e4);
        qrc = (LPRECT)FUN_00494470(&x,-1,-1);
      }
      if ((grfFlags & 0x800) != 0) {
        ehContext = 0x20;
        FUN_004ab84c(brush2,&DAT_0051b1e0,'\x01');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x2c;
        FUN_0048d938(param_1,brush2);
        PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
        FUN_0048da64(param_1);
        ehDtorCount = ehDtorCount + -2;
        qrc = (LPRECT)OWL::TBrush::_dtor(brush2,2);
      }
      uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    if ((edge & 3) != 0) {
      FUN_0049fec8(param_1,&x,grfFlags,(uint *)&DAT_0051b1bc,(uint *)&DAT_0051b1bc);
      qrc = (LPRECT)FUN_00494470(&x,-1,-1);
    }
    if ((grfFlags & 0x800) != 0) {
      ehContext = 8;
      FUN_004ab84c(brush3,(uint *)&DAT_0051b1b8,'\x01');
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      FUN_0048d938(param_1,brush3);
      PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
      FUN_0048da64(param_1);
      ehDtorCount = ehDtorCount + -2;
      qrc = (LPRECT)OWL::TBrush::_dtor(brush3,2);
    }
    uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
    *sehChainHead = sehPrevFrame;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049fec8  FUN_0049fec8   (458 bytes)   [unnamed]
void __cdecl FUN_0049fec8(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint brush [2];
  uint brush2 [2];
  
  __InitExceptBlockLDTC(0x509a94);
  if ((param_3 & 3) != 0) {
    FUN_004ab84c(brush2,param_4,'\x01');
    FUN_0048d938(param_1,brush2);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_0048da64(param_1);
    OWL::TBrush::_dtor(brush2,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_004ab84c(brush,param_5,'\x01');
    FUN_0048d938(param_1,brush);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_0048da64(param_1);
    OWL::TBrush::_dtor(brush,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
