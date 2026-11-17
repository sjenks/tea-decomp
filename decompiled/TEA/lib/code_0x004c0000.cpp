// TEA.exe — runtime / library code "code_0x004c0000"
// 59 functions, 0x004c00dc..0x004c3f78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c00dc  FUN_004c00dc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c00dc(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50ff6c);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)operator_new();
      if (piVar2 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        FUN_004bff9c(piVar2,0);
        param_1 = (int *)piVar2[2];
      }
    }
    FUN_004bff34(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0250  FUN_004c0250   (124 bytes)   [unnamed]
undefined4 __cdecl FUN_004c0250(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = 0;
  local_8 = 0;
  local_c = 0;
  iVar2 = 0;
  do {
    if (*(int *)((int)param_2 + iVar2 * 4 + 0x11) < 1) {
      if ((*(int *)((int)param_2 + iVar2 * 4 + 0x11) == 0) &&
         (0 < *(int *)((int)param_1 + iVar2 * 4 + 0x11))) {
        iVar1 = FUN_00497d64(param_3,param_1,local_8,*(int *)((int)param_1 + iVar2 * 4 + 0x11));
      }
    }
    else {
      FUN_00497d64(param_3,param_2,local_c,*(int *)((int)param_2 + iVar2 * 4 + 0x11));
      iVar1 = *(int *)((int)param_2 + iVar2 * 4 + 0x11);
      local_c = local_c + iVar1;
    }
    if (0 < *(int *)((int)param_1 + iVar2 * 4 + 0x11)) {
      local_8 = local_8 + *(int *)((int)param_1 + iVar2 * 4 + 0x11);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c02d8  FUN_004c02d8   (170 bytes)   [unnamed]
void __stdcall FUN_004c02d8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510016);
  if (DAT_00510012 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b92b,2);
    DAT_00510012 = '\0';
  }
  if (DAT_00510010 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b91a,2);
    DAT_00510010 = '\0';
  }
  if (DAT_0051000b != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b8fd,2);
    DAT_0051000b = '\0';
  }
  if (DAT_00510005 != '\0') {
    OWL::TModule::_dtor((undefined4 *)&DAT_0051b8dc,2);
    DAT_00510005 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0384  FUN_004c0384   (110 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004c03c2) */
DWORD * __cdecl FUN_004c0384(DWORD *param_1)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5101b0);
  param_1[3] = 0;
  param_1[3] = (DWORD)&DAT_00513d64;
  DVar1 = GetLastError();
  *param_1 = DVar1;
  FUN_004c0418(param_1,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0418  FUN_004c0418   (120 bytes)   [unnamed]
void __cdecl FUN_004c0418(DWORD *param_1,ushort param_2)

{
  DWORD DVar1;
  uint local_10c [65];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*param_1,(uint)param_2,(LPSTR)&local_8,0,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    wsprintfA((LPSTR)local_10c,"Error: %#X occurred (no further info)",*param_1);
    FUN_004cf41c((int)(param_1 + 1),local_10c);
  }
  else {
    FUN_004cf41c((int)(param_1 + 1),local_8);
    LocalFree(local_8);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0490  FUN_004c0490   (155 bytes)   [unnamed]
undefined4 __cdecl FUN_004c0490(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5101e4);
  uVar1 = FUN_004c07ac(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_005101d0 == 0) && (DAT_005101d0 = operator_new(), DAT_005101d0 != 0)) {
      *(undefined4 *)(DAT_005101d0 + 1) = 0;
      *(undefined4 *)(DAT_005101d0 + 5) = 0;
      *(undefined4 *)(DAT_005101d0 + 9) = 0;
    }
    FUN_004c055c(DAT_005101d0,param_1,0);
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c055c  FUN_004c055c   (159 bytes)   [unnamed]
void __cdecl FUN_004c055c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_004c05fc(param_1,*(int *)(param_1 + 1) + 1);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    *(undefined4 *)(*(int *)(param_1 + 9) + iVar1 * 4) = param_2;
  }
  else {
    if (*(uint *)(param_1 + 5) <= param_3) {
      FUN_004c05fc(param_1,param_3 + 1);
    }
    if (*(uint *)(param_1 + 5) <= *(uint *)(param_1 + 1)) {
      FUN_004c05fc(param_1,*(int *)(param_1 + 1) + 1);
    }
    if ((param_3 < *(uint *)(param_1 + 1)) && (*(int *)(param_1 + 1) != 0)) {
      FUN_004dc7f8((undefined4 *)((param_3 + 1) * 4 + *(int *)(param_1 + 9)),
                   (undefined4 *)(param_3 * 4 + *(int *)(param_1 + 9)),
                   (*(int *)(param_1 + 1) - param_3) * 4);
    }
    *(undefined4 *)(*(int *)(param_1 + 9) + param_3 * 4) = param_2;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c05fc  FUN_004c05fc   (155 bytes)   [unnamed]
void __cdecl FUN_004c05fc(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 9) == 0) {
    uVar2 = malloc();
    *(undefined4 *)(param_1 + 9) = uVar2;
  }
  else {
    puVar1 = (undefined4 *)FUN_004cc754();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)malloc();
      memcpy(puVar1,*(undefined4 **)(param_1 + 9),*(int *)(param_1 + 5) << 2);
      free();
    }
    *(undefined4 **)(param_1 + 9) = puVar1;
  }
  memset((undefined4 *)(*(int *)(param_1 + 5) * 4 + *(int *)(param_1 + 9)),0,param_2 << 2);
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0698  FUN_004c0698   (167 bytes)   [unnamed]
uint __cdecl FUN_004c0698(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510214);
  uVar1 = FUN_004c07ac(param_1);
  if ((char)uVar1 == '\0') {
    *in_FS_OFFSET = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_004c0740(DAT_005101d0,param_1);
    bVar3 = *(int *)(DAT_005101d0 + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_005101d0 != 0) {
        if (*(int *)(DAT_005101d0 + 9) != 0) {
          free();
        }
        uVar2 = operator_delete();
      }
      DAT_005101d0 = 0;
    }
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0740  FUN_004c0740   (72 bytes)   [unnamed]
undefined4 __cdecl FUN_004c0740(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004c0788(param_1,param_2);
  if (iVar1 != -1) {
    puVar2 = FUN_004dc7f8((undefined4 *)(iVar1 * 4 + *(int *)(param_1 + 9)),
                          (undefined4 *)((iVar1 + 1) * 4 + *(int *)(param_1 + 9)),
                          ((*(int *)(param_1 + 1) - iVar1) + -1) * 4);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0788  FUN_004c0788   (34 bytes)   [unnamed]
int __cdecl FUN_004c0788(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + 1) <= iVar1) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 9) + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c07ac  FUN_004c07ac   (54 bytes)   [unnamed]
undefined4 __cdecl FUN_004c07ac(int param_1)

{
  uint uVar1;
  
  if (DAT_005101d0 == 0) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(DAT_005101d0 + 1) <= uVar1) {
      return 0;
    }
    if (param_1 == *(int *)(*(int *)(DAT_005101d0 + 9) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c07e4  FUN_004c07e4   (248 bytes)   [unnamed]
undefined4 __cdecl FUN_004c07e4(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC pHVar3;
  WORD wLanguage;
  int iVar4;
  int local_18;
  int local_c;
  
  if (DAT_005101d0 != 0) {
    iVar4 = 0;
    puVar1 = (undefined4 *)FUN_00487bc0();
    iVar2 = FUN_00487e08(puVar1,iVar4);
    iVar4 = DAT_005101d0;
    if (iVar2 == 0) {
      wLanguage = 0;
    }
    else {
      wLanguage = *(WORD *)(iVar2 + 0x2f);
    }
    for (local_c = 0; iVar2 = DAT_005101d0, local_c < *(int *)(iVar4 + 1); local_c = local_c + 1) {
      pHVar3 = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + local_c * 4) + 8),param_2
                               ,param_1,wLanguage);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + local_c * 4);
      }
    }
    for (local_18 = 0; local_18 < *(int *)(iVar2 + 1); local_18 = local_18 + 1) {
      pHVar3 = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + local_18 * 4) + 8),param_1,
                             param_2);
      if (pHVar3 != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + local_18 * 4);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c08dc  FUN_004c08dc   (205 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c08dc(undefined4 *param_1,uint *param_2,char param_3,char param_4,char param_5)

{
  UINT uMode;
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510270);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  if (param_3 == '\0') {
    param_1[2] = 0;
  }
  else {
    uMode = SetErrorMode(0x8001);
    pHVar1 = LoadLibraryA((LPCSTR)param_2);
    param_1[2] = pHVar1;
    if (((uint)param_1[2] < 0x21) && (param_4 != '\0')) {
      FUN_004c225c(param_2);
    }
    SetErrorMode(uMode);
  }
  *(char *)(param_1 + 3) = param_3;
  FUN_004c0b54((int)param_1,param_2);
  if (param_5 != '\0') {
    FUN_004c0490((int)param_1);
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c09ac  FUN_004c09ac   (115 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c09ac(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5102b8);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_004c0b54((int)param_1,param_2);
  if (param_4 != '\0') {
    FUN_004c0490((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0a20  FUN_004c0a20   (138 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c0a20(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5102dc);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_004c0b54((int)param_1,param_2);
  if (param_3 != 0) {
    FUN_004c0bf0((int)param_1,param_3);
  }
  if (param_5 != '\0') {
    FUN_004c0490((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0b38  FUN_004c0b38   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_004c0b38(LPCSTR param_1,LPCSTR param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c07e4(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0b54  FUN_004c0b54   (155 bytes)   [unnamed]
void __cdecl FUN_004c0b54(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510334);
  operator_delete_array();
  if ((0x20 < *(uint *)(param_1 + 8)) && (param_2 == (uint *)0x0)) {
    lpFilename = (uint *)operator_new_array();
    operator_delete_array();
    DVar1 = GetModuleFileNameA(*(HMODULE *)(param_1 + 8),(LPSTR)lpFilename,0x104);
    if (DVar1 != 0) {
      param_2 = lpFilename;
    }
  }
  uVar2 = FUN_00496d48(param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  operator_delete_array();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0bf0  FUN_004c0bf0   (88 bytes)   [unnamed]
void __cdecl FUN_004c0bf0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  CHAR *pCVar3;
  CHAR local_34 [28];
  CHAR local_18 [20];
  
  FUN_004c0cc4(param_1,param_2);
  if ((*(UINT *)&DAT_0050b5c4) == 0) {
    pcVar2 = "GetWindowPtr(%X)";
    pCVar3 = local_18;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = *pcVar2;
    wsprintfA(local_34,local_18,param_2);
    (*(UINT *)&DAT_0050b5c4) = RegisterWindowMessageA(local_34);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0cc4  FUN_004c0cc4   (14 bytes)   [unnamed]
void __cdecl FUN_004c0cc4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0cd4  FUN_004c0cd4   (311 bytes)   [unnamed]
int __cdecl FUN_004c0cd4(int param_1,uint param_2,LPSTR param_3,int param_4)

{
  WORD wLanguage;
  undefined4 *puVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint cchWideChar;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar5 = FUN_00487e08(puVar1,iVar5);
  if (iVar5 == 0) {
    wLanguage = 0;
  }
  else {
    wLanguage = *(WORD *)(iVar5 + 0x2f);
  }
  hResInfo = FindResourceExA(*(HMODULE *)(param_1 + 8),(LPCSTR)0x6,(LPCSTR)((param_2 >> 4) + 1),
                             wLanguage);
  if (hResInfo == (HRSRC)0x0) {
    hResInfo = FindResourceA(*(HMODULE *)(param_1 + 8),(LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar4 = FUN_004c0b38((LPCSTR)((param_2 >> 4) + 1),(LPCSTR)0x6);
    if (iVar4 != 0) {
      iVar4 = FUN_004c0cd4(iVar4,param_2,param_3,param_4);
      return iVar4;
    }
  }
  else {
    hResData = LoadResource(*(HMODULE *)(param_1 + 8),hResInfo);
    if (hResData != (HGLOBAL)0x0) {
      puVar2 = LockResource(hResData);
      if (puVar2 != (ushort *)0x0) {
        uVar3 = param_2 & 0xf;
        while( true ) {
          cchWideChar = (uint)*puVar2;
          if (uVar3 == 0) break;
          puVar2 = (ushort *)((int)(puVar2 + 1) + cchWideChar * 2);
          uVar3 = uVar3 - 1;
        }
        iVar4 = 0;
        if ((cchWideChar != 0) &&
           (iVar4 = WideCharToMultiByte(0,0,(LPCWSTR)(puVar2 + 1),cchWideChar,param_3,param_4,
                                        (LPCSTR)0x0,(LPBOOL)0x0), iVar4 != 0)) {
          param_3[iVar4] = '\0';
        }
      }
      FreeResource(hResData);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  if (param_4 != 0) {
    *param_3 = '\0';
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0e0c  FUN_004c0e0c   (3214 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004c0e52) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_004c0e0c(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  HRSRC hResInfo;
  ushort *puVar2;
  uint uVar3;
  uint cchWideChar;
  int *piVar4;
  LPCWSTR lpWideCharStr;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 local_418 [248];
  undefined4 local_320;
  int *local_310;
  undefined1 local_2f8 [248];
  undefined *local_200;
  undefined4 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
  undefined4 *local_1e4;
  uint local_1e0;
  int local_1dc;
  int *local_1d8;
  int *local_1d4;
  int *local_1d0;
  int local_1cc;
  undefined4 *local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  int *local_1a0;
  undefined4 *local_19c;
  undefined4 *local_198;
  uint local_194;
  int local_190;
  int *local_18c;
  int *local_188;
  uint local_184;
  int *local_180;
  int local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 *local_170;
  int local_16c;
  undefined4 *local_168;
  uint local_164;
  undefined1 local_15d;
  uint local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  undefined1 *local_138;
  int *local_134;
  int *local_130;
  uint local_12c;
  int *local_128;
  undefined1 *local_124;
  int *local_120;
  undefined4 local_11c;
  uint *local_110;
  uint local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  uint local_ec;
  undefined1 *local_e8;
  int *local_e4;
  int *local_e0;
  uint local_dc;
  int *local_d8;
  undefined1 *local_d4;
  int *local_d0;
  undefined4 local_cc;
  uint *local_c0;
  uint local_bc;
  LPSTR local_b8;
  LPSTR local_b4;
  int local_b0;
  uint local_ac;
  HRSRC local_a8;
  LPCSTR local_a4;
  LPCSTR local_a0;
  LPCSTR local_9c;
  LPCSTR local_98;
  WORD local_92;
  HGLOBAL local_90;
  undefined4 local_8c;
  undefined2 local_7c;
  int local_70;
  undefined1 local_68 [8];
  int *local_60;
  undefined1 local_58 [8];
  int *local_50;
  undefined **local_48 [2];
  undefined1 local_40 [8];
  int *local_38;
  undefined **local_30 [2];
  undefined1 local_28 [8];
  int *local_20;
  LPSTR local_18;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x510454);
  uVar3 = 0;
  local_c = (undefined4 *)&DAT_00513d64;
  local_200 = &DAT_00513d64;
  local_70 = local_70 + 1;
  local_7c = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar11 = FUN_00487e08(puVar1,iVar11);
  if (iVar11 == 0) {
    local_92 = 0;
  }
  else {
    local_92 = *(WORD *)(iVar11 + 0x2f);
  }
  local_9c = (LPCSTR)((param_3 >> 4) + 1);
  local_98 = local_9c;
  hResInfo = FindResourceExA(*(HMODULE *)(param_2 + 8),(LPCSTR)0x6,local_9c,local_92);
  if (hResInfo == (HRSRC)0x0) {
    local_a4 = (LPCSTR)((param_3 >> 4) + 1);
    local_a0 = local_a4;
    hResInfo = FindResourceA(*(HMODULE *)(param_2 + 8),local_a4,(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar11 = FUN_004c0b38((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      local_7c = 0xec;
      FUN_004c0e0c(param_1,iVar11,param_3);
      local_7c = 0xf8;
      local_70 = local_70 + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          piVar4 = local_c + -3;
          if (piVar4 == &DAT_00513d58) {
            iVar11 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar11 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar11 = *piVar4 + 1;
          }
          if (iVar11 != 0) goto LAB_004c18c4;
        }
        local_1b4 = local_c + -3;
        local_1b8 = local_c + -3;
        operator_delete();
      }
LAB_004c18c4:
      *in_FS_OFFSET = local_8c;
      return param_1;
    }
  }
  else {
    local_a8 = hResInfo;
    local_90 = LoadResource(*(HMODULE *)(param_2 + 8),hResInfo);
    if (local_90 != (HGLOBAL)0x0) {
      puVar2 = LockResource(local_90);
      if (puVar2 != (ushort *)0x0) {
        local_ac = param_3 & 0xf;
        while( true ) {
          lpWideCharStr = (LPCWSTR)(puVar2 + 1);
          cchWideChar = (uint)*puVar2;
          uVar7 = local_ac - 1;
          if (local_ac == 0) break;
          puVar2 = (ushort *)((int)lpWideCharStr + cchWideChar * 2);
          local_ac = uVar7;
        }
        uVar3 = 0;
        local_ac = uVar7;
        if (cchWideChar != 0) {
          local_b0 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0);
          local_7c = 0x38;
          local_b8 = (LPSTR)operator_new_array();
          local_70 = local_70 + 1;
          local_7c = 0x2c;
          local_b4 = local_b8;
          local_18 = local_b8;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,local_b8,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if ((*(int *)&DAT_005140ac) - 0xeU < uVar3) {
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 1;
            puVar6 = &LAB_00408370;
            uVar5 = 0;
            local_7c = 0x50;
            local_c0 = (uint *)FUN_004dc320(local_2f8,
                                            PTR_s_invalid_string_size_parameter_in_00516d20);
            std::string::string_from_cstr((int)local_58,local_c0);
            local_70 = local_70 + 2;
            local_30[0] = &std::logic_error::vftable;
            local_cc = 0;
            local_20 = (int *)0x0;
            local_7c = 0x5c;
            if (local_50[-3] == -1 || local_50[-3] + 1 < 0) {
              local_dc = local_50[-1];
              local_e4 = std::string::__getRep(local_28,local_dc,local_dc);
              local_310 = local_e4 + 3;
              local_e8 = local_28;
              local_ec = local_dc;
              local_f0 = local_50;
              local_f4 = local_310;
              local_e0 = local_310;
              local_20 = local_310;
              memcpy(local_310,local_50,local_dc);
            }
            else {
              local_d0 = local_50;
              local_20 = local_50;
              local_d4 = local_28;
              local_d8 = local_50 + -3;
              if (local_d8 != &DAT_00513d58) {
                *local_d8 = *local_d8 + 1;
              }
            }
            local_7c = 0x50;
            local_30[0] = &std::length_error::vftable;
            local_70 = local_70 + 2;
            if (local_50 != (int *)0x0) {
              if (local_50[-3] != -1) {
                local_f8 = local_50 + -3;
                if (local_f8 == &DAT_00513d58) {
                  iVar11 = 1;
                }
                else if (local_f8 == &DAT_00513d58) {
                  iVar11 = 1;
                }
                else {
                  *local_f8 = *local_f8 + -1;
                  iVar11 = *local_f8 + 1;
                }
                if (iVar11 != 0) goto LAB_004c123a;
              }
              local_fc = local_50 + -3;
              local_100 = local_50 + -3;
              operator_delete();
              local_104 = 0;
              local_50 = (int *)0x0;
              local_108 = local_58;
              local_320 = 0;
            }
LAB_004c123a:
            local_7c = 0x44;
            FUN_004e7cc4((uint *)&DAT_00408314,(undefined4*)local_30,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar7 = 1;
              puVar6 = &LAB_004084c8;
              uVar5 = 0;
              local_7c = 0x80;
              local_110 = (uint *)FUN_004dc320(local_418,
                                               PTR_s_string_index_out_of_range_in_fun_00516d2c);
              std::string::string_from_cstr((int)local_68,local_110);
              local_70 = local_70 + 2;
              local_48[0] = &std::logic_error::vftable;
              local_11c = 0;
              local_38 = (int *)0x0;
              local_7c = 0x8c;
              if (local_60[-3] == -1 || local_60[-3] + 1 < 0) {
                local_12c = local_60[-1];
                local_134 = std::string::__getRep(local_40,local_12c,local_12c);
                local_144 = local_134 + 3;
                local_138 = local_40;
                local_13c = local_12c;
                local_140 = local_60;
                local_130 = local_144;
                local_38 = local_144;
                memcpy(local_144,local_60,local_12c);
              }
              else {
                local_120 = local_60;
                local_38 = local_60;
                local_124 = local_40;
                local_128 = local_60 + -3;
                if (local_128 != &DAT_00513d58) {
                  *local_128 = *local_128 + 1;
                }
              }
              local_7c = 0x80;
              local_48[0] = &std::out_of_range::vftable;
              local_70 = local_70 + 2;
              if (local_60 != (int *)0x0) {
                if (local_60[-3] != -1) {
                  local_148 = local_60 + -3;
                  if (local_148 == &DAT_00513d58) {
                    iVar11 = 1;
                  }
                  else if (local_148 == &DAT_00513d58) {
                    iVar11 = 1;
                  }
                  else {
                    *local_148 = *local_148 + -1;
                    iVar11 = *local_148 + 1;
                  }
                  if (iVar11 != 0) goto LAB_004c14cc;
                }
                local_14c = local_60 + -3;
                local_150 = local_60 + -3;
                operator_delete();
                local_154 = 0;
                local_60 = (int *)0x0;
                local_158 = local_68;
              }
LAB_004c14cc:
              local_7c = 0x44;
              FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_48,uVar5,puVar6,uVar7,uVar8,uVar9,uVar10);
            }
            local_15c = local_c[-1] - local_bc;
            local_15d = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            FUN_004cfad4((int)local_14,local_bc,local_164,(uint)&local_15d,0,0,0);
          }
          else {
            std::string::replace_fill((int)local_14,local_c[-1],0,local_bc - local_c[-1],0);
          }
          local_168 = local_c + -3;
          if (local_168 != &DAT_00513d58) {
            *local_168 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                FUN_004d48d8((int)local_14);
              }
              local_170 = local_c + -3;
              if (local_170 != &DAT_00513d58) {
                *local_170 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = local_b8[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          local_70 = local_70 + -1;
          operator_delete_array();
          local_7c = 0x20;
        }
      }
      FreeResource(local_90);
      if (uVar3 != 0) {
        local_7c = 0xbc;
        local_174 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
          local_184 = local_c[-1];
          local_18c = std::string::__getRep(param_1,local_184,local_184);
          local_188 = local_18c + 3;
          *(int **)(param_1 + 8) = local_188;
          local_190 = param_1;
          local_194 = local_184;
          local_198 = local_c;
          local_19c = *(undefined4 **)(param_1 + 8);
          memcpy(local_19c,local_c,local_184);
        }
        else {
          local_178 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          local_17c = param_1;
          local_180 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (local_180 != &DAT_00513d58) {
            *local_180 = *local_180 + 1;
          }
        }
        local_7c = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            local_1a0 = local_c + -3;
            if (local_1a0 == &DAT_00513d58) {
              iVar11 = 1;
            }
            else if (local_1a0 == &DAT_00513d58) {
              iVar11 = 1;
            }
            else {
              *local_1a0 = *local_1a0 + -1;
              iVar11 = *local_1a0 + 1;
            }
            if (iVar11 != 0) goto LAB_004c17d9;
          }
          local_1a4 = local_c + -3;
          local_1a8 = local_c + -3;
          operator_delete();
        }
LAB_004c17d9:
        *in_FS_OFFSET = local_8c;
        return param_1;
      }
    }
  }
  local_7c = 0x110;
  local_1c4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar3 = local_c[-1];
    local_1d8 = std::string::__getRep(param_1,uVar3,uVar3);
    local_1d4 = local_1d8 + 3;
    *(int **)(param_1 + 8) = local_1d4;
    local_1dc = param_1;
    local_1e4 = local_c;
    local_1e8 = *(undefined4 **)(param_1 + 8);
    local_1e0 = uVar3;
    memcpy(local_1e8,local_c,uVar3);
  }
  else {
    local_1c8 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_1cc = param_1;
    local_1d0 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_1d0 != &DAT_00513d58) {
      *local_1d0 = *local_1d0 + 1;
    }
  }
  local_7c = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar11 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar11 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar11 = *piVar4 + 1;
      }
      if (iVar11 != 0) goto LAB_004c1a7c;
    }
    local_1ec = local_c + -3;
    local_1f0 = local_c + -3;
    operator_delete();
  }
LAB_004c1a7c:
  *in_FS_OFFSET = local_8c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1a9c  FUN_004c1a9c   (73 bytes)   [unnamed]
HACCEL __cdecl FUN_004c1a9c(int param_1,LPCSTR param_2)

{
  HACCEL pHVar1;
  int iVar2;
  
  pHVar1 = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HACCEL)0x0) {
    iVar2 = FUN_004c0b38(param_2,(LPCSTR)0x9);
    if (iVar2 != 0) {
      pHVar1 = FUN_004c1a9c(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1ae8  FUN_004c1ae8   (73 bytes)   [unnamed]
HMENU __cdecl FUN_004c1ae8(int param_1,LPCSTR param_2)

{
  HMENU pHVar1;
  int iVar2;
  
  pHVar1 = LoadMenuA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HMENU)0x0) {
    iVar2 = FUN_004c0b38(param_2,(LPCSTR)0x4);
    if (iVar2 != 0) {
      pHVar1 = FUN_004c1ae8(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1b34  FUN_004c1b34   (73 bytes)   [unnamed]
HCURSOR __cdecl FUN_004c1b34(int param_1,LPCSTR param_2)

{
  HCURSOR pHVar1;
  int iVar2;
  
  pHVar1 = LoadCursorA(*(HINSTANCE *)(param_1 + 8),param_2);
  if (pHVar1 == (HCURSOR)0x0) {
    iVar2 = FUN_004c0b38(param_2,(LPCSTR)0x1);
    if (iVar2 != 0) {
      pHVar1 = FUN_004c1b34(iVar2,param_2);
      return pHVar1;
    }
  }
  return pHVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1b80  FUN_004c1b80   (685 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004c1be3) */
int * __cdecl FUN_004c1b80(int *param_1,int param_2,LPCSTR param_3)

{
  uint *puVar1;
  uint uVar2;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x5105d4);
  pFVar3 = GetProcAddress(*(HMODULE *)(param_2 + 8),param_3);
  *param_1 = (int)pFVar3;
  if (*param_1 != 0) goto LAB_004c1e1a;
  local_c = &DAT_00513d64;
  if ((short)((uint)param_3 >> 0x10) == 0) {
    FUN_0048f35c((int)local_34,0x7ff4,(uint)param_3 & 0xffff,DAT_00512a1c);
    FUN_004cf384((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004c1d68;
      }
      operator_delete();
      local_2c = 0;
    }
  }
  else {
    FUN_0048f258((int)local_24,0x7ff5,param_3,DAT_00512a1c);
    FUN_004cf384((int)local_14,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_004c1d68;
      }
      operator_delete();
      local_1c = 0;
    }
  }
LAB_004c1d68:
  puVar1 = *(uint **)(param_2 + 4);
  uVar2 = *(uint *)(local_c + -4);
  pcVar5 = strlen(puVar1);
  FUN_004cfad4((int)local_14,uVar2,0,(uint)puVar1,(uint)pcVar5,0,(uint)pcVar5);
  FUN_0048f024((int)local_14,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004c1e1a;
    }
    operator_delete();
  }
LAB_004c1e1a:
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1e30  FUN_004c1e30   (95 bytes)   [unnamed]
undefined * __stdcall FUN_004c1e30(void)

{
  HMODULE pHVar1;
  undefined4 *in_FS_OFFSET;
  char cVar2;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51064c);
  if (DAT_00510005 == '\0') {
    cVar2 = '\0';
    pHVar1 = GetModuleHandleA("USER32");
    FUN_004c09ac((undefined4 *)&DAT_0051b8dc,(uint *)"USER32",pHVar1,cVar2);
    DAT_00510005 = DAT_00510005 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b8dc;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1e90  FUN_004c1e90   (62 bytes)   [unnamed]
undefined4 __stdcall FUN_004c1e90(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00510006 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8e9,(int)puVar1,"LoadIconA");
    DAT_00510006 = DAT_00510006 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b8e9)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1ed0  FUN_004c1ed0   (56 bytes)   [unnamed]
void __stdcall FUN_004c1ed0(void)

{
  undefined *puVar1;
  
  if (DAT_00510007 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8ed,(int)puVar1,"DestroyIcon");
    DAT_00510007 = DAT_00510007 + '\x01';
  }
  ((code *)DAT_0051b8ed)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1f08  FUN_004c1f08   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_004c1f08(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00510008 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8f1,(int)puVar1,"GetClassInfoA");
    DAT_00510008 = DAT_00510008 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b8f1)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1f4c  FUN_004c1f4c   (91 bytes)   [unnamed]
undefined4 __stdcall FUN_004c1f4c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00510009 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8f5,(int)puVar1,"GetMenuStringA");
    DAT_00510009 = DAT_00510009 + '\x01';
  }
  uVar2 = ((code *)DAT_0051b8f5)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1fa8  FUN_004c1fa8   (231 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c1fa8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x510680);
  uVar3 = 0;
  FUN_0048f258((int)local_14,0x7ff8,param_2,DAT_00512a1c);
  FUN_0048ed28(param_1,(int)local_14,uVar3);
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
      if (iVar1 != 0) goto LAB_004c2066;
    }
    operator_delete();
  }
LAB_004c2066:
  *param_1 = &OWL::TXInvalidModule::vftable;
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c225c  FUN_004c225c   (83 bytes)   [unnamed]
void __cdecl FUN_004c225c(undefined4 param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x51071c);
  piVar1 = FUN_004c1fa8(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c23f4  FUN_004c23f4   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004c23f4(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510778);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2444  FUN_004c2444   (45 bytes)   [unnamed]
void __cdecl FUN_004c2444(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2474  FUN_004c2474   (86 bytes)   [unnamed]
void __stdcall FUN_004c2474(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x51079c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c2694;
  puVar1 = FUN_004dd5cc(1,0,0x469dc4);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b944,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c24ca  FUN_004c24ca   (48 bytes)   [unnamed]
void __stdcall FUN_004c24ca(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5107b0);
  OWL::TStreamableClass::_dtor(0x51b944,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c24fc  FUN_004c24fc   (102 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c24fc(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5107b8);
  *param_1 = &OWL::TStreamer::vftable;
  param_1[1] = param_2;
  *param_1 = &OWL::TNewStreamer::vftable;
  *param_1 = &OWL::TModule::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_004dd744((int)param_2,iVar2,(int *)&DAT_004027f0,(int *)&DAT_00469dc4,0);
  param_1[2] = puVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2564  FUN_004c2564   (62 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c2564(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5107d0);
  *param_1 = &OWL::TStreamableBase::vftable;
  *param_1 = &OWL::TModule::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c25a4  FUN_004c25a4   (78 bytes)   [unnamed]
int * __cdecl FUN_004c25a4(int *param_1,undefined4 *param_2)

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
  puVar2 = FUN_004dd744((int)local_8,iVar1,(int *)&DAT_004027f0,(int *)&DAT_00469dc4,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c25f4  FUN_004c25f4   (26 bytes)   [unnamed]
int * __cdecl FUN_004c25f4(int *param_1,int *param_2)

{
  FUN_0049a490(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2694  FUN_004c2694   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c2694(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x510804);
  puVar1 = (undefined4 *)operator_new();
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_1 == (int *)0x0) && (param_1 = (int *)operator_new(), param_1 != (int *)0x0)) {
      FUN_004c2564(param_1);
    }
    FUN_004c24fc(puVar1,param_1);
  }
  *in_FS_OFFSET = local_30;
  return puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c279c  FUN_004c279c   (191 bytes)   [unnamed]
uint * __cdecl FUN_004c279c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510874);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_8;
  param_1[6] = param_5;
  param_1[7] = param_6;
  if (param_7 == 0) {
    param_7 = 0x104;
  }
  param_1[8] = param_7;
  param_1[9] = param_9;
  uVar3 = operator_new_array();
  param_1[2] = uVar3;
  pcVar1 = (char *)param_1[2];
  *pcVar1 = '\0';
  FUN_004c28b8(pcVar1,param_1,param_1,(int)param_1,param_3);
  *param_1 = *param_1 | 0x200000;
  bVar2 = FUN_004875a8();
  if (bVar2) {
    *param_1 = *param_1 | 0x80000;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c28b8  FUN_004c28b8   (179 bytes)   [unnamed]
char * FUN_004c28b8(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *local_8;
  
  if (param_5 != (uint *)0x0) {
    operator_delete_array();
    pcVar1 = thunk_FUN_004dc924((char *)param_5,'|');
    puVar4 = param_5;
    if (pcVar1 == (char *)0x0) {
      for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1))) {
        pcVar1 = strlen(puVar4);
      }
      uVar3 = operator_new_array();
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      param_1 = (char *)memcpy(*(undefined4 **)(param_4 + 0xc),param_5,
                                     (int)puVar4 + (1 - (int)param_5));
    }
    else {
      pcVar1 = strlen(param_5);
      pcVar2 = (char *)operator_new_array();
      pcVar2 = FUN_004dc9c4(pcVar2,(char *)param_5);
      *(char **)(param_4 + 0xc) = pcVar2;
      param_1 = *(char **)(param_4 + 0xc);
      param_1[(int)(pcVar1 + 1)] = '\0';
    }
  }
  if (*(int *)(param_4 + 0xc) != 0) {
    param_1 = *(char **)(param_4 + 0xc);
    for (local_8 = *(char **)(param_4 + 0xc); *local_8 != '\0'; local_8 = local_8 + 1) {
      if (*local_8 == '|') {
        *local_8 = '\0';
      }
      param_1 = local_8;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c29b4  FUN_004c29b4   (217 bytes)   [unnamed]
void __cdecl FUN_004c29b4(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((*(UINT *)&DAT_005108a0) == 0) {
    (*(UINT *)&DAT_005108a0) = RegisterWindowMessageA("commdlg_ShareViolation");
  }
  memset(param_1 + 7,0,0x58);
  puVar1 = FUN_0048751c();
  if (*(uint *)(puVar1 + 4) < 5) {
    iVar2 = 0x4c;
  }
  else {
    iVar2 = 0x58;
  }
  param_1[7] = iVar2;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0x14] = *(uint *)param_1[0x1d] | 0x20;
  if (param_2 == 0) {
    param_1[0x14] = param_1[0x14] & 0xffffffbf;
  }
  else {
    param_1[0x19] = param_2;
    param_1[0x14] = param_1[0x14] | 0x40;
  }
  param_1[0x1c] = *(int *)(param_1[0x1d] + 0x24);
  param_1[0x18] = 0;
  param_1[10] = *(int *)(param_1[0x1d] + 0xc);
  param_1[0xd] = *(int *)(param_1[0x1d] + 0x14);
  param_1[0xe] = *(int *)(param_1[0x1d] + 8);
  param_1[0xf] = *(int *)(param_1[0x1d] + 0x20);
  param_1[0x12] = *(int *)(param_1[0x1d] + 0x18);
  param_1[0x16] = *(int *)(param_1[0x1d] + 0x1c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2ab4  FUN_004c2ab4   (347 bytes)   [unnamed]
int * __cdecl FUN_004c2ab4(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5108b4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
  FUN_0048c514(param_1,1,param_3,0,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
  param_1[3] = (int)&OWL::TOpenSaveDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00510b4c;
  *(undefined ***)param_1[2] = &PTR_LAB_00510b58;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00510b64;
  param_1[0x1d] = param_4;
  FUN_004c29b4(param_1,param_5);
  param_1[0x13] = param_6;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2c5c  FUN_004c2c5c   (309 bytes)   [unnamed]
int * __cdecl FUN_004c2c5c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5108d8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004c2ab4(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFileOpenDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00510a58;
  *(undefined ***)param_1[2] = &PTR_LAB_00510a64;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00510a70;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c2e14  FUN_004c2e14   (309 bytes)   [unnamed]
int * __cdecl FUN_004c2e14(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6, int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x5108fc);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x22);
    param_1[0x22] = (int)(param_1 + 0x1f);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[1] = (int)(param_1 + 0x1f);
    param_1[2] = (int)(param_1 + 0x20);
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = (int)&OWL::TEventHandler::vftable;
    param_1[0x20] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x22,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004c2ab4(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&OWL::TFileSaveDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00510964;
  *(undefined ***)param_1[2] = &PTR_LAB_00510970;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0051097c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3390  FUN_004c3390   (1274 bytes)   [unnamed]
int * __cdecl FUN_004c3390(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6, int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 local_28;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x510c1c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x122;
    *(int *)((int)param_1 + 0x122) = (int)param_1 + 0x116;
    *(int *)((int)param_1 + 0x126) = (int)param_1 + 0x11a;
    param_1[1] = (int)param_1 + 0x116;
    param_1[2] = (int)param_1 + 0x11a;
    *(undefined4 *)((int)param_1 + 0x112) = 0;
    *(undefined4 *)((int)param_1 + 0x11e) = 0;
    *(undefined ***)((int)param_1 + 0x116) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x11a) = &OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x122),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xf6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xf6;
  FUN_0048c514(param_1,1,param_3,param_7,param_8);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xf6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xf6;
  param_1[3] = (int)&OWL::TPrintDialog::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_00510cd4;
  *(undefined ***)param_1[2] = &PTR_LAB_00510ce0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00510cec;
  *(undefined4 *)((int)param_1 + 0x10e) = param_4;
  memset(param_1 + 7,0,0x42);
  param_1[7] = 0x42;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0xc] = **(uint **)((int)param_1 + 0x10e) | 0x3000;
  param_1[0xc] = param_1[0xc] & 0xfffffbff;
  if (param_5 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffffbfff;
  }
  else {
    *(int *)((int)param_1 + 0x4e) = param_5;
    param_1[0xc] = param_1[0xc] | 0x4000;
  }
  if (param_6 == 0) {
    param_1[0xc] = param_1[0xc] & 0xffff7fff;
  }
  else {
    *(int *)((int)param_1 + 0x52) = param_6;
    param_1[0xc] = param_1[0xc] | 0x8000;
  }
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 8);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0xc);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0x10);
  *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0x14);
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(*(int *)((int)param_1 + 0x10e) + 0x18);
  memset((undefined4 *)((int)param_1 + 0x5e),0,0x54);
  *(undefined4 *)((int)param_1 + 0x5e) = 0x54;
  if (*(int *)(*param_1 + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  *(undefined4 *)((int)param_1 + 0x62) = uVar3;
  *(undefined4 *)((int)param_1 + 0x9a) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  *(uint *)((int)param_1 + 0x6e) = *(uint *)(*(int *)((int)param_1 + 0x10e) + 0x1c) | 0x42000;
  if (param_6 == 0) {
    *(uint *)((int)param_1 + 0x6e) = *(uint *)((int)param_1 + 0x6e) & 0xffff7fff;
  }
  else {
    *(int *)((int)param_1 + 0xaa) = param_6;
    *(uint *)((int)param_1 + 0x6e) = *(uint *)((int)param_1 + 0x6e) | 0x8000;
  }
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x20);
  *(undefined4 *)((int)param_1 + 0x76) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x24);
  puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x28);
  puVar5 = (undefined4 *)((int)param_1 + 0x7a);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x38);
  puVar5 = (undefined4 *)((int)param_1 + 0x8a);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  memset((undefined4 *)((int)param_1 + 0xb2),0,0x54);
  *(undefined4 *)((int)param_1 + 0xb2) = 0x54;
  if (*(int *)(*param_1 + 0x6c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x6c) + 0x2b);
  }
  if (iVar2 == 0) {
    if (*(int *)(*param_1 + 0x6c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*param_1 + 0x6c) + 0x2b);
    }
  }
  else {
    if (*(int *)(*param_1 + 0x6c) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)(*(int *)(*param_1 + 0x6c) + 0x2b);
    }
    iVar2 = *piVar1;
  }
  if (*(int *)(*param_1 + 0x14) == 0) {
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  *(undefined4 *)((int)param_1 + 0xb6) = uVar3;
  *(undefined4 *)((int)param_1 + 0xea) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  *(undefined4 *)((int)param_1 + 0xc6) = **(undefined4 **)((int)param_1 + 0x10e);
  *(uint *)((int)param_1 + 0xc6) = *(uint *)((int)param_1 + 0xc6) & 0xfffffbff;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xfe) = 0xffffffff;
  if (param_5 == 0) {
    *(uint *)((int)param_1 + 0xc6) = *(uint *)((int)param_1 + 0xc6) & 0xffffbfff;
    *(undefined4 *)((int)param_1 + 0xea) = 0;
  }
  else {
    *(int *)((int)param_1 + 0xee) = param_5;
    *(uint *)((int)param_1 + 0xc6) = *(uint *)((int)param_1 + 0xc6) | 0x4000;
    if (param_8 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
    }
    else {
      uVar3 = *(undefined4 *)(param_8 + 8);
    }
    *(undefined4 *)((int)param_1 + 0xea) = uVar3;
  }
  *(undefined4 *)((int)param_1 + 0xd6) = 1;
  *(int *)((int)param_1 + 0xda) = (int)param_1 + 0x106;
  **(uint **)((int)param_1 + 0xda) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 8);
  *(uint *)(*(int *)((int)param_1 + 0xda) + 4) =
       (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0xc);
  *(uint *)((int)param_1 + 0xde) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0x10);
  *(uint *)((int)param_1 + 0xe2) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0x14);
  *(uint *)((int)param_1 + 0xe6) = (uint)*(ushort *)(*(int *)((int)param_1 + 0x10e) + 0x18);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3c90  FUN_004c3c90   (82 bytes)   [unnamed]
bool __cdecl FUN_004c3c90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
  uVar1 = *(undefined4 *)(param_1 + 0xc6);
  *(undefined4 *)(param_1 + 0xc6) = 0x400;
  FUN_004c3ec0(*(int *)(param_1 + 0x10e));
  FUN_004c3eec(*(int *)(param_1 + 0x10e));
  iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 0xc6) = uVar1;
  return iVar2 == 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3ce4  FUN_004c3ce4   (219 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c3ce4(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510c40);
  *param_1 = 0x10;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3e40  FUN_004c3e40   (59 bytes)   [unnamed]
void __cdecl FUN_004c3e40(int param_1)

{
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x4a) == 0) {
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  else {
    pvVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 0x4a));
    *(LPVOID *)(param_1 + 0x56) = pvVar1;
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    pvVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 0x4e));
    *(LPVOID *)(param_1 + 0x5a) = pvVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3e7c  FUN_004c3e7c   (67 bytes)   [unnamed]
void __cdecl FUN_004c3e7c(int param_1)

{
  if (*(int *)(param_1 + 0x4a) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4a));
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4e));
    *(undefined4 *)(param_1 + 0x5a) = 0;
  }
  if (*(int *)(param_1 + 0x52) != 0) {
    DeleteDC(*(HDC *)(param_1 + 0x52));
    *(undefined4 *)(param_1 + 0x52) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3ec0  FUN_004c3ec0   (42 bytes)   [unnamed]
void __cdecl FUN_004c3ec0(int param_1)

{
  if (*(int *)(param_1 + 0x4a) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4a));
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4a));
    *(undefined4 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3eec  FUN_004c3eec   (42 bytes)   [unnamed]
void __cdecl FUN_004c3eec(int param_1)

{
  if (*(int *)(param_1 + 0x4e) != 0) {
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4e));
    GlobalFree(*(HGLOBAL *)(param_1 + 0x4e));
    *(undefined4 *)(param_1 + 0x4e) = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3f18  FUN_004c3f18   (29 bytes)   [unnamed]
int __cdecl FUN_004c3f18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5a) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)**(ushort **)(param_1 + 0x5a) + *(int *)(param_1 + 0x5a);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3f38  FUN_004c3f38   (30 bytes)   [unnamed]
int __cdecl FUN_004c3f38(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5a) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x5a) + 2) + *(int *)(param_1 + 0x5a);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3f58  FUN_004c3f58   (30 bytes)   [unnamed]
int __cdecl FUN_004c3f58(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5a) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x5a) + 4) + *(int *)(param_1 + 0x5a);
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3f78  FUN_004c3f78   (249 bytes)   [unnamed]
void __cdecl FUN_004c3f78(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  
  FUN_004c3eec(param_1);
  if (((param_2 != (uint *)0x0) && (param_3 != (uint *)0x0)) && (param_4 != (uint *)0x0)) {
    pcVar1 = strlen(param_2);
    pcVar2 = strlen(param_3);
    pcVar3 = strlen(param_4);
    pvVar4 = GlobalAlloc(0x42,(SIZE_T)(pcVar1 + (int)pcVar2 + (int)pcVar3 + 0xb));
    *(HGLOBAL *)(param_1 + 0x4e) = pvVar4;
    pvVar5 = GlobalLock(*(HGLOBAL *)(param_1 + 0x4e));
    *(LPVOID *)(param_1 + 0x5a) = pvVar5;
    pcVar1 = (char *)(*(int *)(param_1 + 0x5a) + 8);
    **(short **)(param_1 + 0x5a) = (short)pcVar1 - (short)*(undefined4 *)(param_1 + 0x5a);
    if (param_2 != (uint *)0x0) {
      for (; (char)*param_2 != '\0'; param_2 = (uint *)((int)param_2 + 1)) {
        *pcVar1 = (char)*param_2;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
    *(short *)(*(int *)(param_1 + 0x5a) + 2) =
         (short)pcVar1 - (short)*(undefined4 *)(param_1 + 0x5a);
    if (param_3 != (uint *)0x0) {
      for (; (char)*param_3 != '\0'; param_3 = (uint *)((int)param_3 + 1)) {
        *pcVar1 = (char)*param_3;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
    *(short *)(*(int *)(param_1 + 0x5a) + 4) =
         (short)pcVar1 - (short)*(undefined4 *)(param_1 + 0x5a);
    if (param_4 != (uint *)0x0) {
      for (; (char)*param_4 != '\0'; param_4 = (uint *)((int)param_4 + 1)) {
        *pcVar1 = (char)*param_4;
        pcVar1 = pcVar1 + 1;
      }
    }
    *pcVar1 = '\0';
    *(undefined2 *)(*(int *)(param_1 + 0x5a) + 6) = 0;
  }
  return;
}

} // namespace tea
