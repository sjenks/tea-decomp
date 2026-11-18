// TEA.exe — runtime / library code "code_0x004c0000"
// 49 functions, 0x004c00dc..0x004c3f78. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c00dc  FUN_004c00dc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c00dc(int *param_1)

{
  undefined4 *streamer;
  int *listBox;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ff6c);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      listBox = (int *)operator_new();
      if (listBox == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TListBox::TListBox_4bff9c(listBox,0);
        param_1 = (int *)listBox[2];
      }
    }
    OWL::TListBox::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0384  FUN_004c0384   (110 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004c03c2) */
DWORD * __cdecl FUN_004c0384(DWORD *param_1)

{
  DWORD lastError;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5101b0);
  param_1[3] = 0;
  param_1[3] = (DWORD)&g_emptyStringData;
  lastError = GetLastError();
  *param_1 = lastError;
  FUN_004c0418(param_1,0);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0418  FUN_004c0418   (120 bytes)   [unnamed]
void __cdecl FUN_004c0418(DWORD *param_1,ushort languageId)

{
  DWORD DVar1;
  uint local_10c [65];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*param_1,(uint)languageId,(LPSTR)&local_8,0,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    wsprintfA((LPSTR)local_10c,"Error: %#X occurred (no further info)",*param_1);
    std::string::assign_cstr((int)(param_1 + 1),local_10c);
  }
  else {
    std::string::assign_cstr((int)(param_1 + 1),local_8);
    LocalFree(local_8);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0490  FUN_004c0490   (155 bytes)   [unnamed]
undefined4 __cdecl FUN_004c0490(int param_1)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
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
    *sehChainHead = local_2c;
  }
  else {
    *sehChainHead = local_2c;
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
  undefined4 mem;
  
  if (*(int *)(param_1 + 9) == 0) {
    mem = malloc();
    *(undefined4 *)(param_1 + 9) = mem;
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
  uint *sehChainHead;
  bool bVar3;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x510214);
  uVar1 = FUN_004c07ac(param_1);
  if ((char)uVar1 == '\0') {
    *sehChainHead = local_2c;
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
    *sehChainHead = local_2c;
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
undefined4 __cdecl FUN_004c07e4(LPCSTR name,LPCSTR type)

{
  undefined4 *puVar1;
  int iVar2;
  HRSRC hResource;
  WORD wLanguage;
  int iVar4;
  int i;
  int j;
  
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
    for (j = 0; iVar2 = DAT_005101d0, j < *(int *)(iVar4 + 1); j = j + 1) {
      hResource = FindResourceExA(*(HMODULE *)(*(int *)(*(int *)(iVar4 + 9) + j * 4) + 8),type
                               ,name,wLanguage);
      if (hResource != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar4 + 9) + j * 4);
      }
    }
    for (i = 0; i < *(int *)(iVar2 + 1); i = i + 1) {
      hResource = FindResourceA(*(HMODULE *)(*(int *)(*(int *)(iVar2 + 9) + i * 4) + 8),name,
                             type);
      if (hResource != (HRSRC)0x0) {
        return *(undefined4 *)(*(int *)(iVar2 + 9) + i * 4);
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0b38  FUN_004c0b38   (25 bytes)   [unnamed]
undefined4 __cdecl FUN_004c0b38(LPCSTR name,LPCSTR type)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c07e4(name,type);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0b54  FUN_004c0b54   (155 bytes)   [unnamed]
void __cdecl FUN_004c0b54(int param_1,uint *param_2)

{
  uint *lpFilename;
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c0bf0  FUN_004c0bf0   (88 bytes)   [unnamed]
void __cdecl FUN_004c0bf0(int param_1,undefined4 param_2)

{
  int i;
  char *pcVar2;
  CHAR *pCVar3;
  CHAR string_ [28];
  CHAR local_18 [20];
  
  FUN_004c0cc4(param_1,param_2);
  if ((*(UINT *)&DAT_0050b5c4) == 0) {
    pcVar2 = "GetWindowPtr(%X)";
    pCVar3 = local_18;
    for (i = 4; i != 0; i = i + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = *pcVar2;
    wsprintfA(string_,local_18,param_2);
    (*(UINT *)&DAT_0050b5c4) = RegisterWindowMessageA(string_);
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
int __cdecl FUN_004c0cd4(int param_1,uint param_2,LPSTR multiByteStr,int multiByte)

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
      iVar4 = FUN_004c0cd4(iVar4,param_2,multiByteStr,multiByte);
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
           (iVar4 = WideCharToMultiByte(0,0,(LPCWSTR)(puVar2 + 1),cchWideChar,multiByteStr,multiByte,
                                        (LPCSTR)0x0,(LPBOOL)0x0), iVar4 != 0)) {
          multiByteStr[iVar4] = '\0';
        }
      }
      FreeResource(hResData);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  if (multiByte != 0) {
    *multiByteStr = '\0';
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
  int *strRep;
  LPCWSTR lpWideCharStr;
  undefined4 *sehChainHead;
  undefined4 objectDtor;
  undefined *copyCtor;
  uint uVar7;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  int iVar11;
  undefined1 exceptMsg [248];
  undefined4 unused;
  int *newData;
  undefined1 exceptMsg2 [248];
  undefined *unused2;
  undefined4 *unused3;
  undefined4 *unused4;
  undefined4 *dest;
  undefined4 *unused5;
  uint unused6;
  int unused7;
  int *newRep;
  int *newData2;
  int *strRep2;
  int unused8;
  undefined4 *unused9;
  undefined4 unused10;
  undefined4 *unused11;
  undefined4 *unused12;
  undefined4 *unused13;
  undefined4 *unused14;
  int *strRep3;
  undefined4 *dest2;
  undefined4 *unused15;
  uint unused16;
  int unused17;
  int *newRep2;
  int *newData3;
  uint len;
  int *strRep4;
  int unused18;
  undefined4 *unused19;
  undefined4 unused20;
  undefined4 *strRep5;
  int local_16c;
  undefined4 *strRep6;
  uint local_164;
  undefined1 s;
  uint local_15c;
  undefined1 *unused21;
  undefined4 unused22;
  int *unused23;
  int *unused24;
  int *strRep7;
  int *newData4;
  int *unused25;
  uint unused26;
  undefined1 *unused27;
  int *newRep3;
  int *unused28;
  uint len2;
  int *strRep8;
  undefined1 *unused29;
  int *unused30;
  undefined4 unused31;
  uint *msgText;
  uint local_10c;
  undefined1 *unused32;
  undefined4 unused33;
  int *unused34;
  int *unused35;
  int *strRep9;
  int *unused36;
  int *unused37;
  uint unused38;
  undefined1 *unused39;
  int *newRep4;
  int *unused40;
  uint len3;
  int *strRep10;
  undefined1 *unused41;
  int *unused42;
  undefined4 unused43;
  uint *msgText2;
  uint local_bc;
  LPSTR multiByteStr;
  LPSTR unused44;
  int local_b0;
  uint local_ac;
  HRSRC unused45;
  LPCSTR name;
  LPCSTR unused46;
  LPCSTR name2;
  LPCSTR unused47;
  WORD language;
  HGLOBAL hGlobal;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  int *str4;
  undefined1 str2 [8];
  int *str5;
  undefined **outOfRange [2];
  undefined1 newStr [8];
  int *unused48;
  undefined **lengthError [2];
  undefined1 newStr2 [8];
  int *unused49;
  LPSTR unused50;
  undefined1 str3 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x510454);
  uVar3 = 0;
  local_c = (undefined4 *)&g_emptyStringData;
  unused2 = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  iVar11 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar11 = FUN_00487e08(puVar1,iVar11);
  if (iVar11 == 0) {
    language = 0;
  }
  else {
    language = *(WORD *)(iVar11 + 0x2f);
  }
  name2 = (LPCSTR)((param_3 >> 4) + 1);
  unused47 = name2;
  hResInfo = FindResourceExA(*(HMODULE *)(param_2 + 8),(LPCSTR)0x6,name2,language);
  if (hResInfo == (HRSRC)0x0) {
    name = (LPCSTR)((param_3 >> 4) + 1);
    unused46 = name;
    hResInfo = FindResourceA(*(HMODULE *)(param_2 + 8),name,(LPCSTR)0x6);
  }
  if (hResInfo == (HRSRC)0x0) {
    iVar11 = FUN_004c0b38((LPCSTR)((param_3 >> 4) + 1),(LPCSTR)0x6);
    if (iVar11 != 0) {
      ehContext = 0xec;
      FUN_004c0e0c(param_1,iVar11,param_3);
      ehContext = 0xf8;
      ehDtorCount = ehDtorCount + -1;
      if (local_c != (undefined4 *)0x0) {
        if (local_c[-3] != -1) {
          strRep = local_c + -3;
          if (strRep == &g_nullStringRep) {
            iVar11 = 1;
          }
          else if (strRep == &g_nullStringRep) {
            iVar11 = 1;
          }
          else {
            *strRep = *strRep + -1;
            iVar11 = *strRep + 1;
          }
          if (iVar11 != 0) goto LAB_004c18c4;
        }
        unused12 = local_c + -3;
        unused11 = local_c + -3;
        operator_delete();
      }
LAB_004c18c4:
      *sehChainHead = sehPrevFrame;
      return param_1;
    }
  }
  else {
    unused45 = hResInfo;
    hGlobal = LoadResource(*(HMODULE *)(param_2 + 8),hResInfo);
    if (hGlobal != (HGLOBAL)0x0) {
      puVar2 = LockResource(hGlobal);
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
          ehContext = 0x38;
          multiByteStr = (LPSTR)operator_new_array();
          ehDtorCount = ehDtorCount + 1;
          ehContext = 0x2c;
          unused44 = multiByteStr;
          unused50 = multiByteStr;
          uVar3 = WideCharToMultiByte(0,0,lpWideCharStr,cchWideChar,multiByteStr,local_b0 + 1,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          local_bc = uVar3;
          if ((*(int *)&g_stringNpos) - 0xeU < uVar3) {
            throwLine = 0;
            throwFile = 0;
            throwFlags = 0;
            uVar7 = 1;
            copyCtor = &LAB_00408370;
            objectDtor = 0;
            ehContext = 0x50;
            msgText2 = (uint *)__rwstd::except_msg_string::format(exceptMsg2,
                                            PTR_s_invalid_string_size_parameter_in_00516d20);
            std::string::string_from_cstr((int)str2,msgText2);
            ehDtorCount = ehDtorCount + 2;
            lengthError[0] = &std::logic_error::vftable;
            unused43 = 0;
            unused49 = (int *)0x0;
            ehContext = 0x5c;
            if (str5[-3] == -1 || str5[-3] + 1 < 0) {
              len3 = str5[-1];
              newRep4 = std::string::__getRep(newStr2,len3,len3);
              newData = newRep4 + 3;
              unused39 = newStr2;
              unused38 = len3;
              unused37 = str5;
              unused36 = newData;
              unused40 = newData;
              unused49 = newData;
              memcpy(newData,str5,len3);
            }
            else {
              unused42 = str5;
              unused49 = str5;
              unused41 = newStr2;
              strRep10 = str5 + -3;
              if (strRep10 != &g_nullStringRep) {
                *strRep10 = *strRep10 + 1;
              }
            }
            ehContext = 0x50;
            lengthError[0] = &std::length_error::vftable;
            ehDtorCount = ehDtorCount + 2;
            if (str5 != (int *)0x0) {
              if (str5[-3] != -1) {
                strRep9 = str5 + -3;
                if (strRep9 == &g_nullStringRep) {
                  iVar11 = 1;
                }
                else if (strRep9 == &g_nullStringRep) {
                  iVar11 = 1;
                }
                else {
                  *strRep9 = *strRep9 + -1;
                  iVar11 = *strRep9 + 1;
                }
                if (iVar11 != 0) goto LAB_004c123a;
              }
              unused35 = str5 + -3;
              unused34 = str5 + -3;
              operator_delete();
              unused33 = 0;
              str5 = (int *)0x0;
              unused32 = str2;
              unused = 0;
            }
LAB_004c123a:
            ehContext = 0x44;
            _ThrowExceptionLDTC((uint *)&DAT_00408314,(undefined4*)lengthError,objectDtor,copyCtor,uVar7,throwFlags,throwFile,throwLine);
          }
          if (local_bc < (uint)local_c[-1]) {
            local_10c = local_c[-1] - local_bc;
            if ((uint)local_c[-1] < local_bc) {
              throwLine = 0;
              throwFile = 0;
              throwFlags = 0;
              uVar7 = 1;
              copyCtor = &LAB_004084c8;
              objectDtor = 0;
              ehContext = 0x80;
              msgText = (uint *)__rwstd::except_msg_string::format(exceptMsg,
                                               PTR_s_string_index_out_of_range_in_fun_00516d2c);
              std::string::string_from_cstr((int)str,msgText);
              ehDtorCount = ehDtorCount + 2;
              outOfRange[0] = &std::logic_error::vftable;
              unused31 = 0;
              unused48 = (int *)0x0;
              ehContext = 0x8c;
              if (str4[-3] == -1 || str4[-3] + 1 < 0) {
                len2 = str4[-1];
                newRep3 = std::string::__getRep(newStr,len2,len2);
                newData4 = newRep3 + 3;
                unused27 = newStr;
                unused26 = len2;
                unused25 = str4;
                unused28 = newData4;
                unused48 = newData4;
                memcpy(newData4,str4,len2);
              }
              else {
                unused30 = str4;
                unused48 = str4;
                unused29 = newStr;
                strRep8 = str4 + -3;
                if (strRep8 != &g_nullStringRep) {
                  *strRep8 = *strRep8 + 1;
                }
              }
              ehContext = 0x80;
              outOfRange[0] = &std::out_of_range::vftable;
              ehDtorCount = ehDtorCount + 2;
              if (str4 != (int *)0x0) {
                if (str4[-3] != -1) {
                  strRep7 = str4 + -3;
                  if (strRep7 == &g_nullStringRep) {
                    iVar11 = 1;
                  }
                  else if (strRep7 == &g_nullStringRep) {
                    iVar11 = 1;
                  }
                  else {
                    *strRep7 = *strRep7 + -1;
                    iVar11 = *strRep7 + 1;
                  }
                  if (iVar11 != 0) goto LAB_004c14cc;
                }
                unused24 = str4 + -3;
                unused23 = str4 + -3;
                operator_delete();
                unused22 = 0;
                str4 = (int *)0x0;
                unused21 = str;
              }
LAB_004c14cc:
              ehContext = 0x44;
              _ThrowExceptionLDTC((uint *)&DAT_0040846c,(undefined4*)outOfRange,objectDtor,copyCtor,uVar7,throwFlags,throwFile,throwLine);
            }
            local_15c = local_c[-1] - local_bc;
            s = 0;
            local_164 = local_15c;
            if (local_10c < local_15c) {
              local_164 = local_10c;
            }
            std::string::replace((int)str3,local_bc,local_164,(uint)&s,0,0,0);
          }
          else {
            std::string::replace_fill((int)str3,local_c[-1],0,local_bc - local_c[-1],0);
          }
          strRep6 = local_c + -3;
          if (strRep6 != &g_nullStringRep) {
            *strRep6 = 0;
          }
          iVar11 = 0;
          if (0 < (int)uVar3) {
            do {
              local_16c = iVar11;
              if (1 < local_c[-3] + 1) {
                std::string::__unshare((int)str3);
              }
              strRep5 = local_c + -3;
              if (strRep5 != &g_nullStringRep) {
                *strRep5 = 0xffffffff;
              }
              *(CHAR *)((int)local_c + local_16c) = multiByteStr[iVar11];
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)uVar3);
          }
          ehDtorCount = ehDtorCount + -1;
          operator_delete_array();
          ehContext = 0x20;
        }
      }
      FreeResource(hGlobal);
      if (uVar3 != 0) {
        ehContext = 0xbc;
        unused20 = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
          len = local_c[-1];
          newRep2 = std::string::__getRep(param_1,len,len);
          newData3 = newRep2 + 3;
          *(int **)(param_1 + 8) = newData3;
          unused17 = param_1;
          unused16 = len;
          unused15 = local_c;
          dest2 = *(undefined4 **)(param_1 + 8);
          memcpy(dest2,local_c,len);
        }
        else {
          unused19 = local_c;
          *(undefined4 **)(param_1 + 8) = local_c;
          unused18 = param_1;
          strRep4 = (int *)(*(int *)(param_1 + 8) + -0xc);
          if (strRep4 != &g_nullStringRep) {
            *strRep4 = *strRep4 + 1;
          }
        }
        ehContext = 0xd4;
        if (local_c != (undefined4 *)0x0) {
          if (local_c[-3] != -1) {
            strRep3 = local_c + -3;
            if (strRep3 == &g_nullStringRep) {
              iVar11 = 1;
            }
            else if (strRep3 == &g_nullStringRep) {
              iVar11 = 1;
            }
            else {
              *strRep3 = *strRep3 + -1;
              iVar11 = *strRep3 + 1;
            }
            if (iVar11 != 0) goto LAB_004c17d9;
          }
          unused14 = local_c + -3;
          unused13 = local_c + -3;
          operator_delete();
        }
LAB_004c17d9:
        *sehChainHead = sehPrevFrame;
        return param_1;
      }
    }
  }
  ehContext = 0x110;
  unused10 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar3 = local_c[-1];
    newRep = std::string::__getRep(param_1,uVar3,uVar3);
    newData2 = newRep + 3;
    *(int **)(param_1 + 8) = newData2;
    unused7 = param_1;
    unused5 = local_c;
    dest = *(undefined4 **)(param_1 + 8);
    unused6 = uVar3;
    memcpy(dest,local_c,uVar3);
  }
  else {
    unused9 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    unused8 = param_1;
    strRep2 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (strRep2 != &g_nullStringRep) {
      *strRep2 = *strRep2 + 1;
    }
  }
  ehContext = 0x128;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        iVar11 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar11 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar11 = *strRep + 1;
      }
      if (iVar11 != 0) goto LAB_004c1a7c;
    }
    unused4 = local_c + -3;
    unused3 = local_c + -3;
    operator_delete();
  }
LAB_004c1a7c:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1a9c  FUN_004c1a9c   (73 bytes)   [unnamed]
HACCEL __cdecl FUN_004c1a9c(int param_1,LPCSTR name)

{
  HACCEL hAccel;
  int iVar2;
  
  hAccel = LoadAcceleratorsA(*(HINSTANCE *)(param_1 + 8),name);
  if (hAccel == (HACCEL)0x0) {
    iVar2 = FUN_004c0b38(name,(LPCSTR)0x9);
    if (iVar2 != 0) {
      hAccel = FUN_004c1a9c(iVar2,name);
      return hAccel;
    }
  }
  return hAccel;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1ae8  FUN_004c1ae8   (73 bytes)   [unnamed]
HMENU __cdecl FUN_004c1ae8(int param_1,LPCSTR name)

{
  HMENU hMenu;
  int iVar2;
  
  hMenu = LoadMenuA(*(HINSTANCE *)(param_1 + 8),name);
  if (hMenu == (HMENU)0x0) {
    iVar2 = FUN_004c0b38(name,(LPCSTR)0x4);
    if (iVar2 != 0) {
      hMenu = FUN_004c1ae8(iVar2,name);
      return hMenu;
    }
  }
  return hMenu;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1b34  FUN_004c1b34   (73 bytes)   [unnamed]
HCURSOR __cdecl FUN_004c1b34(int param_1,LPCSTR name)

{
  HCURSOR hCursor;
  int iVar2;
  
  hCursor = LoadCursorA(*(HINSTANCE *)(param_1 + 8),name);
  if (hCursor == (HCURSOR)0x0) {
    iVar2 = FUN_004c0b38(name,(LPCSTR)0x1);
    if (iVar2 != 0) {
      hCursor = FUN_004c1b34(iVar2,name);
      return hCursor;
    }
  }
  return hCursor;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1b80  FUN_004c1b80   (685 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004c1be3) */
int * __cdecl FUN_004c1b80(int *param_1,int param_2,LPCSTR procName)

{
  uint *puVar1;
  uint pos;
  FARPROC procAddress;
  int prevRefs;
  char *len;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str4;
  undefined1 str2 [8];
  int str5;
  undefined1 str3 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x5105d4);
  procAddress = GetProcAddress(*(HMODULE *)(param_2 + 8),procName);
  *param_1 = (int)procAddress;
  if (*param_1 != 0) goto LAB_004c1e1a;
  local_c = &g_emptyStringData;
  if ((short)((uint)procName >> 0x10) == 0) {
    FUN_0048f35c((int)str,0x7ff4,(uint)procName & 0xffff,DAT_00512a1c);
    std::string::operator_assign((int)str3,(int)str);
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        strRep = (int *)(str4 + -0xc);
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
        if (prevRefs != 0) goto LAB_004c1d68;
      }
      operator_delete();
      str4 = 0;
    }
  }
  else {
    FUN_0048f258((int)str2,0x7ff5,procName,DAT_00512a1c);
    std::string::operator_assign((int)str3,(int)str2);
    if (str5 != 0) {
      if (*(int *)(str5 + -0xc) != -1) {
        strRep = (int *)(str5 + -0xc);
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
        if (prevRefs != 0) goto LAB_004c1d68;
      }
      operator_delete();
      str5 = 0;
    }
  }
LAB_004c1d68:
  puVar1 = *(uint **)(param_2 + 4);
  pos = *(uint *)(local_c + -4);
  len = strlen(puVar1);
  std::string::replace((int)str3,pos,0,(uint)puVar1,(uint)len,0,(uint)len);
  FUN_0048f024((int)str3,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = (int *)(local_c + -0xc);
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
      if (prevRefs != 0) goto LAB_004c1e1a;
    }
    operator_delete();
  }
LAB_004c1e1a:
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c1e30  FUN_004c1e30   (95 bytes)   [unnamed]
undefined * __stdcall FUN_004c1e30(void)

{
  HMODULE hModule;
  undefined4 *sehChainHead;
  char cVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51064c);
  if (DAT_00510005 == '\0') {
    cVar2 = '\0';
    hModule = GetModuleHandleA("USER32");
    OWL::TModule::TModule_4c09ac((undefined4 *)&DAT_0051b8dc,(uint *)"USER32",hModule,cVar2);
    DAT_00510005 = DAT_00510005 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
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
// 0x004c225c  FUN_004c225c   (83 bytes)   [unnamed]
void __cdecl FUN_004c225c(undefined4 param_1)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x51071c);
  piVar1 = OWL::TXInvalidModule::TXInvalidModule(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c23f4  FUN_004c23f4   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004c23f4(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510778);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
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
// 0x004c2474  InitRichEditStreamer_4c2474   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4c2474(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51079c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c2694;
  puVar1 = FUN_004dd5cc(1,0,0x469dc4);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b944,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c24ca  FUN_004c24ca   (48 bytes)   [unnamed]
void __stdcall FUN_004c24ca(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5107b0);
  OWL::TStreamableClass::_dtor(0x51b944,2);
  *sehChainHead = sehPrevFrame;
  return;
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
undefined4 * __cdecl FUN_004c2694(int *module)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510804);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((module == (int *)0x0) && (module = (int *)operator_new(), module != (int *)0x0)) {
      OWL::TModule::TModule_4c2564(module);
    }
    OWL::TModule::Streamer::Streamer(streamer,module);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c279c  FUN_004c279c   (191 bytes)   [unnamed]
uint * __cdecl FUN_004c279c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
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
  char *i;
  
  if (param_5 != (uint *)0x0) {
    operator_delete_array();
    pcVar1 = thunk_strchr((char *)param_5,'|');
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
    for (i = *(char **)(param_4 + 0xc); *i != '\0'; i = i + 1) {
      if (*i == '|') {
        *i = '\0';
      }
      param_1 = i;
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
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
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
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3e40  FUN_004c3e40   (59 bytes)   [unnamed]
void __cdecl FUN_004c3e40(int param_1)

{
  LPVOID lockedMem;
  
  if (*(int *)(param_1 + 0x4a) == 0) {
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  else {
    lockedMem = GlobalLock(*(HGLOBAL *)(param_1 + 0x4a));
    *(LPVOID *)(param_1 + 0x56) = lockedMem;
  }
  if (*(int *)(param_1 + 0x4e) != 0) {
    lockedMem = GlobalLock(*(HGLOBAL *)(param_1 + 0x4e));
    *(LPVOID *)(param_1 + 0x5a) = lockedMem;
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
  char *len;
  char *len2;
  HGLOBAL hGlobal;
  LPVOID lockedMem;
  
  FUN_004c3eec(param_1);
  if (((param_2 != (uint *)0x0) && (param_3 != (uint *)0x0)) && (param_4 != (uint *)0x0)) {
    pcVar1 = strlen(param_2);
    len = strlen(param_3);
    len2 = strlen(param_4);
    hGlobal = GlobalAlloc(0x42,(SIZE_T)(pcVar1 + (int)len + (int)len2 + 0xb));
    *(HGLOBAL *)(param_1 + 0x4e) = hGlobal;
    lockedMem = GlobalLock(*(HGLOBAL *)(param_1 + 0x4e));
    *(LPVOID *)(param_1 + 0x5a) = lockedMem;
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
