// TSMerge.exe — runtime / library code "code_0x00438000"
// 39 functions, 0x00438064..0x0043be90. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00438064  FUN_00438064   (76 bytes)   [unnamed]
int __cdecl FUN_00438064(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    while( true ) {
      iVar2 = FUN_0043a240((undefined4 *)(param_1 + 0x14),iVar2);
      if (iVar2 == 0) {
        return 0;
      }
      if (param_2 != (char *)0x0) break;
      if (*(int *)(iVar2 + 0x2e) == 0) {
        return iVar2;
      }
    }
  } while ((*(int *)(iVar2 + 0x2e) == 0) ||
          (iVar1 = FUN_00455b74(*(char **)(iVar2 + 0x2e),param_2), iVar1 != 0));
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004395b8  FUN_004395b8   (12 bytes)   [unnamed]
void __cdecl FUN_004395b8(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439650  FUN_00439650   (14 bytes)   [unnamed]
void __cdecl FUN_00439650(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439660  FUN_00439660   (16 bytes)   [unnamed]
void __cdecl FUN_00439660(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & ~param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439670  FUN_00439670   (43 bytes)   [unnamed]
undefined * __cdecl FUN_00439670(int param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined **)(param_1 + 0x10);
  }
  puVar1 = FUN_004247b0(*(undefined4 **)(param_1 + 8),"directory",DAT_00467d3c);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439734  FUN_00439734   (32 bytes)   [unnamed]
undefined * __cdecl FUN_00439734(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_004247b0(*(undefined4 **)(param_1 + 8),"docfilter",DAT_00467d3c);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439754  FUN_00439754   (32 bytes)   [unnamed]
undefined * __cdecl FUN_00439754(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_004247b0(*(undefined4 **)(param_1 + 8),"description",DAT_00467d3c);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439774  FUN_00439774   (32 bytes)   [unnamed]
undefined * __cdecl FUN_00439774(int param_1)

{
  undefined *puVar1;
  
  puVar1 = FUN_004247b0(*(undefined4 **)(param_1 + 8),"extension",DAT_00467d3c);
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439c14  FUN_00439c14   (112 bytes)   [unnamed]
undefined4 __cdecl FUN_00439c14(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  iVar3 = __InitExceptBlockLDTC(0x46d1fc);
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
  *in_FS_OFFSET = local_30;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00439c84  FUN_00439c84   (145 bytes)   [unnamed]
void __cdecl FUN_00439c84(int param_1)

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
// 0x00439d54  FUN_00439d54   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_00439d54(int param_1,int param_2)

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
// 0x00439d70  FUN_00439d70   (219 bytes)   [unnamed]
int __cdecl FUN_00439d70(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x46d23c);
  if (param_2 == 0) {
    param_2 = 0;
    *in_FS_OFFSET = local_38;
  }
  else if (*(int *)(param_2 + 0x18) == 0) {
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(param_2 + 8))();
    }
    param_2 = 0;
    *in_FS_OFFSET = local_38;
  }
  else {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 8) + 0x54))();
    if (*(int *)(param_2 + 0x18) == 0) {
      if (param_2 != 0) {
        (*(code *)**(undefined4 **)(param_2 + 8))();
      }
      param_2 = 0;
      *in_FS_OFFSET = local_38;
    }
    else {
      FUN_00439c84(param_1);
      FUN_0044a1bc();
      *in_FS_OFFSET = local_38;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00439e4c  FUN_00439e4c   (172 bytes)   [unnamed]
undefined4 __cdecl FUN_00439e4c(int *param_1,int param_2)

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
  FUN_00439f90((int)param_1,2,param_2,(undefined4 *)param_2);
  if (*(int *)((int)param_1 + 0x26) != 0) {
    FUN_00439c84((int)param_1);
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
// 0x00439f90  FUN_00439f90   (181 bytes)   [unnamed]
char __cdecl FUN_00439f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  cVar2 = '\x01';
  iVar4 = 0;
  while (iVar4 = FUN_0043a240((undefined4 *)(param_1 + 8),iVar4), iVar4 != 0) {
    if ((cVar2 == '\0') || (cVar2 = FUN_00439f90(iVar4,param_2,param_3,param_4), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  local_14 = 0x7ffb;
  local_8 = 0;
  local_10 = param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 0x26); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[5]) {
    if ((param_4 != puVar1) && (cVar3 = (*(code *)**(undefined4 **)*puVar1)(), cVar3 != '\0')) {
      if ((cVar2 == '\0') || (iVar4 = FUN_004179cc(*puVar1,(int)&local_14), iVar4 == 0)) {
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
// 0x0043a048  FUN_0043a048   (159 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043a048(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  iVar3 = 0;
  do {
    iVar3 = FUN_0043a240((undefined4 *)(param_1 + 8),iVar3);
    if (iVar3 == 0) {
      local_14 = 0x7ffb;
      local_8 = 0;
      puVar2 = *(undefined4 **)(param_1 + 0x26);
      local_10 = param_2;
      while( true ) {
        if (puVar2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        if (((param_4 != puVar2) && (cVar1 = (*(code *)**(undefined4 **)*puVar2)(), cVar1 != '\0'))
           && (iVar3 = FUN_004179cc(*puVar2,(int)&local_14), iVar3 != 0)) break;
        puVar2 = (undefined4 *)puVar2[5];
      }
      return puVar2;
    }
    puVar2 = FUN_0043a048(iVar3,param_2,param_3,param_4);
  } while (puVar2 == (undefined4 *)0x0);
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a240  FUN_0043a240   (24 bytes)   [unnamed]
undefined4 __cdecl FUN_0043a240(undefined4 *param_1,int param_2)

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
// 0x0043a258  FUN_0043a258   (40 bytes)   [unnamed]
undefined4 __cdecl FUN_0043a258(int *param_1,int param_2)

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
// 0x0043a280  FUN_0043a280   (86 bytes)   [unnamed]
void __cdecl FUN_0043a280(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46d284);
  while (*param_1 != 0) {
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a2f4  FUN_0043a2f4   (142 bytes)   [unnamed]
uint * __cdecl FUN_0043a2f4(uint *param_1,uint *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = strlen(param_2);
  pcVar3 = strlen(param_1);
  pcVar3 = (char *)((int)param_1 + (int)pcVar3);
  if (param_3 == '\0') {
    for (; param_1 < pcVar3 + (1 - (int)pcVar2); param_1 = (uint *)((int)param_1 + 1)) {
      cVar1 = *(char *)((int)param_1 + (int)pcVar2);
      *(char *)((int)param_1 + (int)pcVar2) = '\0';
      iVar4 = FUN_00455d94((char *)param_1,(char *)param_2);
      if (iVar4 == 0) {
        *(char *)((int)param_1 + (int)pcVar2) = cVar1;
        return param_1;
      }
      *(char *)((int)param_1 + (int)pcVar2) = cVar1;
    }
  }
  else {
    for (; param_1 < pcVar3 + (1 - (int)pcVar2); param_1 = (uint *)((int)param_1 + 1)) {
      cVar1 = *(char *)((int)param_1 + (int)pcVar2);
      *(char *)((int)param_1 + (int)pcVar2) = '\0';
      iVar4 = FUN_00455b74((char *)param_1,(char *)param_2);
      if (iVar4 == 0) {
        *(char *)((int)param_1 + (int)pcVar2) = cVar1;
        return param_1;
      }
      *(char *)((int)param_1 + (int)pcVar2) = cVar1;
    }
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a382  FUN_0043a382   (128 bytes)   [unnamed]
char * __cdecl FUN_0043a382(char *param_1,int param_2,uint *param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = strlen(param_3);
  pcVar4 = param_1 + (param_2 - (int)pcVar2);
  if (param_4 == '\0') {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)pcVar2];
      pcVar4[(int)pcVar2] = '\0';
      iVar3 = FUN_00455d94(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)pcVar2] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)pcVar2] = cVar1;
    }
  }
  else {
    for (; param_1 <= pcVar4; pcVar4 = pcVar4 + -1) {
      cVar1 = pcVar4[(int)pcVar2];
      pcVar4[(int)pcVar2] = '\0';
      iVar3 = FUN_00455b74(pcVar4,(char *)param_3);
      if (iVar3 == 0) {
        pcVar4[(int)pcVar2] = cVar1;
        return pcVar4;
      }
      pcVar4[(int)pcVar2] = cVar1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043a4ec  FUN_0043a4ec   (311 bytes)   [unnamed]
int * __cdecl FUN_0043a4ec(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46d4b8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_0044788c(param_1,1,param_3,param_4,param_5,param_6);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046d664;
  *(undefined ***)param_1[2] = &PTR_LAB_0046d670;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046d67c;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 0x100;
  param_1[6] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ac88  FUN_0043ac88   (50 bytes)   [unnamed]
void __cdecl FUN_0043ac88(int *param_1)

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
// 0x0043ae50  FUN_0043ae50   (65 bytes)   [unnamed]
undefined4 __cdecl FUN_0043ae50(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  undefined4 uVar2;
  LPARAM LVar3;
  
  LVar3 = 0;
  if ((int)param_2 < 0) {
    WVar1 = 0xffffffff;
  }
  else {
    WVar1 = FUN_0042d1a4(*param_1,0xbb,param_2,0);
  }
  uVar2 = FUN_0042d1a4(*param_1,0xc1,WVar1,LVar3);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ae94  FUN_0043ae94   (115 bytes)   [unnamed]
bool __cdecl FUN_0043ae94(int *param_1,undefined2 *param_2,uint param_3,WPARAM param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((int)param_3 < 1) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_0043ae50(param_1,param_4);
    bVar3 = iVar1 + 1 <= (int)param_3;
    if (param_3 < 2) {
      *(undefined1 *)param_2 = 0;
      bVar3 = iVar1 == 0;
    }
    else {
      *param_2 = (short)param_3;
      iVar2 = FUN_0042d1a4(*param_1,0xc4,param_4,(LPARAM)param_2);
      *(undefined1 *)((int)param_2 + iVar2) = 0;
      if (iVar1 != iVar2) {
        bVar3 = false;
      }
    }
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043af08  FUN_0043af08   (187 bytes)   [unnamed]
LPSTR __cdecl FUN_0043af08(int *param_1,SIZE_T param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  LPSTR pCVar4;
  HLOCAL hMem;
  
  uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if (((((uVar1 & 4) != 0) && (iVar2 = FUN_0041074c(), *(uint *)(iVar2 + 0xd) < 0x60000)) &&
      (puVar3 = FUN_00410934(), *(int *)(puVar3 + 0x10) != 1)) &&
     (puVar3 = FUN_00410934(), *(int *)(puVar3 + 0x10) != 0)) {
    hMem = (HLOCAL)FUN_0042d1a4(*param_1,0xbd,0,0);
    if ((param_2 != 0) && (hMem = LocalReAlloc(hMem,param_2,0x42), hMem == (HLOCAL)0x0)) {
      return (LPSTR)0x0;
    }
    pCVar4 = LocalLock(hMem);
    return pCVar4;
  }
  if (param_2 == 0) {
    iVar2 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
    param_2 = iVar2 + 1;
  }
  pCVar4 = (LPSTR)operator_new_array();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),pCVar4,param_2);
  return pCVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043afc4  FUN_0043afc4   (171 bytes)   [unnamed]
void __cdecl FUN_0043afc4(int *param_1,LPCSTR param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  HLOCAL hMem;
  
  if (param_2 != (LPCSTR)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
    if (((((uVar1 & 4) != 0) && (iVar2 = FUN_0041074c(), *(uint *)(iVar2 + 0xd) < 0x60000)) &&
        (puVar3 = FUN_00410934(), *(int *)(puVar3 + 0x10) != 1)) &&
       (puVar3 = FUN_00410934(), *(int *)(puVar3 + 0x10) != 0)) {
      hMem = LocalHandle(param_2);
      LocalUnlock(hMem);
      if (param_3 == '\0') {
        return;
      }
      FUN_0042d1a4(*param_1,0xbc,(WPARAM)hMem,0);
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
// 0x0043b1b8  FUN_0043b1b8   (66 bytes)   [unnamed]
bool __cdecl FUN_0043b1b8(int *param_1)

{
  int local_c;
  int local_8;
  
  (**(code **)(param_1[3] + 0x34))();
  if (local_8 != local_c) {
    FUN_0042d1a4(*param_1,0x303,0,0);
  }
  return local_8 != local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b1fc  FUN_0043b1fc   (42 bytes)   [unnamed]
bool __cdecl FUN_0043b1fc(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(param_1[3] + 0x3c))();
  if (cVar1 != '\0') {
    bVar2 = FUN_0043b1b8(param_1);
    return bVar2;
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b3c8  FUN_0043b3c8   (126 bytes)   [unnamed]
undefined1 __cdecl FUN_0043b3c8(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  LPSTR pCVar4;
  
  if (param_1[6] == 0) {
    uVar3 = 1;
  }
  else {
    pCVar4 = FUN_0043af08(param_1,0);
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
    FUN_0043afc4(param_1,pCVar4,'\0');
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b448  FUN_0043b448   (86 bytes)   [unnamed]
void __cdecl FUN_0043b448(int param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46d5d8);
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b638  FUN_0043b638   (86 bytes)   [unnamed]
void __stdcall FUN_0043b638(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46d714);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0043b8a4;
  puVar1 = FUN_0045666c(1,0,0x405450);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_00477290,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b68e  FUN_0043b68e   (48 bytes)   [unnamed]
void __stdcall FUN_0043b68e(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46d728);
  OWL::TStreamableClass::_dtor(0x477290,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b6c0  FUN_0043b6c0   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043b6c0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46d730);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TEdit::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004567e4((int)param_2,iVar2,(int *)&DAT_00404628,(int *)&DAT_00405450,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b728  FUN_0043b728   (284 bytes)   [unnamed]
int * __cdecl FUN_0043b728(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46d748);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&OWL::TEventHandler::vftable;
    param_1[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_00447bb4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_0046d664;
  *(undefined ***)param_1[2] = &PTR_LAB_0046d670;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046d67c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b844  EvRegisteredMsg_43b844_43b844   (48 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TEdit::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_43b844_43b844(int param_1,int *param_2)

{
  FUN_0042a07c(*(int *)(param_1 + 8),param_2);
  FUN_00449dd8(param_2,(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x0043b8a4  FUN_0043b8a4   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_0043b8a4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x46d77c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_0043b728(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_0043b6c0(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ba00  Cmd24333_43ba00   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24333)
void __cdecl Cmd24333_43ba00(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ba10  Cmd24334_43ba10   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24334)
void __cdecl Cmd24334_43ba10(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x70))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043be90  FUN_0043be90   (530 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0043be90(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x46d90c);
  if (param_2 != (uint *)param_1[0x18]) {
    operator_delete_array();
    if (param_2 == (uint *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0041fd2c(param_2);
    }
    param_1[0x18] = iVar2;
  }
  FUN_00444058((int)local_24,*(int *)(*param_1 + 0x70),0x7f26);
  local_c = (int *)0x0;
  if (local_1c[-3] == -1 || local_1c[-3] + 1 < 0) {
    uVar1 = local_1c[-1];
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    piVar3 = local_1c + -3;
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  if (local_1c != (int *)0x0) {
    if (local_1c[-3] != -1) {
      piVar3 = local_1c + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043bffe;
    }
    operator_delete();
    local_1c = (int *)0x0;
  }
LAB_0043bffe:
  iVar2 = (**(code **)(*(int *)(*param_1 + 8) + 0x38))();
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar3 = local_c + -3;
      if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043c091;
    }
    operator_delete();
    iVar2 = 0;
  }
LAB_0043c091:
  *in_FS_OFFSET = local_48;
  return iVar2;
}

} // namespace tea
