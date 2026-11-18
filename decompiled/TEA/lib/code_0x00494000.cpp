// TEA.exe — runtime / library code "code_0x00494000"
// 73 functions, 0x0049402c..0x00497d64. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049402c  FUN_0049402c   (56 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049402c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507340);
  FUN_004934f8(param_1,param_2,param_3);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004941a4  FUN_004941a4   (133 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004941a4(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507364);
  if (param_1 != 0) {
    FUN_00493a94(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_0048c8b0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004942c0  FUN_004942c0   (130 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004942c0(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5073a0);
  if (param_1 != 0) {
    FUN_00493a94(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_0048c8b0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494390  FUN_00494390   (125 bytes)   [unnamed]
void __cdecl FUN_00494390(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5073dc);
  if (param_1 != 0) {
    FUN_00493a94(param_1);
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    FUN_0048c8b0(param_1 + 0x11,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494454  FUN_00494454   (25 bytes)   [unnamed]
void __cdecl FUN_00494454(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  param_1[1] = param_1[1] + param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494470  FUN_00494470   (25 bytes)   [unnamed]
int * __cdecl FUN_00494470(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 - param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[2] = param_1[2] + param_2;
  param_1[3] = param_1[3] + param_3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049448c  FUN_0049448c   (179 bytes)   [unnamed]
void __cdecl FUN_0049448c(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((((*param_1 == 0) && (param_1[2] == 0)) && (param_1[1] == 0)) && (param_1[3] == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (((*param_2 == 0) && (param_2[2] == 0)) && ((param_2[1] == 0 && (param_2[3] == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if (*param_2 < *param_1) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = *param_2;
      }
      *param_1 = iVar2;
      if (param_2[1] < param_1[1]) {
        iVar2 = param_1[1];
      }
      else {
        iVar2 = param_2[1];
      }
      param_1[1] = iVar2;
      if (param_1[2] < param_2[2]) {
        iVar2 = param_1[2];
      }
      else {
        iVar2 = param_2[2];
      }
      param_1[2] = iVar2;
      if (param_1[3] < param_2[3]) {
        iVar2 = param_1[3];
      }
      else {
        iVar2 = param_2[3];
      }
      param_1[3] = iVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494540  FUN_00494540   (171 bytes)   [unnamed]
void __cdecl FUN_00494540(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && (param_2[1] == 0)) && (param_2[3] == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (((*param_1 == 0) && (param_1[2] == 0)) && ((param_1[1] == 0 && (param_1[3] == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
    }
    else {
      if (*param_1 < *param_2) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = *param_2;
      }
      *param_1 = iVar2;
      if (param_1[1] < param_2[1]) {
        iVar2 = param_1[1];
      }
      else {
        iVar2 = param_2[1];
      }
      param_1[1] = iVar2;
      if (param_2[2] < param_1[2]) {
        iVar2 = param_1[2];
      }
      else {
        iVar2 = param_2[2];
      }
      param_1[2] = iVar2;
      if (param_2[3] < param_1[3]) {
        iVar2 = param_1[3];
      }
      else {
        iVar2 = param_2[3];
      }
      param_1[3] = iVar2;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004945ec  FUN_004945ec   (158 bytes)   [unnamed]
int * __cdecl FUN_004945ec(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *sehChainHead;
  uint *in_stack_00000018;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50740c);
  param_1[2] = 0;
  param_1[3] = 0;
  bVar1 = FUN_00487180();
  if (!bVar1) {
    FUN_0048739c();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  FUN_0048c12c(in_stack_00000018);
  FUN_00487178();
  iVar2 = FUN_00486f84();
  *param_1 = iVar2;
  FUN_004946f4(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004946f4  FUN_004946f4   (18 bytes)   [unnamed]
void __cdecl FUN_004946f4(int *param_1)

{
  if (*param_1 == 0) {
    FUN_0048739c();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494708  FUN_00494708   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00494708(int param_1)

{
  if (((*(byte *)(param_1 + 0x1b) & 0xc0) != 0) && ((*(byte *)(param_1 + 0x1a) & 0x80) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00494722  FUN_00494722   (27 bytes)   [unnamed]
int __cdecl FUN_00494722(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == *(int *)(param_1 + iVar1 * 4)) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049473d  FUN_0049473d   (499 bytes)   [unnamed]
void __cdecl FUN_0049473d(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int aiStack_40 [6];
  int unused;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != 0) {
    local_8 = FUN_00494722(param_3,*(int *)(param_1 + 0xc));
    local_c = FUN_00494722(param_1,param_2);
    if ((local_8 != -1) && (local_c != -1)) {
      iVar1 = FUN_00495f78(param_3);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = FUN_00494722(param_1,*(int *)(param_3 + iVar4 * 4));
          aiStack_40[iVar4] = iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar4 = FUN_00495f78(param_1);
      local_10 = iVar4 + -1;
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          if ((aiStack_40[iVar5] == -1) && (iVar5 != local_8)) {
            iVar2 = iVar2 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      if (iVar2 + iVar4 + -1 < 4) {
        local_14 = *(int *)(local_c * 4 + param_1 + 0x10);
        iVar4 = local_14 >> 8;
        local_18 = iVar4 * (*(int *)(param_3 + 0x1c) >> 8);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_18;
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            if (aiStack_40[iVar2] != -1) {
              local_1c = iVar4 * (*(int *)(iVar2 * 4 + param_3 + 0x10) >> 8);
              piVar3 = (int *)(aiStack_40[iVar2] * 4 + param_1 + 0x10);
              *piVar3 = *piVar3 + local_1c;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        *(undefined4 *)(param_1 + local_c * 4) = 0;
        while (local_c = local_c + 1, local_c < 3) {
          if (*(int *)(param_1 + local_c * 4) != 0) {
            *(undefined4 *)(param_1 + -4 + local_c * 4) = *(undefined4 *)(param_1 + local_c * 4);
            *(undefined4 *)(param_1 + local_c * 4) = 0;
            *(undefined4 *)(param_1 + 0xc + local_c * 4) =
                 *(undefined4 *)(param_1 + 0x10 + local_c * 4);
          }
        }
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            if ((aiStack_40[iVar2] == -1) && (iVar2 != local_8)) {
              *(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_3 + iVar2 * 4);
              local_20 = (int *)(iVar2 * 4 + param_3 + 0x10);
              local_24 = iVar4 * (*local_20 >> 8);
              unused = local_24;
              *(int *)(param_1 + 0x10 + local_10 * 4) = local_24;
              local_10 = local_10 + 1;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        piVar3 = (int *)(param_1 + 0x1c);
        iVar1 = 0x10000 - local_14 >> 8;
        *piVar3 = *piVar3 / iVar1;
        *piVar3 = *piVar3 << 8;
        iVar4 = 0;
        if (0 < local_10) {
          do {
            piVar3 = (int *)(param_1 + 0x10 + iVar4 * 4);
            *piVar3 = *piVar3 / iVar1;
            *piVar3 = *piVar3 << 8;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_10);
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494930  InitRichEditStreamer_494930   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_494930(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507460);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004960f4;
  puVar1 = FUN_004dd5cc(1,0,0x428c70);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b244,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494986  FUN_00494986   (48 bytes)   [unnamed]
void __stdcall FUN_00494986(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507474);
  OWL::TStreamableClass::_dtor(0x51b244,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004949b6  FUN_004949b6   (41 bytes)   [unnamed]
undefined4 * __cdecl FUN_004949b6(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50747c);
  *param_1 = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004949e0  FUN_004949e0   (63 bytes)   [unnamed]
undefined4 * __cdecl FUN_004949e0(undefined4 *param_1,int numWindows)

{
  HDWP hDwp;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507494);
  if (numWindows == 0) {
    hDwp = (HDWP)0x0;
  }
  else {
    hDwp = BeginDeferWindowPos(numWindows);
  }
  *param_1 = hDwp;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494a40  FUN_00494a40   (49 bytes)   [unnamed]
bool __cdecl FUN_00494a40(int *param_1,HWND hWnd,HWND hWnd2,int x,int y,int cx,int cy, UINT flags)

{
  HDWP hDwp;
  
  hDwp = DeferWindowPos((HDWP)*param_1,hWnd,hWnd2,x,y,cx,cy,flags);
  *param_1 = (int)hDwp;
  return *param_1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494a74  FUN_00494a74   (32 bytes)   [unnamed]
undefined4 __cdecl FUN_00494a74(undefined4 *param_1)

{
  BOOL ok;
  
  ok = EndDeferWindowPos((HDWP)*param_1);
  if (ok != 0) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494c8c  FUN_00494c8c   (49 bytes)   [unnamed]
undefined4 * __cdecl FUN_00494c8c(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507644);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00494fc8  FUN_00494fc8   (172 bytes)   [unnamed]
void __cdecl FUN_00494fc8(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int i;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  undefined4 sehPrevFrame;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x507570);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    for (puVar1 = *(undefined1 **)(param_1 + 0x18); puVar1 != (undefined1 *)0x0;
        puVar1 = *(undefined1 **)(puVar1 + 0x55)) {
      if (param_2 == *(int *)(puVar1 + 1)) {
        *(int *)(puVar1 + 1) = param_2;
        puVar3 = (undefined4 *)(puVar1 + 5);
        for (i = 0xb; i != 0; i = i + -1) {
          *puVar3 = *param_3;
          param_3 = param_3 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        FUN_00495904(param_1,puVar1);
        *sehChainHead = sehPrevFrame;
        return;
      }
    }
  }
  puVar1 = (undefined1 *)operator_new();
  if (puVar1 != (undefined1 *)0x0) {
    FUN_00495da0(puVar1,param_2,param_3);
  }
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + 1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495098  FUN_00495098   (49 bytes)   [unnamed]
undefined4 __cdecl FUN_00495098(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int i;
  undefined4 *puVar4;
  
  iVar1 = FUN_004952f8(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 5);
    for (i = 0xb; i != 0; i = i + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004950cc  FUN_004950cc   (431 bytes)   [unnamed]
undefined4 __cdecl FUN_004950cc(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)(param_1 + 0x18);
  while( true ) {
    if (*piVar3 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(*piVar3 + 1)) break;
    piVar3 = (int *)(*piVar3 + 0x55);
  }
  puVar1 = (undefined1 *)*piVar3;
  *piVar3 = *(int *)(puVar1 + 0x55);
  FUN_00495904(param_1,puVar1);
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + -1;
  for (puVar2 = *(undefined1 **)(param_1 + 0x18); puVar2 != (undefined1 *)0x0;
      puVar2 = *(undefined1 **)(puVar2 + 0x55)) {
    if (param_2 == *(int *)(puVar2 + 5)) {
      FUN_00495904(param_1,puVar2);
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar1 + 5);
      if (*(int *)(puVar2 + 5) == 0) {
        puVar2[0xb] = puVar1[0xb] & 0xf | puVar2[0xb] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x10)) {
      FUN_00495904(param_1,puVar2);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
      if (*(int *)(puVar2 + 0x10) == 0) {
        puVar2[0x16] = puVar1[0x16] & 0xf | puVar2[0x16] & 0xf0;
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x1b)) {
      FUN_00495904(param_1,puVar2);
      if ((puVar2[0x1f] & 0xf) == 5) {
        puVar2[0x20] = puVar2[0x20] & 0xf0;
      }
      else if ((puVar1[0x1f] & 0xf) == 5) {
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(puVar1 + 5);
        if (*(int *)(puVar2 + 0x1b) == 0) {
          puVar2[0x21] = puVar1[0xb] & 0xf | puVar2[0x21] & 0xf0;
        }
      }
      else {
        *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)(puVar1 + 0x1b);
        if (*(int *)(puVar2 + 0x1b) == 0) {
          puVar2[0x21] = puVar1[0x21] & 0xf | puVar2[0x21] & 0xf0;
        }
      }
    }
    if (param_2 == *(int *)(puVar2 + 0x26)) {
      FUN_00495904(param_1,puVar2);
      if ((puVar2[0x2a] & 0xf) == 6) {
        puVar2[0x2b] = puVar2[0x2b] & 0xf0;
      }
      else if ((puVar1[0x2a] & 0xf) == 6) {
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)(puVar1 + 0x10);
        if (*(int *)(puVar2 + 0x26) == 0) {
          puVar2[0x2c] = puVar1[0x16] & 0xf | puVar2[0x2c] & 0xf0;
        }
      }
      else {
        *(undefined4 *)(puVar2 + 0x26) = *(undefined4 *)(puVar1 + 0x26);
        if (*(int *)(puVar2 + 0x26) == 0) {
          puVar2[0x2c] = puVar1[0x2c] & 0xf | puVar2[0x2c] & 0xf0;
        }
      }
    }
  }
  uVar4 = operator_delete();
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004952f8  FUN_004952f8   (32 bytes)   [unnamed]
int __cdecl FUN_004952f8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_2 == *(int *)(iVar1 + 1)) break;
    iVar1 = *(int *)(iVar1 + 0x55);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495318  FUN_00495318   (36 bytes)   [unnamed]
void __cdecl FUN_00495318(int param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    iVar2 = FUN_00495f04(piVar1);
    *(int *)piVar1[3] = iVar2;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049533c  FUN_0049533c   (53 bytes)   [unnamed]
void __cdecl FUN_0049533c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      for (iVar1 = *(int *)(param_1 + 0x1c); *(int *)(iVar1 + 0x20) != 0;
          iVar1 = *(int *)(iVar1 + 0x20)) {
      }
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495374  FUN_00495374   (242 bytes)   [unnamed]
void __cdecl FUN_00495374(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  FUN_0049533c((int)param_1);
  for (iVar1 = param_1[6]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x55)) {
    *(bool *)(iVar1 + 0x39) = *(int *)(iVar1 + 0x35) == 0;
    *(bool *)(iVar1 + 0x42) = *(int *)(iVar1 + 0x3e) == 0;
    *(bool *)(iVar1 + 0x4b) = *(int *)(iVar1 + 0x47) == 0;
    *(bool *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x50) == 0;
  }
  do {
    bVar5 = false;
    piVar2 = (int *)param_1[7];
    piVar4 = (int *)0x0;
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      uVar6 = FUN_00495ec8(piVar3);
      if ((char)uVar6 == '\0') {
        piVar2 = (int *)piVar3[8];
        piVar4 = piVar3;
      }
      else {
        *(undefined1 *)(piVar3[3] + 8) = 1;
        bVar5 = true;
        if (piVar4 == (int *)0x0) {
          param_1[7] = piVar3[8];
        }
        else {
          piVar4[8] = piVar3[8];
        }
        piVar2 = (int *)piVar3[8];
        if (piVar7 == (int *)0x0) {
          param_1[8] = (int)piVar3;
          piVar7 = piVar3;
        }
        else {
          piVar7[8] = (int)piVar3;
          piVar7 = piVar3;
        }
      }
    }
  } while (bVar5);
  if (param_1[7] != 0) {
    FUN_004a857c(*param_1,0x7fe5);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495468  FUN_00495468   (1147 bytes)   [unnamed]
void __cdecl FUN_00495468(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *sehChainHead;
  int local_34;
  int local_30;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5075a0);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    FUN_00495e60(piVar1);
  }
  if ((param_4 == 0) && ((*(byte *)(param_2 + 9) & 0xf) == 2)) {
    local_34 = param_2 + 0x43;
  }
  else if ((param_4 == 1) && ((*(byte *)(param_2 + 0x14) & 0xf) == 3)) {
    local_34 = param_2 + 0x4c;
  }
  else {
    local_34 = param_4 * 9 + param_2 + 0x31;
  }
  if (((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 5) ||
     ((*(byte *)((int)param_3 + 5) & 0xf) == 0)) goto LAB_004955ef;
  if (*param_3 == 0) {
    iVar2 = param_1[9];
  }
  else {
    iVar2 = FUN_004952f8((int)param_1,*param_3);
    if (iVar2 == 0) {
      operator_delete();
      FUN_004a857c(*param_1,0x7fe4);
    }
    iVar2 = iVar2 + 0x31;
  }
  uVar4 = *(byte *)((int)param_3 + 6) & 0xf;
  if (uVar4 < 4) {
    *piVar1 = iVar2 + (*(byte *)((int)param_3 + 6) & 0xf) * 9;
    goto LAB_004955ef;
  }
  if (uVar4 != 4) {
    if (uVar4 - 5 < 2) {
      *piVar1 = ((*(byte *)((int)param_3 + 6) & 0xf) - 3) * 9 + iVar2;
      piVar1[1] = iVar2 + ((*(byte *)((int)param_3 + 6) & 0xf) - 5) * 9;
      piVar1[5] = -0x10000;
      piVar1[7] = 0x10000;
    }
    goto LAB_004955ef;
  }
  if (param_4 == 0) {
LAB_004955c8:
    *piVar1 = iVar2;
    piVar1[1] = iVar2 + 0x12;
  }
  else if (param_4 == 1) {
LAB_004955d2:
    *piVar1 = iVar2 + 9;
    piVar1[1] = iVar2 + 0x1b;
  }
  else {
    if (param_4 == 2) goto LAB_004955c8;
    if (param_4 == 3) goto LAB_004955d2;
  }
  piVar1[5] = 0x8000;
  piVar1[4] = 0x8000;
LAB_004955ef:
  iVar2 = (int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c;
  if (iVar2 == 0) {
    if (param_4 == 2) {
      piVar5 = (int *)(*(int *)(param_2 + 1) + 0x28);
    }
    else {
      piVar5 = (int *)(*(int *)(param_2 + 1) + 0x2c);
    }
    piVar1[7] = piVar1[7] + *piVar5 * 0x10000;
  }
  else if (iVar2 == 1) {
    iVar2 = (*(int *)((int)param_3 + 7) << 0x10) / 100 >> 8;
    piVar1[4] = (piVar1[4] >> 8) * iVar2;
    piVar1[7] = (piVar1[7] >> 8) * iVar2;
    if ((*(byte *)((int)param_3 + 6) & 0xf) - 4 < 3) {
      piVar1[5] = (piVar1[5] >> 8) * iVar2;
    }
  }
  else if (iVar2 - 2U < 4) {
    if ((*(byte *)((int)param_3 + 5) & 0xf0) == 0) {
      iVar2 = *(int *)((int)param_3 + 7);
    }
    else {
      iVar2 = FUN_00495b64((int)param_1,*(int *)((int)param_3 + 7));
    }
    if ((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 2) {
      iVar2 = -1 - iVar2;
    }
    else if ((int)((uint)*(byte *)((int)param_3 + 5) << 0x1c) >> 0x1c == 3) {
      iVar2 = iVar2 + 1;
    }
    piVar1[7] = piVar1[7] + iVar2 * 0x10000;
  }
  if (*piVar1 == 0) {
    local_30 = 0;
  }
  else if (piVar1[1] == 0) {
    local_30 = 1;
  }
  else {
    local_30 = 2;
  }
  bVar3 = *(byte *)(param_3 + 1) & 0xf;
  if (bVar3 == 4) {
    iVar2 = param_2 + 0x31;
    if (param_4 == 0) {
      iVar2 = param_2 + 0x43;
    }
    else if (param_4 == 1) {
      iVar2 = param_2 + 0x4c;
    }
    else if (param_4 == 2) {
      if ((*(byte *)(param_2 + 9) & 0xf) == 2) {
        iVar2 = param_2 + 0x43;
        local_34 = param_2 + 0x31;
      }
    }
    else if (param_4 == 3) {
      if ((*(byte *)(param_2 + 0x14) & 0xf) == 3) {
        iVar2 = param_2 + 0x4c;
        local_34 = param_2 + 0x31;
      }
      else {
        iVar2 = param_2 + 0x3a;
      }
    }
    piVar1[local_30] = iVar2;
    iVar2 = 0;
    if (local_30 != 0) {
      do {
        piVar1[iVar2 + 4] = piVar1[iVar2 + 4] << 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_30);
    }
    piVar1[7] = piVar1[7] << 1;
    piVar1[local_30 + 4] = -0x10000;
  }
  else if (bVar3 == 5) {
    if ((param_4 == 0) || ((*(byte *)(param_2 + 9) & 0xf) == 2)) {
      iVar2 = 0;
      if (local_30 != 0) {
        do {
          piVar1[iVar2 + 4] = -piVar1[iVar2 + 4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      piVar1[7] = -piVar1[7];
      piVar1[7] = piVar1[7] + 0x10000;
      piVar1[local_30] = param_2 + 0x43;
      if (param_4 == 2) {
        local_34 = param_2 + 0x31;
      }
    }
    else {
      piVar1[local_30] = param_2 + 0x31;
      piVar1[7] = piVar1[7] + -0x10000;
      FUN_0049473d(*(int *)(param_2 + 0x35),local_34,(int)piVar1);
    }
  }
  else if (bVar3 == 6) {
    if ((param_4 == 1) || ((*(byte *)(param_2 + 0x14) & 0xf) == 3)) {
      iVar2 = 0;
      if (local_30 != 0) {
        do {
          piVar1[iVar2 + 4] = -piVar1[iVar2 + 4];
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      piVar1[7] = -piVar1[7];
      piVar1[7] = piVar1[7] + 0x10000;
      piVar1[local_30] = param_2 + 0x4c;
      if (param_4 == 3) {
        local_34 = param_2 + 0x3a;
      }
    }
    else {
      piVar1[local_30] = param_2 + 0x3a;
      piVar1[7] = piVar1[7] + -0x10000;
      FUN_0049473d(*(int *)(param_2 + 0x3e),local_34,(int)piVar1);
    }
  }
  *(int **)(local_34 + 4) = piVar1;
  piVar1[3] = local_34;
  piVar1[8] = param_1[7];
  param_1[7] = (int)piVar1;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495904  FUN_00495904   (116 bytes)   [unnamed]
void __cdecl FUN_00495904(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x28) = 1;
  FUN_0049533c(param_1);
  *param_2 = 0;
  local_8 = 0;
  do {
    iVar1 = puVar3[1];
    *puVar3 = 0;
    if (iVar1 != 0) {
      if (iVar1 == *(int *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x20);
      }
      else {
        for (iVar2 = *(int *)(param_1 + 0x1c); *(int *)(iVar2 + 0x20) != 0;
            iVar2 = *(int *)(iVar2 + 0x20)) {
          if (iVar1 == *(int *)(iVar2 + 0x20)) {
            *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
            break;
          }
        }
      }
      operator_delete();
      puVar3[1] = 0;
    }
    puVar3 = (undefined4 *)((int)puVar3 + 9);
    local_8 = local_8 + 1;
    if (3 < local_8) {
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00495978  FUN_00495978   (492 bytes)   [unnamed]
void __cdecl FUN_00495978(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    if ((param_2[10] & 0xfU) == 0) {
      if ((param_2[9] & 0xfU) == 0) {
        *(undefined4 *)(param_2 + 0x31) = *(undefined4 *)(*(int *)(param_2 + 1) + 0x20);
      }
      else {
        *(int *)(param_2 + 0x43) =
             *(int *)(*(int *)(param_2 + 1) + 0x20) + *(int *)(*(int *)(param_2 + 1) + 0x28) + -1;
      }
    }
    else if (((int)((uint)(byte)param_2[10] << 0x1c) >> 0x1c == 5) && ((param_2[9] & 0xfU) != 4)) {
      if ((param_2[10] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar1 = FUN_00495b64((int)param_1,*(int *)(param_2 + 0xc));
      }
      if ((param_2[9] & 0xfU) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
      }
      *(int *)(param_2 + iVar2 * 9 + 0x31) = iVar1;
    }
    else {
      FUN_00495468(param_1,(int)param_2,(int *)(param_2 + 5),0);
    }
    if ((param_2[0x15] & 0xfU) == 0) {
      if ((param_2[0x14] & 0xfU) == 1) {
        *(undefined4 *)(param_2 + 0x3a) = *(undefined4 *)(*(int *)(param_2 + 1) + 0x24);
      }
      else {
        *(int *)(param_2 + 0x4c) =
             *(int *)(*(int *)(param_2 + 1) + 0x24) + *(int *)(*(int *)(param_2 + 1) + 0x2c) + -1;
      }
    }
    else if (((int)((uint)(byte)param_2[0x15] << 0x1c) >> 0x1c == 5) &&
            ((param_2[0x14] & 0xfU) != 4)) {
      if ((param_2[0x15] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x17);
      }
      else {
        iVar1 = FUN_00495b64((int)param_1,*(int *)(param_2 + 0x17));
      }
      if ((param_2[0x14] & 0xfU) == 1) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
      }
      *(int *)(param_2 + iVar2 * 9 + 0x31) = iVar1;
    }
    else {
      FUN_00495468(param_1,(int)param_2,(int *)(param_2 + 0x10),1);
    }
    if (((param_2[0x1f] & 0xfU) == 2) &&
       (((param_2[0x20] & 0xfU) == 0 || ((int)((uint)(byte)param_2[0x20] << 0x1c) >> 0x1c == 5)))) {
      if ((param_2[0x20] & 0xfU) == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 1) + 0x20) + *(int *)(*(int *)(param_2 + 1) + 0x28) + -1
        ;
      }
      else if ((param_2[0x20] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x22);
      }
      else {
        iVar1 = FUN_00495b64((int)param_1,*(int *)(param_2 + 0x22));
      }
      *(int *)(param_2 + 0x43) = iVar1;
    }
    else {
      FUN_00495468(param_1,(int)param_2,(int *)(param_2 + 0x1b),2);
    }
    if (((param_2[0x2a] & 0xfU) == 3) &&
       (((param_2[0x2b] & 0xfU) == 0 || ((int)((uint)(byte)param_2[0x2b] << 0x1c) >> 0x1c == 5)))) {
      if ((param_2[0x2b] & 0xfU) == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 1) + 0x24) + *(int *)(*(int *)(param_2 + 1) + 0x2c) + -1
        ;
      }
      else if ((param_2[0x2b] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x2d);
      }
      else {
        iVar1 = FUN_00495b64((int)param_1,*(int *)(param_2 + 0x2d));
      }
      *(int *)(param_2 + 0x4c) = iVar1;
    }
    else {
      FUN_00495468(param_1,(int)param_2,(int *)(param_2 + 0x26),3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495b64  FUN_00495b64   (30 bytes)   [unnamed]
int __cdecl FUN_00495b64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * *(int *)(param_1 + 0x2d);
  iVar2 = iVar1 + 4;
  if (iVar2 < 0) {
    iVar2 = iVar1 + 0xb;
  }
  return iVar2 >> 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495b84  FUN_00495b84   (147 bytes)   [unnamed]
void __cdecl FUN_00495b84(int *param_1)

{
  HGDIOBJ hGdiObject;
  undefined4 *sehChainHead;
  LONG local_68 [14];
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint gdiObject [2];
  
  __InitExceptBlockLDTC(0x5075e0);
  hGdiObject = (HGDIOBJ)0x0;
  if (*(int *)(*param_1 + 0xc) != 0) {
    hGdiObject = (HGDIOBJ)FUN_004a6094(*param_1,0x31,0,0);
  }
  if (hGdiObject == (HGDIOBJ)0x0) {
    hGdiObject = GetStockObject(0xd);
  }
  ehContext = 8;
  FUN_0048f708(gdiObject,hGdiObject,0);
  ehDtorCount = ehDtorCount + 2;
  ehContext = 0x14;
  FUN_0048f8fc(local_68,gdiObject);
  *(LONG *)((int)param_1 + 0x2d) = local_68[0];
  ehDtorCount = ehDtorCount + -2;
  OWL::TGdiObject::_dtor(gdiObject,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495da0  FUN_00495da0   (189 bytes)   [unnamed]
undefined1 * __cdecl FUN_00495da0(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50762c);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)(param_1 + 5) = *param_3;
  *(undefined4 *)(param_1 + 9) = param_3[1];
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_3 + 2);
  param_1[0xf] = *(undefined1 *)((int)param_3 + 10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)param_3 + 0xb);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)param_3 + 0xf);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)((int)param_3 + 0x13);
  param_1[0x1a] = *(undefined1 *)((int)param_3 + 0x15);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)((int)param_3 + 0x16);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)((int)param_3 + 0x1a);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)((int)param_3 + 0x1e);
  param_1[0x25] = *(undefined1 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)param_3 + 0x21);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)param_3 + 0x25);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((int)param_3 + 0x29);
  param_1[0x30] = *(undefined1 *)((int)param_3 + 0x2b);
  _vector_new_ldtc_((int *)(param_1 + 0x31),9,4,1,(undefined*)FUN_00494c8c);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495e60  FUN_00495e60   (104 bytes)   [unnamed]
undefined4 * __cdecl FUN_00495e60(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507634);
  _vector_new_ldtc_(param_1 + 4,4,4,1,(undefined*)FUN_004949b6);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0x10000;
  param_1[5] = 0x10000;
  param_1[4] = 0x10000;
  param_1[3] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495ec8  FUN_00495ec8   (60 bytes)   [unnamed]
undefined4 __cdecl FUN_00495ec8(int *param_1)

{
  undefined4 uVar1;
  
  if ((((*param_1 == 0) || (*(char *)(*param_1 + 8) != '\0')) &&
      ((param_1[1] == 0 || (*(char *)(param_1[1] + 8) != '\0')))) &&
     ((param_1[2] == 0 || (*(char *)(param_1[2] + 8) != '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495f04  FUN_00495f04   (115 bytes)   [unnamed]
int __cdecl FUN_00495f04(int *param_1)

{
  int local_8;
  
  local_8 = param_1[7];
  if (*param_1 != 0) {
    local_8 = local_8 + param_1[4] * *(int *)*param_1;
  }
  if (param_1[1] != 0) {
    local_8 = local_8 + param_1[5] * *(int *)param_1[1];
  }
  if (param_1[2] != 0) {
    local_8 = local_8 + param_1[6] * *(int *)param_1[2];
  }
  return local_8 >> 0x10;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495f78  FUN_00495f78   (22 bytes)   [unnamed]
int __cdecl FUN_00495f78(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00495f90  FUN_00495f90   (248 bytes)   [unnamed]
undefined4 * __cdecl FUN_00495f90(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50763c);
  *param_1 = 0;
  *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xf0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) & 0xf0;
  *(byte *)((int)param_1 + 5) = *(byte *)((int)param_1 + 5) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0xb) = 0;
  *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xf0 | 1;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xf0 | 1;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xf0 | 5;
  *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) & 0xf0 | 5;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xf0;
  *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x1b) & 0xf | 0x10;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(byte *)((int)param_1 + 0x27) = *(byte *)((int)param_1 + 0x27) & 0xf0 | 6;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 0xf0 | 6;
  *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) & 0xf0;
  *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) & 0xf | 0x10;
  param_1[10] = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496088  FUN_00496088   (106 bytes)   [unnamed]
void __cdecl FUN_00496088(int param_1,char param_2)

{
  *(byte *)(param_1 + 0x26) = param_2 << 4 | *(byte *)(param_1 + 0x26) & 0xf;
  *(byte *)(param_1 + 0x1b) =
       (*(char *)(param_1 + 0x26) >> 4) << 4 | *(byte *)(param_1 + 0x1b) & 0xf;
  *(byte *)(param_1 + 0x10) =
       (*(char *)(param_1 + 0x1b) >> 4) << 4 | *(byte *)(param_1 + 0x10) & 0xf;
  *(byte *)(param_1 + 5) = (*(char *)(param_1 + 0x10) >> 4) << 4 | *(byte *)(param_1 + 5) & 0xf;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004960f4  FUN_004960f4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004960f4(int *param_1)

{
  undefined4 *streamer;
  int *layoutWindow;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50766c);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      layoutWindow = (int *)operator_new();
      if (layoutWindow == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TLayoutWindow::TLayoutWindow_495c80(layoutWindow,0);
        param_1 = (int *)layoutWindow[2];
      }
    }
    OWL::TLayoutWindow::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004962e8  FUN_004962e8   (70 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined * __stdcall FUN_004962e8(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50778d);
  if (DAT_0050777c == '\0') {
    _DAT_0051b254 = 0;
    DAT_0050777c = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b254;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049637f  DestroyRichEditLoader_49637f   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_49637f(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5077a1);
  if (DAT_0050777c != '\0') {
    OWL::_TLocaleCacheList::_dtor((int *)&DAT_0051b254,2);
    DAT_0050777c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496414  FUN_00496414   (68 bytes)   [unnamed]
undefined4 * __cdecl FUN_00496414(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 *puVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5077c8);
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar2 = param_1;
  piVar1 = (int *)FUN_004962e8();
  FUN_00496924(piVar1,(int)puVar2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496458  FUN_00496458   (18 bytes)   [unnamed]
int __stdcall FUN_00496458(void)

{
  int iVar1;
  
  iVar1 = operator_new();
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049646c  FUN_0049646c   (92 bytes)   [unnamed]
undefined4 * __cdecl FUN_0049646c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5077e0);
  FUN_00496414(param_1,param_2,param_3);
  param_1[4] = param_4;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x15) = param_5;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004964ec  FUN_004964ec   (554 bytes)   [unnamed]
uint * __cdecl FUN_004964ec(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  HRSRC hResource;
  undefined4 *puVar5;
  HGLOBAL hResData;
  byte *pbVar6;
  byte *pbVar7;
  HMODULE hModule;
  undefined1 uVar9;
  char *s2;
  uint uVar11;
  char *s1;
  undefined4 *sehChainHead;
  LPCSTR lpType;
  HRSRC hResInfo;
  int local_3c;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507824);
  s2 = param_2 + 1;
  uVar11 = 0;
  for (s1 = param_2; *s1 != '\0'; s1 = s1 + 1) {
    uVar11 = uVar11 * 2 ^ (int)*s1;
  }
  puVar3 = (uint *)*param_1;
  hModule = DAT_005077bc;
  do {
    DAT_005077bc = hModule;
    if (puVar3 == (uint *)0x0) {
      s1 = param_2;
      if (*param_2 != '#') {
        s1 = param_2 + 1;
      }
      lpType = (LPCSTR)0xc9;
      if (hModule == (HMODULE)0x0) {
        iVar2 = 0;
        puVar5 = (undefined4 *)FUN_00487bc0();
        iVar2 = FUN_00487e08(puVar5,iVar2);
        hModule = *(HMODULE *)(iVar2 + 0xc);
      }
      hResource = FindResourceA(hModule,s1,lpType);
      if (hResource == (HRSRC)0x0) {
        puVar5 = (undefined4 *)operator_new();
        if (puVar5 != (undefined4 *)0x0) {
          FUN_00496414(puVar5,param_2,uVar11);
        }
        puVar3 = (uint *)0x0;
        *sehChainHead = sehPrevFrame;
      }
      else {
        hModule = DAT_005077bc;
        hResInfo = hResource;
        if (DAT_005077bc == (HMODULE)0x0) {
          iVar2 = 0;
          puVar5 = (undefined4 *)FUN_00487bc0();
          iVar2 = FUN_00487e08(puVar5,iVar2);
          hModule = *(HMODULE *)(iVar2 + 0xc);
        }
        hResData = LoadResource(hModule,hResInfo);
        if (hResData == (HGLOBAL)0x0) {
          puVar3 = (uint *)0x0;
          *sehChainHead = sehPrevFrame;
        }
        else {
          pbVar6 = LockResource(hResData);
          local_3c = 4;
          if (*pbVar6 == 0) {
            FreeResource(hResData);
            puVar5 = (undefined4 *)operator_new();
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00496414(puVar5,param_2,uVar11);
            }
            puVar3 = (uint *)0x0;
            *sehChainHead = sehPrevFrame;
          }
          else {
            if (*pbVar6 < 0x20) {
              pbVar6 = pbVar6 + 1;
            }
            else {
              pbVar6 = pbVar6 + -1;
            }
            do {
              pbVar7 = pbVar6 + 1;
              pbVar6 = pbVar7;
              do {
                bVar1 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (0x1f < bVar1);
              if (local_3c < (int)pbVar6 - (int)pbVar7) {
                local_3c = (int)pbVar6 - (int)pbVar7;
              }
            } while (bVar1 != 0);
            puVar3 = (uint *)FUN_00496458();
            if (puVar3 != (uint *)0x0) {
              FUN_0049646c(puVar3,s2,uVar11,hResource,hResData);
            }
            if (*param_2 == '!') {
              uVar9 = 2;
            }
            else {
              uVar9 = 1;
            }
            *(undefined1 *)(puVar3 + 5) = uVar9;
            *sehChainHead = sehPrevFrame;
          }
        }
      }
      return puVar3;
    }
    if (uVar11 == *puVar3) {
      s1 = (char *)puVar3[1];
      if (*s1 != *s2) {
        s1 = s1 + 1;
      }
      iVar2 = FUN_00496b14(s1,s2);
      if (iVar2 != 0) {
        if (s1 != (char *)puVar3[1]) {
          puVar3 = (uint *)0x0;
        }
        *sehChainHead = sehPrevFrame;
        return puVar3;
      }
    }
    puVar3 = (uint *)puVar3[2];
    hModule = DAT_005077bc;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00496740  FUN_00496740   (430 bytes)   [unnamed]
int __cdecl FUN_00496740(int param_1,ushort param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ushort uVar5;
  HMODULE hModule;
  int iVar6;
  HRSRC hResInfo;
  ushort local_e;
  byte *local_c;
  HGLOBAL hGlobal;
  
  if (*(short *)(param_1 + 0xe) == -1) {
    hGlobal = *(HGLOBAL *)(param_1 + 0x15);
    *(ushort *)(param_1 + 0xe) = param_2;
  }
  else {
    if ((*(char *)(param_1 + 0x14) == '\x02') && (iVar6 = FUN_00496a1c(param_2), iVar6 != 0)) {
      return *(int *)(param_1 + 4);
    }
    if (param_2 == *(ushort *)(param_1 + 0xc)) {
      return param_1 + 0x15;
    }
    if (param_2 == *(ushort *)(param_1 + 0xe)) {
      if (*(short *)(param_1 + 0xc) != -1) {
        return param_1 + 0x15;
      }
      if (*(char *)(param_1 + 0x14) == '\x02') {
        return *(int *)(param_1 + 4);
      }
      return 0;
    }
    hResInfo = *(HRSRC *)(param_1 + 0x10);
    hModule = DAT_005077bc;
    if (DAT_005077bc == (HMODULE)0x0) {
      iVar6 = 0;
      puVar3 = (undefined4 *)FUN_00487bc0();
      iVar6 = FUN_00487e08(puVar3,iVar6);
      hModule = *(HMODULE *)(iVar6 + 0xc);
    }
    hGlobal = LoadResource(hModule,hResInfo);
    if (hGlobal == (HGLOBAL)0x0) {
      return *(int *)(param_1 + 4);
    }
  }
  pbVar4 = LockResource(hGlobal);
  local_c = (byte *)0x0;
  local_e = 0xffff;
  while (bVar1 = *pbVar4, uVar5 = local_e, pbVar2 = local_c, bVar1 != 0) {
    if (bVar1 < 0x21) {
      uVar5 = (bVar1 - 1) * 0x400 | (ushort)pbVar4[1];
      pbVar4 = pbVar4 + 2;
    }
    else {
      local_e = DAT_00507894;
      uVar5 = DAT_00507894;
      local_c = pbVar4;
    }
    pbVar2 = pbVar4;
    if (param_2 == uVar5) break;
    if (((char)uVar5 == (char)param_2) &&
       (((char)local_e != (char)param_2 || (uVar5 == (param_2 & 0xff))))) {
      local_e = uVar5;
      local_c = pbVar4;
    }
    for (; 0x1f < *pbVar4; pbVar4 = pbVar4 + 1) {
    }
  }
  local_c = pbVar2;
  local_e = uVar5;
  if (local_c == (byte *)0x0) {
    if (*(char *)(param_1 + 0x14) == '\x02') {
      iVar6 = *(int *)(param_1 + 4);
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    for (; *local_c < 0x20; local_c = local_c + 2) {
    }
    if (*(ushort *)(param_1 + 0xc) != local_e) {
      pbVar4 = (byte *)(param_1 + 0x15);
      for (; 0x1f < *local_c; local_c = local_c + 1) {
        *pbVar4 = *local_c;
        pbVar4 = pbVar4 + 1;
      }
      *pbVar4 = 0;
      *(ushort *)(param_1 + 0xc) = local_e;
      if (param_2 != *(ushort *)(param_1 + 0xc)) {
        *(ushort *)(param_1 + 0xe) = param_2;
      }
    }
    iVar6 = param_1 + 0x15;
  }
  FreeResource(hGlobal);
  return iVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496924  FUN_00496924   (18 bytes)   [unnamed]
void __cdecl FUN_00496924(int *param_1,int param_2)

{
  *(int *)(param_2 + 8) = *param_1;
  *param_1 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496938  FUN_00496938   (225 bytes)   [unnamed]
int __cdecl FUN_00496938(int *param_1,ushort param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  
  if (*param_1 == 0) {
    iVar4 = *param_1;
  }
  else {
    uVar5 = DAT_00507894;
    if (((param_2 != 0) && (uVar5 = DAT_005077ac, param_2 != 0x800)) &&
       (uVar5 = param_2, param_2 == 0x400)) {
      uVar5 = DAT_005077b4;
    }
    cVar1 = *(char *)*param_1;
    if ((byte)(cVar1 - 1U) < 2) {
      iVar4 = FUN_00496740(*param_1 + -0x14,uVar5);
    }
    else if (cVar1 == '!') {
      iVar4 = FUN_00496a1c(uVar5);
      if (iVar4 == 0) {
        pcVar6 = (char *)*param_1;
        puVar2 = (undefined4 *)FUN_004962e8();
        puVar3 = FUN_004964ec(puVar2,pcVar6);
        if (puVar3 == (uint *)0x0) {
          *param_1 = *param_1 + 1;
          iVar4 = *param_1;
        }
        else {
          *param_1 = (int)(puVar3 + 5);
          iVar4 = FUN_00496740((int)puVar3,uVar5);
        }
      }
      else {
        iVar4 = *param_1 + 1;
      }
    }
    else if ((cVar1 == '#') || (cVar1 == '@')) {
      pcVar6 = (char *)*param_1;
      puVar2 = (undefined4 *)FUN_004962e8();
      puVar3 = FUN_004964ec(puVar2,pcVar6);
      if (puVar3 == (uint *)0x0) {
        *param_1 = 0;
        iVar4 = 0;
      }
      else {
        *param_1 = (int)(puVar3 + 5);
        iVar4 = FUN_00496740((int)puVar3,uVar5);
      }
    }
    else {
      iVar4 = *param_1;
    }
  }
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496a1c  FUN_00496a1c   (48 bytes)   [unnamed]
undefined4 __cdecl FUN_00496a1c(ushort param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == DAT_00507894) || (param_1 == (DAT_00507894 & 0xff))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496b14  FUN_00496b14   (99 bytes)   [unnamed]
int __cdecl FUN_00496b14(char *s1,char *s2)

{
  HMODULE hModule;
  int iVar1;
  char *lpProcName;
  
  if (DAT_00507878 == '\0') {
    lpProcName = "CompareStringA";
    hModule = GetModuleHandleA("kernel32");
    DAT_00507874 = GetProcAddress(hModule,lpProcName);
    DAT_00507878 = DAT_00507878 + '\x01';
  }
  if (DAT_00507874 == (FARPROC)0x0) {
    iVar1 = strcmp(s1,s2);
  }
  else {
    iVar1 = (*DAT_00507874)();
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496b94  FUN_00496b94   (75 bytes)   [unnamed]
undefined * __stdcall FUN_00496b94(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5078ad);
  if (DAT_0050789c == '\0') {
    FUN_00496d90((undefined4 *)&DAT_0051b258);
    DAT_0050789c = DAT_0050789c + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b258;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496bdf  FUN_00496bdf   (361 bytes)   [unnamed]
void __stdcall FUN_00496bdf(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5078f4);
  if (DAT_0050789c != '\0') {
    FUN_0048c8b0(0x51b36f,0);
    FUN_0048c8b0(0x51b356,0);
    FUN_0048c8b0(0x51b33d,0);
    FUN_0048c8b0(0x51b324,0);
    FUN_0048c8b0(0x51b30b,0);
    FUN_0048c8b0(0x51b2f2,0);
    FUN_0048c8b0(0x51b2d9,0);
    FUN_0048c8b0(0x51b2c0,0);
    FUN_0048c8b0(0x51b2a7,0);
    FUN_0048c8b0(0x51b28e,0);
    FUN_0048c8b0(0x51b275,0);
    FUN_0048c8b0(0x51b25c,0);
    DAT_0050789c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496d48  FUN_00496d48   (69 bytes)   [unnamed]
char * __cdecl FUN_00496d48(uint *param_1)

{
  char *pcVar1;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_0050798c;
  }
  strlen(param_1);
  pcVar1 = (char *)operator_new_array();
  pcVar1 = FUN_004dc9c4(pcVar1,(char *)param_1);
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00496d90  FUN_00496d90   (1075 bytes)   [unnamed]
undefined4 * __cdecl FUN_00496d90(undefined4 *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5079a0);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0x60;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0x60;
  *(undefined4 *)((int)param_1 + 0x15) = 0x10;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0xc0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0xc0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0x20;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x3b) = 0x180;
  *(undefined4 *)((int)param_1 + 0x3f) = 0;
  *(undefined4 *)((int)param_1 + 0x43) = 0x180;
  *(undefined4 *)((int)param_1 + 0x47) = 0x40;
  *(undefined4 *)((int)param_1 + 0x4b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x200;
  param_1[0x16] = 0;
  param_1[0x17] = 0x200;
  param_1[0x18] = 0x80;
  param_1[0x19] = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0;
  *(undefined4 *)((int)param_1 + 0x6d) = 0x400;
  *(undefined4 *)((int)param_1 + 0x71) = 0;
  *(undefined4 *)((int)param_1 + 0x75) = 0x400;
  *(undefined4 *)((int)param_1 + 0x79) = 0x100;
  *(undefined4 *)((int)param_1 + 0x7d) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0x800;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0x800;
  *(undefined4 *)((int)param_1 + 0x92) = 0x200;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9b) = 0;
  *(undefined4 *)((int)param_1 + 0x9f) = 0xc00;
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  *(undefined4 *)((int)param_1 + 0xa7) = 0xc00;
  *(undefined4 *)((int)param_1 + 0xab) = 0x400;
  *(undefined4 *)((int)param_1 + 0xaf) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x1800;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x1800;
  param_1[0x31] = 0x800;
  param_1[0x32] = 0;
  *(undefined4 *)((int)param_1 + 0xcd) = 0;
  *(undefined4 *)((int)param_1 + 0xd1) = 0x3000;
  *(undefined4 *)((int)param_1 + 0xd5) = 0;
  *(undefined4 *)((int)param_1 + 0xd9) = 0x3000;
  *(undefined4 *)((int)param_1 + 0xdd) = 0x1000;
  *(undefined4 *)((int)param_1 + 0xe1) = 0;
  *(undefined4 *)((int)param_1 + 0xe6) = 0;
  *(undefined4 *)((int)param_1 + 0xea) = 0x4000;
  *(undefined4 *)((int)param_1 + 0xee) = 0;
  *(undefined4 *)((int)param_1 + 0xf2) = 0x4000;
  *(undefined4 *)((int)param_1 + 0xf6) = 0x2000;
  *(undefined4 *)((int)param_1 + 0xfa) = 0;
  *(undefined4 *)((int)param_1 + 0xff) = 0;
  *(undefined4 *)((int)param_1 + 0x103) = 0x8000;
  *(undefined4 *)((int)param_1 + 0x107) = 0;
  *(undefined4 *)((int)param_1 + 0x10b) = 0x8000;
  *(undefined4 *)((int)param_1 + 0x10f) = 0x4000;
  *(undefined4 *)((int)param_1 + 0x113) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x10000;
  param_1[0x48] = 0;
  param_1[0x49] = 0x10000;
  param_1[0x4a] = 0x8000;
  param_1[0x4b] = param_1;
  param_1[0x4c] = (int)param_1 + 0x19;
  param_1[0x4d] = (int)param_1 + 0x32;
  param_1[0x4e] = (int)param_1 + 0x4b;
  param_1[0x4f] = param_1 + 0x19;
  param_1[0x50] = (int)param_1 + 0x7d;
  param_1[0x51] = (int)param_1 + 0x96;
  param_1[0x52] = (int)param_1 + 0xaf;
  param_1[0x53] = param_1 + 0x32;
  param_1[0x54] = (int)param_1 + 0xe1;
  param_1[0x55] = (int)param_1 + 0xfa;
  param_1[0x56] = (int)param_1 + 0x113;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497298  FUN_00497298   (153 bytes)   [unnamed]
int * __cdecl FUN_00497298(int *param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507b74);
  iVar4 = 0;
  do {
    if (param_2 < (int)(&DAT_005078c4)[iVar4]) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  if (iVar4 < 0xc) {
    puVar2 = FUN_00496b94();
    piVar1 = *(int **)(puVar2 + iVar4 * 4 + 300);
    if (*piVar1 == 0) {
      piVar3 = (int *)FUN_0048c8fc((int)(piVar1 + 1),*(uint *)((int)piVar1 + 0x15));
    }
    else {
      piVar3 = (int *)*piVar1;
      *piVar1 = *piVar3;
    }
    *param_1 = (int)piVar3;
    param_1[1] = iVar4;
  }
  else {
    iVar4 = operator_new_array();
    *param_1 = iVar4;
    param_1[1] = -1;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049754c  FUN_0049754c   (73 bytes)   [unnamed]
undefined * __stdcall FUN_0049754c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507c4d);
  if (DAT_00507c3c == '\0') {
    FUN_00497628(0x51b3b4);
    DAT_00507c3c = DAT_00507c3c + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0051b3b4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497595  DestroyRichEditLoader_497595   (64 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x00468c4c (64 bytes; the code occurs several times, e.g. one template instance per type). static destructor of the TRichEdit DLL loader
void __stdcall DestroyRichEditLoader_497595(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507c61);
  if (DAT_00507c3c != '\0') {
    OWL::TMemDCCache::_dtor(0x51b3b4,2);
    DAT_00507c3c = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497628  FUN_00497628   (70 bytes)   [unnamed]
int __cdecl FUN_00497628(int param_1)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507c7c);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 5) = 0;
    *(undefined1 *)(param_1 + 4 + iVar1 * 5) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004976cc  FUN_004976cc   (88 bytes)   [unnamed]
undefined4 __cdecl FUN_004976cc(int param_1)

{
  HDC hdc;
  HDC hdc2;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + iVar2 * 5) == 0) {
      hdc = GetWindowDC((HWND)0x0);
      hdc2 = CreateCompatibleDC(hdc);
      *(HDC *)(param_1 + iVar2 * 5) = hdc2;
      ReleaseDC((HWND)0x0,hdc);
    }
    if (*(char *)(param_1 + 4 + iVar2 * 5) == '\0') break;
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 4 + iVar2 * 5) = 1;
  return *(undefined4 *)(param_1 + iVar2 * 5);
}

// ----------------------------------------------------------------------------------------------------
// 0x00497724  FUN_00497724   (51 bytes)   [unnamed]
void __cdecl FUN_00497724(int param_1,int param_2)

{
  int i;
  
  for (i = 0; (i < 0x10 && (*(int *)(param_1 + i * 5) != 0)); i = i + 1) {
    if (param_2 == *(int *)(param_1 + i * 5)) {
      *(undefined1 *)(param_1 + 4 + i * 5) = 0;
      return;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497758  FUN_00497758   (71 bytes)   [unnamed]
int * __cdecl FUN_00497758(int *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507ca0);
  FUN_0048d298(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_00497880(param_1);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004977c0  FUN_004977c0   (102 bytes)   [unnamed]
int * __cdecl FUN_004977c0(int *param_1,undefined4 *param_2)

{
  HDC hdc;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507cc4);
  FUN_0048d298(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  hdc = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)hdc;
  FUN_00493530(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497828  FUN_00497828   (85 bytes)   [unnamed]
int * __cdecl FUN_00497828(int *param_1,uint *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507ce8);
  FUN_0048d298(param_1);
  *(undefined ***)((int)param_1 + 5) = &OWL::TMemoryDC::vftable;
  FUN_00497880(param_1);
  FUN_004978c0(param_1,param_2);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497880  FUN_00497880   (63 bytes)   [unnamed]
void __cdecl FUN_00497880(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  HDC hdc;
  
  puVar1 = FUN_0049754c();
  iVar2 = FUN_004976cc((int)puVar1);
  *param_1 = iVar2;
  if (*param_1 == 0) {
    hdc = CreateCompatibleDC((HDC)0x0);
    *param_1 = (int)hdc;
    FUN_00493530(param_1,0x7fe3);
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004978c0  FUN_004978c0   (67 bytes)   [unnamed]
void __cdecl FUN_004978c0(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_00493e88(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)param_1 + 0x21) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x21) = hGdiObject;
      }
      else {
        FUN_00493eb4((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497904  FUN_00497904   (42 bytes)   [unnamed]
void __cdecl FUN_00497904(undefined4 *param_1)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)param_1 + 0x21) != 0) {
    hGdiObject = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x21));
    FUN_00493eb4((uint)hGdiObject);
    *(undefined4 *)((int)param_1 + 0x21) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004979c4  FUN_004979c4   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_004979c4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507d8c);
  memset(param_1,0,0x30);
  *param_1 = 0x30;
  param_1[1] = param_2;
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497c2c  FUN_00497c2c   (169 bytes, 2 ranges)   [unnamed]
UINT __cdecl FUN_00497c2c(int param_1,int pos)

{
  UINT UVar1;
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 menu [3];
  
  __InitExceptBlockLDTC(0x507e8c);
  UVar1 = GetMenuItemID(*(HMENU *)(param_1 + 4),pos);
  if (UVar1 == 0xffffffff) {
    hMenu = GetSubMenu(*(HMENU *)(param_1 + 4),pos);
    if (hMenu == (HMENU)0x0) {
      UVar1 = 0;
      *sehChainHead = sehPrevFrame;
    }
    else {
      OWL::TMenu::TMenu_497aec(menu,hMenu,0);
      UVar1 = FUN_00497c2c((int)menu,0);
      UVar1 = UVar1 - 1;
      OWL::TMenu::_dtor(menu,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  else {
    *sehChainHead = sehPrevFrame;
  }
  return UVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497cdc  FUN_00497cdc   (23 bytes)   [unnamed]
void __cdecl FUN_00497cdc(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00498208(param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497d04  FUN_00497d04   (48 bytes)   [unnamed]
bool __cdecl FUN_00497d04(int param_1,UINT item,char param_3,LPCMENUITEMINFOA lpmii)

{
  BOOL ok;
  
  ok = SetMenuItemInfoA(*(HMENU *)(param_1 + 4),item,(uint)(param_3 != '\0'),lpmii);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497d34  FUN_00497d34   (48 bytes)   [unnamed]
bool __cdecl FUN_00497d34(int param_1,UINT item,char param_3,LPCMENUITEMINFOA lpmi)

{
  BOOL ok;
  
  ok = InsertMenuItemA(*(HMENU *)(param_1 + 4),item,(uint)(param_3 != '\0'),lpmi);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497d64  FUN_00497d64   (409 bytes)   [unnamed]
int * __cdecl FUN_00497d64(int param_1,int *param_2,int param_3,int param_4)

{
  int *menu;
  int iVar2;
  UINT uFlags;
  HMENU hMenu;
  undefined4 *sehChainHead;
  int iVar4;
  CHAR newItem [256];
  UINT idNewItem;
  UINT_PTR idNewItem2;
  int pos;
  undefined4 local_40;
  undefined2 ehContext;
  int ehDtorCount;
  int menu2 [3];
  int menu3 [3];
  
  menu = (int *)__InitExceptBlockLDTC(0x507ee8);
  if (param_4 < 0) {
    iVar2 = GetMenuItemCount((HMENU)param_2[1]);
    menu = (int *)(iVar2 - param_3);
    param_4 = (int)menu;
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      uFlags = GetMenuState((HMENU)param_2[1],param_3 + iVar2,0x400);
      if (uFlags == 0xffffffff) {
        *sehChainHead = local_40;
        return (int *)local_40;
      }
      (**(code **)(*param_2 + 4))();
      FUN_004c1f4c();
      if ((uFlags & 0x10) == 0) {
        idNewItem = FUN_00497c2c((int)param_2,param_3 + iVar2);
        menu = (int *)AppendMenuA(*(HMENU *)(param_1 + 4),uFlags,idNewItem,newItem);
      }
      else {
        ehContext = 8;
        iVar4 = 0;
        pos = param_3 + iVar2;
        hMenu = GetSubMenu((HMENU)param_2[1],pos);
        OWL::TMenu::TMenu_497aec(menu3,hMenu,iVar4);
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x20;
        OWL::TMenu::TMenu(menu2,0);
        ehDtorCount = ehDtorCount + 1;
        ehContext = 0x14;
        FUN_00497d64((int)menu2,menu3,0,-1);
        idNewItem2 = (**(code **)(menu2[0] + 4))();
        AppendMenuA(*(HMENU *)(param_1 + 4),uFlags & 0x10,idNewItem2,newItem);
        ehDtorCount = ehDtorCount + -1;
        OWL::TMenu::_dtor(menu2,2);
        ehDtorCount = ehDtorCount + -1;
        menu = menu3;
        OWL::TMenu::_dtor(menu,2);
        ehContext = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  *sehChainHead = local_40;
  return menu;
}

} // namespace tea
