// TSMerge.exe — runtime / library code "code_0x00424000"
// 49 functions, 0x004242cc..0x00427ece. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004242cc  FUN_004242cc   (58 bytes)   [unnamed]
undefined4 __cdecl FUN_004242cc(int param_1,LPCSTR newItem)

{
  UINT_PTR uIDNewItem;
  
  uIDNewItem = *(UINT_PTR *)(param_1 + 0x8f);
  *(int *)(param_1 + 0x8f) = *(int *)(param_1 + 0x8f) + 1;
  AppendMenuA(*(HMENU *)(param_1 + 0x8a),0,uIDNewItem,newItem);
  return *(undefined4 *)(param_1 + 0x8f);
}

// ----------------------------------------------------------------------------------------------------
// 0x00424668  FUN_00424668   (15 bytes)   [unnamed]
undefined4 __cdecl FUN_00424668(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00424678(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424678  FUN_00424678   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00424678(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00424684  FUN_00424684   (11 bytes)   [unnamed]
undefined4 __cdecl FUN_00424684(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00424690  FUN_00424690   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_00424690(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00424668(param_1);
  return *(undefined2 *)(iVar1 + 6);
}

// ----------------------------------------------------------------------------------------------------
// 0x004246a8  FUN_004246a8   (20 bytes)   [unnamed]
int __cdecl FUN_004246a8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00424668(param_1);
  return iVar1 + 8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004246bc  FUN_004246bc   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_004246bc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00424668(param_1);
  return *(undefined2 *)(iVar1 + 2);
}

// ----------------------------------------------------------------------------------------------------
// 0x004246d4  FUN_004246d4   (21 bytes)   [unnamed]
undefined2 __cdecl FUN_004246d4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00424668(param_1);
  return *(undefined2 *)(iVar1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x004247b0  FUN_004247b0   (81 bytes)   [unnamed]
undefined * __cdecl FUN_004247b0(undefined4 *param_1,char *param_2,ushort param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (param_2 != (char *)0x0) {
    for (piVar3 = (int *)*param_1; *piVar3 != 0; piVar3 = piVar3 + 2) {
      iVar1 = FUN_00455b74((char *)*piVar3,param_2);
      if (iVar1 == 0) {
        if (piVar3[1] != 0) {
          puVar2 = (undefined *)FUN_0041f91c(piVar3 + 1,param_3);
          return puVar2;
        }
        return &DAT_00468ed4;
      }
    }
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424804  FUN_00424804   (82 bytes)   [unnamed]
int * __cdecl FUN_00424804(int *param_1)

{
  HRGN hRgn;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468f04);
  FUN_0041c798(param_1);
  hRgn = CreateRectRgn(0,0,0,0);
  *param_1 = (int)hRgn;
  FUN_0041c800(param_1,0x7fe3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424938  InitRichEditStreamer_424938   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_424938(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468f3a);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00425150;
  puVar1 = FUN_0045666c(1,0,0x40467c);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00476e18,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042498e  FUN_0042498e   (48 bytes)   [unnamed]
void __stdcall FUN_0042498e(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468f4e);
  OWL::TStreamableClass::_dtor(0x476e18,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424ae8  FUN_00424ae8   (78 bytes)   [unnamed]
int * __cdecl FUN_00424ae8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00422c1c(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004567e4((int)local_8,iVar1,(int *)&DAT_00404628,(int *)&DAT_0040467c,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424b38  FUN_00424b38   (38 bytes)   [unnamed]
int * __cdecl FUN_00424b38(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
  }
  FUN_00422efc(param_1,piVar1,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425150  FUN_00425150   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00425150(int *param_1)

{
  undefined4 *streamer;
  int *window;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x468fa4);
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
// 0x004252b8  FUN_004252b8   (42 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004252b8(int *param_1,int *param_2,int param_3)

{
  *param_1 = (*param_2 - _DAT_00476e29) * 0x15180 + param_3 * 0xe10 + DAT_00475ff8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004252e4  FUN_004252e4   (240 bytes)   [unnamed]
int * __cdecl FUN_004252e4(int *param_1,uint param_2)

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
      piVar1 = FUN_00416744(&local_18,6,1,0x7b6);
      FUN_004252b8(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_00416744(&local_14,0x17,2,0x7b7);
      FUN_004252b8(param_1,piVar1,iVar2);
    }
    else {
      FUN_00416744(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_004169a8(&local_10,&local_c,7);
      FUN_004252b8(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_00416744(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_004169a8(&local_20,&local_8,7);
    FUN_00416a5c(&local_1c,&local_20,iVar2);
    FUN_004252b8(param_1,&local_1c,iVar3);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004253d4  FUN_004253d4   (69 bytes)   [unnamed]
int * __cdecl FUN_004253d4(int *param_1,uint param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  FUN_00416744(&local_8,0x1f,10,param_2);
  iVar1 = 1;
  FUN_004169a8(&local_c,&local_8,7);
  FUN_004252b8(param_1,&local_c,iVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042541c  FUN_0042541c   (160 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint * __cdecl FUN_0042541c(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x469098);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_00476e29) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_00475ff8;
    }
    iVar1 = FUN_00425520(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_00425520(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_00425520(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004254bc  FUN_004254bc   (97 bytes)   [unnamed]
uint * __cdecl FUN_004254bc(uint *param_1,FILETIME *pFileTime)

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
  
  __InitExceptBlockLDTC(0x4690a0);
  FileTimeToSystemTime(pFileTime,&sysTime);
  uVar4 = (uint)sysTime.wSecond;
  uVar1 = (uint)sysTime.wMinute;
  uVar5 = (uint)sysTime.wHour;
  piVar2 = FUN_0041677c(&local_30,&sysTime.wYear);
  puVar3 = FUN_0042541c(&local_2c,piVar2,uVar5,uVar1,uVar4);
  *param_1 = *puVar3;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425520  FUN_00425520   (116 bytes)   [unnamed]
undefined4 __cdecl FUN_00425520(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_00475ffc != 0) {
    piVar1 = FUN_004166f4(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_00416a34(piVar1);
    FUN_004252e4((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_004253d4((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425594  FUN_00425594   (126 bytes)   [unnamed]
undefined4 * __cdecl FUN_00425594(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4690cc);
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
// 0x00425634  FUN_00425634   (130 bytes)   [unnamed]
undefined4 * __cdecl FUN_00425634(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x4690f0);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_004256b8((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_004256d0((int)param_1,param_5,'\0');
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004256b8  FUN_004256b8   (24 bytes)   [unnamed]
void __cdecl FUN_004256b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004256d0  FUN_004256d0   (84 bytes)   [unnamed]
void __cdecl FUN_004256d0(int param_1,uint *param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == (uint *)0xffffffff) || (param_2 == (uint *)0x0)) || (param_3 == '\0')) {
    *(uint **)(param_1 + 0x24) = param_2;
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = FUN_0041fd2c(param_2);
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425724  FUN_00425724   (25 bytes)   [unnamed]
void __cdecl FUN_00425724(int param_1,uint *src)

{
  strncpy((undefined4 *)(param_1 + 0x10),src,(char *)0x50);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425b18  FUN_00425b18   (93 bytes)   [unnamed]
undefined4 * __cdecl FUN_00425b18(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x4692e8);
  puVar2 = param_1;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = *(undefined4 *)(&DAT_00469248 + param_3 * 8);
  param_1[5] = *(uint *)(&DAT_0046924c + param_3 * 8) | param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425b78  FUN_00425b78   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_00425b78(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x4692f0);
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
// 0x00425bc8  FUN_00425bc8   (26 bytes)   [unnamed]
void __cdecl FUN_00425bc8(LPRECT qrc,undefined4 *param_2)

{
  FUN_00425be4(param_2,qrc,qrc[1].left,qrc[1].top);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425be4  FUN_00425be4   (1107 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00425be4(undefined4 *param_1,LPRECT qrc,uint edge,uint grfFlags)

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
  __InitExceptBlockLDTC(0x469358);
  if (DAT_004692a0 != 0) {
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
    DAT_004692a0 = 0;
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
        if (DAT_004692b4 == '\0') {
          _DAT_004692a4 = DAT_00476c0c;
          DAT_004692b4 = '\x01';
          _DAT_004692a8 = (*(undefined4 *)&DAT_00476c04);
          _DAT_004692ac = DAT_00476bf4;
          _DAT_004692b0 = DAT_00476c08;
        }
        if (DAT_004692c5 == '\0') {
          _DAT_004692b5 = DAT_00476c08;
          DAT_004692c5 = '\x01';
          _DAT_004692b9 = DAT_00476c08;
          _DAT_004692bd = (*(undefined4 *)&DAT_00476c04);
          _DAT_004692c1 = (*(undefined4 *)&DAT_00476c04);
        }
        if ((edge & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (grfFlags & 0x1000) != 0;
        FUN_00426038(param_1,&x,grfFlags,(uint *)(&DAT_004692a4 + uVar4 * 4),
                     (uint *)(&DAT_004692b5 + uVar4 * 4));
        qrc = (LPRECT)FUN_0041d740(&x,-1,-1);
      }
      if ((edge & 0xc) != 0) {
        if (DAT_004692d6 == '\0') {
          _DAT_004692c6 = (*(undefined4 *)&DAT_00476c04);
          DAT_004692d6 = '\x01';
          _DAT_004692ca = DAT_00476c0c;
          _DAT_004692ce = DAT_00476c08;
          _DAT_004692d2 = DAT_00476bf4;
        }
        if (DAT_004692e7 == '\0') {
          _DAT_004692d7 = DAT_00476bf4;
          DAT_004692e7 = '\x01';
          _DAT_004692db = DAT_00476bf4;
          _DAT_004692df = DAT_00476c0c;
          _DAT_004692e3 = DAT_00476c0c;
        }
        if ((edge & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (grfFlags & 0x1000) != 0;
        FUN_00426038(param_1,&x,grfFlags,(uint *)(&DAT_004692c6 + uVar4 * 4),
                     (uint *)(&DAT_004692d7 + uVar4 * 4));
        qrc = (LPRECT)FUN_0041d740(&x,-1,-1);
      }
      if ((grfFlags & 0x800) != 0) {
        ehContext = 0x38;
        FUN_00431320(brush,&DAT_00476bf0,'\x01');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x44;
        FUN_00416b78(param_1,brush);
        PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
        FUN_00416ca4(param_1);
        ehDtorCount = ehDtorCount + -2;
        qrc = (LPRECT)OWL::TBrush::_dtor(brush,2);
      }
      uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
      *sehChainHead = sehPrevFrame;
    }
    else {
      if ((edge & 3) != 0) {
        FUN_00426038(param_1,&x,grfFlags,&DAT_00476bf4,&DAT_00476bf4);
        qrc = (LPRECT)FUN_0041d740(&x,-1,-1);
      }
      if ((grfFlags & 0x800) != 0) {
        ehContext = 0x20;
        FUN_00431320(brush2,&DAT_00476bf0,'\x01');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x2c;
        FUN_00416b78(param_1,brush2);
        PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
        FUN_00416ca4(param_1);
        ehDtorCount = ehDtorCount + -2;
        qrc = (LPRECT)OWL::TBrush::_dtor(brush2,2);
      }
      uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    if ((edge & 3) != 0) {
      FUN_00426038(param_1,&x,grfFlags,(uint *)&DAT_00476bcc,(uint *)&DAT_00476bcc);
      qrc = (LPRECT)FUN_0041d740(&x,-1,-1);
    }
    if ((grfFlags & 0x800) != 0) {
      ehContext = 8;
      FUN_00431320(brush3,(uint *)&DAT_00476bc8,'\x01');
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      FUN_00416b78(param_1,brush3);
      PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
      FUN_00416ca4(param_1);
      ehDtorCount = ehDtorCount + -2;
      qrc = (LPRECT)OWL::TBrush::_dtor(brush3,2);
    }
    uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
    *sehChainHead = sehPrevFrame;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426038  FUN_00426038   (458 bytes)   [unnamed]
void __cdecl FUN_00426038(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint brush [2];
  uint brush2 [2];
  
  __InitExceptBlockLDTC(0x4693e8);
  if ((param_3 & 3) != 0) {
    FUN_00431320(brush2,param_4,'\x01');
    FUN_00416b78(param_1,brush2);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_00416ca4(param_1);
    OWL::TBrush::_dtor(brush2,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_00431320(brush,param_5,'\x01');
    FUN_00416b78(param_1,brush);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_00416ca4(param_1);
    OWL::TBrush::_dtor(brush,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426204  FUN_00426204   (133 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_00426204(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x469431);
  if (DAT_00469420 == '\0') {
    FUN_00431494((uint *)&DAT_00476e34,0x46b754,&DAT_00476bf0,&DAT_00476c04);
    _DAT_00476e39 = DAT_00476c04;
    _DAT_00476e3d = 0;
    _DAT_00476e41 = 0;
    (*(undefined4 *)&DAT_00476e45) = 0;
    DAT_00469420 = DAT_00469420 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_00476e34;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426289  FUN_00426289   (114 bytes)   [unnamed]
void __stdcall FUN_00426289(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x46946e);
  if (DAT_00469420 != '\0') {
    if (DAT_00476e45 != (uint *)0x0) {
      OWL::TBitmap::_dtor(DAT_00476e45,3);
    }
    OWL::TBrush::_dtor((uint *)&DAT_00476e34,0);
    DAT_00469420 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042635c  FUN_0042635c   (66 bytes)   [unnamed]
uint * __cdecl FUN_0042635c(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_00476c04) {
    FUN_00431504(param_1,0x46b754,&DAT_00476bf0,(uint *)&DAT_00476c04);
    *(int *)((int)param_1 + 5) = DAT_00476c04;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004263a0  FUN_004263a0   (185 bytes)   [unnamed]
undefined4 __cdecl FUN_004263a0(int param_1,int *param_2)

{
  uint *bitmap;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4694b0);
  if ((*(int *)(param_1 + 9) < *param_2) || (*(int *)(param_1 + 0xd) < param_2[1])) {
    if (*(int *)(param_1 + 9) < *param_2) {
      *(int *)(param_1 + 9) = *param_2;
    }
    if (*(int *)(param_1 + 0xd) < param_2[1]) {
      *(int *)(param_1 + 0xd) = param_2[1];
    }
    puVar3 = (uint *)operator_new();
    if (puVar3 != (uint *)0x0) {
      FUN_00411ce8(puVar3,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd),1,1,(void *)0x0);
    }
    bitmap = *(uint **)(param_1 + 0x11);
    if (bitmap != (uint *)0x0) {
      OWL::TBitmap::_dtor(bitmap,3);
    }
    *(uint **)(param_1 + 0x11) = puVar3;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x11);
  *sehChainHead = sehPrevFrame;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042645c  FUN_0042645c   (13 bytes)   [unnamed]
uint * __stdcall FUN_0042645c(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00426204();
  puVar1 = FUN_0042635c(puVar1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042646c  FUN_0042646c   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0042646c(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00426204();
  uVar2 = FUN_004263a0((int)puVar1,param_1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426484  FUN_00426484   (208 bytes)   [unnamed]
void __cdecl FUN_00426484(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6)

{
  PatBlt((HDC)*param_1,0,0,*param_3,param_3[1],0xff0062);
  if (*param_6 != DAT_00476bac) {
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
    BitBlt((HDC)*param_1,*param_2,param_2[1],param_5[2] - *param_5,param_5[3] - param_5[1],
           (HDC)*param_4,*param_5,param_5[1],0xcc0020);
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426554  FUN_00426554   (174 bytes)   [unnamed]
void __cdecl FUN_00426554(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  FUN_00416b78(param_1,param_4);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  BitBlt((HDC)*param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
         (HDC)*param_2,0,0,0xe20746);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  FUN_00416ca4(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426604  FUN_00426604   (28 bytes)   [unnamed]
void __cdecl FUN_00426604(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0042645c();
  FUN_00426554(param_1,param_2,param_3,puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426620  FUN_00426620   (253 bytes)   [unnamed]
undefined4 __cdecl FUN_00426620(int *param_1)

{
  int mode;
  HDC hdc;
  int iVar3;
  uint in_stack_00000014;
  undefined4 local_10;
  
  mode = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (mode != *param_1) {
    SetBkMode((HDC)*param_1,1);
  }
  mode = 1;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  mode = SetBkMode(hdc,mode);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  if ((in_stack_00000014 & 0x400) == 0) {
    (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
    local_10 = (**(code **)(*(int *)((int)param_1 + 5) + 0x50))();
  }
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  iVar3 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar3 != *param_1) {
    SetBkMode((HDC)*param_1,mode);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  SetBkMode(hdc,mode);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426720  FUN_00426720   (1559 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00426720(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  int x1;
  int y1;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int x;
  int y;
  int local_13c;
  int local_138;
  int *unused;
  int *unused2;
  undefined4 unused3;
  undefined4 unused4;
  int unused5;
  int unused6;
  int unused7;
  int unused8;
  int local_100;
  int local_fc;
  int unused9;
  int unused10;
  int local_f0;
  int unused11;
  int local_e8;
  int unused12;
  int unused13;
  int unused14;
  undefined4 unused15;
  undefined4 unused16;
  undefined4 unused17;
  undefined4 unused18;
  int unused19;
  int unused20;
  int unused21;
  int unused22;
  int local_b8;
  int local_b4;
  int unused23;
  int unused24;
  int unused25;
  int unused26;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  uint brush2 [2];
  HDC memoryDC [10];
  HDC hdc;
  int local_27;
  
  __InitExceptBlockLDTC(0x469558);
  ehContext = 8;
  FUN_0042080c((int *)&hdc,param_1);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  local_94 = param_2[3] - param_2[1];
  local_98 = param_2[2] - *param_2;
  local_a0 = *param_5;
  local_9c = param_5[1];
  y = param_4[1] + local_9c;
  x = *param_4 + local_a0;
  local_138 = y + local_94;
  local_13c = x + local_98;
  unused23 = x;
  unused24 = y;
  unused25 = x;
  unused26 = y;
  FUN_0041d75c(&x,param_4);
  local_b8 = *param_5;
  local_b4 = param_5[1];
  if ((param_7 != '\0') || (param_6 == 1)) {
    local_b8 = local_b8 + 1;
    local_b4 = local_b4 + 1;
    FUN_0041d724(&x,1,1);
    FUN_0041d75c(&x,param_4);
  }
  unused22 = local_138 - y;
  unused21 = local_13c - x;
  local_148 = param_4[3] - param_4[1];
  local_14c = param_4[2] - *param_4;
  unused17 = 0;
  unused18 = 0;
  unused16 = 0;
  unused15 = 0;
  local_154 = 0;
  local_150 = 0;
  ehContext = 0x20;
  local_e8 = local_14c;
  unused12 = local_148;
  unused13 = local_14c;
  unused14 = local_148;
  unused19 = local_14c;
  unused20 = local_148;
  puVar1 = (uint *)FUN_0042646c(&local_e8);
  FUN_0042080c((int *)memoryDC,puVar1);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  unused11 = local_148 - local_150;
  local_f0 = local_14c - local_154;
  FUN_00426484((undefined4*)memoryDC,&local_b8,&local_f0,(undefined4*)&hdc,param_2,param_9);
  local_fc = param_2[3] - param_2[1];
  local_100 = param_2[2] - *param_2;
  local_158 = local_b4 + local_fc;
  local_15c = local_b8 + local_100;
  unused6 = local_b4;
  unused5 = local_b8;
  x1 = local_b8;
  y1 = local_b4;
  unused7 = local_15c;
  unused8 = local_158;
  unused9 = local_100;
  unused10 = local_fc;
  if (param_6 == 3) {
    (**(code **)(local_27 + 0x20))();
    unused3 = 0;
    unused4 = 0;
    BitBlt(memoryDC[0],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],hdc,0,
           0,0xee0086);
    ehContext = 0x2c;
    FUN_00431320(brush2,&DAT_00476bf4,'\x01');
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x38;
    FUN_00416b78(param_3,brush2);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    unused2 = &x1;
    BitBlt((HDC)*param_3,x,y,local_13c - x,local_138 - y,memoryDC[0]
           ,x1,y1,0xb8074a);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush2,2);
    ehContext = 0x14;
  }
  else {
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
    unused = &x1;
    BitBlt((HDC)*param_3,x,y,local_13c - x,local_138 - y,memoryDC[0]
           ,x1,y1,0x8800c6);
    BitBlt((HDC)*param_3,x,y,local_13c - x,local_138 - y,hdc,
           *param_2,param_2[1],0xee0086);
    (**(code **)(*(int *)((int)param_3 + 5) + 0x20))();
  }
  if (param_6 == 2) {
    FUN_00426604(param_3,(undefined4*)memoryDC,param_4);
  }
  else if ((param_8 != '\0') && (*param_10 != (*(uint *)&DAT_00476bac))) {
    ehContext = 0x44;
    FUN_00431320(brush,param_10,'\x01');
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x50;
    FUN_00426554(param_3,(undefined4*)memoryDC,param_4,brush);
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    ehContext = 0x14;
  }
  FUN_004208e8((undefined4*)memoryDC);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)memoryDC,2);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)&hdc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426d38  FUN_00426d38   (179 bytes)   [unnamed]
void __cdecl FUN_00426d38(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  ICONINFO piconinfo;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint bitmap [2];
  uint bitmap2 [2];
  
  __InitExceptBlockLDTC(0x4695e0);
  GetIconInfo((HICON)*param_1,&piconinfo);
  ehContext = 0x14;
  puVar1 = FUN_00411c78(bitmap,piconinfo.hbmColor,0);
  ehDtorCount = ehDtorCount + 2;
  FUN_00411de8(bitmap2,puVar1);
  OWL::TBitmap::_dtor(bitmap,2);
  ehContext = 8;
  FUN_00426720(bitmap2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  ehDtorCount = ehDtorCount + -2;
  OWL::TBitmap::_dtor(bitmap2,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426dec  FUN_00426dec   (1252 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_00426dec(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9)

{
  int mode;
  HDC hdc;
  uint *puVar3;
  int mode2;
  int *piVar5;
  int *piVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  char cVar8;
  int local_e0;
  int local_dc;
  undefined4 local_cc;
  undefined4 unused;
  COLORREF color;
  undefined4 local_bc;
  undefined4 unused2;
  int local_b0;
  int unused3;
  int local_a8;
  int unused4;
  int unused5;
  COLORREF color2;
  COLORREF local_98 [2];
  undefined4 local_90;
  undefined4 unused6;
  int local_88;
  int local_84;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  int memoryDC [10];
  int memoryDC2 [10];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x46964c);
  piVar5 = param_3;
  piVar6 = &local_e0;
  for (mode2 = 4; mode2 != 0; mode2 = mode2 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  local_88 = *param_4;
  local_84 = param_4[1];
  if (param_7 == '\0') {
    mode2 = 1;
  }
  else {
    mode2 = 2;
  }
  mode = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (mode != *param_2) {
    SetBkMode((HDC)*param_2,mode2);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  mode2 = SetBkMode(hdc,mode2);
  if ((param_6 != '\0') || (mode = local_dc, param_5 == 1)) {
    local_88 = local_88 + 1;
    local_84 = local_84 + 1;
    mode = local_e0 + 1;
    if ((param_9 & 1) != 0) {
      mode = local_e0 + 2;
    }
    local_e0 = mode;
    mode = local_dc + 1;
    if ((param_9 & 4) != 0) {
      mode = local_dc + 2;
    }
  }
  local_dc = mode;
  switch(param_5) {
  case 0:
    unused6 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      unused6 = local_90;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 1:
    mode = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    if (mode != *param_2) {
      SetBkMode((HDC)*param_2,1);
    }
    mode = 1;
    hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    SetBkMode(hdc,mode);
    hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    local_98[0] = GetBkColor(hdc);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      local_98[0] = color2;
      if (param_6 != '\0') {
        (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
      }
    }
    if (param_6 == '\0') {
      ehContext = 8;
      FUN_004207a4(memoryDC2,param_2);
      ehDtorCount = ehDtorCount + 3;
      ehContext = 0x20;
      unused4 = param_3[3] - param_3[1];
      local_a8 = param_3[2] - *param_3;
      unused5 = local_a8;
      puVar3 = (uint *)FUN_0042646c(&local_a8);
      FUN_0042080c(memoryDC,puVar3);
      ehDtorCount = ehDtorCount + 3;
      ehContext = 0x14;
      if (param_7 == '\0') {
        param_8 = local_98;
      }
      unused3 = param_3[3] - param_3[1];
      local_b0 = param_3[2] - *param_3;
      FUN_00426484(memoryDC,&local_88,&local_b0,memoryDC2,param_3,(int *)param_8);
      FUN_00426604(param_2,memoryDC,param_3);
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
      ehDtorCount = ehDtorCount + -3;
      OWL::TMemoryDC::_dtor(memoryDC,2);
      ehDtorCount = ehDtorCount + -3;
      OWL::TMemoryDC::_dtor(memoryDC2,2);
      ehContext = 0;
    }
    else {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
    }
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 2:
    unused2 = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      unused2 = local_bc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    ehContext = 0x2c;
    cVar8 = '\x01';
    hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
    color = GetTextColor(hdc);
    FUN_00431320(brush,&color,cVar8);
    ehDtorCount = ehDtorCount + 2;
    (**(code **)(*(int *)((int)param_2 + 5) + 0x58))();
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 3:
    unused = 0;
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
      unused = local_cc;
      (**(code **)(*(int *)((int)param_2 + 5) + 0x48))();
    }
    FUN_00426620(param_2);
    if (param_7 != '\0') {
      (**(code **)(*(int *)((int)param_2 + 5) + 0x20))();
    }
    break;
  case 4:
    (**(code **)(*(int *)((int)param_2 + 5) + 0x50))();
  }
  mode = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (mode != *param_2) {
    SetBkMode((HDC)*param_2,mode2);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  SetBkMode(hdc,mode2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004272e4  FUN_004272e4   (145 bytes)   [unnamed]
void __cdecl FUN_004272e4(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7)

{
  if (param_1[1] == 0) {
    FUN_00426dec(*param_1,param_2,param_1 + 2,param_4,param_5,param_6,param_7,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    FUN_00426720((uint *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  else if (param_1[1] == 2) {
    FUN_00426d38((undefined4 *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042756c  FUN_0042756c   (12 bytes)   [unnamed]
void __cdecl FUN_0042756c(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004275d0  FUN_004275d0   (2214 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004275d0(void)

{
  undefined *puVar1;
  
  if (DAT_00469718 == '\0') {
    _DAT_00469714 = 0;
    DAT_00469718 = '\x01';
  }
  if (DAT_00469720 == '\0') {
    _DAT_0046971c = 1;
    DAT_00469720 = '\x01';
  }
  if (DAT_00469728 == '\0') {
    _DAT_00469724 = 2;
    DAT_00469728 = '\x01';
  }
  if (DAT_00469730 == '\0') {
    _DAT_0046972c = 3;
    DAT_00469730 = '\x01';
  }
  if (DAT_00469738 == '\0') {
    _DAT_00469734 = 4;
    DAT_00469738 = '\x01';
  }
  if (DAT_00469740 == '\0') {
    (*(undefined4 *)&DAT_0046973c) = 5;
    DAT_00469740 = '\x01';
  }
  if (DAT_00469748 == '\0') {
    (*(undefined4 *)&DAT_00469744) = 6;
    DAT_00469748 = '\x01';
  }
  if (DAT_00469750 == '\0') {
    (*(undefined4 *)&DAT_0046974c) = 7;
    DAT_00469750 = '\x01';
  }
  if (DAT_00469758 == '\0') {
    (*(undefined4 *)&DAT_00469754) = 8;
    DAT_00469758 = '\x01';
  }
  if (DAT_00469760 == '\0') {
    _DAT_0046975c = 9;
    DAT_00469760 = '\x01';
  }
  if (DAT_00469768 == '\0') {
    _DAT_00469764 = 10;
    DAT_00469768 = '\x01';
  }
  if (DAT_00469770 == '\0') {
    _DAT_0046976c = 0xb;
    DAT_00469770 = '\x01';
  }
  if (DAT_00469778 == '\0') {
    _DAT_00469774 = 0xc;
    DAT_00469778 = '\x01';
  }
  if (DAT_00469780 == '\0') {
    _DAT_0046977c = 0xd;
    DAT_00469780 = '\x01';
  }
  if (DAT_00469788 == '\0') {
    _DAT_00469784 = 0xe;
    DAT_00469788 = '\x01';
  }
  if (DAT_00469790 == '\0') {
    _DAT_0046978c = 0xf;
    DAT_00469790 = '\x01';
  }
  if (DAT_00469798 == '\0') {
    _DAT_00469794 = 0x10;
    DAT_00469798 = '\x01';
  }
  if (DAT_004697a0 == '\0') {
    _DAT_0046979c = 0x11;
    DAT_004697a0 = '\x01';
  }
  if (DAT_004697a8 == '\0') {
    _DAT_004697a4 = 0x12;
    DAT_004697a8 = '\x01';
  }
  if (DAT_004697b0 == '\0') {
    _DAT_004697ac = 0x13;
    DAT_004697b0 = '\x01';
  }
  if (DAT_004697b8 == '\0') {
    _DAT_004697b4 = 0x14;
    DAT_004697b8 = '\x01';
  }
  if (DAT_004697c0 == '\0') {
    _DAT_004697bc = 0x15;
    DAT_004697c0 = '\x01';
  }
  if (DAT_004697c8 == '\0') {
    _DAT_004697c4 = 0x16;
    DAT_004697c8 = '\x01';
  }
  if (DAT_004697d0 == '\0') {
    _DAT_004697cc = 0x17;
    DAT_004697d0 = '\x01';
  }
  if (DAT_004697d8 == '\0') {
    _DAT_004697d4 = 0x18;
    DAT_004697d8 = '\x01';
  }
  if (DAT_004697e0 == '\0') {
    _DAT_004697dc = 0x19;
    DAT_004697e0 = '\x01';
  }
  if (DAT_004697e8 == '\0') {
    _DAT_004697e4 = 0x1a;
    DAT_004697e8 = '\x01';
  }
  if (DAT_004697f0 == '\0') {
    _DAT_004697ec = 0x1b;
    DAT_004697f0 = '\x01';
  }
  if (DAT_004697f8 == '\0') {
    _DAT_004697f4 = 0x1c;
    DAT_004697f8 = '\x01';
  }
  if (DAT_00469800 == '\0') {
    _DAT_004697fc = 0x1d;
    DAT_00469800 = '\x01';
  }
  if (DAT_00469808 == '\0') {
    _DAT_00469804 = 0x1e;
    DAT_00469808 = '\x01';
  }
  if (DAT_00469810 == '\0') {
    _DAT_0046980c = 0x1f;
    DAT_00469810 = '\x01';
  }
  if (DAT_00469818 == '\0') {
    (*(undefined4 *)&DAT_00469814) = 0x20;
    DAT_00469818 = '\x01';
  }
  if (DAT_00469820 == '\0') {
    (*(undefined4 *)&DAT_0046981c) = 0x21;
    DAT_00469820 = '\x01';
  }
  if (DAT_00469828 == '\0') {
    _DAT_00469824 = 0x22;
    DAT_00469828 = '\x01';
  }
  if (DAT_00469830 == '\0') {
    _DAT_0046982c = 0x23;
    DAT_00469830 = '\x01';
  }
  if (DAT_00469838 == '\0') {
    _DAT_00469834 = 0x24;
    DAT_00469838 = '\x01';
  }
  if (DAT_00469840 == '\0') {
    _DAT_0046983c = 0x25;
    DAT_00469840 = '\x01';
  }
  if (DAT_00469848 == '\0') {
    _DAT_00469844 = 0x26;
    DAT_00469848 = '\x01';
  }
  if (DAT_00469850 == '\0') {
    _DAT_0046984c = 0x27;
    DAT_00469850 = '\x01';
  }
  if (DAT_00469858 == '\0') {
    _DAT_00469854 = 0x28;
    DAT_00469858 = '\x01';
  }
  if (DAT_00469860 == '\0') {
    _DAT_0046985c = 0x29;
    DAT_00469860 = '\x01';
  }
  if (DAT_00469868 == '\0') {
    _DAT_00469864 = 0x2a;
    DAT_00469868 = '\x01';
  }
  if (DAT_00469870 == '\0') {
    _DAT_0046986c = 0x2b;
    DAT_00469870 = '\x01';
  }
  if (DAT_00469878 == '\0') {
    _DAT_00469874 = 0x2c;
    DAT_00469878 = '\x01';
  }
  if (DAT_00469880 == '\0') {
    _DAT_0046987c = 0x2d;
    DAT_00469880 = '\x01';
  }
  if (DAT_00469888 == '\0') {
    _DAT_00469884 = 0x2e;
    DAT_00469888 = '\x01';
  }
  if (DAT_00469890 == '\0') {
    _DAT_0046988c = 0x2f;
    DAT_00469890 = '\x01';
  }
  if (DAT_00469898 == '\0') {
    _DAT_00469894 = 0x30;
    DAT_00469898 = '\x01';
  }
  if (DAT_004698a0 == '\0') {
    (*(undefined4 *)&DAT_0046989c) = 0x31;
    DAT_004698a0 = '\x01';
  }
  if (DAT_004698a8 == '\0') {
    (*(undefined4 *)&DAT_004698a4) = 0x32;
    DAT_004698a8 = '\x01';
  }
  if (DAT_004698b0 == '\0') {
    _DAT_004698ac = 0x33;
    DAT_004698b0 = '\x01';
  }
  if (DAT_004698b8 == '\0') {
    _DAT_004698b4 = 0x34;
    DAT_004698b8 = '\x01';
  }
  if (DAT_004698c0 == '\0') {
    _DAT_004698bc = 0x35;
    DAT_004698c0 = '\x01';
  }
  if (DAT_004698c8 == '\0') {
    _DAT_004698c4 = 0x36;
    DAT_004698c8 = '\x01';
  }
  if (DAT_004698d0 == '\0') {
    _DAT_004698cc = 0x37;
    DAT_004698d0 = '\x01';
  }
  if (DAT_004698d8 == '\0') {
    _DAT_004698d4 = 0x38;
    DAT_004698d8 = '\x01';
  }
  if (DAT_004698e0 == '\0') {
    _DAT_004698dc = 0x39;
    DAT_004698e0 = '\x01';
  }
  if (DAT_004698e8 == '\0') {
    _DAT_004698e4 = 0x3a;
    DAT_004698e8 = '\x01';
  }
  if (DAT_004698f0 == '\0') {
    _DAT_004698ec = 0x3b;
    DAT_004698f0 = '\x01';
  }
  if (DAT_004698f8 == '\0') {
    _DAT_004698f4 = 0x3c;
    DAT_004698f8 = '\x01';
  }
  if (DAT_00469900 == '\0') {
    _DAT_004698fc = 0x3d;
    DAT_00469900 = '\x01';
  }
  if (DAT_00469908 == '\0') {
    _DAT_00469904 = 0x3e;
    DAT_00469908 = '\x01';
  }
  if (DAT_00469910 == '\0') {
    _DAT_0046990c = 0x3f;
    DAT_00469910 = '\x01';
  }
  if (DAT_00469918 == '\0') {
    _DAT_00469914 = 0x40;
    DAT_00469918 = '\x01';
  }
  if (DAT_00469920 == '\0') {
    _DAT_0046991c = 0x41;
    DAT_00469920 = '\x01';
  }
  if (DAT_00469928 == '\0') {
    _DAT_00469924 = 0x42;
    DAT_00469928 = '\x01';
  }
  if (DAT_00469930 == '\0') {
    _DAT_0046992c = 0x43;
    DAT_00469930 = '\x01';
  }
  if (DAT_00469938 == '\0') {
    _DAT_00469934 = 0x44;
    DAT_00469938 = '\x01';
  }
  if (DAT_00469940 == '\0') {
    _DAT_0046993c = 0x45;
    DAT_00469940 = '\x01';
  }
  if (DAT_00469948 == '\0') {
    _DAT_00469944 = 0x46;
    DAT_00469948 = '\x01';
  }
  if (DAT_00469950 == '\0') {
    _DAT_0046994c = 0x47;
    DAT_00469950 = '\x01';
  }
  if (DAT_00469958 == '\0') {
    _DAT_00469954 = 0x48;
    DAT_00469958 = '\x01';
  }
  if (DAT_00469960 == '\0') {
    _DAT_0046995c = 0x49;
    DAT_00469960 = '\x01';
  }
  if (DAT_00469968 == '\0') {
    _DAT_00469964 = 0x4a;
    DAT_00469968 = '\x01';
  }
  if (DAT_00469970 == '\0') {
    _DAT_0046996c = 0x4b;
    DAT_00469970 = '\x01';
  }
  if (DAT_00469978 == '\0') {
    _DAT_00469974 = 0x4c;
    DAT_00469978 = '\x01';
  }
  if (DAT_00469980 == '\0') {
    _DAT_0046997c = 0x4d;
    DAT_00469980 = '\x01';
  }
  if (DAT_00469988 == '\0') {
    _DAT_00469984 = 0x4e;
    DAT_00469988 = '\x01';
  }
  if (DAT_00469990 == '\0') {
    _DAT_0046998c = 0x4f;
    DAT_00469990 = '\x01';
  }
  if (DAT_00469998 == '\0') {
    _DAT_00469994 = 0x50;
    DAT_00469998 = '\x01';
  }
  if (DAT_004699a0 == '\0') {
    _DAT_0046999c = 0x51;
    DAT_004699a0 = '\x01';
  }
  if (DAT_004699a8 == '\0') {
    puVar1 = FUN_00410934();
    if ((*(uint *)(puVar1 + 4) < 5) &&
       ((puVar1 = FUN_00410934(), *(int *)(puVar1 + 0x10) != 2 ||
        (puVar1 = FUN_00410934(), *(uint *)(puVar1 + 4) < 4)))) {
      _DAT_004699a4 = 0x4c;
    }
    else {
      _DAT_004699a4 = 0x53;
    }
    DAT_004699a8 = 1;
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427e78  InitRichEditStreamer_427e78   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_427e78(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4699bc);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0042a1e4;
  puVar1 = FUN_0045666c(1,0,0x429d5c);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00476e4c,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427ece  FUN_00427ece   (48 bytes)   [unnamed]
void __stdcall FUN_00427ece(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4699d0);
  OWL::TStreamableClass::_dtor(0x476e4c,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
