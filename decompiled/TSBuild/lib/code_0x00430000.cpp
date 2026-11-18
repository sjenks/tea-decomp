// TSBuild.exe — runtime / library code "code_0x00430000"
// 38 functions, 0x004302e4..0x00433fdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004302e4  FUN_004302e4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004302e4(int *param_1)

{
  undefined4 *streamer;
  int *window;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cd80);
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
// 0x0043044c  FUN_0043044c   (42 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0043044c(int *param_1,int *param_2,int param_3)

{
  *param_1 = (*param_2 - _DAT_0048c8d1) * 0x15180 + param_3 * 0xe10 + DAT_0048aa98;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430478  FUN_00430478   (240 bytes)   [unnamed]
int * __cdecl FUN_00430478(int *param_1,uint param_2)

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
      piVar1 = FUN_00421768(&local_18,6,1,0x7b6);
      FUN_0043044c(param_1,piVar1,iVar2);
    }
    else if (param_2 == 0x7b7) {
      iVar2 = 2;
      piVar1 = FUN_00421768(&local_14,0x17,2,0x7b7);
      FUN_0043044c(param_1,piVar1,iVar2);
    }
    else {
      FUN_00421768(&local_c,0x1e,4,param_2);
      iVar2 = 2;
      FUN_004219cc(&local_10,&local_c,7);
      FUN_0043044c(param_1,&local_10,iVar2);
    }
  }
  else {
    FUN_00421768(&local_8,0x1f,3,param_2);
    iVar3 = 2;
    iVar2 = 7;
    FUN_004219cc(&local_20,&local_8,7);
    FUN_00421a80(&local_1c,&local_20,iVar2);
    FUN_0043044c(param_1,&local_1c,iVar3);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430568  FUN_00430568   (69 bytes)   [unnamed]
int * __cdecl FUN_00430568(int *param_1,uint param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  FUN_00421768(&local_8,0x1f,10,param_2);
  iVar1 = 1;
  FUN_004219cc(&local_c,&local_8,7);
  FUN_0043044c(param_1,&local_c,iVar1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004305b0  FUN_004305b0   (160 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint * __cdecl FUN_004305b0(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47ce74);
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (*param_2 - _DAT_0048c8d1) * 0x15180 + (param_3 + -1) * 0xe10 + param_4 * 0x3c +
               param_5;
    if (*param_1 != 0) {
      *param_1 = *param_1 + DAT_0048aa98;
    }
    iVar1 = FUN_004306b4(param_1);
    if (iVar1 == 0) {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_004306b4(param_1);
      if (iVar1 != 0) {
        *param_1 = 0;
      }
    }
    else {
      *param_1 = *param_1 + 0xe10;
      iVar1 = FUN_004306b4(param_1);
      if (iVar1 != 0) {
        *param_1 = *param_1 - 0xe10;
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430650  FUN_00430650   (97 bytes)   [unnamed]
uint * __cdecl FUN_00430650(uint *param_1,FILETIME *pFileTime)

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
  
  __InitExceptBlockLDTC(0x47ce7c);
  FileTimeToSystemTime(pFileTime,&sysTime);
  uVar4 = (uint)sysTime.wSecond;
  uVar1 = (uint)sysTime.wMinute;
  uVar5 = (uint)sysTime.wHour;
  piVar2 = FUN_004217a0(&local_30,&sysTime.wYear);
  puVar3 = FUN_004305b0(&local_2c,piVar2,uVar5,uVar1,uVar4);
  *param_1 = *puVar3;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004306b4  FUN_004306b4   (116 bytes)   [unnamed]
undefined4 __cdecl FUN_004306b4(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_0048aa9c != 0) {
    piVar1 = FUN_00421718(&local_8,*param_1 / 0x15180,0);
    uVar2 = FUN_00421a58(piVar1);
    FUN_00430478((int *)&local_c,uVar2);
    if ((local_c <= *param_1) && (FUN_00430568((int *)&local_10,uVar2), *param_1 < local_10)) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430728  FUN_00430728   (126 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430728(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cea8);
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
// 0x004307c8  FUN_004307c8   (130 bytes)   [unnamed]
undefined4 * __cdecl FUN_004307c8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, uint *param_5)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x47cecc);
  param_1[0xb] = 0;
  memset(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0043084c((int)param_1,param_2,param_4);
  puVar2 = param_1 + 4;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  FUN_00430864((int)param_1,param_5,'\0');
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043084c  FUN_0043084c   (24 bytes)   [unnamed]
void __cdecl FUN_0043084c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430864  FUN_00430864   (84 bytes)   [unnamed]
void __cdecl FUN_00430864(int param_1,uint *param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((param_2 == (uint *)0xffffffff) || (param_2 == (uint *)0x0)) || (param_3 == '\0')) {
    *(uint **)(param_1 + 0x24) = param_2;
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar1 = FUN_0042aea0(param_2);
    operator_delete_array();
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004308b8  FUN_004308b8   (25 bytes)   [unnamed]
void __cdecl FUN_004308b8(int param_1,uint *src)

{
  strncpy((undefined4 *)(param_1 + 0x10),src,(char *)0x50);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430cac  FUN_00430cac   (93 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430cac(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x47d0c4);
  puVar2 = param_1;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[4] = *(undefined4 *)(&DAT_0047d024 + param_3 * 8);
  param_1[5] = *(uint *)(&DAT_0047d028 + param_3 * 8) | param_4;
  if ((*(byte *)(param_1 + 5) & 0xf) == 0) {
    param_1[5] = param_1[5] | 0xf;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d0c  FUN_00430d0c   (77 bytes)   [unnamed]
undefined4 * __cdecl FUN_00430d0c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int i;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  byte bVar3;
  undefined4 sehPrevFrame;
  
  bVar3 = 0;
  __InitExceptBlockLDTC(0x47d0cc);
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
// 0x00430d5c  FUN_00430d5c   (26 bytes)   [unnamed]
void __cdecl FUN_00430d5c(LPRECT qrc,undefined4 *param_2)

{
  FUN_00430d78(param_2,qrc,qrc[1].left,qrc[1].top);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430d78  FUN_00430d78   (1107 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00430d78(undefined4 *param_1,LPRECT qrc,uint edge,uint grfFlags)

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
  __InitExceptBlockLDTC(0x47d134);
  if (DAT_0047d07c != 0) {
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
    DAT_0047d07c = 0;
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
        if (DAT_0047d090 == '\0') {
          _DAT_0047d080 = DAT_0048c6b4;
          DAT_0047d090 = '\x01';
          _DAT_0047d084 = (*(undefined4 *)&DAT_0048c6ac);
          _DAT_0047d088 = DAT_0048c69c;
          _DAT_0047d08c = DAT_0048c6b0;
        }
        if (DAT_0047d0a1 == '\0') {
          _DAT_0047d091 = DAT_0048c6b0;
          DAT_0047d0a1 = '\x01';
          _DAT_0047d095 = DAT_0048c6b0;
          _DAT_0047d099 = (*(undefined4 *)&DAT_0048c6ac);
          _DAT_0047d09d = (*(undefined4 *)&DAT_0048c6ac);
        }
        if ((edge & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (grfFlags & 0x1000) != 0;
        FUN_004311cc(param_1,&x,grfFlags,(uint *)(&DAT_0047d080 + uVar4 * 4),
                     (uint *)(&DAT_0047d091 + uVar4 * 4));
        qrc = (LPRECT)FUN_004288b4(&x,-1,-1);
      }
      if ((edge & 0xc) != 0) {
        if (DAT_0047d0b2 == '\0') {
          _DAT_0047d0a2 = (*(undefined4 *)&DAT_0048c6ac);
          DAT_0047d0b2 = '\x01';
          _DAT_0047d0a6 = DAT_0048c6b4;
          _DAT_0047d0aa = DAT_0048c6b0;
          _DAT_0047d0ae = DAT_0048c69c;
        }
        if (DAT_0047d0c3 == '\0') {
          _DAT_0047d0b3 = DAT_0048c69c;
          DAT_0047d0c3 = '\x01';
          _DAT_0047d0b7 = DAT_0048c69c;
          _DAT_0047d0bb = DAT_0048c6b4;
          _DAT_0047d0bf = DAT_0048c6b4;
        }
        if ((edge & 2) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 2;
        }
        uVar4 = uVar4 | (grfFlags & 0x1000) != 0;
        FUN_004311cc(param_1,&x,grfFlags,(uint *)(&DAT_0047d0a2 + uVar4 * 4),
                     (uint *)(&DAT_0047d0b3 + uVar4 * 4));
        qrc = (LPRECT)FUN_004288b4(&x,-1,-1);
      }
      if ((grfFlags & 0x800) != 0) {
        ehContext = 0x38;
        FUN_0043c4b4(brush,&DAT_0048c698,'\x01');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x44;
        FUN_00421cec(param_1,brush);
        PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
        FUN_00421e18(param_1);
        ehDtorCount = ehDtorCount + -2;
        qrc = (LPRECT)OWL::TBrush::_dtor(brush,2);
      }
      uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
      *sehChainHead = sehPrevFrame;
    }
    else {
      if ((edge & 3) != 0) {
        FUN_004311cc(param_1,&x,grfFlags,&DAT_0048c69c,&DAT_0048c69c);
        qrc = (LPRECT)FUN_004288b4(&x,-1,-1);
      }
      if ((grfFlags & 0x800) != 0) {
        ehContext = 0x20;
        FUN_0043c4b4(brush2,&DAT_0048c698,'\x01');
        ehDtorCount = ehDtorCount + 2;
        ehContext = 0x2c;
        FUN_00421cec(param_1,brush2);
        PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
        FUN_00421e18(param_1);
        ehDtorCount = ehDtorCount + -2;
        qrc = (LPRECT)OWL::TBrush::_dtor(brush2,2);
      }
      uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    if ((edge & 3) != 0) {
      FUN_004311cc(param_1,&x,grfFlags,(uint *)&DAT_0048c674,(uint *)&DAT_0048c674);
      qrc = (LPRECT)FUN_004288b4(&x,-1,-1);
    }
    if ((grfFlags & 0x800) != 0) {
      ehContext = 8;
      FUN_0043c4b4(brush3,(uint *)&DAT_0048c670,'\x01');
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      FUN_00421cec(param_1,brush3);
      PatBlt((HDC)*param_1,x,y,local_4c - x,local_48 - y,0xf00021);
      FUN_00421e18(param_1);
      ehDtorCount = ehDtorCount + -2;
      qrc = (LPRECT)OWL::TBrush::_dtor(brush3,2);
    }
    uVar3 = CONCAT31((int3)((uint)qrc >> 8),1);
    *sehChainHead = sehPrevFrame;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004311cc  FUN_004311cc   (458 bytes)   [unnamed]
void __cdecl FUN_004311cc(undefined4 *param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  uint brush [2];
  uint brush2 [2];
  
  __InitExceptBlockLDTC(0x47d1c4);
  if ((param_3 & 3) != 0) {
    FUN_0043c4b4(brush2,param_4,'\x01');
    FUN_00421cec(param_1,brush2);
    if ((param_3 & 2) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1],(param_2[2] - *param_2) + -1,1,0xf00021);
    }
    if ((param_3 & 1) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[1] + 1,1,(param_2[3] - param_2[1]) + -2,0xf00021);
    }
    FUN_00421e18(param_1);
    OWL::TBrush::_dtor(brush2,2);
  }
  if ((param_3 & 0xc) != 0) {
    FUN_0043c4b4(brush,param_5,'\x01');
    FUN_00421cec(param_1,brush);
    if ((param_3 & 8) != 0) {
      PatBlt((HDC)*param_1,*param_2,param_2[3] + -1,param_2[2] - *param_2,1,0xf00021);
    }
    if ((param_3 & 4) != 0) {
      PatBlt((HDC)*param_1,param_2[2] + -1,param_2[1],1,(param_2[3] - param_2[1]) + -1,0xf00021);
    }
    FUN_00421e18(param_1);
    OWL::TBrush::_dtor(brush,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431398  FUN_00431398   (133 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_00431398(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47d20d);
  if (DAT_0047d1fc == '\0') {
    FUN_0043c628((uint *)&DAT_0048c8dc,0x47f530,&DAT_0048c698,&DAT_0048c6ac);
    _DAT_0048c8e1 = DAT_0048c6ac;
    _DAT_0048c8e5 = 0;
    _DAT_0048c8e9 = 0;
    (*(undefined4 *)&DAT_0048c8ed) = 0;
    DAT_0047d1fc = DAT_0047d1fc + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048c8dc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043141d  FUN_0043141d   (114 bytes)   [unnamed]
void __stdcall FUN_0043141d(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47d24a);
  if (DAT_0047d1fc != '\0') {
    if (DAT_0048c8ed != (uint *)0x0) {
      OWL::TBitmap::_dtor(DAT_0048c8ed,3);
    }
    OWL::TBrush::_dtor((uint *)&DAT_0048c8dc,0);
    DAT_0047d1fc = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004314f0  FUN_004314f0   (66 bytes)   [unnamed]
uint * __cdecl FUN_004314f0(uint *param_1)

{
  if (*(int *)((int)param_1 + 5) != DAT_0048c6ac) {
    FUN_0043c698(param_1,0x47f530,&DAT_0048c698,(uint *)&DAT_0048c6ac);
    *(int *)((int)param_1 + 5) = DAT_0048c6ac;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431534  FUN_00431534   (185 bytes)   [unnamed]
undefined4 __cdecl FUN_00431534(int param_1,int *param_2)

{
  uint *bitmap;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47d28c);
  if ((*(int *)(param_1 + 9) < *param_2) || (*(int *)(param_1 + 0xd) < param_2[1])) {
    if (*(int *)(param_1 + 9) < *param_2) {
      *(int *)(param_1 + 9) = *param_2;
    }
    if (*(int *)(param_1 + 0xd) < param_2[1]) {
      *(int *)(param_1 + 0xd) = param_2[1];
    }
    puVar3 = (uint *)operator_new();
    if (puVar3 != (uint *)0x0) {
      FUN_0041cd0c(puVar3,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd),1,1,(void *)0x0);
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
// 0x004315f0  FUN_004315f0   (13 bytes)   [unnamed]
uint * __stdcall FUN_004315f0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00431398();
  puVar1 = FUN_004314f0(puVar1);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431600  FUN_00431600   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00431600(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00431398();
  uVar2 = FUN_00431534((int)puVar1,param_1);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431618  FUN_00431618   (208 bytes)   [unnamed]
void __cdecl FUN_00431618(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5, int *param_6)

{
  PatBlt((HDC)*param_1,0,0,*param_3,param_3[1],0xff0062);
  if (*param_6 != DAT_0048c654) {
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
    BitBlt((HDC)*param_1,*param_2,param_2[1],param_5[2] - *param_5,param_5[3] - param_5[1],
           (HDC)*param_4,*param_5,param_5[1],0xcc0020);
    (**(code **)(*(int *)((int)param_4 + 5) + 0x20))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004316e8  FUN_004316e8   (174 bytes)   [unnamed]
void __cdecl FUN_004316e8(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  FUN_00421cec(param_1,param_4);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  BitBlt((HDC)*param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],
         (HDC)*param_2,0,0,0xe20746);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x24))();
  (**(code **)(*(int *)((int)param_1 + 5) + 0x20))();
  FUN_00421e18(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431798  FUN_00431798   (28 bytes)   [unnamed]
void __cdecl FUN_00431798(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004315f0();
  FUN_004316e8(param_1,param_2,param_3,puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004317b4  FUN_004317b4   (253 bytes)   [unnamed]
undefined4 __cdecl FUN_004317b4(int *param_1)

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
// 0x004318b4  FUN_004318b4   (1559 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_004318b4(uint *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,int param_6, char param_7,char param_8,int *param_9,uint *param_10)

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
  
  __InitExceptBlockLDTC(0x47d334);
  ehContext = 8;
  FUN_0042b980((int *)&hdc,param_1);
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
  FUN_004288d0(&x,param_4);
  local_b8 = *param_5;
  local_b4 = param_5[1];
  if ((param_7 != '\0') || (param_6 == 1)) {
    local_b8 = local_b8 + 1;
    local_b4 = local_b4 + 1;
    FUN_00428898(&x,1,1);
    FUN_004288d0(&x,param_4);
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
  puVar1 = (uint *)FUN_00431600(&local_e8);
  FUN_0042b980((int *)memoryDC,puVar1);
  ehDtorCount = ehDtorCount + 3;
  ehContext = 0x14;
  unused11 = local_148 - local_150;
  local_f0 = local_14c - local_154;
  FUN_00431618((undefined4*)memoryDC,&local_b8,&local_f0,(undefined4*)&hdc,param_2,param_9);
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
    FUN_0043c4b4(brush2,&DAT_0048c69c,'\x01');
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x38;
    FUN_00421cec(param_3,brush2);
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
    FUN_00431798(param_3,(undefined4*)memoryDC,param_4);
  }
  else if ((param_8 != '\0') && (*param_10 != (*(uint *)&DAT_0048c654))) {
    ehContext = 0x44;
    FUN_0043c4b4(brush,param_10,'\x01');
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x50;
    FUN_004316e8(param_3,(undefined4*)memoryDC,param_4,brush);
    ehDtorCount = ehDtorCount + -2;
    OWL::TBrush::_dtor(brush,2);
    ehContext = 0x14;
  }
  FUN_0042ba5c((undefined4*)memoryDC);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)memoryDC,2);
  ehDtorCount = ehDtorCount + -3;
  OWL::TMemoryDC::_dtor((int *)&hdc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431ecc  FUN_00431ecc   (179 bytes)   [unnamed]
void __cdecl FUN_00431ecc(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5, int param_6,char param_7,char param_8,int *param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 *sehChainHead;
  ICONINFO piconinfo;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint bitmap [2];
  uint bitmap2 [2];
  
  __InitExceptBlockLDTC(0x47d3bc);
  GetIconInfo((HICON)*param_1,&piconinfo);
  ehContext = 0x14;
  puVar1 = FUN_0041cc9c(bitmap,piconinfo.hbmColor,0);
  ehDtorCount = ehDtorCount + 2;
  FUN_0041ce0c(bitmap2,puVar1);
  OWL::TBitmap::_dtor(bitmap,2);
  ehContext = 8;
  FUN_004318b4(bitmap2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  ehDtorCount = ehDtorCount + -2;
  OWL::TBitmap::_dtor(bitmap2,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00431f80  FUN_00431f80   (1252 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_00431f80(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7,COLORREF *param_8,ushort param_9)

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
  __InitExceptBlockLDTC(0x47d428);
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
      FUN_0042b918(memoryDC2,param_2);
      ehDtorCount = ehDtorCount + 3;
      ehContext = 0x20;
      unused4 = param_3[3] - param_3[1];
      local_a8 = param_3[2] - *param_3;
      unused5 = local_a8;
      puVar3 = (uint *)FUN_00431600(&local_a8);
      FUN_0042b980(memoryDC,puVar3);
      ehDtorCount = ehDtorCount + 3;
      ehContext = 0x14;
      if (param_7 == '\0') {
        param_8 = local_98;
      }
      unused3 = param_3[3] - param_3[1];
      local_b0 = param_3[2] - *param_3;
      FUN_00431618(memoryDC,&local_88,&local_b0,memoryDC2,param_3,(int *)param_8);
      FUN_00431798(param_2,memoryDC,param_3);
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
    FUN_0043c4b4(brush,&color,cVar8);
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
    FUN_004317b4(param_2);
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
// 0x00432478  FUN_00432478   (145 bytes)   [unnamed]
void __cdecl FUN_00432478(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6, char param_7)

{
  if (param_1[1] == 0) {
    FUN_00431f80(*param_1,param_2,param_1 + 2,param_4,param_5,param_6,param_7,param_1 + 7,
                 *(ushort *)(param_1 + 8));
  }
  else if (param_1[1] == 1) {
    FUN_004318b4((uint *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  else if (param_1[1] == 2) {
    FUN_00431ecc((undefined4 *)*param_1,param_3,param_2,param_1 + 2,param_4,param_5,param_6,param_7,
                 param_1 + 6,param_1 + 7);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432700  FUN_00432700   (12 bytes)   [unnamed]
void __cdecl FUN_00432700(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00432764  FUN_00432764   (2214 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00432764(void)

{
  undefined *puVar1;
  
  if (DAT_0047d4f4 == '\0') {
    _DAT_0047d4f0 = 0;
    DAT_0047d4f4 = '\x01';
  }
  if (DAT_0047d4fc == '\0') {
    _DAT_0047d4f8 = 1;
    DAT_0047d4fc = '\x01';
  }
  if (DAT_0047d504 == '\0') {
    _DAT_0047d500 = 2;
    DAT_0047d504 = '\x01';
  }
  if (DAT_0047d50c == '\0') {
    _DAT_0047d508 = 3;
    DAT_0047d50c = '\x01';
  }
  if (DAT_0047d514 == '\0') {
    _DAT_0047d510 = 4;
    DAT_0047d514 = '\x01';
  }
  if (DAT_0047d51c == '\0') {
    (*(undefined4 *)&DAT_0047d518) = 5;
    DAT_0047d51c = '\x01';
  }
  if (DAT_0047d524 == '\0') {
    (*(undefined4 *)&DAT_0047d520) = 6;
    DAT_0047d524 = '\x01';
  }
  if (DAT_0047d52c == '\0') {
    (*(undefined4 *)&DAT_0047d528) = 7;
    DAT_0047d52c = '\x01';
  }
  if (DAT_0047d534 == '\0') {
    (*(undefined4 *)&DAT_0047d530) = 8;
    DAT_0047d534 = '\x01';
  }
  if (DAT_0047d53c == '\0') {
    _DAT_0047d538 = 9;
    DAT_0047d53c = '\x01';
  }
  if (DAT_0047d544 == '\0') {
    _DAT_0047d540 = 10;
    DAT_0047d544 = '\x01';
  }
  if (DAT_0047d54c == '\0') {
    _DAT_0047d548 = 0xb;
    DAT_0047d54c = '\x01';
  }
  if (DAT_0047d554 == '\0') {
    _DAT_0047d550 = 0xc;
    DAT_0047d554 = '\x01';
  }
  if (DAT_0047d55c == '\0') {
    _DAT_0047d558 = 0xd;
    DAT_0047d55c = '\x01';
  }
  if (DAT_0047d564 == '\0') {
    _DAT_0047d560 = 0xe;
    DAT_0047d564 = '\x01';
  }
  if (DAT_0047d56c == '\0') {
    _DAT_0047d568 = 0xf;
    DAT_0047d56c = '\x01';
  }
  if (DAT_0047d574 == '\0') {
    _DAT_0047d570 = 0x10;
    DAT_0047d574 = '\x01';
  }
  if (DAT_0047d57c == '\0') {
    _DAT_0047d578 = 0x11;
    DAT_0047d57c = '\x01';
  }
  if (DAT_0047d584 == '\0') {
    _DAT_0047d580 = 0x12;
    DAT_0047d584 = '\x01';
  }
  if (DAT_0047d58c == '\0') {
    _DAT_0047d588 = 0x13;
    DAT_0047d58c = '\x01';
  }
  if (DAT_0047d594 == '\0') {
    _DAT_0047d590 = 0x14;
    DAT_0047d594 = '\x01';
  }
  if (DAT_0047d59c == '\0') {
    _DAT_0047d598 = 0x15;
    DAT_0047d59c = '\x01';
  }
  if (DAT_0047d5a4 == '\0') {
    _DAT_0047d5a0 = 0x16;
    DAT_0047d5a4 = '\x01';
  }
  if (DAT_0047d5ac == '\0') {
    _DAT_0047d5a8 = 0x17;
    DAT_0047d5ac = '\x01';
  }
  if (DAT_0047d5b4 == '\0') {
    _DAT_0047d5b0 = 0x18;
    DAT_0047d5b4 = '\x01';
  }
  if (DAT_0047d5bc == '\0') {
    _DAT_0047d5b8 = 0x19;
    DAT_0047d5bc = '\x01';
  }
  if (DAT_0047d5c4 == '\0') {
    _DAT_0047d5c0 = 0x1a;
    DAT_0047d5c4 = '\x01';
  }
  if (DAT_0047d5cc == '\0') {
    _DAT_0047d5c8 = 0x1b;
    DAT_0047d5cc = '\x01';
  }
  if (DAT_0047d5d4 == '\0') {
    _DAT_0047d5d0 = 0x1c;
    DAT_0047d5d4 = '\x01';
  }
  if (DAT_0047d5dc == '\0') {
    _DAT_0047d5d8 = 0x1d;
    DAT_0047d5dc = '\x01';
  }
  if (DAT_0047d5e4 == '\0') {
    _DAT_0047d5e0 = 0x1e;
    DAT_0047d5e4 = '\x01';
  }
  if (DAT_0047d5ec == '\0') {
    _DAT_0047d5e8 = 0x1f;
    DAT_0047d5ec = '\x01';
  }
  if (DAT_0047d5f4 == '\0') {
    (*(undefined4 *)&DAT_0047d5f0) = 0x20;
    DAT_0047d5f4 = '\x01';
  }
  if (DAT_0047d5fc == '\0') {
    (*(undefined4 *)&DAT_0047d5f8) = 0x21;
    DAT_0047d5fc = '\x01';
  }
  if (DAT_0047d604 == '\0') {
    _DAT_0047d600 = 0x22;
    DAT_0047d604 = '\x01';
  }
  if (DAT_0047d60c == '\0') {
    _DAT_0047d608 = 0x23;
    DAT_0047d60c = '\x01';
  }
  if (DAT_0047d614 == '\0') {
    _DAT_0047d610 = 0x24;
    DAT_0047d614 = '\x01';
  }
  if (DAT_0047d61c == '\0') {
    _DAT_0047d618 = 0x25;
    DAT_0047d61c = '\x01';
  }
  if (DAT_0047d624 == '\0') {
    _DAT_0047d620 = 0x26;
    DAT_0047d624 = '\x01';
  }
  if (DAT_0047d62c == '\0') {
    _DAT_0047d628 = 0x27;
    DAT_0047d62c = '\x01';
  }
  if (DAT_0047d634 == '\0') {
    _DAT_0047d630 = 0x28;
    DAT_0047d634 = '\x01';
  }
  if (DAT_0047d63c == '\0') {
    _DAT_0047d638 = 0x29;
    DAT_0047d63c = '\x01';
  }
  if (DAT_0047d644 == '\0') {
    _DAT_0047d640 = 0x2a;
    DAT_0047d644 = '\x01';
  }
  if (DAT_0047d64c == '\0') {
    _DAT_0047d648 = 0x2b;
    DAT_0047d64c = '\x01';
  }
  if (DAT_0047d654 == '\0') {
    _DAT_0047d650 = 0x2c;
    DAT_0047d654 = '\x01';
  }
  if (DAT_0047d65c == '\0') {
    _DAT_0047d658 = 0x2d;
    DAT_0047d65c = '\x01';
  }
  if (DAT_0047d664 == '\0') {
    _DAT_0047d660 = 0x2e;
    DAT_0047d664 = '\x01';
  }
  if (DAT_0047d66c == '\0') {
    _DAT_0047d668 = 0x2f;
    DAT_0047d66c = '\x01';
  }
  if (DAT_0047d674 == '\0') {
    _DAT_0047d670 = 0x30;
    DAT_0047d674 = '\x01';
  }
  if (DAT_0047d67c == '\0') {
    (*(undefined4 *)&DAT_0047d678) = 0x31;
    DAT_0047d67c = '\x01';
  }
  if (DAT_0047d684 == '\0') {
    (*(undefined4 *)&DAT_0047d680) = 0x32;
    DAT_0047d684 = '\x01';
  }
  if (DAT_0047d68c == '\0') {
    _DAT_0047d688 = 0x33;
    DAT_0047d68c = '\x01';
  }
  if (DAT_0047d694 == '\0') {
    _DAT_0047d690 = 0x34;
    DAT_0047d694 = '\x01';
  }
  if (DAT_0047d69c == '\0') {
    _DAT_0047d698 = 0x35;
    DAT_0047d69c = '\x01';
  }
  if (DAT_0047d6a4 == '\0') {
    _DAT_0047d6a0 = 0x36;
    DAT_0047d6a4 = '\x01';
  }
  if (DAT_0047d6ac == '\0') {
    _DAT_0047d6a8 = 0x37;
    DAT_0047d6ac = '\x01';
  }
  if (DAT_0047d6b4 == '\0') {
    _DAT_0047d6b0 = 0x38;
    DAT_0047d6b4 = '\x01';
  }
  if (DAT_0047d6bc == '\0') {
    _DAT_0047d6b8 = 0x39;
    DAT_0047d6bc = '\x01';
  }
  if (DAT_0047d6c4 == '\0') {
    _DAT_0047d6c0 = 0x3a;
    DAT_0047d6c4 = '\x01';
  }
  if (DAT_0047d6cc == '\0') {
    _DAT_0047d6c8 = 0x3b;
    DAT_0047d6cc = '\x01';
  }
  if (DAT_0047d6d4 == '\0') {
    _DAT_0047d6d0 = 0x3c;
    DAT_0047d6d4 = '\x01';
  }
  if (DAT_0047d6dc == '\0') {
    _DAT_0047d6d8 = 0x3d;
    DAT_0047d6dc = '\x01';
  }
  if (DAT_0047d6e4 == '\0') {
    _DAT_0047d6e0 = 0x3e;
    DAT_0047d6e4 = '\x01';
  }
  if (DAT_0047d6ec == '\0') {
    _DAT_0047d6e8 = 0x3f;
    DAT_0047d6ec = '\x01';
  }
  if (DAT_0047d6f4 == '\0') {
    _DAT_0047d6f0 = 0x40;
    DAT_0047d6f4 = '\x01';
  }
  if (DAT_0047d6fc == '\0') {
    _DAT_0047d6f8 = 0x41;
    DAT_0047d6fc = '\x01';
  }
  if (DAT_0047d704 == '\0') {
    _DAT_0047d700 = 0x42;
    DAT_0047d704 = '\x01';
  }
  if (DAT_0047d70c == '\0') {
    _DAT_0047d708 = 0x43;
    DAT_0047d70c = '\x01';
  }
  if (DAT_0047d714 == '\0') {
    _DAT_0047d710 = 0x44;
    DAT_0047d714 = '\x01';
  }
  if (DAT_0047d71c == '\0') {
    _DAT_0047d718 = 0x45;
    DAT_0047d71c = '\x01';
  }
  if (DAT_0047d724 == '\0') {
    _DAT_0047d720 = 0x46;
    DAT_0047d724 = '\x01';
  }
  if (DAT_0047d72c == '\0') {
    _DAT_0047d728 = 0x47;
    DAT_0047d72c = '\x01';
  }
  if (DAT_0047d734 == '\0') {
    _DAT_0047d730 = 0x48;
    DAT_0047d734 = '\x01';
  }
  if (DAT_0047d73c == '\0') {
    _DAT_0047d738 = 0x49;
    DAT_0047d73c = '\x01';
  }
  if (DAT_0047d744 == '\0') {
    _DAT_0047d740 = 0x4a;
    DAT_0047d744 = '\x01';
  }
  if (DAT_0047d74c == '\0') {
    _DAT_0047d748 = 0x4b;
    DAT_0047d74c = '\x01';
  }
  if (DAT_0047d754 == '\0') {
    _DAT_0047d750 = 0x4c;
    DAT_0047d754 = '\x01';
  }
  if (DAT_0047d75c == '\0') {
    _DAT_0047d758 = 0x4d;
    DAT_0047d75c = '\x01';
  }
  if (DAT_0047d764 == '\0') {
    _DAT_0047d760 = 0x4e;
    DAT_0047d764 = '\x01';
  }
  if (DAT_0047d76c == '\0') {
    _DAT_0047d768 = 0x4f;
    DAT_0047d76c = '\x01';
  }
  if (DAT_0047d774 == '\0') {
    _DAT_0047d770 = 0x50;
    DAT_0047d774 = '\x01';
  }
  if (DAT_0047d77c == '\0') {
    _DAT_0047d778 = 0x51;
    DAT_0047d77c = '\x01';
  }
  if (DAT_0047d784 == '\0') {
    puVar1 = FUN_0041b958();
    if ((*(uint *)(puVar1 + 4) < 5) &&
       ((puVar1 = FUN_0041b958(), *(int *)(puVar1 + 0x10) != 2 ||
        (puVar1 = FUN_0041b958(), *(uint *)(puVar1 + 4) < 4)))) {
      _DAT_0047d780 = 0x4c;
    }
    else {
      _DAT_0047d780 = 0x53;
    }
    DAT_0047d784 = 1;
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043300c  InitRichEditStreamer_43300c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_43300c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47d798);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00435378;
  puVar1 = FUN_00468310(1,0,0x434ef0);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c8f4,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433062  FUN_00433062   (48 bytes)   [unnamed]
void __stdcall FUN_00433062(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47d7ac);
  OWL::TStreamableClass::_dtor(0x48c8f4,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433660  FUN_00433660   (346 bytes)   [unnamed]
void __cdecl FUN_00433660(int *param_1,int param_2)

{
  undefined4 *sehChainHead;
  tagRECT rect;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 lParam [12];
  int local_c;
  undefined4 unused;
  
  __InitExceptBlockLDTC(0x47daa4);
  if (param_1[7] != 0) {
    if (*(int *)(*(int *)param_1[7] + 0xc) == 0) {
      local_c = param_1[7];
      if (local_c != 0) {
        unused = *(undefined4 *)(local_c + 0xc);
        ehContext = 0x14;
        (*(code *)**(undefined4 **)(local_c + 0xc))();
        ehContext = 8;
      }
    }
    else {
      FUN_00438338(*(int *)param_1[7],0x10,0,0);
    }
  }
  param_1[7] = param_2;
  if (((param_1[7] != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(*(int *)param_1[7] + 0xc) == 0)) {
    FUN_00438618(*(int *)param_1[7],0,0x8000000,0);
    (**(code **)(*(int *)(*(int *)param_1[7] + 8) + 0x10))();
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004386fc(*param_1,&rect);
    ehContext = 0x20;
    FUN_004307c8(lParam,*(undefined4 *)(*param_1 + 0xc),&rect.left,0x3eb,(uint *)0xffffffff);
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x2c;
    FUN_00430864((int)lParam,(uint *)param_1[0xd],'\x01');
    FUN_00438338(*(int *)param_1[7],0x404,0,(LPARAM)lParam);
    ehDtorCount = ehDtorCount + -2;
    operator_delete_array();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433844  FUN_00433844   (42 bytes)   [unnamed]
LRESULT __stdcall FUN_00433844(HWND hWnd,UINT msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT lResult;
  
  if (msg == 0x87) {
    lResult = 0x104;
  }
  else {
    lResult = DefWindowProcA(hWnd,msg,wParam,lParam);
  }
  return lResult;
}

// ----------------------------------------------------------------------------------------------------
// 0x00433fdc  FUN_00433fdc   (36 bytes)   [unnamed]
void __cdecl FUN_00433fdc(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x3d) = param_2;
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

} // namespace tea
