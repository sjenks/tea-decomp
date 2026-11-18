// TEACON.exe — runtime / library code "code_0x00424000"
// 107 functions, 0x004240e8..0x00427e50. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004240e8  FUN_004240e8   (136 bytes)   [unnamed]
bool __cdecl FUN_004240e8(LCID locale,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_0042396c(locale,0xe,param_2 + 1);
  uVar2 = FUN_0042396c(locale,0xf,param_2);
  uVar3 = FUN_0042396c(locale,0x10,param_2 + 2);
  uVar4 = FUN_0042396c(locale,0x50,param_2 + 3);
  uVar5 = FUN_0042396c(locale,0x51,param_2 + 4);
  uVar6 = FUN_004239c8(locale,0x11,(undefined2 *)(param_2 + 5),3);
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424170  FUN_00424170   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_00424170(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042417c  FUN_0042417c   (151 bytes)   [unnamed]
undefined ** __stdcall FUN_0042417c(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  memset((undefined4*)&PTR_DAT_00432e2c,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_0043330c + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00432e2c = (undefined *)puVar1[1];
    PTR_DAT_00432e30 = (undefined *)*puVar1;
    PTR_DAT_00432e34 = (undefined *)puVar1[2];
    PTR_DAT_00432e4c = (undefined *)puVar1[3];
    PTR_DAT_00432e50 = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_0043330c + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_00432e38 = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00432e3c = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00432e40 = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00432e44 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_00432e48 = *(undefined **)(puVar2 + 0x24);
    DAT_00432e54 = puVar2[2];
    DAT_00432e55 = *puVar2;
    DAT_00432e56 = puVar2[0xc];
    DAT_00432e57 = puVar2[0xe];
    DAT_00432e58 = puVar2[0x10];
    DAT_00432e59 = puVar2[0x12];
    DAT_00432e5a = puVar2[8];
    DAT_00432e5b = puVar2[10];
  }
  return &PTR_DAT_00432e2c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424214  FUN_00424214   (36 bytes)   [unnamed]
byte * __cdecl FUN_00424214(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  while( true ) {
    uVar1 = tolower((uint)*pbVar2);
    *pbVar2 = (byte)uVar1;
    if ((byte)uVar1 == 0) break;
    pbVar2 = pbVar2 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424238  tolower   (84 bytes)   [analysis]
uint __cdecl tolower(uint ch)

{
  uint destStr;
  
  destStr = 0;
  if (ch == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_0043330c + 8) != 0) {
    return (uint)(byte)(&DAT_00432eb8)[ch & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_0043330c + 4),0x100,(LPCSTR)&ch,1,(LPSTR)&destStr,4);
  return destStr;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042428c  toupper   (84 bytes)   [analysis]
uint __cdecl toupper(uint ch)

{
  uint destStr;
  
  destStr = 0;
  if (ch == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_0043330c + 8) != 0) {
    return (uint)(byte)(&DAT_00432fb8)[ch & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_0043330c + 4),0x200,(LPCSTR)&ch,1,(LPSTR)&destStr,4);
  return destStr;
}

// ----------------------------------------------------------------------------------------------------
// 0x004242e0  FUN_004242e0   (122 bytes)   [unnamed]
undefined4 __cdecl FUN_004242e0(byte *multiByteStr,int param_2)

{
  int iVar1;
  
  if (((multiByteStr != (byte *)0x0) && (*multiByteStr != 0)) && (param_2 != 0)) {
    if (((&DAT_00434e79)[*multiByteStr] & 4) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,9,(LPCSTR)multiByteStr,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    if (1 < param_2) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,9,(LPCSTR)multiByteStr,2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        return 2;
      }
    }
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042435c  FUN_0042435c   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_0042435c(LPWSTR wideCharStr,byte *multiByteStr,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((multiByteStr == (byte *)0x0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else if (*multiByteStr == 0) {
    if (wideCharStr != (LPWSTR)0x0) {
      *(undefined2 *)wideCharStr = 0;
    }
    uVar1 = 0;
  }
  else if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
    if (((&DAT_00434e79)[*multiByteStr] & 4) == 0) {
      iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,9,(LPCSTR)multiByteStr,1,wideCharStr,
                                  (uint)(wideCharStr != (LPWSTR)0x0));
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (((param_3 < 2) ||
             (iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,9,(LPCSTR)multiByteStr,2,wideCharStr,
                                          (uint)(wideCharStr != (LPWSTR)0x0)), iVar2 == 0)) &&
            ((param_3 < 2 || (multiByteStr[1] == 0)))) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    if (wideCharStr != (LPWSTR)0x0) {
      *(ushort *)wideCharStr = (ushort)*multiByteStr;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424430  FUN_00424430   (113 bytes)   [unnamed]
int __cdecl FUN_00424430(LPSTR multiByteStr,ushort wideCharStr)

{
  int iVar1;
  BOOL ok;
  
  if (multiByteStr == (LPSTR)0x0) {
    return 0;
  }
  if (*(int *)(PTR_DAT_0043330c + 8) != 0) {
    if (0xff < wideCharStr) {
      return -1;
    }
    *multiByteStr = (CHAR)wideCharStr;
    return 1;
  }
  ok = 0;
  iVar1 = WideCharToMultiByte(*(UINT *)PTR_DAT_0043330c,0x220,(LPCWSTR)&wideCharStr,1,multiByteStr,2,
                              (LPCSTR)0x0,&ok);
  if ((iVar1 != 0) && (ok == 0)) {
    return iVar1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004244a4  FUN_004244a4   (295 bytes, 2 ranges)   [unnamed]
char * __cdecl FUN_004244a4(LPWSTR wideCharStr,uint *multiByteStr,char *wideChar)

{
  int iVar1;
  DWORD lastError;
  uint *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  if ((wideCharStr == (LPWSTR)0x0) || (wideChar != (char *)0x0)) {
    if (wideCharStr == (LPWSTR)0x0) {
      if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
        iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,9,(LPCSTR)multiByteStr,-1,(LPWSTR)0x0,0);
        if (iVar1 == 0) {
          pcVar4 = (char *)0xffffffff;
        }
        else {
          pcVar4 = (char *)(iVar1 + -1);
        }
      }
      else {
        pcVar4 = strlen(multiByteStr);
      }
    }
    else if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,9,(LPCSTR)multiByteStr,-1,wideCharStr,
                                  (int)wideChar);
      if (iVar1 == 0) {
        lastError = GetLastError();
        puVar3 = multiByteStr;
        pcVar4 = wideChar;
        if (lastError == 0x7a) {
          for (; (pcVar4 != (char *)0x0 && ((byte)*puVar3 != 0)); puVar3 = (uint *)((int)puVar3 + 1)
              ) {
            if (((&DAT_00434e79)[(byte)*puVar3] & 4) != 0) {
              puVar3 = (uint *)((int)puVar3 + 1);
            }
            pcVar4 = pcVar4 + -1;
          }
          pcVar4 = (char *)MultiByteToWideChar(*(UINT *)PTR_DAT_0043330c,1,(LPCSTR)multiByteStr,
                                               (int)puVar3 - (int)multiByteStr,wideCharStr,(int)wideChar);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0xffffffff;
          }
        }
        else {
          pcVar4 = (char *)0xffffffff;
        }
      }
      else {
        pcVar4 = (char *)(iVar1 + -1);
      }
    }
    else if (wideChar != (char *)0x0) {
      do {
        *(ushort *)wideCharStr = (ushort)*(byte *)((int)multiByteStr + (int)pcVar4);
        if (*(char *)((int)multiByteStr + (int)pcVar4) == '\0') {
          return pcVar4;
        }
        pcVar4 = pcVar4 + 1;
        wideCharStr = (LPWSTR)((int)wideCharStr + 2);
      } while (pcVar4 < wideChar);
    }
  }
  else {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004245d0  FUN_004245d0   (57 bytes)   [unnamed]
int __cdecl FUN_004245d0(short *param_1,int param_2)

{
  short *i;
  int iVar2;
  
  iVar2 = param_2 + 1;
  for (i = param_1; (iVar2 = iVar2 + -1, iVar2 != 0 && (*i != 0)); i = i + 1) {
  }
  if ((iVar2 != 0) && (*i == 0)) {
    iVar2 = (int)i - (int)param_1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)(((int)i - (int)param_1 & 1U) != 0);
    }
    return iVar2 + 1;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042460c  FUN_0042460c   (420 bytes)   [unnamed]
uint __cdecl FUN_0042460c(LPSTR multiByteStr,LPCWSTR wideCharStr,uint multiByte)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  BOOL ok;
  CHAR multiByteStr2 [2];
  int local_8;
  
  ok = 0;
  uVar5 = 0;
  if ((multiByteStr == (LPSTR)0x0) || (multiByte != 0)) {
    if (multiByteStr == (LPSTR)0x0) {
      if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
        iVar6 = WideCharToMultiByte(*(UINT *)PTR_DAT_0043330c,0x220,wideCharStr,-1,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,&ok);
        if ((iVar6 == 0) || (ok != 0)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = iVar6 - 1;
        }
      }
      else {
        uVar5 = FUN_0041f3a4((short *)wideCharStr);
      }
    }
    else if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
      uVar5 = WideCharToMultiByte(*(UINT *)PTR_DAT_0043330c,0x220,wideCharStr,-1,multiByteStr,multiByte,
                                  (LPCSTR)0x0,&ok);
      if ((uVar5 == 0) || (ok != 0)) {
        if ((ok == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
          while (uVar5 < multiByte) {
            local_8 = WideCharToMultiByte(*(UINT *)PTR_DAT_0043330c,0,wideCharStr,1,multiByteStr2,2,
                                          (LPCSTR)0x0,&ok);
            if ((local_8 == 0) || (ok != 0)) {
              return 0xffffffff;
            }
            if (multiByte < local_8 + uVar5) {
              return uVar5;
            }
            iVar6 = 0;
            pcVar4 = multiByteStr + uVar5;
            pcVar3 = multiByteStr2;
            if (0 < local_8) {
              do {
                cVar1 = *pcVar3;
                *pcVar4 = cVar1;
                if (cVar1 == '\0') {
                  return uVar5;
                }
                pcVar3 = pcVar3 + 1;
                iVar6 = iVar6 + 1;
                pcVar4 = pcVar4 + 1;
                uVar5 = uVar5 + 1;
              } while (iVar6 < local_8);
            }
            wideCharStr = (LPCWSTR)((int)wideCharStr + 2);
            ok = 0;
          }
        }
        else {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    else if (multiByte != 0) {
      while ((ushort)*wideCharStr < 0x100) {
        multiByteStr[uVar5] = (CHAR)*wideCharStr;
        if ((short)*wideCharStr == 0) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        wideCharStr = (LPCWSTR)((int)wideCharStr + 2);
        if (multiByte <= uVar5) {
          return uVar5;
        }
      }
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004247b0  FUN_004247b0   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_004247b0(ushort param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042289c(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424863  FUN_00424863   (73 bytes)   [unnamed]
int FUN_00424863(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    param_1 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_4);
  }
  else {
    iVar2 = 0x40;
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar5 = param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulonglong)CONCAT14(bVar5,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar5;
      bVar5 = (uVar1 & 0x100000000) != 0;
      uVar1 = (ulonglong)CONCAT14(bVar5,uVar3) << 1;
      uVar3 = (uint)uVar1 | (uint)bVar5;
      uVar4 = uVar4 << 1 | (uint)((uVar1 & 0x100000000) != 0);
      if ((param_5 <= uVar4) && ((param_5 < uVar4 || (param_4 <= uVar3)))) {
        bVar5 = uVar3 < param_4;
        uVar3 = uVar3 - param_4;
        uVar4 = (uVar4 - param_5) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424926  FUN_00424926   (78 bytes)   [unnamed]
uint FUN_00424926(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    uVar3 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_4);
  }
  else {
    iVar2 = 0x40;
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar5 = param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulonglong)CONCAT14(bVar5,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar5;
      bVar5 = (uVar1 & 0x100000000) != 0;
      uVar1 = (ulonglong)CONCAT14(bVar5,uVar3) << 1;
      uVar3 = (uint)uVar1 | (uint)bVar5;
      uVar4 = uVar4 << 1 | (uint)((uVar1 & 0x100000000) != 0);
      if ((param_5 <= uVar4) && ((param_5 < uVar4 || (param_4 <= uVar3)))) {
        bVar5 = uVar3 < param_4;
        uVar3 = uVar3 - param_4;
        uVar4 = (uVar4 - param_5) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004249c8  thunk → FUN_00424f88   (5 bytes)   [unnamed]
void __cdecl thunk_FUN_00424f88(uint param_1,char *param_2,uint param_3)

{
  FUN_00424ea8(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004249d0  FUN_004249d0   (364 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004249d0(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424b58  atoi   (103 bytes)   [analysis]
int __cdecl atoi(char *s)

{
  int iVar1;
  char ch;
  char *s2;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  do {
    s2 = s;
    ch = *s2;
    s = s2 + 1;
    iVar1 = FUN_00426774((int)ch);
  } while (iVar1 != 0);
  if ((ch == '+') || (ch == '-')) {
    bVar5 = ch == '-';
    ch = *s;
    s = s2 + 2;
  }
  else {
    bVar5 = false;
  }
  while (('/' < ch && (ch < ':'))) {
    iVar4 = iVar4 * 10 + (int)ch + -0x30;
    ch = *s;
    s = s + 1;
  }
  if (bVar5) {
    iVar4 = -iVar4;
  }
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424bc0  FUN_00424bc0   (15 bytes)   [unnamed]
void __cdecl FUN_00424bc0(char *s)

{
  atoi(s);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424bd0  FUN_00424bd0   (19 bytes)   [unnamed]
undefined2 __stdcall FUN_00424bd0(void)

{
  undefined2 in_FPUStatusWord;
  
  return in_FPUStatusWord;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424be4  FUN_00424be4   (47 bytes)   [unnamed]
uint __cdecl FUN_00424be4(uint param_1,int param_2)

{
  ushort in_FPUControlWord;
  
  if (param_2 != 0) {
    (*(uint *)&DAT_00433628) = param_1;
  }
  return param_1 & param_2 | (uint)in_FPUControlWord & ~param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c14  thunk → FUN_00424c2c   (6 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall thunk_FUN_00424c2c(void)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00424c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ((code *)_DAT_00433558)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c1a  thunk → FUN_00424c2c   (6 bytes)   [unnamed]
undefined4 __stdcall thunk_FUN_00424c2c_424c1a(void)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00424c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_FUN_0043355c)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c2c  FUN_00424c2c   (12 bytes)   [unnamed]
undefined4 __stdcall FUN_00424c2c(void)

{
  undefined4 in_EAX;
  
  FUN_00426acc((uint *)"printf : floating point formats not linked");
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c5c  FUN_00424c5c   (22 bytes)   [unnamed]
void __stdcall FUN_00424c5c(void)

{
  FUN_00424be4(DAT_00433628,0x1fff);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424c74  FUN_00424c74   (45 bytes)   [unnamed]
void __cdecl FUN_00424c74(int param_1)

{
  if ((*(byte *)(param_1 + 7) & 0x80) == 0) {
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424ca4  FUN_00424ca4   (33 bytes)   [unnamed]
void __cdecl FUN_00424ca4(longlong *param_1,longdouble *param_2)

{
  if (*(short *)((int)param_2 + 8) != 0x403e) {
    *param_1 = (longlong)ROUND(*param_2);
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424cc8  FUN_00424cc8   (17 bytes)   [unnamed]
ushort __cdecl FUN_00424cc8(longdouble *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longdouble)0;
  return (ushort)NAN(lVar1) << 8 | (ushort)(lVar1 < lVar2) << 9 | (ushort)(lVar1 != lVar2) << 10 |
         (ushort)(lVar1 == lVar2) << 0xe;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424cdc  FUN_00424cdc   (177 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x00424d09) */
char * __cdecl FUN_00424cdc(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char local_48 [68];
  
  pcVar4 = param_3;
  if ((1 < (int)param_4) && ((int)param_4 < 0x25)) {
    if ((param_2 != 0) && (((int)param_2 < 0 && (param_5 != '\0')))) {
      *param_3 = '-';
      bVar5 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(param_2 + bVar5);
      pcVar4 = param_3 + 1;
    }
    pcVar3 = local_48;
    do {
      do {
        uVar2 = FUN_00424926(param_1,param_2,in_ECX,param_4,(int)param_4 >> 0x1f);
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        param_1 = FUN_00424863(param_1,param_2,extraout_ECX,param_4,(int)param_4 >> 0x1f);
        in_ECX = extraout_ECX_00;
        param_2 = extraout_EDX;
      } while (extraout_EDX != 0);
    } while (param_1 != 0);
    while (pcVar3 != local_48) {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
      if (cVar1 < '\n') {
        *pcVar4 = cVar1 + '0';
        pcVar4 = pcVar4 + 1;
      }
      else {
        *pcVar4 = cVar1 + param_6 + -10;
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  *pcVar4 = '\0';
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424d90  FUN_00424d90   (279 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00424d90(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_1 == 0) {
    uVar2 = 0x407e;
    uVar4 = 0x3f6a;
  }
  else {
    uVar2 = 0x43fe;
    uVar4 = 0x3bcd;
  }
  uVar3 = param_4 & 0x7fff;
  if (uVar3 == 0x7fff) {
    return;
  }
  if (uVar3 <= uVar2) {
    if (uVar2 == uVar3) {
      uVar1 = FUN_00424be4(0,0);
      FUN_00424be4(0xc00,0xc00);
      FUN_00424be4(uVar1,0xc00);
      return;
    }
    if (((((short)param_2 == 0 && uVar3 == 0) && GH_PIECE(param_2, 2, undefined2) == 0) && (short)param_3 == 0) &&
        GH_PIECE(param_3, 2, undefined2) == 0) {
      return;
    }
    if (uVar4 <= uVar3) {
      return;
    }
  }
  _DAT_004337d4 = 0x22;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424ea8  FUN_00424ea8   (113 bytes)   [unnamed]
char * __cdecl FUN_00424ea8(uint param_1,char *param_2,uint param_3,char param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_28 [36];
  
  pcVar3 = param_2;
  if ((1 < (int)param_3) && ((int)param_3 < 0x25)) {
    if (((int)param_1 < 0) && (param_4 != '\0')) {
      *param_2 = '-';
      pcVar3 = param_2 + 1;
      param_1 = -param_1;
    }
    pcVar2 = local_28;
    do {
      *pcVar2 = (char)(param_1 % param_3);
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 / param_3;
    } while (param_1 != 0);
    while (pcVar2 != local_28) {
      pcVar2 = pcVar2 + -1;
      cVar1 = *pcVar2;
      if (cVar1 < '\n') {
        *pcVar3 = cVar1 + '0';
        pcVar3 = pcVar3 + 1;
      }
      else {
        *pcVar3 = cVar1 + param_5 + -10;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  *pcVar3 = '\0';
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424f1c  FUN_00424f1c   (27 bytes)   [unnamed]
void __cdecl FUN_00424f1c(uint param_1,char *param_2)

{
  FUN_00424ea8(param_1,param_2,10,'\0','a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424f38  FUN_00424f38   (48 bytes)   [unnamed]
void __cdecl FUN_00424f38(uint param_1,char *param_2,uint param_3)

{
  FUN_00424ea8(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424f68  FUN_00424f68   (29 bytes)   [unnamed]
void __cdecl FUN_00424f68(uint param_1,char *param_2,uint param_3)

{
  FUN_00424ea8(param_1,param_2,param_3,'\0','a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424f88  FUN_00424f88   (37 bytes)   [unnamed]
void __cdecl FUN_00424f88(uint param_1,char *param_2,uint param_3)

{
  FUN_00424ea8(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424fb0  FUN_00424fb0   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_00424fb0(int *param_1)

{
  if (*param_1 == 4) {
    param_1[6] = 0;
    param_1[7] = 0;
    return 1;
  }
  if (*param_1 == 5) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00424fdc  FUN_00424fdc   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_00424fdc(int *param_1)

{
  if (*param_1 == 4) {
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    return 1;
  }
  if (*param_1 == 5) {
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042500c  FUN_0042500c   (22 bytes)   [unnamed]
void __cdecl FUN_0042500c(undefined *param_1,undefined *param_2)

{
  PTR_FUN_004336b0 = param_1;
  PTR_FUN_004336b4 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425024  FUN_00425024   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_00425024(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar1 % 10;
    param_1[1] = uVar1 / 10;
  }
  uVar2 = *param_1;
  *param_1 = (int)(CONCAT44(uVar3,uVar2) / 10);
  return (int)(CONCAT44(uVar3,uVar2) % 10);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042504c  FUN_0042504c   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_0042504c(uint *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1 * 10 + (ulonglong)param_2;
  *param_1 = (uint)uVar2;
  lVar1 = (ulonglong)param_1[1] * 10 + (uVar2 >> 0x20);
  param_1[1] = (uint)lVar1;
  return (int)((ulonglong)lVar1 >> 0x20);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042507c  FUN_0042507c   (65 bytes)   [unnamed]
uint __cdecl FUN_0042507c(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_004224f4(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_004250ae;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_004250ae:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004250c0  FUN_004250c0   (645 bytes)   [unnamed]
byte * __cdecl FUN_004250c0(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint i;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte local_3c [46];
  byte local_e;
  byte local_d;
  uint local_c;
  uint local_8;
  
  pbVar2 = (byte *)FUN_004224f4(0xe);
  local_e = *pbVar2;
  if (0x28 < (int)param_2) {
    param_2 = 0x28;
  }
  local_c = param_2;
  local_d = param_4 & 0xdf;
  if (local_d == 0x46) {
    uVar6 = -param_2;
    if (0 < (int)-param_2) {
      param_2 = 0;
      uVar6 = 0;
    }
  }
  else if ((int)param_2 < 1) {
    uVar6 = 1;
  }
  else {
    uVar6 = param_2;
    if (local_d == 0x45) {
      uVar6 = param_2 + 1;
      param_2 = param_2 + 1;
    }
  }
  iVar3 = FUN_00426070(param_1,uVar6,&local_8,(undefined4 *)local_3c,param_6);
  if (iVar3 == 0x7fff) {
    if (local_8 == 0) {
      pcVar4 = &DAT_004336bd /* "+INF" */;
    }
    else {
      pcVar4 = &DAT_004336b8 /* "-INF" */;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pbVar2 = (byte *)(pcVar10 + -uVar6);
    pbVar5 = param_3;
    for (i = uVar6 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar5 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 1;
    }
    return param_3;
  }
  if (iVar3 == 0x7ffe) {
    if (local_8 == 0) {
      pcVar4 = &DAT_004336c7 /* "+NAN" */;
    }
    else {
      pcVar4 = &DAT_004336c2 /* "-NAN" */;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pbVar2 = (byte *)(pcVar10 + -uVar6);
    pbVar5 = param_3;
    for (i = uVar6 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar5 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar5 = pbVar5 + 1;
    }
    return param_3;
  }
  pbVar2 = param_3;
  if (local_8 != 0) {
    *param_3 = 0x2d;
    pbVar2 = param_3 + 1;
  }
  if (local_d != 0x46) {
    if ((local_d != 0x47) || (iVar3 < -3)) goto LAB_0042528a;
    uVar6 = param_2;
    if (param_2 == 0) {
      uVar6 = 1;
    }
    if ((int)uVar6 < iVar3) goto LAB_0042528a;
  }
  if (iVar3 < 0x29) {
    if (iVar3 < 1) {
      *pbVar2 = 0x30;
      pbVar2[1] = local_e;
      pbVar2 = pbVar2 + 2;
      for (iVar9 = iVar3; iVar3 = 0, iVar9 != 0; iVar9 = iVar9 + 1) {
        *pbVar2 = 0x30;
        pbVar2 = pbVar2 + 1;
      }
    }
    iVar9 = 0;
    for (pbVar5 = local_3c; *pbVar5 != 0; pbVar5 = pbVar5 + 1) {
      *pbVar2 = *pbVar5;
      pbVar8 = pbVar2 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *pbVar8 = local_e;
        pbVar8 = pbVar2 + 2;
        iVar9 = iVar9 + 1;
      }
      pbVar2 = pbVar8;
    }
    if ((int)(iVar9 + local_c) < (int)param_2) {
      uVar6 = param_2 - (iVar9 + local_c);
      pbVar5 = (byte *)memset((undefined4 *)pbVar2,0x30,uVar6);
      pbVar2 = pbVar2 + uVar6;
    }
    else if ((iVar3 != 1) && (param_5 == '\0')) {
      pbVar5 = (byte *)FUN_0042507c(param_4,(uint)param_3,(uint)pbVar2);
      pbVar2 = pbVar5;
    }
    if (pbVar2 == param_3) {
      *pbVar2 = 0x30;
      pbVar2 = pbVar2 + 1;
    }
    *pbVar2 = 0;
    return pbVar5;
  }
LAB_0042528a:
  *pbVar2 = local_3c[0];
  pbVar5 = pbVar2 + 1;
  if (local_3c[1] == 0) {
    if (param_5 != '\0') {
      *pbVar5 = local_e;
      pbVar5 = pbVar2 + 2;
    }
  }
  else {
    *pbVar5 = local_e;
    pbVar5 = pbVar2 + 2;
    pbVar2 = local_3c + 2;
    while (local_3c[1] != 0) {
      *pbVar5 = local_3c[1];
      pbVar5 = pbVar5 + 1;
      local_3c[1] = *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    if (param_5 == '\0') {
      pbVar5 = (byte *)FUN_0042507c(param_4,(uint)param_3,(uint)pbVar5);
    }
  }
  *pbVar5 = param_4 & 0x20 | 0x45;
  pbVar2 = (byte *)(iVar3 + -1);
  if ((int)pbVar2 < 0) {
    pbVar2 = (byte *)-(int)pbVar2;
    pbVar5[1] = 0x2d;
  }
  else {
    pbVar5[1] = 0x2b;
  }
  if ((int)pbVar2 < 1000) {
    if ((int)pbVar2 < 100) {
      iVar3 = 2;
    }
    else {
      iVar3 = 3;
    }
  }
  else {
    iVar3 = 4;
  }
  pbVar5[iVar3 + 2] = 0;
  pbVar5 = pbVar5 + iVar3 + 2;
  pbVar8 = pbVar5;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar5 = pbVar5 + -1;
    *pbVar5 = (char)((int)pbVar2 % 10) + 0x30;
    pbVar8 = (byte *)((int)pbVar2 / 10);
    pbVar2 = pbVar8;
  }
  return pbVar8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425348  FUN_00425348   (22 bytes)   [unnamed]
int __cdecl FUN_00425348(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = param_1 + 8;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425378  FUN_00425378   (74 bytes)   [unnamed]
uint __cdecl FUN_00425378(short param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_004224f4(0xe);
  if ((param_1 == 0x47) || (uVar1 = param_3, param_1 == 0x67)) {
    do {
      uVar1 = param_3;
      if (*(short *)(param_3 - 2) != 0x30) goto LAB_004253af;
      param_3 = param_3 - 2;
    } while (param_2 < param_3);
  }
  else {
LAB_004253af:
    param_2 = uVar1;
    if (*psVar2 == *(short *)(param_2 - 2)) {
      param_2 = param_2 - 2;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004253c4  FUN_004253c4   (695 bytes)   [unnamed]
void __cdecl FUN_004253c4(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6)

{
  ushort *puVar1;
  int iVar2;
  wchar16 *pwVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  ushort local_68 [44];
  ushort local_10;
  ushort local_e;
  int local_c;
  uint local_8;
  
  puVar1 = (ushort *)FUN_004224f4(0xe);
  local_10 = *puVar1;
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  local_c = param_2;
  local_e = param_4 & 0xdf;
  if (local_e == 0x46) {
    iVar2 = -param_2;
    if (0 < -param_2) {
      param_2 = 0;
      iVar2 = 0;
    }
  }
  else if (param_2 < 1) {
    iVar2 = 1;
  }
  else {
    iVar2 = param_2;
    if (local_e == 0x45) {
      iVar2 = param_2 + 1;
      param_2 = param_2 + 1;
    }
  }
  iVar2 = FUN_00426344(param_1,iVar2,&local_8,local_68,param_6);
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pwVar3 = L"+INF";
    }
    else {
      pwVar3 = L"-INF";
    }
    FUN_0041f3bc((short *)param_3,pwVar3);
    return;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pwVar3 = L"+NAN";
    }
    else {
      pwVar3 = L"-NAN";
    }
    FUN_0041f3bc((short *)param_3,pwVar3);
    return;
  }
  puVar1 = param_3;
  if (local_8 != 0) {
    *param_3 = 0x2d;
    puVar1 = param_3 + 1;
  }
  if (local_e != 0x46) {
    if ((local_e != 0x47) || (iVar2 < -3)) goto LAB_0042558f;
    iVar7 = param_2;
    if (param_2 == 0) {
      iVar7 = 1;
    }
    if (iVar7 < iVar2) goto LAB_0042558f;
  }
  if (iVar2 < 0x29) {
    if (iVar2 < 1) {
      *puVar1 = 0x30;
      puVar1[1] = local_10;
      puVar1 = puVar1 + 2;
      for (iVar7 = iVar2; iVar2 = 0, iVar7 != 0; iVar7 = iVar7 + 1) {
        *puVar1 = 0x30;
        puVar1 = puVar1 + 1;
      }
    }
    iVar7 = 0;
    for (puVar4 = local_68; *puVar4 != 0; puVar4 = puVar4 + 1) {
      *puVar1 = *puVar4;
      puVar6 = puVar1 + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *puVar6 = local_10;
        puVar6 = puVar1 + 2;
        iVar7 = iVar7 + 1;
      }
      puVar1 = puVar6;
    }
    if (iVar7 + local_c < param_2) {
      uVar5 = param_2 - (iVar7 + local_c);
      memset((undefined4 *)puVar1,0x30,uVar5);
      puVar1 = puVar1 + uVar5;
    }
    else if ((iVar2 != 1) && (param_5 == 0)) {
      puVar1 = (ushort *)FUN_00425378(param_4,(uint)param_3,(uint)puVar1);
    }
    if (puVar1 == param_3) {
      *puVar1 = 0x30;
      puVar1 = puVar1 + 1;
    }
    *puVar1 = 0;
    return;
  }
LAB_0042558f:
  *puVar1 = local_68[0];
  puVar4 = puVar1 + 1;
  if (local_68[1] == 0) {
    if (param_5 != 0) {
      *puVar4 = local_10;
      puVar4 = puVar1 + 2;
    }
  }
  else {
    *puVar4 = local_10;
    puVar4 = puVar1 + 2;
    puVar1 = local_68 + 2;
    while (local_68[1] != 0) {
      *puVar4 = local_68[1];
      puVar4 = puVar4 + 1;
      local_68[1] = *puVar1;
      puVar1 = puVar1 + 1;
    }
    if (param_5 == 0) {
      puVar4 = (ushort *)FUN_00425378(param_4,(uint)param_3,(uint)puVar4);
    }
  }
  *puVar4 = param_4 & 0x20 | 0x45;
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    puVar4[1] = 0x2d;
  }
  else {
    puVar4[1] = 0x2b;
  }
  if (iVar2 < 1000) {
    if (iVar2 < 100) {
      iVar7 = 2;
    }
    else {
      iVar7 = 3;
    }
  }
  else {
    iVar7 = 4;
  }
  puVar4[iVar7 + 2] = 0;
  puVar4 = puVar4 + iVar7 + 2;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar4 = puVar4 + -1;
    *puVar4 = (short)(iVar2 % 10) + 0x30;
    iVar2 = iVar2 / 10;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042567c  FUN_0042567c   (22 bytes)   [unnamed]
int __cdecl FUN_0042567c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = param_1 + 8;
  }
  else {
    iVar1 = param_1 + 0xc;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004256ac  FUN_004256ac   (1097 bytes)   [unnamed]
void __cdecl FUN_004256ac(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint ch;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longdouble in_ST0;
  longdouble in_ST1;
  uint uVar11;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined1 local_28 [8];
  undefined2 uStack_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  local_38 = (undefined2 *)local_28;
  local_8 = 0x8000;
  local_c = 0x13;
  local_d = '\0';
  local_e = '\x01';
  local_f = '\0';
  local_10 = '\0';
  local_11 = '\0';
  local_18 = 0;
  iVar9 = -2;
  local_1c = 1;
  (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
  uVar11 = 0xe;
  pbVar3 = (byte *)FUN_004224f4(0xe);
  bVar1 = *pbVar3;
  uVar6 = (uint)bVar1;
  do {
    local_18 = local_18 + 1;
    uVar5 = param_4;
    ch = (*(code *)param_2)(uVar6,param_4,uVar11);
    uVar11 = uVar5;
    uVar5 = ch + 1;
    if (uVar5 == 0) {
      local_1c = 0xffffffff;
      goto LAB_004259e0;
    }
    if ((ch & 0x80) != 0) break;
    uVar11 = ch;
    uVar6 = FUN_00426774(ch);
    uVar5 = 0;
  } while (uVar6 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar10 = local_c;
    if (ch == 0x2b) {
      local_f = '\x01';
    }
    else {
      iVar8 = iVar9;
      if (ch != 0x2d) goto LAB_0042576d;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar10, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar11 = param_4;
      uVar5 = (*(code *)param_2)();
      ch = uVar5;
      iVar8 = iVar9;
LAB_0042576d:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (ch == 0x49) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)(uVar5,param_4,uVar11);
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_004259db;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x46)) goto LAB_004259db;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_004336f8,DAT_004336f4));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_004336fc,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00433702,DAT_004336fe));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00433706,local_28);
          }
          goto LAB_004259b0;
        }
        if (ch == 0x4e) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x41)) goto LAB_004259db;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_004259db;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_0043370c,DAT_00433708));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00433710,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00433716,DAT_00433712));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0043371a,local_28);
          }
          goto LAB_004259b0;
        }
      }
      local_e = '\0';
      iVar9 = iVar8;
      iVar10 = local_c;
      if (ch == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_00425853;
        local_8 = iVar8;
        if (iVar8 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)ch < 0x30) || (0x39 < (int)ch)) goto LAB_00425853;
        ch = ch - 0x30;
        iVar9 = iVar8 + 1;
        if (iVar9 < 1) {
          *local_38 = (short)ch;
          iVar10 = local_c;
          if (ch == 0) {
            iVar9 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar9 = 1;
          }
        }
        else if (iVar9 < 10) {
          (*(longdouble *)&local_28) = (longdouble)CONCAT64(GHIDRA_STACK(0xffffffdc),GH_PIECE(local_28, 0, undefined4) * 10 + ch);
        }
        else if (iVar9 <= local_c) {
          local_40 = GH_PIECE(local_28, 0, undefined4);
          local_3c = GH_PIECE(local_28, 4, undefined4);
          iVar7 = FUN_0042504c(&local_40,ch);
          iVar10 = iVar8;
          if (iVar7 == 0) {
            GH_SET(local_28, CONCAT44(local_3c,local_40));
            iVar10 = local_c;
          }
        }
      }
    }
  }
  ch = 0x65;
LAB_00425853:
  iVar10 = param_5;
  if (iVar9 == -2) {
LAB_004259db:
    param_5 = iVar10;
    local_1c = 0;
LAB_004259e0:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar9;
    }
    iVar10 = 0;
    if ((ch == 0x65) || (ch == 0x45)) {
      bVar2 = true;
LAB_0042587b:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar8 = (*(code *)param_2)();
        if (!bVar2) goto LAB_004258a8;
        bVar2 = false;
        if (iVar8 != 0x2d) goto LAB_004258a3;
        local_10 = '\x01';
      }
    }
    else {
LAB_004258ce:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar10 = -iVar10;
      local_11 = -local_11;
    }
    if (iVar9 < 0) {
      (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
    }
    else if (local_11 == '\0') {
      if (local_c < iVar9) {
        iVar9 = local_c;
      }
      iVar10 = iVar10 + (local_8 - iVar9);
      FUN_00424c74((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar10 != 0) {
        FUN_004249d0();
        if (iVar10 < 0) {
          (*(longdouble *)&local_28) = (*(longdouble *)&local_28) / in_ST1;
        }
        else {
          (*(longdouble *)&local_28) = in_ST1 * (*(longdouble *)&local_28);
        }
      }
    }
    else {
      if (local_11 == '\x01') {
        local_38[3] = 0xffff;
        local_38[2] = 0xffff;
        local_38[1] = 0xffff;
        *local_38 = 0xffff;
        local_38[4] = 0x7ffe;
      }
      else {
        (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
      }
      local_1c = 2;
    }
  }
  if (local_d != '\0') {
    (*(longdouble *)&local_28) = -(*(longdouble *)&local_28);
  }
LAB_004259b0:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_004258a3:
  if (iVar8 != 0x2b) {
LAB_004258a8:
    if ((iVar8 < 0x30) || (0x39 < iVar8)) goto LAB_004258ce;
    iVar10 = iVar8 + iVar10 * 10 + -0x30;
    if (0x1344 < iVar10) {
      local_11 = '\x01';
    }
  }
  goto LAB_0042587b;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425af8  FUN_00425af8   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00425af8(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_00424d90(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_00424d90(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425b90  FUN_00425b90   (1094 bytes)   [unnamed]
void __cdecl FUN_00425b90(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  uint srcStr;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longdouble in_ST0;
  longdouble in_ST1;
  uint uVar10;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined1 local_28 [8];
  undefined2 uStack_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  local_38 = (undefined2 *)local_28;
  local_8 = 0x8000;
  local_c = 0x13;
  local_d = '\0';
  local_e = '\x01';
  local_f = '\0';
  local_10 = '\0';
  local_11 = '\0';
  local_18 = 0;
  iVar8 = -2;
  local_1c = 1;
  (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
  uVar10 = 0xe;
  puVar3 = (ushort *)FUN_004224f4(0xe);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  do {
    local_18 = local_18 + 1;
    srcStr = (*(code *)param_2)(uVar5,param_4,uVar10,param_4);
    if (srcStr == 0xffffffff) {
      local_1c = 0xffffffff;
      goto LAB_00425ec1;
    }
    uVar10 = srcStr;
    uVar5 = FUN_00422710((ushort)srcStr);
  } while (uVar5 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar9 = local_c;
    if (srcStr == 0x2b) {
      local_f = '\x01';
    }
    else {
      uVar5 = 0;
      iVar7 = iVar8;
      if (srcStr != 0x2d) goto LAB_00425c4e;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar9, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar10 = param_4;
      uVar5 = (*(code *)param_2)();
      srcStr = uVar5;
      iVar7 = iVar8;
LAB_00425c4e:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (srcStr == 0x49) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)(uVar5,param_4,uVar10);
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_00425ebc;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x46)) goto LAB_00425ebc;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00433720,DAT_0043371c));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00433724,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_0043372a,DAT_00433726));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0043372e,local_28);
          }
          goto LAB_00425e91;
        }
        if (srcStr == 0x4e) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x41)) goto LAB_00425ebc;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_00425ebc;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00433734,DAT_00433730));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00433738,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_0043373e,DAT_0043373a));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00433742,local_28);
          }
          goto LAB_00425e91;
        }
      }
      local_e = '\0';
      iVar8 = iVar7;
      iVar9 = local_c;
      if (srcStr == uVar1) {
        if (local_8 != 0x8000) goto LAB_00425d34;
        local_8 = iVar7;
        if (iVar7 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)srcStr < 0x30) || (0x39 < (int)srcStr)) goto LAB_00425d34;
        srcStr = srcStr - 0x30;
        iVar8 = iVar7 + 1;
        if (iVar8 < 1) {
          *local_38 = (short)srcStr;
          iVar9 = local_c;
          if (srcStr == 0) {
            iVar8 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar8 = 1;
          }
        }
        else if (iVar8 < 10) {
          (*(longdouble *)&local_28) = (longdouble)CONCAT64(GHIDRA_STACK(0xffffffdc),GH_PIECE(local_28, 0, undefined4) * 10 + srcStr);
        }
        else if (iVar8 <= local_c) {
          local_40 = GH_PIECE(local_28, 0, undefined4);
          local_3c = GH_PIECE(local_28, 4, undefined4);
          iVar6 = FUN_0042504c(&local_40,srcStr);
          iVar9 = iVar7;
          if (iVar6 == 0) {
            GH_SET(local_28, CONCAT44(local_3c,local_40));
            iVar9 = local_c;
          }
        }
      }
    }
  }
  srcStr = 0x65;
LAB_00425d34:
  iVar9 = param_5;
  if (iVar8 == -2) {
LAB_00425ebc:
    param_5 = iVar9;
    local_1c = 0;
LAB_00425ec1:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar8;
    }
    iVar9 = 0;
    if ((srcStr == 0x65) || (srcStr == 0x45)) {
      bVar2 = true;
LAB_00425d5c:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar7 = (*(code *)param_2)();
        if (!bVar2) goto LAB_00425d89;
        bVar2 = false;
        if (iVar7 != 0x2d) goto LAB_00425d84;
        local_10 = '\x01';
      }
    }
    else {
LAB_00425daf:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar9 = -iVar9;
      local_11 = -local_11;
    }
    if (iVar8 < 0) {
      (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
    }
    else if (local_11 == '\0') {
      if (local_c < iVar8) {
        iVar8 = local_c;
      }
      iVar9 = iVar9 + (local_8 - iVar8);
      FUN_00424c74((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar9 != 0) {
        FUN_004249d0();
        if (iVar9 < 0) {
          (*(longdouble *)&local_28) = (*(longdouble *)&local_28) / in_ST1;
        }
        else {
          (*(longdouble *)&local_28) = in_ST1 * (*(longdouble *)&local_28);
        }
      }
    }
    else {
      if (local_11 == '\x01') {
        local_38[3] = 0xffff;
        local_38[2] = 0xffff;
        local_38[1] = 0xffff;
        *local_38 = 0xffff;
        local_38[4] = 0x7ffe;
      }
      else {
        (*(longdouble *)&local_28) = (longdouble)(unkuint10)0;
      }
      local_1c = 2;
    }
  }
  if (local_d != '\0') {
    (*(longdouble *)&local_28) = -(*(longdouble *)&local_28);
  }
LAB_00425e91:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_00425d84:
  if (iVar7 != 0x2b) {
LAB_00425d89:
    if ((iVar7 < 0x30) || (0x39 < iVar7)) goto LAB_00425daf;
    iVar9 = iVar7 + iVar9 * 10 + -0x30;
    if (0x1344 < iVar9) {
      local_11 = '\x01';
    }
  }
  goto LAB_00425d5c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00425fd8  FUN_00425fd8   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_00425fd8(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_00424d90(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_00424d90(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426070  FUN_00426070   (722 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00426070(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined4 *local_28;
  int local_18;
  undefined1 local_10 [8];
  ushort uStack_8;
  short local_6;
  
  local_6 = 10;
  if (param_5 == 2) {
    (*(longdouble *)&local_10) = (longdouble)*(float *)param_1;
  }
  else if (param_5 == 6) {
    (*(longdouble *)&local_10) = (longdouble)*(double *)param_1;
  }
  else if (param_5 == 8) {
    (*(longdouble *)&local_10) = *param_1;
  }
  uVar1 = uStack_8;
  uVar2 = (uint)uStack_8;
  (*(longdouble *)&local_10) = (longdouble)CONCAT28(uStack_8 & 0x7fff,local_10);
  *param_3 = (uint)((uVar1 & 0x8000) != 0);
  uVar1 = FUN_00424cc8((longdouble *)local_10);
  uVar1 = uVar1 & 0x4700;
  if (uVar1 != 0x4000) {
    if (uVar1 == 0x500) {
      return 0x7fff;
    }
    if (uVar1 == 0x100) {
      return 0x7ffe;
    }
    uVar2 = ((uVar2 & 0x7fff) - 0x3fff) * 0x4d10 + ((uint)local_10[7] * 2 & 0xff) * 0x4d;
    local_18 = (int)uVar2 >> 0x10;
    if ((uVar2 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    uVar2 = param_2;
    if ((0 < (int)param_2) || (uVar2 = local_18 - param_2, -1 < (int)uVar2)) {
      if (0x13 < (int)uVar2) {
        uVar2 = 0x13;
      }
      for (iVar7 = uVar2 - local_18; iVar7 != 0; iVar7 = iVar7 + iVar4) {
        iVar4 = iVar7;
        if (iVar7 < 0) {
          iVar4 = -iVar7;
        }
        if (0x1344 < iVar4) {
          iVar4 = 0x1344;
        }
        FUN_004249d0();
        if (iVar7 < 0) {
          (*(longdouble *)&local_10) = (*(longdouble *)&local_10) / in_ST0;
        }
        else {
          (*(longdouble *)&local_10) = (*(longdouble *)&local_10) * in_ST0;
          iVar4 = -iVar4;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_004249d0();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_004249d0();
        uVar8 = uVar2;
        if ((*(longdouble *)&local_10) < in_ST1) {
          local_18 = local_18 + -1;
          uVar8 = uVar2 - 1;
          if (0 < (int)param_2) {
            (*(longdouble *)&local_10) = (*(longdouble *)&local_10) * (longdouble)(int)local_6;
            uVar8 = uVar2;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        uVar8 = uVar2 + 1;
        if (((int)uVar8 < 0x14) && (0 < (int)param_2)) {
          (*(longdouble *)&local_10) = (*(longdouble *)&local_10) / (longdouble)(int)local_6;
          uVar8 = uVar2;
        }
      }
      if (-1 < (int)uVar8) {
        FUN_00424ca4((longlong *)local_10,(longdouble *)local_10);
        local_28 = (undefined4 *)((int)param_4 + uVar8);
        bVar6 = 0;
        *(undefined1 *)local_28 = 0;
        pcVar5 = (char *)((int)local_28 + -1);
        if (uVar8 == 0) {
          if (local_10[0] != '\x01') goto LAB_004260f9;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_00425024((undefined4 *)local_10);
            bVar6 = bVar6 | (byte)uVar3;
            *pcVar5 = (byte)uVar3 + 0x30;
            pcVar5 = pcVar5 + -1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (bVar6 == 0) {
          local_18 = local_18 + 1;
          if ((int)param_2 < 1) {
            *(undefined1 *)local_28 = 0x30;
          }
          local_28 = (undefined4 *)((int)local_28 + 1);
          pcVar5[1] = '1';
        }
        if ((int)param_2 < 1) {
          param_2 = local_18 - param_2;
        }
        if (0x28 < (int)param_2) {
          param_2 = 0x28;
        }
        *(undefined1 *)local_28 = 0;
        uVar2 = param_2 - ((int)local_28 - (int)param_4);
        if ((int)uVar2 < 1) {
          return local_18;
        }
        memset(local_28,0x30,uVar2);
        *(undefined1 *)((int)local_28 + uVar2) = 0;
        return local_18;
      }
    }
  }
LAB_004260f9:
  if ((int)param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < (int)param_2) {
    param_2 = 0x28;
  }
  memset(param_4,0x30,param_2);
  *(undefined1 *)((int)param_4 + param_2) = 0;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426344  FUN_00426344   (753 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00426344(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  undefined2 *local_28;
  int local_18;
  undefined1 local_10 [8];
  ushort uStack_8;
  short local_6;
  
  local_6 = 10;
  if (param_5 == 2) {
    (*(longdouble *)&local_10) = (longdouble)*(float *)param_1;
  }
  else if (param_5 == 6) {
    (*(longdouble *)&local_10) = (longdouble)*(double *)param_1;
  }
  else if (param_5 == 8) {
    (*(longdouble *)&local_10) = *param_1;
  }
  uVar1 = uStack_8;
  uVar2 = (uint)uStack_8;
  (*(longdouble *)&local_10) = (longdouble)CONCAT28(uStack_8 & 0x7fff,local_10);
  *param_3 = (uint)((uVar1 & 0x8000) != 0);
  uVar1 = FUN_00424cc8((longdouble *)local_10);
  uVar1 = uVar1 & 0x4700;
  if (uVar1 != 0x4000) {
    if (uVar1 == 0x500) {
      return 0x7fff;
    }
    if (uVar1 == 0x100) {
      return 0x7ffe;
    }
    uVar2 = ((uVar2 & 0x7fff) - 0x3fff) * 0x4d10 + ((uint)local_10[7] * 2 & 0xff) * 0x4d;
    local_18 = (int)uVar2 >> 0x10;
    if ((uVar2 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    iVar8 = param_2;
    if ((0 < param_2) || (iVar8 = local_18 - param_2, -1 < iVar8)) {
      if (0x13 < iVar8) {
        iVar8 = 0x13;
      }
      for (iVar7 = iVar8 - local_18; iVar7 != 0; iVar7 = iVar7 + iVar4) {
        iVar4 = iVar7;
        if (iVar7 < 0) {
          iVar4 = -iVar7;
        }
        if (0x1344 < iVar4) {
          iVar4 = 0x1344;
        }
        FUN_004249d0();
        if (iVar7 < 0) {
          (*(longdouble *)&local_10) = (*(longdouble *)&local_10) / in_ST0;
        }
        else {
          (*(longdouble *)&local_10) = (*(longdouble *)&local_10) * in_ST0;
          iVar4 = -iVar4;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_004249d0();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_004249d0();
        iVar7 = iVar8;
        if ((*(longdouble *)&local_10) < in_ST1) {
          local_18 = local_18 + -1;
          iVar7 = iVar8 + -1;
          if (0 < param_2) {
            (*(longdouble *)&local_10) = (*(longdouble *)&local_10) * (longdouble)(int)local_6;
            iVar7 = iVar8;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        iVar7 = iVar8 + 1;
        if ((iVar7 < 0x14) && (0 < param_2)) {
          (*(longdouble *)&local_10) = (*(longdouble *)&local_10) / (longdouble)(int)local_6;
          iVar7 = iVar8;
        }
      }
      if (-1 < iVar7) {
        FUN_00424ca4((longlong *)local_10,(longdouble *)local_10);
        bVar6 = 0;
        local_28 = param_4 + iVar7;
        *local_28 = 0;
        psVar5 = local_28 + -1;
        if (iVar7 == 0) {
          if (local_10[0] != '\x01') goto LAB_004263cd;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_00425024((undefined4 *)local_10);
            bVar6 = bVar6 | (byte)uVar3;
            *psVar5 = (char)(byte)uVar3 + 0x30;
            psVar5 = psVar5 + -1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (bVar6 == 0) {
          local_18 = local_18 + 1;
          if (param_2 < 1) {
            *local_28 = 0x30;
          }
          local_28 = local_28 + 1;
          psVar5[1] = 0x31;
        }
        if (param_2 < 1) {
          param_2 = local_18 - param_2;
        }
        if (0x28 < param_2) {
          param_2 = 0x28;
        }
        *local_28 = 0;
        iVar8 = (int)local_28 - (int)param_4 >> 1;
        if (iVar8 < 0) {
          iVar8 = iVar8 + (uint)(((int)local_28 - (int)param_4 & 1U) != 0);
        }
        iVar8 = param_2 - iVar8;
        if (iVar8 < 1) {
          return local_18;
        }
        FUN_0041eed8(local_28,0x30,iVar8);
        local_28[iVar8] = 0;
        return local_18;
      }
    }
  }
LAB_004263cd:
  if (param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  FUN_0041eed8(param_4,0x30,param_2);
  param_4[param_2] = 0;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426638  FUN_00426638   (289 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00426638(UINT codePage)

{
  BOOL ok;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  BYTE *pBVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  _cpinfo cpInfo;
  
  if (codePage == 0xfffffffe) {
    codePage = GetOEMCP();
  }
  else if (codePage == 0xfffffffd) {
    codePage = GetACP();
  }
  else if (codePage == 0xfffffffc) {
    codePage = *(UINT *)PTR_DAT_0043330c;
  }
  if ((codePage == 0) || (ok = GetCPInfo(codePage,&cpInfo), ok != 0)) {
    iVar3 = 0;
    puVar6 = &DAT_00434e78;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if ((codePage == 0) || (cpInfo.MaxCharSize < 2)) {
      _DAT_00434f7c = 0;
    }
    else {
      for (pBVar5 = cpInfo.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar6 = &DAT_00434e79 + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar6 = 4;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 1;
      pbVar7 = &DAT_00434e7a;
      do {
        *pbVar7 = *pbVar7 | 8;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 < 0xff);
      _DAT_00434f7c = codePage;
      if (codePage == 0x3a4) {
        uVar4 = (uint)DAT_00433744;
        pbVar7 = &DAT_00434e79 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00433745; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 1;
          pbVar7 = pbVar7 + 1;
        }
        uVar4 = (uint)DAT_00433746;
        pbVar7 = &DAT_00434e79 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00433747; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_004269a0((uint *)"Error: system code page access failure; MBCS table not initialized");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426774  FUN_00426774   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_00426774(uint ch)

{
  undefined4 uVar1;
  
  if (0xff < ch) {
    return 0;
  }
  uVar1 = FUN_0042260c(ch);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426790  FUN_00426790   (86 bytes)   [unnamed]
byte * __cdecl FUN_00426790(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  do {
    if (((&DAT_00434e79)[*param_1] & 4) == 0) {
      if (param_2 == *param_1) {
        pbVar2 = param_1;
      }
    }
    else {
      if (param_1[1] == 0) {
        if (param_2 != 0) {
          return pbVar2;
        }
        return param_1 + 1;
      }
      if (param_2 == CONCAT11(*param_1,param_1[1])) {
        pbVar2 = param_1;
      }
      param_1 = param_1 + 1;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return pbVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004267e8  FUN_004267e8   (69 bytes)   [unnamed]
void __cdecl FUN_004267e8(uint *param_1,int param_2)

{
  char *pcVar1;
  char *len;
  uint uVar3;
  undefined4 *local_8;
  
  *(undefined1 *)param_1 = 0;
  local_8 = (undefined4 *)&GHIDRA_STACK(0x0000000c);
  while( true ) {
    pcVar1 = (char *)*local_8;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    len = strlen(param_1);
    uVar3 = (param_2 - (int)len) - 1;
    if ((int)uVar3 < 1) break;
    FUN_0041efdc((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426830  FUN_00426830   (94 bytes)   [unnamed]
void __cdecl FUN_00426830(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *len;
  
  FUN_004267e8((uint *)&DAT_00434f80,0xf6);
  len = strlen((uint *)&DAT_00434f80);
  FUN_00424f1c(param_3,len + 0x434f80);
  FUN_004269a0((uint *)&DAT_00434f80);
  FUN_00426b84();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426890  FUN_00426890   (78 bytes)   [unnamed]
undefined * __stdcall FUN_00426890(void)

{
  _SYSTEMTIME sysTime;
  
  GetLocalTime(&sysTime);
  wsprintfA(&DAT_00435080,"%02d/%02d/%04d %02d:%02d:%02d.%03d ",(uint)sysTime.wMonth,
            (uint)sysTime.wDay,(uint)sysTime.wYear,(uint)sysTime.wHour,(uint)sysTime.wMinute,
            (uint)sysTime.wSecond,(uint)sysTime.wMilliseconds);
  return &DAT_00435080;
}

// ----------------------------------------------------------------------------------------------------
// 0x004268e0  FUN_004268e0   (104 bytes)   [unnamed]
void __cdecl FUN_004268e0(LPCSTR fileName,uint *buffer)

{
  HANDLE hFile;
  uint *lpBuffer;
  char *len;
  DWORD *numberOfBytesWritten;
  LPOVERLAPPED p_Var3;
  DWORD local_8;
  
  hFile = CreateFileA(fileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    lpBuffer = (uint *)FUN_00426890();
    numberOfBytesWritten = &local_8;
    p_Var3 = (LPOVERLAPPED)0x0;
    len = strlen(lpBuffer);
    WriteFile(hFile,lpBuffer,(DWORD)len,numberOfBytesWritten,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    numberOfBytesWritten = &local_8;
    len = strlen(buffer);
    WriteFile(hFile,buffer,(DWORD)len,numberOfBytesWritten,p_Var3);
    CloseHandle(hFile);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426948  FUN_00426948   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_00426948(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042695c  FUN_0042695c   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0042695c(void)

{
  DWORD threadId;
  undefined4 uVar2;
  code *lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  threadId = GetVersion();
  if ((threadId >> 0x10 & 0x8000) == 0) {
    return 0x2000;
  }
  lpfn = FUN_00426948;
  threadId = GetCurrentThreadId();
  EnumThreadWindows(threadId,lpfn,(LPARAM)lParam);
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  else {
    uVar2 = 0x2000;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004269a0  FUN_004269a0   (283 bytes)   [unnamed]
void __cdecl FUN_004269a0(uint *buffer)

{
  byte *caption;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte filename [128];
  DWORD numberOfBytesWritten;
  
  if ((DAT_004337dc == (LPCSTR)0x0) && (DAT_004337d8 == (code *)0x0)) {
    if (DAT_004339cc != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)filename,0x80);
      caption = FUN_00426790(filename,0x5c);
      if ((caption == (byte *)0x0) && (caption = FUN_00426790(filename,0x3a), caption == (byte *)0x0))
      {
        caption = filename;
      }
      else {
        caption = caption + 1;
      }
      uVar2 = FUN_0042695c();
      MessageBoxA((HWND)0x0,(LPCSTR)buffer,(LPCSTR)caption,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_004337e0,2,&numberOfBytesWritten,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &numberOfBytesWritten;
    nNumberOfBytesToWrite = strlen(buffer);
    WriteFile(hFile,buffer,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_004337e3,2,&numberOfBytesWritten,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_004337d8 != (code *)0x0) {
    if (DAT_004337d8 == (code *)0xffffffff) {
      return;
    }
    ((code *)DAT_004337d8)();
  }
  if (DAT_004337dc == (LPCSTR)0x0) {
    return;
  }
  if (DAT_004337dc == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_004337dc == '\0') {
    return;
  }
  FUN_004268e0(DAT_004337dc,buffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426abc  FUN_00426abc   (15 bytes)   [unnamed]
void __cdecl FUN_00426abc(uint *buffer)

{
  FUN_004269a0(buffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426acc  FUN_00426acc   (23 bytes)   [unnamed]
void __cdecl FUN_00426acc(uint *buffer)

{
  FUN_004269a0(buffer);
  FUN_00426c04(1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426b70  FUN_00426b70   (20 bytes)   [unnamed]
void __stdcall FUN_00426b70(void)

{
  FUN_004269a0((uint *)"Abnormal program termination");
  FUN_00426c04(3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426b84  FUN_00426b84   (14 bytes)   [unnamed]
void __stdcall FUN_00426b84(void)

{
  FUN_00427694(0x16);
  FUN_00426b70();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426b94  FUN_00426b94   (1 bytes)   [unnamed]
void __stdcall FUN_00426b94(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426b98  FUN_00426b98   (81 bytes)   [unnamed]
void __cdecl FUN_00426b98(int param_1,int param_2,UINT exitCode)

{
  if (param_1 == 0) {
    if (DAT_00433830 != (code *)0x0) {
      ((code *)DAT_00433830)();
    }
    FUN_004277f0();
    (*(code *)PTR_FUN_00433834)();
  }
  else {
    DAT_00433830 = (undefined*)((code *)(undefined*)(0x0));
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_00433838)();
      (*(code *)PTR_FUN_0043383c)();
    }
    FUN_00427704(exitCode);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426bec  FUN_00426bec   (21 bytes)   [unnamed]
void __cdecl FUN_00426bec(UINT exitCode)

{
  FUN_00426b98(0,0,exitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c04  FUN_00426c04   (21 bytes)   [unnamed]
void __cdecl FUN_00426c04(UINT exitCode)

{
  FUN_00426b98(1,0,exitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c3c  FUN_00426c3c   (26 bytes)   [unnamed]
void __cdecl FUN_00426c3c(undefined4 *param_1,undefined4 *param_2)

{
  PTR_FUN_004338f0 = (undefined *)*param_1;
  PTR_FUN_004338f4 = (undefined *)*param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c58  FUN_00426c58   (17 bytes)   [unnamed]
void __cdecl FUN_00426c58(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c6c  FUN_00426c6c   (17 bytes)   [unnamed]
void __cdecl FUN_00426c6c(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426c80  FUN_00426c80   (39 bytes)   [unnamed]
void __cdecl FUN_00426c80(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  PTR_FUN_00433840 = param_1;
  PTR_LAB_00433844 = param_2;
  PTR_FUN_00433848 = param_3;
  PTR_LAB_0043384c = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426d64  FUN_00426d64   (176 bytes)   [unnamed]
void __cdecl FUN_00426d64(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_004350d8 == DAT_004350a4) {
    DAT_004350a4 = DAT_004350a4 + 0x10;
    DAT_004350a0 = FUN_00415610();
    if (DAT_004350a0 == 0) {
      FUN_00426acc((uint *)"No space for command line argument vector");
    }
  }
  puVar1 = param_1;
  if (param_2 != 0) {
    strlen(param_1);
    puVar1 = (uint *)malloc();
    if (puVar1 == (uint *)0x0) {
      FUN_00426acc((uint *)"No space for command line argument");
    }
    uVar2 = 0xffffffff;
    do {
      puVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      puVar4 = (uint *)((int)param_1 + 1);
      uVar3 = *param_1;
      param_1 = puVar4;
    } while ((char)uVar3 != '\0');
    uVar2 = ~uVar2;
    puVar4 = (uint *)((int)puVar4 - uVar2);
    puVar5 = puVar1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar5 = (char)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
  }
  *(uint **)(DAT_004350a0 + DAT_004350d8 * 4) = puVar1;
  DAT_004350d8 = DAT_004350d8 + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426e14  FUN_00426e14   (344 bytes)   [unnamed]
undefined4 __cdecl FUN_00426e14(undefined4 param_1,uint *param_2,undefined *param_3)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *local_c;
  uint *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1))
  {
  }
  if ((char)*local_8 == '\"') {
    do {
      puVar3 = local_8;
      local_8 = (uint *)((int)puVar3 + 1);
      if (*(char *)local_8 == '\"') break;
    } while (*(char *)local_8 != '\0');
    if (*(char *)local_8 == '\"') {
      local_8 = (uint *)((int)puVar3 + 2);
    }
  }
  else {
    for (; ((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'));
        local_8 = (uint *)((int)local_8 + 1)) {
    }
  }
  strlen(local_8);
  DAT_004350ac = (undefined1 *)malloc();
  local_c = DAT_004350ac;
  if (DAT_004350ac == (undefined1 *)0x0) {
    FUN_00426acc((uint *)"No space for copy of command line");
  }
  while( true ) {
    if ((char)*local_8 == '\0') {
      return 1;
    }
    bVar2 = false;
    for (; ((char)*local_8 == ' ' || ((char)*local_8 == '\t')); local_8 = (uint *)((int)local_8 + 1)
        ) {
    }
    if ((char)*local_8 == '\0') break;
    while (((cVar1 = (char)*local_8, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\0'))) {
      if (cVar1 == '\"') {
        local_8 = (uint *)((int)local_8 + 1);
        while (((char)*local_8 != '\"' && ((char)*local_8 != '\0'))) {
          FUN_00426f88((int *)&local_c,(int *)&local_8);
        }
        if ((char)*local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if (((char)*local_8 == '*') || ((char)*local_8 == '?')) {
          bVar2 = true;
        }
        FUN_00426f88((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_004338f0)();
    }
    else {
      (*(code *)param_3)();
    }
    if ((char)*local_8 == '\0') {
      return 1;
    }
    local_8 = (uint *)((int)local_8 + 1);
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426f88  FUN_00426f88   (113 bytes)   [unnamed]
void __cdecl FUN_00426f88(int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(char *)*param_2 == '\\') && (((char *)*param_2)[1] == '\"')) {
    *(undefined1 *)*param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((DAT_004338a4 == 0) || ((*(char *)*param_2 != '\\' || (((char *)*param_2)[1] != '\\'))))
  {
    bVar1 = *(byte *)*param_2;
    if ((((&DAT_00434e79)[bVar1] & 4) != 0) && (((byte *)*param_2)[1] != 0)) {
      *(byte *)*param_1 = bVar1;
      *param_2 = *param_2 + 1;
      *param_1 = *param_1 + 1;
    }
    *(undefined1 *)*param_1 = *(undefined1 *)*param_2;
    *param_2 = *param_2 + 1;
  }
  else {
    *(undefined1 *)*param_1 = 0x5c;
    *param_2 = *param_2 + 2;
  }
  *param_1 = *param_1 + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426ffc  FUN_00426ffc   (403 bytes)   [unnamed]
undefined4 __cdecl FUN_00426ffc(undefined4 param_1,short *param_2,undefined *param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  undefined2 *local_c;
  short *local_8;
  
  local_8 = param_2;
  (*(code *)param_3)();
  for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
  }
  if (*local_8 == 0x22) {
    do {
      psVar3 = local_8;
      local_8 = psVar3 + 1;
      if (*local_8 == 0x22) break;
    } while (*local_8 != 0);
    if (*local_8 == 0x22) {
      local_8 = psVar3 + 2;
    }
  }
  else {
    for (; ((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0));
        local_8 = local_8 + 1) {
    }
  }
  FUN_0041f3a4(local_8);
  DAT_004350b0 = (undefined2 *)malloc();
  local_c = DAT_004350b0;
  if (DAT_004350b0 == (undefined2 *)0x0) {
    FUN_00426acc((uint *)"No space for copy of command line");
  }
  while( true ) {
    if (*local_8 == 0) {
      return 1;
    }
    bVar2 = false;
    for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
    }
    if (*local_8 == 0) break;
    while (((sVar1 = *local_8, sVar1 != 0x20 && (sVar1 != 9)) && (sVar1 != 0))) {
      if (sVar1 == 0x22) {
        local_8 = local_8 + 1;
        while ((*local_8 != 0x22 && (*local_8 != 0))) {
          FUN_004271ac((int *)&local_c,(int *)&local_8);
        }
        if (*local_8 == 0x22) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if ((*local_8 == 0x2a) || (*local_8 == 0x3f)) {
          bVar2 = true;
        }
        FUN_004271ac((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_004338f4)();
    }
    else {
      (*(code *)param_3)();
    }
    if (*local_8 == 0) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004271ac  FUN_004271ac   (92 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_004271ac(int *param_1,int *param_2)

{
  if ((*(short *)*param_2 == 0x5c) && (((short *)*param_2)[1] == 0x22)) {
    *(undefined2 *)*param_1 = 0x22;
    *param_2 = *param_2 + 4;
  }
  else if ((DAT_004338a4 == 0) || ((*(short *)*param_2 != 0x5c || (((short *)*param_2)[1] != 0x5c)))
          ) {
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    *param_2 = *param_2 + 2;
  }
  else {
    *(undefined2 *)*param_1 = 0x5c;
    *param_2 = *param_2 + 4;
  }
  *param_1 = *param_1 + 2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004272a0  FUN_004272a0   (330 bytes)   [unnamed]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall FUN_004272a0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (DAT_004350b4 == (undefined4 *)0x0) {
    if (((*(uint * *)&DAT_004350d4) == (uint *)0x0) &&
       ((*(uint * *)&DAT_004350d4) = (uint *)GetEnvironmentStrings(), (*(uint * *)&DAT_004350d4) == (uint *)0x0)) {
      FUN_00426acc((uint *)"GetEnvironmentStrings failed");
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = (*(uint * *)&DAT_004350d4);
    while (pcVar1 = strlen(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_004350b8 = (uint *)malloc();
    if (DAT_004350b8 == (uint *)0x0) {
      return 0;
    }
    memcpy(DAT_004350b8,(*(uint * *)&DAT_004350d4),(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = DAT_004350b4; (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = strlen((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_004350bc = iVar8 + 4;
  puVar2 = calloc(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = DAT_004350b4;
    puVar4 = DAT_004350b8;
    puVar7 = puVar2;
    if (DAT_004350b4 == (undefined4 *)0x0) {
      while (pcVar6 = strlen(puVar4), pcVar6 != (char *)0x0) {
        *puVar7 = puVar4;
        puVar4 = (uint *)((int)puVar4 + (int)(pcVar6 + 1));
        puVar7 = puVar7 + 1;
      }
    }
    else {
      for (; (uint *)*puVar5 != (uint *)0x0; puVar5 = puVar5 + 1) {
        pcVar6 = strlen((uint *)*puVar5);
        if (pcVar6 == (char *)0x0) {
          puVar7 = puVar7 + -1;
        }
        else {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
    }
    if (DAT_004350b4 != (undefined4 *)0x0) {
      free();
    }
    uVar3 = 1;
    DAT_004350b4 = puVar2;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042740c  FUN_0042740c   (31 bytes)   [unnamed]
int __cdecl FUN_0042740c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00433998;
  do {
    if (param_1 == *piVar2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042742c  FUN_0042742c   (455 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0042742c(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  
  uVar3 = 0;
  local_c = 0;
  iVar2 = *param_1;
  if (iVar2 < -0x3fffff6f) {
    if (iVar2 == -0x3fffff70) {
      iVar2 = 2;
      uVar3 = 1;
    }
    else if (iVar2 < -0x3ffffffa) {
      if (iVar2 == -0x3ffffffb) {
        iVar2 = 3;
      }
      else if (iVar2 == -0x7ffffffd) {
        iVar2 = 1;
      }
      else {
        if (iVar2 != -0x7ffffffc) {
          return 1;
        }
        iVar2 = 1;
      }
    }
    else if (iVar2 == -0x3fffffe3) {
      iVar2 = 1;
    }
    else {
      if (iVar2 != -0x3fffff72) {
        return 1;
      }
      iVar2 = 2;
      uVar3 = 4;
    }
  }
  else {
    switch(iVar2) {
    case -0x3fffff6f:
      iVar2 = 2;
      uVar3 = 8;
      break;
    case -0x3fffff6e:
      iVar2 = 2;
      uVar3 = 0x49;
      break;
    case -0x3fffff6d:
      iVar2 = 2;
      uVar3 = 0x10;
      break;
    case -0x3fffff6c:
      iVar2 = 2;
      break;
    default:
      return 1;
    case -0x3fffff6a:
      iVar2 = 1;
    }
  }
  pcVar1 = *(code **)(&DAT_00433970 + iVar2 * 4);
  if (pcVar1 == (code *)0x1) {
    local_c = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    local_c = 1;
  }
  else {
    *(undefined4 *)(&DAT_00433970 + iVar2 * 4) = 0;
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 2)) {
      FUN_00424bd0();
      FUN_00424be4(DAT_00433628,7999);
      (*pcVar1)();
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & ~uVar3;
    }
    else {
      (*pcVar1)();
    }
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042760c  FUN_0042760c   (37 bytes)   [unnamed]
undefined4 __stdcall FUN_0042760c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x15;
  }
  FUN_00427694(iVar1);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427634  FUN_00427634   (93 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_00427634(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0043396c == '\0') {
    DAT_00434cc8 = (undefined*)FUN_0042742c;
    SetConsoleCtrlHandler(FUN_0042760c,1);
    DAT_0043396c = '\x01';
  }
  iVar2 = FUN_0042740c(param_1);
  if (iVar2 == -1) {
    _DAT_004337d4 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00433970 + iVar2 * 4);
  *(undefined4 *)(&DAT_00433970 + iVar2 * 4) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427694  FUN_00427694   (112 bytes)   [unnamed]
undefined4 __cdecl FUN_00427694(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_0042740c(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_00433970 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_00426b70();
          }
          else {
            FUN_00426c04(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_00433970 + iVar2 * 4) = 0;
        (*pcVar1)(pcVar1,(&DAT_004339c0)[iVar2],iVar4,param_1,(&DAT_004339c0)[iVar2],0);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427704  FUN_00427704   (12 bytes)   [unnamed]
void __stdcall FUN_00427704(UINT exitCode)

{
                    /* WARNING: Subroutine does not return */
  ExitProcess(exitCode);
}

// ----------------------------------------------------------------------------------------------------
// 0x00427714  FUN_00427714   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_00427714(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427718  FUN_00427718   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_00427718(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042771c  FUN_0042771c   (210 bytes)   [unnamed]
void __cdecl FUN_0042771c(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *local_18;
  int local_14;
  int local_10;
  int i;
  
  if (param_2 == 0) {
    local_10 = 0x100;
    local_14 = 1;
    iVar4 = 0;
  }
  else {
    local_10 = -1;
    local_14 = -1;
    iVar4 = 0xff;
  }
  for (; iVar4 != local_10; iVar4 = iVar4 + local_14) {
    local_18 = param_1;
    for (i = 0; local_18 = local_18 + 1, i < *param_1; i = i + 1) {
      puVar1 = (uint *)*local_18;
      if (param_2 == 0) {
        uVar2 = puVar1[1];
        for (uVar5 = *puVar1; uVar5 < uVar2; uVar5 = uVar5 + 6) {
          if ((char)iVar4 == *(char *)(uVar5 + 1)) {
            (**(code **)(uVar5 + 2))();
          }
        }
      }
      else {
        uVar5 = puVar1[2];
        uVar2 = puVar1[3];
        while (uVar3 = uVar2, uVar2 = uVar3 - 6, uVar5 <= uVar2) {
          if ((char)iVar4 == *(char *)(uVar3 - 5)) {
            (**(code **)(uVar3 - 4))();
          }
        }
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004277f0  FUN_004277f0   (107 bytes)   [unnamed]
void __stdcall FUN_004277f0(void)

{
  int *piVar1;
  int *piVar2;
  int i;
  
  if (DAT_004339d0 == 0) {
    DAT_004339d0 = 1;
    FUN_0042771c((int *)&DAT_004350f8,1);
    FUN_0042771c((int *)&DAT_004350dc,1);
    piVar1 = (int *)FUN_00427718();
    if (piVar1 != (int *)0x0) {
      FUN_0042771c(piVar1,1);
      piVar2 = piVar1;
      for (i = 0; piVar2 = piVar2 + 1, i < *piVar1; i = i + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042785c  FUN_0042785c   (387 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0042785c(int param_1)

{
  char cVar1;
  int *piVar2;
  UINT exitCode;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int i;
  undefined1 newStr [8];
  
  (*(uint *)&DAT_004339cc) = *(uint *)(param_1 + 0x10) & 1;
  FUN_00424c5c();
  FUN_0042500c(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_00420968(*(undefined **)(param_1 + 0x28));
  FUN_00420978(*(undefined4 **)(param_1 + 0x44));
  _DAT_004350f8 = 1;
  _DAT_004350fc = param_1;
  DAT_004350e4 = newStr;
  FUN_0041ff20();
  DAT_004350d4 = GetEnvironmentStrings();
  DAT_004350d0 = GetCommandLineA();
  FUN_00426c3c(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x30));
  FUN_00426c80(*(undefined **)(param_1 + 0x34),*(undefined **)(param_1 + 0x38),
               *(undefined **)(param_1 + 0x3c),*(undefined **)(param_1 + 0x40));
  piVar2 = (int *)FUN_00427714();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_0042771c(piVar2,0);
    piVar5 = piVar2;
    for (i = 0; piVar5 = piVar5 + 1, i < *piVar2; i = i + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_0042771c((int *)&DAT_004350f8,0);
  pcVar6 = DAT_004350d0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    exitCode = (**(code **)(param_1 + 0x18))();
    FUN_00426bec(exitCode);
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    FUN_004279e0();
    GetModuleHandleA((LPCSTR)0x0);
    exitCode = (**(code **)(param_1 + 0x18))();
    FUN_00426bec(exitCode);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004279e0  FUN_004279e0   (32 bytes)   [unnamed]
WORD __stdcall FUN_004279e0(void)

{
  _STARTUPINFOA _Stack_44;
  
  GetStartupInfoA(&_Stack_44);
  if (((byte)_Stack_44.dwFlags & 1) == 0) {
    _Stack_44.wShowWindow = 10;
  }
  return _Stack_44.wShowWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a08  FUN_00427a08   (16 bytes)   [unnamed]
void __stdcall FUN_00427a08(DWORD tlsIndex)

{
  TlsFree(tlsIndex);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a18  FUN_00427a18   (16 bytes)   [unnamed]
void __stdcall FUN_00427a18(DWORD tlsIndex)

{
  TlsGetValue(tlsIndex);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a28  FUN_00427a28   (20 bytes)   [unnamed]
void __stdcall FUN_00427a28(DWORD tlsIndex,LPVOID tlsValue)

{
  TlsSetValue(tlsIndex,tlsValue);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a3c  FUN_00427a3c   (7 bytes)   [unnamed]
void __stdcall FUN_00427a3c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a44  FUN_00427a44   (7 bytes)   [unnamed]
void __stdcall FUN_00427a44(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a7b  FUN_00427a7b   (6 bytes)   [unnamed]
void FUN_00427a7b(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00427a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a82  FUN_00427a82   (74 bytes)   [unnamed]
int __cdecl FUN_00427a82(uint param_1)

{
  int iVar1;
  
  iVar1 = malloc();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = __getTlsBlock();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_00427aaf;
  }
  FUN_00426b84();
LAB_00427aaf:
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = __getTlsBlock();
  return *(int *)(iVar1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x00427acc  FUN_00427acc   (45 bytes)   [unnamed]
void __cdecl FUN_00427acc(int param_1)

{
  int iVar1;
  
  iVar1 = __getTlsBlock();
  if (param_1 == *(int *)(iVar1 + 0x14)) {
    iVar1 = __getTlsBlock();
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    return;
  }
  free();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427af9  FUN_00427af9   (198 bytes)   [unnamed]
undefined4 __cdecl FUN_00427af9(int *param_1,undefined4 param_2,int *param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_0041fa34(param_1,param_3,0,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_3 + 1);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_0041fa34(param_1,(int *)param_3[2],1,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = *(ushort *)((int *)param_3[2] + 1);
    if ((uVar2 & 0x10) == 0) {
      return 0;
    }
    iVar3 = FUN_0041fa34(param_1,(int *)param_3[2],0,param_2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if ((uVar2 & 0x10) != 0) {
    if ((param_4 & 1) != 0) {
      return 1;
    }
    if ((uVar1 & 0x10) == 0) {
      return 0;
    }
    if ((((uVar2 & 0x40) != 0) && (((uVar2 & 0x100) != 0 || ((uVar1 & 0x100) == 0)))) &&
       (((uVar2 & 0x200) != 0 || ((uVar1 & 0x200) == 0)))) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427bbf  FUN_00427bbf   (270 bytes)   [unnamed]
void __cdecl FUN_00427bbf(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_00426830("(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0","xx.cpp",0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_00426830("(ctorMask & 0x0080) == 0","xx.cpp",0x207);
  }
  if ((param_4 & 0x1000) == 0) {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_00426830("!\"what\?\"","xx.cpp",0x25e);
    }
  }
  else {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,0,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_00426830("!\"what\?\"","xx.cpp",0x232);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427ccd  FUN_00427ccd   (24 bytes)   [unnamed]
int __cdecl FUN_00427ccd(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    while (cVar1 = *param_1, param_1 = param_1 + 1, cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427ce5  FUN_00427ce5   (29 bytes)   [unnamed]
void __cdecl FUN_00427ce5(undefined4 arguments,int param_2)

{
  RaiseException(0xeedfae6,0,param_2 + 2,&arguments);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427d02  FUN_00427d02   (208 bytes)   [unnamed]
void __cdecl FUN_00427d02(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 )

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  if ((param_3 & 2) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*DAT_00435108 == 2) {
    pcVar1 = FUN_0041f920(param_2);
    FUN_00427ccd(pcVar1);
    FUN_00427ce5(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_00426830("(dtorMask & 0x0080) == 0","xx.cpp",0x2cd);
  }
  uVar3 = param_5 & 7;
  if (uVar3 == 1) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 2) {
    (*(code *)param_4)();
  }
  else if (uVar3 == 3) {
    (*(code *)param_4)(param_1,uVar2);
  }
  else if (uVar3 == 5) {
    (*(code *)param_4)();
  }
  else {
    FUN_00426830("!\"what\?\"","xx.cpp",0x2f4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427dd2  FUN_00427dd2   (126 bytes)   [unnamed]
void __cdecl FUN_00427dd2(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_00426830("(mfnMask & 0x0080) == 0","xx.cpp",0x2fc);
  }
  uVar1 = param_3 & 7;
  if (uVar1 == 1) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 2) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 3) {
    (*(code *)param_2)(param_1);
    return;
  }
  if (uVar1 == 5) {
    (*(code *)param_2)();
    return;
  }
  FUN_00426830("!\"what\?\"","xx.cpp",0x323);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427e50  __raiseException   (576 bytes, 2 ranges)   [analysis]
//   builds the Borland exception record (type, object copy, source position) and calls RaiseException
void __cdecl __raiseException(uint *typeDesc,undefined4 *object,undefined4 objectDtor,undefined *copyCtor,uint copyCtorMask, undefined4 throwFlags,undefined4 throwFile,undefined4 throwLine,undefined4 throwReturn)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 in_FS;
  ULONG_PTR arguments;
  undefined4 unused;
  undefined4 *unused2;
  undefined4 local_38;
  undefined4 *record;
  uint objectOffset;
  uint *baseTypeDesc;
  undefined4 local_28;
  undefined2 ehContext;
  
  __InitExceptBlockLDTC(0x4339f8);
  iVar4 = __getTlsBlock();
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 2;
  iVar4 = __getTlsBlock();
  if (typeDesc == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)((int)typeDesc + 6) + (int)typeDesc;
  }
  *(int *)(iVar4 + 0x10) = iVar6;
  iVar4 = __getTlsBlock();
  *(undefined4 *)(iVar4 + 0xc) = throwFile;
  iVar4 = __getTlsBlock();
  *(undefined4 *)(iVar4 + 8) = throwLine;
  baseTypeDesc = typeDesc;
  uVar2 = (ushort)typeDesc[1];
  uVar3 = *typeDesc;
  if ((uVar2 & 2) == 0) {
    objectOffset = 0;
  }
  else {
    objectOffset = typeDesc[3];
  }
  if ((uVar2 & 0x30) != 0) {
    baseTypeDesc = (uint *)typeDesc[2];
  }
  record = (undefined4 *)FUN_00427a82(uVar3 + 0x52);
  *record = 0;
  record[1] = typeDesc;
  record[3] = throwFlags;
  record[4] = uVar3;
  *(ushort *)(record + 6) = uVar2;
  *(undefined2 *)((int)record + 0x1a) = (undefined2)objectOffset;
  record[5] = baseTypeDesc;
  record[2] = objectDtor;
  record[10] = 0;
  record[0xb] = 0;
  record[7] = FUN_00427acc;
  record[0xd] = throwFile;
  record[0xe] = throwLine;
  record[8] = copyCtor;
  record[9] = copyCtorMask;
  *(undefined1 *)((int)record + 0x45) = 0;
  *(undefined1 *)(record + 0x11) = 1;
  memcpy((undefined4 *)((int)record + 0x52),object,uVar3);
  if ((*DAT_00435108 == 1) || (*DAT_00435108 == 2)) {
    pcVar5 = FUN_0041f920((int)typeDesc);
    FUN_00427ccd(pcVar5);
    FUN_00427ce5(1,0xb);
  }
  if ((objectOffset & 1) != 0) {
    if (copyCtor == (undefined *)0x0) {
      FUN_00426830("cctrAddr","xx.cpp",0x445);
    }
    local_38 = DAT_00435104;
    ehContext = 8;
    FUN_00427bbf((int)record + 0x52,object,copyCtor,copyCtorMask);
    ehContext = 0;
    DAT_00435104 = local_38;
  }
  iVar4 = __getTlsBlock();
  arguments = *(ULONG_PTR *)(iVar4 + 0x10);
  unused = throwReturn;
  unused2 = record;
  RaiseException(0xeefface,1,3,&arguments);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

} // namespace tea
