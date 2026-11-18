// TEA.exe — runtime / library code "code_0x004b4000"
// 35 functions, 0x004b50d8..0x004b7c98. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004b50d8  FUN_004b50d8   (12 bytes)   [unnamed]
void __cdecl FUN_004b50d8(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5170  FUN_004b5170   (14 bytes)   [unnamed]
void __cdecl FUN_004b5170(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5180  FUN_004b5180   (16 bytes)   [unnamed]
void __cdecl FUN_004b5180(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & ~param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5190  FUN_004b5190   (43 bytes)   [unnamed]
undefined * __cdecl FUN_004b5190(int param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined **)(param_1 + 0x10);
  }
  puVar1 = FUN_0049ce10(*(undefined4 **)(param_1 + 8),"directory",DAT_005077b4);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5254  FUN_004b5254   (32 bytes)   [unnamed]
undefined * __cdecl FUN_004b5254(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_0049ce10(*(undefined4 **)(param_1 + 8),"docfilter",DAT_005077b4);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5274  FUN_004b5274   (32 bytes)   [unnamed]
undefined * __cdecl FUN_004b5274(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_0049ce10(*(undefined4 **)(param_1 + 8),"description",DAT_005077b4);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5294  FUN_004b5294   (32 bytes)   [unnamed]
undefined * __cdecl FUN_004b5294(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_0049ce10(*(undefined4 **)(param_1 + 8),"extension",DAT_005077b4);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5734  FUN_004b5734   (112 bytes)   [unnamed]
undefined4 __cdecl FUN_004b5734(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  iVar3 = __InitExceptBlockLDTC(0x50df18);
  if (*(int *)(param_1 + 0x22) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x22);
    piVar1 = puVar2 + 7;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (puVar2 != (undefined4 *)0x0)) {
      iVar3 = (**(code **)*puVar2)();
    }
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    iVar3 = param_2;
  }
  *(int *)(param_1 + 0x22) = param_2;
  *sehChainHead = sehPrevFrame;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004b57a4  FUN_004b57a4   (145 bytes)   [unnamed]
void __cdecl FUN_004b57a4(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  for (iVar1 = *(int *)(param_1 + 0x26); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    bVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0x14))();
    iVar4 = iVar4 - (uint)bVar2;
    if (iVar4 == -3) break;
  }
  if (iVar4 != -1) {
    for (iVar1 = *(int *)(param_1 + 0x26); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      iVar4 = iVar1;
      iVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x10))();
      if ((iVar3 != 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar1 + 8) + 0x10))(iVar3,*(int *)(iVar1 + 8),iVar4,iVar1),
         *(int *)(iVar4 + 0xc) != 0)) {
        (**(code **)(*(int *)(iVar1 + 8) + 0x14))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5874  FUN_004b5874   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_004b5874(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x26);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5890  FUN_004b5890   (219 bytes)   [unnamed]
int __cdecl FUN_004b5890(int param_1,int param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50df58);
  if (param_2 == 0) {
    param_2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else if (*(int *)(param_2 + 0x18) == 0) {
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(param_2 + 8))();
    }
    param_2 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 8) + 0x54))();
    if (*(int *)(param_2 + 0x18) == 0) {
      if (param_2 != 0) {
        (*(code *)**(undefined4 **)(param_2 + 8))();
      }
      param_2 = 0;
      *sehChainHead = sehPrevFrame;
    }
    else {
      FUN_004b57a4(param_1);
      FUN_004ca358();
      *sehChainHead = sehPrevFrame;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b596c  FUN_004b596c   (172 bytes)   [unnamed]
undefined4 __cdecl FUN_004b596c(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)param_1 + 0x26);
  while( true ) {
    if (*piVar2 == 0) {
      return 0;
    }
    if (param_2 == *piVar2) break;
    piVar2 = (int *)(*piVar2 + 0x14);
  }
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0xe) + 8) + 0x54))();
  *piVar2 = *(int *)(param_2 + 0x14);
  FUN_004b5ab0((int)param_1,2,param_2,(undefined4 *)param_2);
  if (*(int *)((int)param_1 + 0x26) != 0) {
    FUN_004b57a4((int)param_1);
    return 0;
  }
  if (*(int *)((int)param_1 + 0x22) == 0) {
    return 0;
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 0x40) == 0) &&
     ((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 8) == 0)) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x10))();
  }
  if (((*(byte *)(*(int *)((int)param_1 + 0x22) + 0x17) & 0x40) != 0) &&
     (*(int *)(param_2 + 0x18) != 0)) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5ab0  FUN_004b5ab0   (181 bytes)   [unnamed]
char __cdecl FUN_004b5ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 unused;
  undefined4 unused2;
  
  cVar2 = '\x01';
  iVar4 = 0;
  while (iVar4 = FUN_004b5d60((undefined4 *)(param_1 + 8),iVar4), iVar4 != 0) {
    if ((cVar2 == '\0') || (cVar2 = FUN_004b5ab0(iVar4,param_2,param_3,param_4), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  local_14 = 0x7ffb;
  unused2 = 0;
  unused = param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 0x26); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[5]) {
    if ((param_4 != puVar1) && (cVar3 = (*(code *)**(undefined4 **)*puVar1)(), cVar3 != '\0')) {
      if ((cVar2 == '\0') || (iVar4 = FUN_0048e7e0(*puVar1,(int)&local_14), iVar4 == 0)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
    }
  }
  return cVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5b68  FUN_004b5b68   (159 bytes)   [unnamed]
undefined4 * __cdecl FUN_004b5b68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 unused;
  undefined4 unused2;
  
  iVar3 = 0;
  do {
    iVar3 = FUN_004b5d60((undefined4 *)(param_1 + 8),iVar3);
    if (iVar3 == 0) {
      local_14 = 0x7ffb;
      unused2 = 0;
      puVar2 = *(undefined4 **)(param_1 + 0x26);
      unused = param_2;
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        if (((param_4 != puVar2) && (cVar1 = (*(code *)**(undefined4 **)*puVar2)(), cVar1 != '\0'))
           && (iVar3 = FUN_0048e7e0(*puVar2,(int)&local_14), iVar3 != 0)) break;
        puVar2 = (undefined4 *)puVar2[5];
      }
      return puVar2;
    }
    puVar2 = FUN_004b5b68(iVar3,param_2,param_3,param_4);
  } while (puVar2 == (undefined4 *)0x0);
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5d60  FUN_004b5d60   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_004b5d60(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x16);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5d78  FUN_004b5d78   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_004b5d78(int *param_1,int param_2)

{
  while( true ) {
    if (*param_1 == 0) {
      return 0;
    }
    if (param_2 == *param_1) break;
    param_1 = (int *)(*param_1 + 0x16);
  }
  *param_1 = *(int *)(param_2 + 0x16);
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5da0  FUN_004b5da0   (86 bytes)   [unnamed]
void __cdecl FUN_004b5da0(int *param_1)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50dfa0);
  while (*param_1 != 0) {
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5e14  FUN_004b5e14   (142 bytes)   [unnamed]
uint * __cdecl FUN_004b5e14(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  char *len;
  char *pcVar3;
  int iVar4;
  
  len = strlen(param_2);
  pcVar3 = strlen(param_1);
  pcVar3 = (char *)((int)param_1 + (int)pcVar3);
  if (param_3 == '\0') {
    for (; param_1 < pcVar3 + (1 - (int)len); param_1 = (uint *)((int)param_1 + 1)) {
      cVar1 = *(char *)((int)param_1 + (int)len);
      *(char *)((int)param_1 + (int)len) = '\0';
      iVar4 = strcmp((char *)param_1,(char *)param_2);
      if (iVar4 == 0) {
        *(char *)((int)param_1 + (int)len) = cVar1;
        return param_1;
      }
      *(char *)((int)param_1 + (int)len) = cVar1;
    }
  }
  else {
    for (; param_1 < pcVar3 + (1 - (int)len); param_1 = (uint *)((int)param_1 + 1)) {
      cVar1 = *(char *)((int)param_1 + (int)len);
      *(char *)((int)param_1 + (int)len) = '\0';
      iVar4 = FUN_004dc978((char *)param_1,(char *)param_2);
      if (iVar4 == 0) {
        *(char *)((int)param_1 + (int)len) = cVar1;
        return param_1;
      }
      *(char *)((int)param_1 + (int)len) = cVar1;
    }
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5ea2  FUN_004b5ea2   (128 bytes)   [unnamed]
char * __cdecl FUN_004b5ea2(char *param_1,int param_2,uint *param_3,char param_4)

{
  char cVar1;
  char *len;
  int iVar3;
  char *pcVar4;
  
  len = strlen(param_3);
  pcVar4 = param_1 + (param_2 - (int)len);
  if (param_4 == '\0') {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)len];
      pcVar4[(int)len] = '\0';
      iVar3 = strcmp(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)len] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)len] = cVar1;
    }
  }
  else {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)len];
      pcVar4[(int)len] = '\0';
      iVar3 = FUN_004dc978(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)len] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)len] = cVar1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6920  FUN_004b6920   (50 bytes)   [unnamed]
void __cdecl FUN_004b6920(int *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    SetFocus(*(HWND *)(*param_1 + 0xc));
    piVar1 = (int *)param_1[6];
    param_1[6] = 0;
    (**(code **)(*piVar1 + 4))();
    param_1[6] = (int)piVar1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6ae8  FUN_004b6ae8   (65 bytes)   [unnamed]
undefined4 __cdecl FUN_004b6ae8(int *param_1,WPARAM wParam)

{
  WPARAM wParam2;
  undefined4 uVar2;
  LPARAM lParam;
  
  lParam = 0;
  if ((int)wParam < 0) {
    wParam2 = 0xffffffff;
  }
  else {
    wParam2 = FUN_004a76a8(*param_1,0xbb,wParam,0);
  }
  uVar2 = FUN_004a76a8(*param_1,0xc1,wParam2,lParam);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6b2c  FUN_004b6b2c   (115 bytes)   [unnamed]
bool __cdecl FUN_004b6b2c(int *param_1,undefined2 *lParam,uint param_3,WPARAM wParam)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((int)param_3 < 1) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_004b6ae8(param_1,wParam);
    bVar3 = iVar1 + 1 <= (int)param_3;
    if (param_3 < 2) {
      *(undefined1 *)lParam = 0;
      bVar3 = iVar1 == 0;
    }
    else {
      *lParam = (short)param_3;
      iVar2 = FUN_004a76a8(*param_1,0xc4,wParam,(LPARAM)lParam);
      *(undefined1 *)((int)lParam + iVar2) = 0;
      if (iVar1 != iVar2) {
        bVar3 = false;
      }
    }
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6ba0  FUN_004b6ba0   (187 bytes)   [unnamed]
LPSTR __cdecl FUN_004b6ba0(int *param_1,SIZE_T param_2)

{
  uint windowLong;
  int textLen;
  undefined *puVar3;
  LPSTR string_;
  HLOCAL hMem;
  
  windowLong = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if (((((windowLong & 4) != 0) && (textLen = FUN_00487178(), *(uint *)(textLen + 0xd) < 0x60000)) &&
      (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 1)) &&
     (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 0)) {
    hMem = (HLOCAL)FUN_004a76a8(*param_1,0xbd,0,0);
    if ((param_2 != 0) && (hMem = LocalReAlloc(hMem,param_2,0x42), hMem == (HLOCAL)0x0)) {
      return (LPSTR)0x0;
    }
    string_ = LocalLock(hMem);
    return string_;
  }
  if (param_2 == 0) {
    textLen = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    param_2 = textLen + 1;
  }
  string_ = (LPSTR)operator_new_array();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),string_,param_2);
  return string_;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6c5c  FUN_004b6c5c   (171 bytes)   [unnamed]
void __cdecl FUN_004b6c5c(int *param_1,LPCSTR param_2,char param_3)

{
  uint windowLong;
  int iVar2;
  undefined *puVar3;
  HLOCAL hMem;
  
  if (param_2 != (LPCSTR)0x0) {
    windowLong = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    if (((((windowLong & 4) != 0) && (iVar2 = FUN_00487178(), *(uint *)(iVar2 + 0xd) < 0x60000)) &&
        (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 1)) &&
       (puVar3 = FUN_0048751c(), *(int *)(puVar3 + 0x10) != 0)) {
      hMem = LocalHandle(param_2);
      LocalUnlock(hMem);
      if (param_3 == '\0') {
        return;
      }
      FUN_004a76a8(*param_1,0xbc,(WPARAM)hMem,0);
      return;
    }
    if (param_3 != '\0') {
      SetWindowTextA(*(HWND *)(*param_1 + 0xc),param_2);
    }
    operator_delete_array();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6e50  FUN_004b6e50   (66 bytes)   [unnamed]
bool __cdecl FUN_004b6e50(int *param_1)

{
  int local_c;
  int local_8;
  
  (**(code **)(param_1[3] + 0x34))();
  if (local_8 != local_c) {
    FUN_004a76a8(*param_1,0x303,0,0);
  }
  return local_8 != local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b6e94  FUN_004b6e94   (42 bytes)   [unnamed]
bool __cdecl FUN_004b6e94(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(param_1[3] + 0x3c))();
  if (cVar1 != '\0') {
    bVar2 = FUN_004b6e50(param_1);
    return bVar2;
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7060  FUN_004b7060   (126 bytes)   [unnamed]
undefined1 __cdecl FUN_004b7060(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  LPSTR pCVar4;
  
  if (param_1[6] == 0) {
    uVar3 = 1;
  }
  else {
    pCVar4 = FUN_004b6ba0(param_1,0);
    if (param_2 == '\0') {
      uVar3 = (**(code **)(*(int *)param_1[6] + 0xc))();
    }
    else {
      piVar1 = (int *)param_1[6];
      cVar2 = (**(code **)(*piVar1 + 0xc))();
      if (cVar2 == '\0') {
        (**(code **)(*piVar1 + 4))();
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    FUN_004b6c5c(param_1,pCVar4,'\0');
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b70e0  FUN_004b70e0   (86 bytes)   [unnamed]
void __cdecl FUN_004b70e0(int param_1,undefined4 param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50e318);
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b72d0  InitRichEditStreamer_4b72d0   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4b72d0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50e454);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004b753c;
  puVar1 = FUN_004dd5cc(1,0,0x402cfc);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b89c,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7326  FUN_004b7326   (48 bytes)   [unnamed]
void __stdcall FUN_004b7326(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50e468);
  OWL::TStreamableClass::_dtor(0x51b89c,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b74dc  EvRegisteredMsg_4b74dc_4b74dc   (48 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TEdit::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_4b74dc_4b74dc(int param_1,int *param_2)

{
  FUN_004a43c8(*(int *)(param_1 + 8),param_2);
  FUN_004c9f74(param_2,(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004b753c  FUN_004b753c   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004b753c(int *param_1)

{
  undefined4 *streamer;
  int *edit;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50e4bc);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      edit = (int *)operator_new();
      if (edit == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TEdit::TEdit_4b73c0(edit,0);
        param_1 = (int *)edit[2];
      }
    }
    OWL::TEdit::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7698  Cmd24333_4b7698   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24333)
void __cdecl Cmd24333_4b7698(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b76a8  Cmd24334_4b76a8   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24334)
void __cdecl Cmd24334_4b76a8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b7c98  FUN_004b7c98   (530 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_004b7c98(int *param_1,uint *param_2)

{
  uint len;
  int iVar2;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_24 [8];
  int *str;
  undefined1 alloc [8];
  int *str2;
  
  __InitExceptBlockLDTC(0x50e670);
  if (param_2 != (uint *)param_1[0x18]) {
    operator_delete_array();
    if (param_2 == (uint *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00496d48(param_2);
    }
    param_1[0x18] = iVar2;
  }
  FUN_004c0e0c((int)local_24,*(int *)(*param_1 + 0x70),0x7f26);
  str2 = (int *)0x0;
  if (str[-3] == -1 || str[-3] + 1 < 0) {
    len = str[-1];
    str2 = std::string::__getRep(alloc,len,len);
    str2 = str2 + 3;
    memcpy(str2,str,len);
  }
  else {
    str2 = str;
    strRep = str + -3;
    if (strRep != &g_nullStringRep) {
      *strRep = *strRep + 1;
    }
  }
  if (str != (int *)0x0) {
    if (str[-3] != -1) {
      strRep = str + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004b7e06;
    }
    operator_delete();
    str = (int *)0x0;
  }
LAB_004b7e06:
  iVar2 = (**(code **)(*(int *)(*param_1 + 8) + 0x38))();
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      strRep = str2 + -3;
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004b7e99;
    }
    operator_delete();
    iVar2 = 0;
  }
LAB_004b7e99:
  *sehChainHead = sehPrevFrame;
  return iVar2;
}

} // namespace tea
