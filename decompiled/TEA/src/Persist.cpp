// TEA.exe — application module "Persist"
// 21 functions, 0x0044e83c..0x0044f260. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044e83c  Persist::Persist   (201 bytes)   [analysis (position-matched TEACON.exe)]
//   paired with TEACON.exe 0x0041193c by position between identical neighbours; the bodies differ (201 vs 201 bytes), so treat the name as probable. opens or creates the registry key (RegOpenKeyExA / RegCreateKeyExA)
int * __cdecl Persist::Persist(int *param_1,int param_2,int param_3,int param_4)

{
  HKEY hKey;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x4f73d4);
  *param_1 = param_3;
  param_1[1] = 0;
  while( true ) {
    if (param_4 == 0) {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    local_18 = 8;
    if (*param_1 == 1) {
      iVar1 = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,"Position" + 8,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(param_1 + 1),&local_2c);
    }
    else {
      iVar1 = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(param_1 + 1));
    }
    if (iVar1 == 0) break;
    if (param_4 == 0) {
      param_1[1] = 0;
      *in_FS_OFFSET = local_28;
LAB_0044e8f3:
      *in_FS_OFFSET = local_28;
      return param_1;
    }
    param_4 = 0;
  }
  *in_FS_OFFSET = local_28;
  goto LAB_0044e8f3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e920  Persist::~Persist   (42 bytes)   [rtti:dtor destructor]
//   written in code as Persist::_dtor
void __cdecl Persist::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(HKEY *)(param_1 + 4) != (HKEY)0x0) {
      RegCloseKey(*(HKEY *)(param_1 + 4));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e94c  Persist::QueryValueSized   (116 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411a4c. RegQueryValueExA wrapper
undefined4 __cdecl Persist::QueryValueSized(int param_1,int param_2,int param_3)

{
  int iVar1;
  LSTATUS LVar2;
  uint auStackY_1000c [15352];
  undefined4 uStackY_102c;
  DWORD local_c [2];
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 4) != 0) {
    local_c[1] = 0x10000;
    local_c[0] = 1;
    uStackY_102c = 0x44e99e;
    LVar2 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_c,
                             (LPBYTE)auStackY_1000c,local_c + 1);
    if (LVar2 == 0) {
      iVar1 = FUN_004cf41c(param_3,auStackY_1000c);
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e9c0  Persist::QueryValue   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411ac0. RegQueryValueExA wrapper
undefined4 __cdecl Persist::QueryValue(int param_1,int param_2,undefined4 *param_3)

{
  LSTATUS LVar1;
  DWORD local_10 [2];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_10[1] = 4;
    local_10[0] = 4;
    LVar1 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_10,
                             (LPBYTE)&local_8,local_10 + 1);
    if (LVar1 == 0) {
      *param_3 = local_8;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ea14  FUN_0044ea14   (364 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0044ea14(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int *local_c;
  
  __InitExceptBlockLDTC(0x4f7408);
  local_c = (int *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -0xc);
  if (iVar3 == -1 || iVar3 + 1 < 0) {
    uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
    local_c = std::string::__getRep(local_14,uVar1,uVar1);
    local_c = local_c + 3;
    memcpy(local_c,*(undefined4 **)(param_3 + 8),uVar1);
  }
  else {
    local_c = *(int **)(param_3 + 8);
    piVar4 = local_c + -3;
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  uVar2 = Persist::QueryValueSized(param_1,param_2,(int)local_14);
  FUN_0044efa4((char *)local_c,param_4);
  if (local_c != (int *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0044eb6e;
    }
    operator_delete();
  }
LAB_0044eb6e:
  *in_FS_OFFSET = local_38;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eb80  FUN_0044eb80   (248 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0044ebbe) */
uint __cdecl FUN_0044eb80(int param_1,int param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x4f7460);
  local_c = &DAT_00513d64;
  uVar2 = Persist::QueryValueSized(param_1,param_2,(int)local_14);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x01') {
    uVar2 = FUN_0044ef10(local_c,param_3);
  }
  uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),cVar1);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0044ec66;
    }
    operator_delete();
  }
LAB_0044ec66:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ec78  FUN_0044ec78   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044ec78(int param_1,int param_2,int param_3)

{
  RegSetValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),0,1,*(BYTE **)(param_3 + 8),
                 *(int *)(*(BYTE **)(param_3 + 8) + -4) + 1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eca8  FUN_0044eca8   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044eca8(int param_1,int param_2)

{
  RegSetValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),0,4,&GHIDRA_STACK(0x0000000c),4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eccc  FUN_0044eccc   (219 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044eccc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  uint local_448 [257];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f74a8);
  FUN_0044f060(param_3,(undefined1 *)local_448);
  local_28 = 8;
  iVar1 = std::string::string_from_cstr((int)local_14,local_448);
  local_1c = local_1c + 1;
  FUN_0044ec78(param_1,param_2,iVar1);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0044ed96;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0044ed96:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eda8  FUN_0044eda8   (219 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044eda8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  uint local_448 [257];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f74d8);
  FUN_0044ef70(param_3,(undefined1 *)local_448);
  local_28 = 8;
  iVar1 = std::string::string_from_cstr((int)local_14,local_448);
  local_1c = local_1c + 1;
  FUN_0044ec78(param_1,param_2,iVar1);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0044ee72;
    }
    local_44 = local_c + -0xc;
    operator_delete();
  }
LAB_0044ee72:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ee84  FUN_0044ee84   (95 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044ee84(char *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = FUN_004dcd6c(param_1,PTR_DAT_004f735c);
  if (pcVar1 == (char *)0x0) {
    *param_2 = 0;
  }
  else {
    iVar2 = FUN_004e39d0(pcVar1);
    *param_2 = iVar2;
  }
  iVar2 = FUN_0044e810();
  *param_3 = iVar2;
  iVar2 = FUN_0044e810();
  *param_4 = iVar2;
  iVar2 = FUN_0044e810();
  *param_5 = iVar2;
  iVar2 = FUN_0044e810();
  *param_6 = iVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044eee4  FUN_0044eee4   (42 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044eee4(undefined1 *param_1)

{
  FUN_004e0344(param_1,(byte *)"%d,%d,%d,%d,%d");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef10  FUN_0044ef10   (95 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
uint * __cdecl FUN_0044ef10(char *param_1,uint *param_2)

{
  byte bVar1;
  char *pcVar2;
  uint uVar4;
  uint uVar5;
  int iVar3;
  
  pcVar2 = FUN_004dcd6c(param_1,PTR_DAT_004f735c);
  if (pcVar2 == (char *)0x0) {
    bVar1 = 0;
  }
  else {
    iVar3 = FUN_004e39d0(pcVar2);
    bVar1 = (byte)iVar3;
  }
  uVar4 = FUN_0044e810();
  uVar5 = FUN_0044e810();
  *param_2 = (uint)bVar1 | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044ef70  FUN_0044ef70   (50 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044ef70(undefined4 param_1,undefined1 *param_2)

{
  FUN_004e0344(param_2,(byte *)("%d,%d,%d,%d,%d" + 6));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044efa4  FUN_0044efa4   (186 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044efa4(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  memset(param_2,0,0x40);
  FUN_0044ef10(param_1,param_2);
  uVar1 = FUN_0044e810();
  param_2[1] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[2] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[3] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[4] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[5] = uVar1;
  iVar2 = FUN_0044e810();
  *(char *)(param_2 + 6) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x19) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1a) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1b) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)(param_2 + 7) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1d) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1e) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1f) = (char)iVar2;
  puVar3 = (uint *)FUN_004dcd6c((char *)0x0,PTR_DAT_004f735c);
  if (puVar3 == (uint *)0x0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    FUN_004dcc40(param_2 + 8,puVar3,(char *)0x20);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f060  FUN_0044f060   (122 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044f060(undefined4 param_1,undefined1 *param_2)

{
  FUN_004e0344(param_2,(byte *)"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0dc  FUN_0044f0dc   (17 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0044f0dc(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f0f0  FUN_0044f0f0   (230 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0044f0f0(LPCSTR param_1,LPCSTR param_2,uint *param_3)

{
  UINT UVar1;
  HSZ hszService;
  HSZ hszTopic;
  HCONV hConv;
  char *pcVar2;
  HDDEDATA pHVar3;
  undefined4 uVar4;
  HCONV hConv_00;
  HSZ hszItem;
  UINT wType;
  DWORD dwTimeout;
  LPDWORD pdwResult;
  
  uVar4 = 0;
  DAT_004f74f8 = 0;
  UVar1 = DdeInitializeA(&DAT_004f74f8,FUN_0044f0dc,0x3c0010,0);
  if (UVar1 == 0) {
    hszService = DdeCreateStringHandleA(DAT_004f74f8,param_1,0x3ec);
    hszTopic = DdeCreateStringHandleA(DAT_004f74f8,param_2,0x3ec);
    hConv = DdeConnect(DAT_004f74f8,hszService,hszTopic,(PCONVCONTEXT)0x0);
    if (hConv == (HCONV)0x0) {
      uVar4 = 2;
    }
    else {
      pdwResult = (LPDWORD)0x0;
      dwTimeout = 10000;
      wType = 0x4050;
      UVar1 = 1;
      hszItem = (HSZ)0x0;
      hConv_00 = hConv;
      pcVar2 = strlen(param_3);
      pHVar3 = DdeClientTransaction
                         ((LPBYTE)param_3,(DWORD)(pcVar2 + 1),hConv_00,hszItem,UVar1,wType,dwTimeout
                          ,pdwResult);
      if (pHVar3 == (HDDEDATA)0x0) {
        uVar4 = 3;
      }
      DdeDisconnect(hConv);
    }
    DdeFreeStringHandle(DAT_004f74f8,hszService);
    DdeFreeStringHandle(DAT_004f74f8,hszTopic);
    DdeUninitialize(DAT_004f74f8);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f1d8  FUN_0044f1d8   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0044f1d8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004e3c04();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f21c  FUN_0044f21c   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0044f21c(void)

{
  FUN_004e3c04();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f260  FUN_0044f260   (99 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0044f260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f750c);
  FUN_004c684c(param_1,param_2,param_3,param_4,param_5,param_6);
  *param_1 = &MyScroller::vftable;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
