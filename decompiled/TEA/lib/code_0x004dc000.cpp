// TEA.exe — runtime / library code "code_0x004dc000"
// 133 functions, 0x004dc020..0x004dfed8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dc020  FUN_004dc020   (92 bytes)   [unnamed]
void __cdecl FUN_004dc020(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b5c,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc07c  FUN_004dc07c   (97 bytes)   [unnamed]
void __cdecl FUN_004dc07c(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b5e,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc0e0  FUN_004dc0e0   (97 bytes)   [unnamed]
void __cdecl FUN_004dc0e0(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b60,'\x01');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc144  FUN_004dc144   (144 bytes)   [unnamed]
undefined4 __cdecl FUN_004dc144(int param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  
  *param_2 = 0x25;
  pcVar1 = param_2 + 1;
  if ((*(byte *)(param_1 + 0xd) & 8) != 0) {
    *pcVar1 = '+';
    pcVar1 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 0xd) & 4) != 0) {
    *pcVar1 = '#';
    pcVar1 = pcVar1 + 1;
  }
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x10) != 0) || ((*(byte *)(param_1 + 0xc) & 4) != 0)) {
    *pcVar1 = '.';
    uVar2 = 1;
    pcVar1[1] = '*';
    pcVar1 = pcVar1 + 2;
  }
  if (param_3 != '\0') {
    *pcVar1 = param_3;
    pcVar1 = pcVar1 + 1;
  }
  uVar4 = *(uint *)(param_1 + 0xc) & 0x104;
  if (uVar4 == 0x100) {
    if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
      cVar3 = 'e';
    }
    else {
      cVar3 = 'E';
    }
  }
  else if (uVar4 == 4) {
    cVar3 = 'f';
  }
  else if ((*(byte *)(param_1 + 0xd) & 0x40) == 0) {
    cVar3 = 'g';
  }
  else {
    cVar3 = 'G';
  }
  *pcVar1 = cVar3;
  pcVar1[1] = '\0';
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x18) = 10;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc1d4  FUN_004dc1d4   (126 bytes)   [unnamed]
void __cdecl FUN_004dc1d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longdouble in_ST0;
  byte local_1c [24];
  
  uVar1 = FUN_004dc144(param_1,local_1c,'\0');
  FUN_004d91b4();
  if (in_ST0 == (longdouble)(double)CONCAT44(param_3,param_2)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if ((char)uVar1 == '\0') {
    iVar2 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  else {
    iVar2 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc254  FUN_004dc254   (104 bytes)   [unnamed]
void __cdecl FUN_004dc254(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte local_14 [16];
  
  uVar1 = FUN_004dc144(param_1,local_14,'L');
  if ((char)uVar1 == '\0') {
    iVar2 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar2 = sprintf(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc2bc  FUN_004dc2bc   (100 bytes)   [unnamed]
int __cdecl FUN_004dc2bc(int param_1,int param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  
  *(int *)(param_1 + 0x34) = param_1 + 0x25e;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*param_3 != '\0') {
    uVar1 = (int)*param_3 & 0xf;
    pcVar2 = param_3 + 1;
    if ((int)uVar1 < param_2) {
      do {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        param_2 = param_2 - uVar1;
        **(undefined1 **)(param_1 + 0x34) = (char)uVar1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (param_1 + 0x1c8 == *(int *)(param_1 + 0x34)) {
          return param_2;
        }
        if (*pcVar2 == '\x7f') {
          return param_2;
        }
        if (*pcVar2 != '\0') {
          uVar1 = (int)*pcVar2 & 0xf;
          pcVar2 = pcVar2 + 1;
        }
      } while ((int)uVar1 < param_2);
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc320  __rwstd::except_msg_string::format   (54 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ea4c. formats a library exception message (printf-style) into a buffer; the result is used to build the exception's what() string
undefined1 * __cdecl __rwstd::except_msg_string::format(undefined1 *exceptMsg,byte *format2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516c20);
  FUN_004e036c(exceptMsg,format2,(uint *)&GHIDRA_STACK(0x0000000c));
  *sehChainHead = sehPrevFrame;
  return exceptMsg;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc358  FUN_004dc358   (163 bytes)   [unnamed]
char * __cdecl FUN_004dc358(char *param_1,UINT id)

{
  char cVar1;
  uint uVar2;
  uint i;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *sehChainHead;
  byte bVar7;
  undefined4 sehPrevFrame;
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x516c28);
  pcVar5 = PTR_s_Error_00516bbc;
  pbVar4 = (byte *)0x0;
  if (DAT_00516bc0 == (int *)0x0) {
    DAT_00516bc0 = FUN_004da4f8("rwstderr");
  }
  if (DAT_00516bc0 != (int *)0x0) {
    pbVar4 = (byte *)FUN_004da604((int)DAT_00516bc0,1,id,pcVar5);
  }
  if (pbVar4 == (byte *)0x0) {
    uVar2 = 0xffffffff;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = param_1;
    for (i = uVar2 >> 2; i != 0; i = i - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  else {
    FUN_004e036c(param_1,pbVar4,(uint *)&GHIDRA_STACK(0x0000000c));
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc794  memchr   (30 bytes)   [analysis (usage pattern, less certain) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ed9c.
char * __cdecl memchr(char *s,char ch,int n)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (n != 0) {
    do {
      pcVar1 = s;
      if (n == 0) break;
      n = n + -1;
      pcVar1 = s + 1;
      in_ZF = ch == *s;
      s = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc7b4  FUN_004dc7b4   (32 bytes)   [unnamed]
short * __cdecl FUN_004dc7b4(short *param_1,short param_2,int param_3)

{
  short *psVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      psVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      psVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = psVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return psVar1 + -1;
    }
  }
  return (short *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc7d4  memcpy   (36 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041eddc.
undefined4 * __cdecl memcpy(undefined4 *dest,undefined4 *src,uint n)

{
  uint i;
  undefined4 *puVar2;
  
  puVar2 = dest;
  for (i = n >> 2; i != 0; i = i - 1) {
    *puVar2 = *src;
    src = src + 1;
    puVar2 = puVar2 + 1;
  }
  for (i = n & 3; i != 0; i = i - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)src;
    src = (undefined4 *)((int)src + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc7f8  FUN_004dc7f8   (74 bytes)   [unnamed]
undefined4 * __cdecl FUN_004dc7f8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint i;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 < param_2) {
    puVar3 = param_1;
    for (i = param_3 >> 2; i != 0; i = i - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (i = param_3 & 3; i != 0; i = i - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  else if (param_1 != param_2) {
    puVar2 = (undefined1 *)((int)param_2 + (param_3 - 1));
    puVar4 = (undefined1 *)((int)param_1 + (param_3 - 1));
    for (i = param_3 & 3; i != 0; i = i - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + -1;
      puVar4 = puVar4 + -1;
    }
    puVar3 = (undefined4 *)(puVar2 + -3);
    puVar5 = (undefined4 *)(puVar4 + -3);
    for (i = param_3 >> 2; i != 0; i = i - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc844  memset   (138 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ee4c.
undefined4 * __cdecl memset(undefined4 *dest,undefined1 ch,uint n)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = CONCAT11(ch,ch);
  if ((n & 0xfffffffc) == 0) {
    if ((n & 3) != 0) {
      *(undefined1 *)dest = ch;
      bVar4 = (char)(n & 3) - 1;
      if (bVar4 != 0) {
        *(undefined2 *)((int)dest + (bVar4 - 1)) = uVar3;
      }
    }
    return dest;
  }
  *(undefined2 *)dest = uVar3;
  puVar1 = (undefined4 *)((int)dest + (n - 4));
  *(undefined2 *)((int)dest + 2) = uVar3;
  uVar2 = *dest;
  uVar5 = n >> 3;
  puVar6 = dest;
  if (uVar5 == 0) {
    *puVar1 = uVar2;
    return dest;
  }
  do {
    *puVar6 = uVar2;
    puVar6[1] = uVar2;
    if (uVar5 == 1) break;
    puVar6[2] = uVar2;
    puVar6[3] = uVar2;
    if (uVar5 == 2) break;
    puVar6[4] = uVar2;
    puVar6[5] = uVar2;
    if (uVar5 == 3) break;
    puVar6[6] = uVar2;
    puVar6[7] = uVar2;
    if (uVar5 == 4) break;
    puVar6[8] = uVar2;
    puVar6[9] = uVar2;
    if (uVar5 == 5) break;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar2;
    puVar6 = puVar6 + 0xc;
    uVar5 = uVar5 - 6;
  } while (uVar5 != 0);
  *puVar1 = uVar2;
  puVar1[-1] = uVar2;
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc8d0  FUN_004dc8d0   (24 bytes)   [unnamed]
undefined2 * __cdecl FUN_004dc8d0(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc8e8  FUN_004dc8e8   (60 bytes)   [unnamed]
char * __cdecl FUN_004dc8e8(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint i;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (i = uVar3 >> 2; i != 0; i = i - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc924  strchr   (83 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ef2c.
char * __cdecl strchr(char *s,char ch)

{
  char *pcVar1;
  
  do {
    if (ch == *s) {
      return s;
    }
    if (*s == '\0') {
      return (char *)0x0;
    }
    if (ch == s[1]) {
      return s + 1;
    }
    if (s[1] == '\0') {
      return (char *)0x0;
    }
    if (ch == s[2]) {
      return s + 2;
    }
    if (s[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = s + 3;
    if (ch == *pcVar1) {
      return s + 3;
    }
    s = s + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc978  FUN_004dc978   (75 bytes)   [unnamed]
int __cdecl FUN_004dc978(char *param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  do {
    iVar2 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if ((iVar2 != 0) || (*param_2 == 0)) {
      return iVar2;
    }
    iVar2 = (uint)(byte)param_1[1] - (uint)(byte)param_2[1];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[1] == 0) {
      return 0;
    }
    iVar2 = (uint)(byte)param_1[2] - (uint)(byte)param_2[2];
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_2[2] == 0) {
      return 0;
    }
    pbVar1 = (byte *)(param_2 + 3);
    iVar2 = (uint)(byte)param_1[3] - (uint)*pbVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  } while (*pbVar1 != 0);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc9c4  FUN_004dc9c4   (47 bytes)   [unnamed]
char * __cdecl FUN_004dc9c4(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint i;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_1;
  for (i = ~uVar2 >> 2; i != 0; i = i - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = ~uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar4 = *param_2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dc9f4  strlen   (90 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ef80.
char * __cdecl strlen(uint *s)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = s;
  if (((uint)s & 3) == 0) {
LAB_004dc9fc:
    do {
      do {
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        uVar3 = uVar1 + 0xfefefeff & 0x80808080;
      } while (uVar3 == 0);
      uVar3 = uVar3 & ~uVar1;
    } while (uVar3 == 0);
    if ((char)uVar3 == '\0') {
      if ((char)(uVar3 >> 8) == '\0') {
        if ((uVar3 & 0xff0000) == 0) goto LAB_004dca46;
        goto LAB_004dca45;
      }
    }
    else {
LAB_004dca43:
      puVar2 = (uint *)((int)puVar2 + -1);
    }
LAB_004dca44:
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  else {
    puVar2 = s + 1;
    if ((char)*s == '\0') goto LAB_004dca43;
    if (*(char *)((int)s + 1) == '\0') goto LAB_004dca44;
    if (*(char *)((int)s + 2) != '\0') {
      puVar2 = (uint *)((int)s + 3U & 0xfffffffc);
      goto LAB_004dc9fc;
    }
  }
LAB_004dca45:
  puVar2 = (uint *)((int)puVar2 + -1);
LAB_004dca46:
  return (char *)((int)puVar2 + (-1 - (int)s));
}

// ----------------------------------------------------------------------------------------------------
// 0x004dca50  FUN_004dca50   (110 bytes)   [unnamed]
char * __cdecl FUN_004dca50(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = -1;
  pcVar5 = param_1;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar3 = param_3 >> 2;
  while( true ) {
    if (uVar3 == 0) {
      *pcVar4 = '\0';
      return param_1;
    }
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[1];
    pcVar4[1] = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[2];
    pcVar4[2] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    pcVar4[3] = cVar1;
    pcVar4 = pcVar4 + 4;
    if (cVar1 == '\0') {
      return param_1;
    }
    uVar3 = uVar3 - 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcac0  FUN_004dcac0   (39 bytes)   [unnamed]
uint __cdecl FUN_004dcac0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 0;
    }
    bVar1 = *param_1;
    if (bVar1 != *param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)(bVar1 < *param_2) | 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcae8  thunk → memchr   (5 bytes)   [unnamed]
char * __cdecl thunk_memchr(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcaed  thunk → memchr   (5 bytes)   [unnamed]
char * __cdecl thunk_memchr_4dcaed(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  undefined1 in_ZF;
  
  if (param_3 != 0) {
    do {
      pcVar1 = param_1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1 + 1;
      in_ZF = param_2 == *param_1;
      param_1 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcafc  thunk → strchr   (5 bytes)   [unnamed]
char * __cdecl thunk_strchr(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb01  thunk → strchr   (5 bytes)   [unnamed]
char * __cdecl thunk_strchr_4dcb01(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[1]) {
      return param_1 + 1;
    }
    if (param_1[1] == '\0') {
      return (char *)0x0;
    }
    if (param_2 == param_1[2]) {
      return param_1 + 2;
    }
    if (param_1[2] == '\0') {
      return (char *)0x0;
    }
    pcVar1 = param_1 + 3;
    if (param_2 == *pcVar1) {
      return param_1 + 3;
    }
    param_1 = param_1 + 4;
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb0d  thunk → FUN_004dcc90   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004dcc90(char *param_1,char *param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb14  thunk → strrchr   (5 bytes)   [unnamed]
uint * __cdecl thunk_strrchr(uint *param_1,char param_2)

{
  char *len;
  uint *puVar2;
  
  len = strlen(param_1);
  puVar2 = (uint *)(len + (int)param_1);
  while( true ) {
    if (param_2 == (char)*puVar2) {
      return puVar2;
    }
    if (param_1 == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb19  thunk → strrchr   (5 bytes)   [unnamed]
uint * __cdecl thunk_strrchr_4dcb19(uint *param_1,char param_2)

{
  char *len;
  uint *puVar2;
  
  len = strlen(param_1);
  puVar2 = (uint *)(len + (int)param_1);
  while( true ) {
    if (param_2 == (char)*puVar2) {
      return puVar2;
    }
    if (param_1 == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb20  thunk → FUN_004dcd18   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004dcd18(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb25  thunk → FUN_004dcd18   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004dcd18_4dcb25(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb2c  FUN_004dcb2c   (108 bytes)   [unnamed]
int __cdecl FUN_004dcb2c(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while (3 < param_3) {
    if ((((*param_2 != *param_1) || (param_2[1] != param_1[1])) || (param_2[2] != param_1[2])) ||
       (param_2[3] != param_1[3])) break;
    param_3 = param_3 + -4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    if (param_3 < 4) break;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      if (bVar2 != bVar1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar3 = (uint)bVar1 - (uint)bVar2;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcb98  strcspn   (43 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f118.
int __cdecl strcspn(char *s,char *reject)

{
  char *reject2;
  int iVar2;
  
  iVar2 = 0;
  do {
    reject2 = reject;
    if (*s == '\0') {
      return iVar2;
    }
    for (; *reject2 != '\0'; reject2 = reject2 + 1) {
      if (*reject2 == *s) {
        return iVar2;
      }
    }
    s = s + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcbc4  FUN_004dcbc4   (50 bytes)   [unnamed]
undefined4 * __cdecl FUN_004dcbc4(uint *param_1)

{
  char *len;
  undefined4 *mem;
  
  len = strlen(param_1);
  mem = (undefined4 *)malloc();
  if (mem != (undefined4 *)0x0) {
    memcpy(mem,param_1,(uint)(len + 1));
  }
  return mem;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcbf8  strcmp   (71 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f178.
int __cdecl strcmp(char *s1,char *s2)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    uVar1 = toupper((int)*s1);
    uVar2 = toupper((int)*s2);
    if (((char)uVar1 != (char)uVar2) || ((char)uVar1 == '\0')) break;
    s1 = s1 + 1;
    s2 = s2 + 1;
  }
  return (uVar1 & 0xff) - (uVar2 & 0xff);
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcc40  strncpy   (79 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f1c0.
undefined4 * __cdecl strncpy(undefined4 *dest,uint *src,char *n)

{
  char *len;
  
  len = strlen(src);
  if (n < len) {
    memcpy(dest,src,(uint)n);
  }
  else {
    memcpy(dest,src,(uint)len);
    memset((undefined4 *)(len + (int)dest),0,(int)n - (int)len);
  }
  return dest;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcc90  FUN_004dcc90   (43 bytes)   [unnamed]
char * __cdecl FUN_004dcc90(char *param_1,char *param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*pcVar1 == *param_1) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004dccbc  strrchr   (41 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f284.
uint * __cdecl strrchr(uint *s,char ch)

{
  char *len;
  uint *puVar2;
  
  len = strlen(s);
  puVar2 = (uint *)(len + (int)s);
  while( true ) {
    if (ch == (char)*puVar2) {
      return puVar2;
    }
    if (s == puVar2) break;
    puVar2 = (uint *)((int)puVar2 + -1);
  }
  return (uint *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcce8  FUN_004dcce8   (48 bytes)   [unnamed]
int __cdecl FUN_004dcce8(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    pcVar1 = param_2;
    if (*param_1 == '\0') {
      return iVar2;
    }
    for (; (*pcVar1 != '\0' && (*pcVar1 != *param_1)); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 == '\0') break;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcd18  FUN_004dcd18   (84 bytes)   [unnamed]
char * __cdecl FUN_004dcd18(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        pcVar1 = param_2;
        pcVar2 = param_1;
        if (*param_1 == *param_2) {
          for (; ((*pcVar2 != '\0' && (*pcVar1 != '\0')) && (*pcVar1 == *pcVar2));
              pcVar1 = pcVar1 + 1) {
            pcVar2 = pcVar2 + 1;
          }
          if (*pcVar1 == '\0') {
            return param_1;
          }
        }
      }
      param_1 = (char *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcd6c  strtok   (103 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f304.
char * __cdecl strtok(char *s,char *delimiters)

{
  char *pcVar1;
  char *pcVar2;
  
  if (s == (char *)0x0) {
    s = DAT_0051bc0c;
  }
  for (; pcVar1 = delimiters, *s != '\0'; s = s + 1) {
    for (; (*pcVar1 != '\0' && (*pcVar1 != *s)); pcVar1 = pcVar1 + 1) {
    }
    if (*pcVar1 == '\0') break;
  }
  DAT_0051bc0c = s;
  if (*s == '\0') {
    pcVar2 = (char *)0x0;
  }
  else {
    for (; pcVar1 = delimiters, pcVar2 = s, *DAT_0051bc0c != '\0';
        DAT_0051bc0c = DAT_0051bc0c + 1) {
      for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
        if (*pcVar1 == *DAT_0051bc0c) {
          *DAT_0051bc0c = '\0';
          DAT_0051bc0c = DAT_0051bc0c + 1;
          return s;
        }
      }
    }
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dcdd4  FUN_004dcdd4   (55 bytes)   [unnamed]
char * __cdecl FUN_004dcdd4(char *param_1,char *param_2)

{
  char cVar1;
  
  while( true ) {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return param_1;
    }
    cVar1 = param_2[1];
    param_1[1] = cVar1;
    if (cVar1 == '\0') {
      return param_1 + 1;
    }
    cVar1 = param_2[2];
    param_1[2] = cVar1;
    if (cVar1 == '\0') {
      return param_1 + 2;
    }
    cVar1 = param_2[3];
    param_2 = param_2 + 4;
    param_1[3] = cVar1;
    if (cVar1 == '\0') break;
    param_1 = param_1 + 4;
  }
  return param_1 + 3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dce0c  FUN_004dce0c   (24 bytes)   [unnamed]
int __cdecl FUN_004dce0c(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dce24  FUN_004dce24   (63 bytes)   [unnamed]
short * __cdecl FUN_004dce24(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_004dce0c(param_2);
  uVar2 = 0;
  psVar3 = param_1;
  if (uVar1 != 0) {
    do {
      *psVar3 = *param_2;
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar1);
  }
  param_1[uVar1] = 0;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dce64  __InitExceptBlockLDTC   (57 bytes)   [analysis (usage pattern) (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041f3fc. Borland exception-frame setup; first call in most functions, argument is that function's exception table
undefined4 __InitExceptBlockLDTC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined2 in_FS;
  
  puVar3 = (undefined4 *)(unaff_EBP + *(int *)(param_1 + 4));
  puVar3[2] = param_1;
  puVar3[3] = &GHIDRA_STACK(0x00000004);
  puVar3[1] = &LAB_004dceab;
  *(undefined2 *)(puVar3 + 4) = 0;
  *(undefined2 *)((int)puVar3 + 0x12) = 0;
  puVar3[7] = 0;
  puVar1 = (undefined4 *)segment(in_FS,0);
  uVar2 = *puVar1;
  *puVar3 = uVar2;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = puVar3;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dced4  FUN_004dced4   (343 bytes)   [unnamed]
undefined4 __cdecl FUN_004dced4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_004e5ce8("IS_STRUC(base->tpMask)","xxtype.cpp",0x13b);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_004e5ce8("IS_STRUC(derv->tpMask)","xxtype.cpp",0x13c);
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    FUN_004e5ce8("derv->tpClass.tpcFlags & CF_HAS_BASES","xxtype.cpp",0x13e);
  }
  puVar4 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x12) + param_1);
  do {
    piVar1 = (int *)*puVar4;
    if (piVar1 == (int *)0x0) {
      puVar4 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x10) + param_1);
      while( true ) {
        piVar1 = (int *)*puVar4;
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if ((param_4 == 0) || ((puVar4[2] & 3) != 3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
        }
        iVar2 = FUN_004dd3c0(param_2,piVar1);
        if ((iVar2 != 0) && (iVar3 != 0)) break;
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (iVar3 = FUN_004dced4((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
          return 1;
        }
        puVar4 = puVar4 + 3;
      }
      return 1;
    }
    if ((*(byte *)(puVar4 + 2) & 8) == 0) {
      if ((param_4 == 0) || ((puVar4[2] & 3) != 3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      iVar2 = FUN_004dd3c0(param_2,piVar1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        return 1;
      }
      if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
         (iVar3 = FUN_004dced4((int)piVar1,param_2,param_3,iVar3), iVar3 != 0)) {
        return 1;
      }
    }
    puVar4 = puVar4 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd02b  FUN_004dd02b   (83 bytes)   [unnamed]
void __stdcall FUN_004dd02b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x516ec0);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&DAT_0051bc18)[iVar3];
    if ((undefined4 *)(&DAT_0051bc18)[iVar3] != (undefined4 *)0x0) {
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[3];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd07e  FUN_004dd07e   (613 bytes, 2 ranges)   [unnamed]
undefined4 * __cdecl FUN_004dd07e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6, uint *param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  if ((param_2 == (int *)0x0) || ((*(byte *)(param_2 + 1) & 1) == 0)) {
    FUN_004e5ce8("topTypPtr != 0 && IS_STRUC(topTypPtr->tpMask)","xxtype.cpp",0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_004e5ce8("tgtTypPtr != 0 && IS_STRUC(tgtTypPtr->tpMask)","xxtype.cpp",0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_004e5ce8("srcTypPtr == 0 || IS_STRUC(srcTypPtr->tpMask)","xxtype.cpp",0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_004dd3c0(param_6,param_4);
    if (iVar3 != 0) {
      FUN_004e5ce8("__isSameTypeID(srcTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x355);
    }
    iVar3 = FUN_004dd3c0(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_004dd3c0(param_2,param_4), iVar3 != 0)) {
    FUN_004e5ce8("tgtTypPtr != 0 && __isSameTypeID(topTypPtr, tgtTypPtr) == 0","xxtype.cpp",0x35b);
  }
  if ((*(byte *)(param_2 + 3) & 4) == 0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  puVar5 = (undefined4 *)((uint)*(ushort *)((int)param_2 + 0x12) + (int)param_2);
  do {
    while (piVar1 = (int *)*puVar5, piVar1 == (int *)0x0) {
      if (bVar2) {
        *param_7 = local_c;
        if (local_14 == 1) {
          return local_10;
        }
        return (undefined4 *)0x0;
      }
      bVar2 = true;
      puVar5 = (undefined4 *)((uint)*(ushort *)(param_2 + 4) + (int)param_2);
    }
    if ((*(byte *)(puVar5 + 2) & 8) == 0) {
      if ((param_8 == 0) || ((puVar5[2] & 3) != 3)) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
      puVar6 = (undefined4 *)(param_1 + puVar5[1]);
      if ((*(byte *)(puVar5 + 2) & 4) != 0) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar3 = FUN_004dd3c0(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_004dd07e((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_004dd289;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_004e5ce8("srcTypPtr","xxtype.cpp",0x3d0);
          }
          puVar4 = FUN_004dd07e((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_004dd2a8;
        }
LAB_004dd289:
        if ((local_14 == 0) || (puVar6 != local_10)) {
          local_14 = local_14 + 1;
          local_c = local_18;
          local_10 = puVar6;
        }
        else {
          local_c = local_c | local_18;
        }
      }
      else if (puVar6 == param_3) {
        return puVar6;
      }
    }
LAB_004dd2a8:
    puVar5 = puVar5 + 3;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd2e5  FUN_004dd2e5   (162 bytes)   [unnamed]
undefined4 __cdecl FUN_004dd2e5(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_8;
  
  if (*param_4 == 0) {
    FUN_004e5ce8(&DAT_00517151 /* "addr" */,"xxtype.cpp",0x515);
  }
  while( true ) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    local_8 = (undefined4 *)(*param_4 + param_1[1]);
    if (param_2 != 0) {
      local_8 = (undefined4 *)*local_8;
    }
    iVar2 = FUN_004dd3c0(piVar1,param_3);
    if (iVar2 != 0) break;
    if ((((*(byte *)(piVar1 + 1) & 2) != 0) &&
        ((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1) != (undefined4 *)0x0)) &&
       (iVar2 = FUN_004dd2e5((undefined4 *)((uint)*(ushort *)(piVar1 + 4) + (int)piVar1),0,param_3,
                             (int *)&local_8), iVar2 != 0)) {
      *param_4 = (int)local_8;
      return 1;
    }
    param_1 = param_1 + 3;
  }
  *param_4 = (int)local_8;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd388  FUN_004dd388   (55 bytes)   [unnamed]
char * __cdecl FUN_004dd388(int param_1)

{
  if (param_1 == 0) {
    return "<notype>";
  }
  if (*(short *)(param_1 + 6) == 0) {
    FUN_004e5ce8("id->tpName","xxtype.cpp",0x22);
  }
  return (char *)((uint)*(ushort *)(param_1 + 6) + param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd3c0  FUN_004dd3c0   (219 bytes)   [unnamed]
undefined4 __cdecl FUN_004dd3c0(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_004e5ce8(&DAT_00516ee7 /* "tp1" */,"xxtype.cpp",0x105);
  }
  if (param_2 == (int *)0x0) {
    FUN_004e5ce8(&DAT_00516ef6 /* "tp2" */,"xxtype.cpp",0x106);
  }
  if (param_2 == param_1) {
    uVar3 = 1;
  }
  else if (((short)param_1[1] == (short)param_2[1]) && (*param_1 == *param_2)) {
    if (((*(ushort *)(param_1 + 1) | *(ushort *)(param_2 + 1)) & 0x80) == 0) {
      pcVar5 = (char *)((uint)*(ushort *)((int)param_1 + 6) + (int)param_1);
      if (*(short *)((int)param_1 + 6) == 0) {
        FUN_004e5ce8("tp1->tpName","xxtype.cpp",0x11e);
      }
      pcVar4 = (char *)((uint)*(ushort *)((int)param_2 + 6) + (int)param_2);
      if (*(short *)((int)param_2 + 6) == 0) {
        FUN_004e5ce8("tp2->tpName","xxtype.cpp",0x11f);
      }
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
        if (cVar2 != cVar1) {
          return 0;
        }
      } while (cVar1 != '\0');
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd49c  FUN_004dd49c   (271 bytes)   [unnamed]
undefined4 __cdecl FUN_004dd49c(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    while( true ) {
      if (param_2 == param_1) {
        return 1;
      }
      uVar2 = *(ushort *)(param_1 + 1);
      uVar3 = *(ushort *)(param_2 + 1);
      if ((uVar3 & uVar2 & 0x10) == 0) break;
      uVar6 = uVar2 & 0x300;
      uVar1 = uVar3 & 0x300;
      if (uVar6 != uVar1) {
        if ((param_3 != 0) || (uVar6 == uVar1)) {
          return 0;
        }
        if ((byte)(~(byte)(uVar1 >> 8) & (byte)(uVar6 >> 8)) != 0) {
          return 0;
        }
      }
      param_3 = 1;
      param_1 = (int *)param_1[2];
      param_2 = (int *)param_2[2];
    }
    if ((uVar3 & uVar2 & 0x400) == 0) break;
    if ((param_1[3] != param_2[3]) && ((param_3 != 0 || (param_1[3] != 0 || param_2[3] != 0)))) {
      return 0;
    }
    param_3 = 1;
    param_1 = (int *)param_1[2];
    param_2 = (int *)param_2[2];
  }
  iVar4 = FUN_004dd3c0(param_1,param_2);
  if (iVar4 != 0) {
    return 1;
  }
  if ((((uVar2 & 2) != 0) && ((uVar3 & 1) != 0)) && ((*(byte *)(param_1 + 3) & 4) != 0)) {
    uVar5 = FUN_004dced4((int)param_1,param_2,param_4,1);
    return uVar5;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd5cc  FUN_004dd5cc   (272 bytes)   [unnamed]
undefined4 * __cdecl FUN_004dd5cc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *typeInfoHash;
  
  if (param_1 == 0) {
    _ThrowExceptionLDTC((uint *)&DAT_004a9acc,(undefined4 *)&DAT_0051bc10,0,(undefined *)0x0,0,0,0,0);
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_3 + 0xc) & 0x80) == 0) {
      param_2 = param_2 - *(int *)(param_2 + -4);
      if (*(int *)(param_2 + -4) != 0) {
        FUN_004e5ce8("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",0x29e);
      }
      param_3 = *(int *)(param_2 + -0xc);
    }
    else {
      param_3 = 0;
    }
  }
  uVar2 = param_2 + param_3 >> 4 & 0xff;
  for (typeInfoHash = (undefined4 *)(&DAT_0051bc18)[uVar2];
      (typeInfoHash != (undefined4 *)0x0 && ((param_3 != typeInfoHash[1] || (param_2 != typeInfoHash[2]))));
      typeInfoHash = (undefined4 *)typeInfoHash[3]) {
  }
  if (typeInfoHash == (undefined4 *)0x0) {
    typeInfoHash = (undefined4 *)operator_new();
    if (typeInfoHash != (undefined4 *)0x0) {
      uVar1 = (&DAT_0051bc18)[uVar2];
      *typeInfoHash = &std::type_info::vftable;
      typeInfoHash[1] = param_3;
      *typeInfoHash = &type_info_hash::vftable;
      typeInfoHash[2] = param_2;
      typeInfoHash[3] = uVar1;
      typeInfoHash[4] = 0;
    }
    (&DAT_0051bc18)[uVar2] = typeInfoHash;
  }
  return typeInfoHash;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd6dc  FUN_004dd6dc   (103 bytes)   [unnamed]
char * __cdecl FUN_004dd6dc(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        pcVar2 = "<notype>";
      }
      else {
        pbVar1 = *(byte **)(*(int *)(param_1 + 8) + -0x2c);
        uVar4 = (uint)*pbVar1;
        uVar3 = operator_new_array();
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        memcpy(*(undefined4 **)(param_1 + 0x10),(undefined4 *)(pbVar1 + 1),uVar4);
        *(undefined1 *)(*(int *)(param_1 + 0x10) + uVar4) = 0;
        pcVar2 = *(char **)(param_1 + 0x10);
      }
    }
    else {
      pcVar2 = *(char **)(param_1 + 0x10);
    }
  }
  else {
    pcVar2 = FUN_004dd388(*(int *)(param_1 + 4));
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd744  FUN_004dd744   (232 bytes)   [unnamed]
undefined4 * __cdecl FUN_004dd744(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_c;
  int *local_8;
  
  local_8 = param_3;
  if (param_1 != 0) {
    puVar4 = (undefined4 *)(param_1 - *(int *)(param_2 + -8));
    iVar3 = param_2 - *(int *)(param_2 + -4);
    if (*(int *)(iVar3 + -4) != 0) {
      FUN_004e5ce8("((unsigned __far *)vtablePtr)[-1] == 0","xxtype.cpp",1099);
    }
    piVar1 = *(int **)(iVar3 + -0xc);
    if (param_4 == (int *)0x0) {
      return puVar4;
    }
    iVar3 = FUN_004dd3c0(param_4,piVar1);
    if (iVar3 != 0) {
      return puVar4;
    }
    iVar3 = FUN_004dd3c0(local_8,piVar1);
    if ((iVar3 == 0) &&
       (puVar2 = FUN_004dd07e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,param_1,local_8,&local_c,
                              1), puVar2 != (undefined4 *)0x0)) {
      return puVar2;
    }
    puVar4 = FUN_004dd07e((int)puVar4,piVar1,(undefined4 *)0x0,param_4,0,(int *)0x0,&local_c,1);
    if ((puVar4 != (undefined4 *)0x0) && (local_c != 0)) {
      return puVar4;
    }
  }
  if (param_5 != 0) {
    _ThrowExceptionLDTC((uint *)&DAT_004a9aac,(undefined4 *)&DAT_0051c018,0,(undefined *)0x0,0,0,0,0);
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd82c  FUN_004dd82c   (122 bytes)   [unnamed]
int __cdecl FUN_004dd82c(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_3;
  iVar3 = param_2;
  if (((param_1 != 0) &&
      (iVar2 = FUN_004dd2e5((undefined4 *)((uint)*(ushort *)(param_2 + 0x10) + param_2),0,param_3,
                            &param_1), iVar2 == 0)) &&
     (iVar3 = FUN_004dd2e5((undefined4 *)((uint)*(ushort *)(iVar3 + 0x12) + iVar3),1,piVar1,&param_1
                          ), iVar3 == 0)) {
    FUN_004e5ce8("!\"Can't adjust class address (no base class entry found)\"","xxtype.cpp",0x57e);
    param_1 = 0;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd974  FUN_004dd974   (39 bytes)   [unnamed]
void __stdcall FUN_004dd974(void)

{
  if (DAT_00517200 == (code *)0x0) {
    DAT_00517200 = (undefined*)FUN_004dd99c;
  }
  if ((*(undefined1 * *)&DAT_00517204) == (undefined1 *)0x0) {
    (*(undefined1 * *)&DAT_00517204) = &LAB_004dd9ec;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dd99c  FUN_004dd99c   (74 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_004dd99c(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x517228);
  if (DAT_00517200 != FUN_004dd99c) {
    ((code *)DAT_00517200)();
  }
  FUN_004e6284();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dda40  FUN_004dda40   (108 bytes, 2 ranges)   [unnamed]
void __stdcall FUN_004dda40(void)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51730c);
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0051c024 == 2) {
    FUN_004e7909(4,1);
  }
  FUN_004de5fc();
  ((code *)DAT_00517200)();
  FUN_004e6284();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddab4  FUN_004ddab4   (53 bytes)   [unnamed]
void __stdcall FUN_004ddab4(void)

{
  int iVar1;
  
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_0051c024 == 2) {
    FUN_004e7909(5,1);
  }
  ((code *)DAT_00517204)();
  FUN_004e6284();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddaec  FUN_004ddaec   (75 bytes)   [unnamed]
void __cdecl FUN_004ddaec(undefined4 *param_1)

{
  undefined4 *dest;
  uint n;
  undefined4 local_c;
  undefined4 *local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    FUN_004ddb38(&local_c);
    param_1 = local_8;
  }
  n = 0x9c;
  dest = (undefined4 *)__getTlsBlock();
  memcpy(dest,param_1,n);
  FUN_004dd974();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddb38  FUN_004ddb38   (39 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004ddb38(undefined4 *param_1)

{
  _DAT_00517250 = __getTlsBlock();
  _DAT_00517250 = _DAT_00517250 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_0051723c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddb60  FUN_004ddb60   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_004ddb60(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddb6c  FUN_004ddb6c   (237 bytes)   [unnamed]
LONG __cdecl FUN_004ddb6c(PEXCEPTION_RECORD exceptionRecord,PVOID targetFrame,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS exceptionPointers;
  
  if (exceptionRecord->ExceptionCode == 0xeedfae6) {
    LVar1 = 0;
  }
  else {
    if ((exceptionRecord->ExceptionCode == 0xeefface) || (exceptionRecord->ExceptionCode == 0xeedface)) {
      FUN_004ddd36(targetFrame,exceptionRecord);
      FUN_004dda40();
    }
    if ((exceptionRecord->ExceptionCode == 0xc00000fd) && (DAT_00517320 != 0)) {
      FUN_004e5f84((uint *)"Stack Overflow!");
    }
    if ((DAT_0051c02c != (code *)0x0) && (iVar2 = ((code *)DAT_0051c02c)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0051c028 != (code *)0x0) && (iVar2 = ((code *)DAT_0051c028)(), iVar2 == 0)) {
      return 0;
    }
    if (((DAT_0051c478 != (int *)0x0) && ((*DAT_0051c478 == 1 || (*DAT_0051c478 == 2)))) &&
       ((exceptionRecord->ExceptionCode < 0xeedface || (0xeefface < exceptionRecord->ExceptionCode)))) {
      FUN_004e7909(2,3);
    }
    exceptionPointers.ExceptionRecord = exceptionRecord;
    exceptionPointers.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&exceptionPointers);
  }
  return LVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddc5c  FUN_004ddc5c   (26 bytes)   [unnamed]
void __cdecl FUN_004ddc5c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = FUN_004ddb6c;
  FUN_004ddce8(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddc78  FUN_004ddc78   (15 bytes)   [unnamed]
void __cdecl FUN_004ddc78(undefined4 *param_1)

{
  FUN_004ddcfd(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddc88  FUN_004ddc88   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_004ddc88(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&DAT_0051c02c);
  (*(undefined4 *)&DAT_0051c02c) = param_1;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddcd4  FUN_004ddcd4   (17 bytes)   [unnamed]
void __stdcall FUN_004ddcd4(void)

{
  if ((*(undefined4 * *)&DAT_0051c44c) != (undefined4 *)0x0) {
    FUN_004ddc5c((*(undefined4 * *)&DAT_0051c44c));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddce8  FUN_004ddce8   (21 bytes)   [unnamed]
void __cdecl FUN_004ddce8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *param_1 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddcfd  FUN_004ddcfd   (44 bytes)   [unnamed]
void __cdecl FUN_004ddcfd(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 in_FS;
  
  piVar2 = (int *)segment(in_FS,0);
  piVar2 = (int *)*piVar2;
  if (param_1 == piVar2) {
    puVar1 = (undefined4 *)segment(in_FS,0);
    *puVar1 = *param_1;
  }
  else {
    for (; piVar2 != (int *)0xffffffff; piVar2 = (int *)*piVar2) {
      if ((undefined4 *)*piVar2 == param_1) {
        *piVar2 = *param_1;
        return;
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddd36  FUN_004ddd36   (21 bytes)   [unnamed]
void FUN_004ddd36(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord)

{
  RtlUnwind(targetFrame,(PVOID)0x4ddd47,exceptionRecord,(PVOID)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddd4b  FUN_004ddd4b   (7 bytes)   [unnamed]
undefined4 __stdcall FUN_004ddd4b(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  uVar1 = (*(code *)*unaff_EBX)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddd54  access   (60 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0041ffa0. C runtime access(path, mode): 0 when the path exists
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl access(LPCSTR path,byte mode)

{
  DWORD attributes;
  undefined4 uVar2;
  
  attributes = GetFileAttributesA(path);
  if (attributes == 0xffffffff) {
    uVar2 = FUN_004df2e4();
    return uVar2;
  }
  if (((mode & 2) != 0) && ((attributes & 1) != 0)) {
    _DAT_00518bd0 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddd90  FUN_004ddd90   (96 bytes)   [unnamed]
undefined4 __cdecl FUN_004ddd90(uint param_1)

{
  undefined4 uVar1;
  BOOL ok;
  
  if (DAT_005177f0 <= param_1) {
    uVar1 = FUN_004df280(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 2) & 1) == 0) &&
     (ok = CloseHandle(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4)), ok != 1)) {
    uVar1 = FUN_004df2e4();
    return uVar1;
  }
  (&DAT_005177f4)[param_1] = 0;
  *(undefined4 *)(&DAT_0051c0f8 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dddf0  FUN_004dddf0   (134 bytes)   [unnamed]
uint __cdecl FUN_004dddf0(uint param_1)

{
  uint uVar1;
  DWORD lDistanceToMove;
  DWORD DVar3;
  DWORD DVar4;
  
  if (param_1 < DAT_005177f0) {
    if (((&DAT_005177f4)[param_1] & 0x200) == 0) {
      if (((&DAT_005177f4)[param_1] & 0x2000) == 0) {
        lDistanceToMove = FUN_004ddec0(param_1,0,1);
        if (lDistanceToMove == 0xffffffff) {
          uVar1 = 0xffffffff;
        }
        else {
          DVar3 = FUN_004ddec0(param_1,0,2);
          if (DVar3 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          else {
            DVar4 = FUN_004ddec0(param_1,lDistanceToMove,0);
            if (DVar4 == 0xffffffff) {
              uVar1 = 0xffffffff;
            }
            else {
              uVar1 = (uint)((int)DVar3 <= (int)lDistanceToMove);
            }
          }
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = FUN_004df280(-6);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dde78  FUN_004dde78   (45 bytes)   [unnamed]
bool __cdecl FUN_004dde78(uint param_1)

{
  DWORD fileType;
  
  if (DAT_005177f0 <= param_1) {
    return false;
  }
  fileType = GetFileType(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4));
  return fileType == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddea8  FUN_004ddea8   (23 bytes)   [unnamed]
bool __cdecl FUN_004ddea8(HANDLE hFile)

{
  DWORD fileType;
  
  fileType = GetFileType(hFile);
  return fileType == 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddec0  FUN_004ddec0   (118 bytes)   [unnamed]
DWORD __cdecl FUN_004ddec0(uint param_1,LONG lDistanceToMove,int param_3)

{
  DWORD moveMethod;
  
  if (param_1 < DAT_005177f0) {
    if (param_3 == 0) {
      moveMethod = 0;
    }
    else if (param_3 == 1) {
      moveMethod = 1;
    }
    else {
      if (param_3 != 2) {
        moveMethod = FUN_004df280(1);
        return moveMethod;
      }
      moveMethod = 2;
    }
    (&DAT_005177f4)[param_1] = (&DAT_005177f4)[param_1] & 0xfffffdff;
    moveMethod = SetFilePointer(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4),lDistanceToMove,(PLONG)0x0,moveMethod);
    if (moveMethod == 0xffffffff) {
      FUN_004df2e4();
    }
  }
  else {
    moveMethod = FUN_004df280(6);
  }
  return moveMethod;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ddf38  FUN_004ddf38   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_004ddf38(LPCSTR fileName,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 regHigh;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD creationDisposition;
  _SECURITY_ATTRIBUTES securityAttrs;
  DWORD shareMode;
  DWORD desiredAccess;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_005178c0 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_004ddfa3:
      creationDisposition = 1;
      goto LAB_004ddfc4;
    }
    if (uVar3 == 0x100) {
      creationDisposition = 4;
      goto LAB_004ddfc4;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        creationDisposition = 2;
        goto LAB_004ddfc4;
      }
      goto LAB_004ddfbf;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_004ddfbf:
      creationDisposition = 3;
      goto LAB_004ddfc4;
    }
    goto LAB_004ddfa3;
  }
  creationDisposition = 5;
LAB_004ddfc4:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(fileName);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00517338 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    desiredAccess = 0x80000000;
  }
  else if (uVar3 == 1) {
    desiredAccess = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_004df280(1);
      return iVar2;
    }
    desiredAccess = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    shareMode = 0;
  }
  else if (uVar3 == 0x20) {
    shareMode = 1;
  }
  else if (uVar3 == 0x30) {
    shareMode = 2;
  }
  else {
    shareMode = 3;
  }
  securityAttrs.nLength = 0xc;
  securityAttrs.lpSecurityDescriptor = (LPVOID)0x0;
  securityAttrs.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(fileName,desiredAccess,shareMode,&securityAttrs,creationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    creationDisposition = GetLastError();
    uVar3 = creationDisposition & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_004df280(uVar3);
  }
  else {
    bVar1 = FUN_004ddea8(hObject);
    if (CONCAT31(regHigh,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004defc4(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_004df280(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de134  FUN_004de134   (107 bytes)   [unnamed]
char * __cdecl FUN_004de134(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = param_1 + param_2;
  pcVar4 = param_1;
  pcVar5 = param_1;
  while( true ) {
    pcVar2 = memchr(pcVar4,'\r',(int)pcVar1 - (int)pcVar4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = pcVar1;
    }
    uVar3 = (int)pcVar2 - (int)pcVar4;
    if (pcVar5 != pcVar4) {
      memcpy((undefined4 *)pcVar5,(undefined4 *)pcVar4,uVar3);
    }
    if (pcVar1 + -1 <= pcVar2) break;
    pcVar4 = pcVar2 + 1;
    pcVar5 = pcVar5 + uVar3;
  }
  return pcVar5 + (uVar3 - (int)param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004de1a0  FUN_004de1a0   (302 bytes)   [unnamed]
char * __cdecl FUN_004de1a0(uint param_1,char *buffer,char *numberOfBytesToRead)

{
  char *pcVar1;
  uint uVar2;
  char *found;
  int iVar4;
  char *pcVar5;
  uint numberOfBytesToRead2;
  
  if (param_1 < DAT_005177f0) {
    if (numberOfBytesToRead + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_004de634(param_1,buffer,(DWORD)numberOfBytesToRead);
    }
    else if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (numberOfBytesToRead != (char *)0x0) {
        while( true ) {
          numberOfBytesToRead2 = (int)numberOfBytesToRead - (int)pcVar1;
          uVar2 = FUN_004de634(param_1,buffer,numberOfBytesToRead2);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          found = memchr(buffer,'\x1a',uVar2);
          if (found != (char *)0x0) {
            (&DAT_005177f4)[param_1] = (&DAT_005177f4)[param_1] | 0x200;
            uVar2 = (int)found - (int)buffer;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((buffer[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_004de634(param_1,buffer + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_004de134(buffer,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < numberOfBytesToRead2) && ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (found != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (numberOfBytesToRead <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_004df280(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de2d0  FUN_004de2d0   (506 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl FUN_004de2d0(LPCWSTR fileName,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 regHigh;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD creationDisposition;
  _SECURITY_ATTRIBUTES securityAttrs;
  DWORD shareMode;
  DWORD desiredAccess;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_005178c0 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_004de33b:
      creationDisposition = 1;
      goto LAB_004de35c;
    }
    if (uVar3 == 0x100) {
      creationDisposition = 4;
      goto LAB_004de35c;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        creationDisposition = 2;
        goto LAB_004de35c;
      }
      goto LAB_004de357;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_004de357:
      creationDisposition = 3;
      goto LAB_004de35c;
    }
    goto LAB_004de33b;
  }
  creationDisposition = 5;
LAB_004de35c:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesW(fileName);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00517338 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    desiredAccess = 0x80000000;
  }
  else if (uVar3 == 1) {
    desiredAccess = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_004df280(1);
      return iVar2;
    }
    desiredAccess = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    shareMode = 0;
  }
  else if (uVar3 == 0x20) {
    shareMode = 1;
  }
  else if (uVar3 == 0x30) {
    shareMode = 2;
  }
  else {
    shareMode = 3;
  }
  securityAttrs.nLength = 0xc;
  securityAttrs.lpSecurityDescriptor = (LPVOID)0x0;
  securityAttrs.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileW(fileName,desiredAccess,shareMode,&securityAttrs,creationDisposition,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    creationDisposition = GetLastError();
    uVar3 = creationDisposition & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_004df280(uVar3);
  }
  else {
    bVar1 = FUN_004ddea8(hObject);
    if (CONCAT31(regHigh,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004defc4(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_004df280(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de4cc  FUN_004de4cc   (284 bytes)   [unnamed]
int __cdecl FUN_004de4cc(uint param_1,char *buffer,uint numberOfBytesToWrite)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char buffer2 [512];
  int local_c;
  int local_8;
  
  if (param_1 < DAT_005177f0) {
    if (numberOfBytesToWrite + 1 < 2) {
      local_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 8) != 0) {
        FUN_004ddec0(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x40) == 0) {
        local_c = FUN_004de6d8(param_1,buffer,numberOfBytesToWrite);
      }
      else {
        local_8 = 0;
        local_c = 0;
        pcVar4 = buffer;
        while ((uint)((int)pcVar4 - (int)buffer) < numberOfBytesToWrite) {
          pcVar3 = buffer2;
          while (((int)pcVar3 - (int)buffer2 < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)buffer) < numberOfBytesToWrite))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              local_8 = local_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004de6d8(param_1,buffer2,(int)pcVar3 - (int)buffer2);
          if (iVar2 != (int)pcVar3 - (int)buffer2) {
            if (iVar2 == -1) {
              return -1;
            }
            return (local_c - local_8) + iVar2;
          }
          local_c = local_c + iVar2;
        }
        local_c = local_c - local_8;
      }
    }
  }
  else {
    local_c = FUN_004df280(-6);
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de5e8  FUN_004de5e8   (17 bytes)   [unnamed]
undefined4 __cdecl FUN_004de5e8(undefined1 *param_1)

{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de5fc  FUN_004de5fc   (56 bytes)   [unnamed]
int __stdcall FUN_004de5fc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &DAT_00517340;
  iVar2 = (*(int *)&DAT_005177f0);
  while (iVar2 != 0) {
    if (((*(byte *)((int)piVar1 + 0x12) & 3) != 0) && (piVar1[2] != 0)) {
      FUN_004de85c(piVar1);
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de634  FUN_004de634   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_004de634(uint param_1,LPVOID buffer,DWORD numberOfBytesToRead)

{
  undefined4 uVar1;
  BOOL ok;
  DWORD numberOfBytesRead;
  
  if (DAT_005177f0 <= param_1) {
    uVar1 = FUN_004df280(6);
    return uVar1;
  }
  ok = ReadFile(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4),buffer,numberOfBytesToRead,&numberOfBytesRead,
                   (LPOVERLAPPED)0x0);
  if (ok != 1) {
    uVar1 = FUN_004df2e4();
    return uVar1;
  }
  return numberOfBytesRead;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de67c  FUN_004de67c   (25 bytes)   [unnamed]
void __cdecl FUN_004de67c(uint param_1,char *buffer,char *numberOfBytesToRead)

{
  FUN_004de1a0(param_1,buffer,numberOfBytesToRead);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de698  thunk → FUN_004e0588   (5 bytes)   [unnamed]
undefined4 __cdecl thunk_FUN_004e0588(LPCSTR fileName)

{
  BOOL ok;
  undefined4 uVar2;
  
  ok = DeleteFileA(fileName);
  if (ok == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004df2e4();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de6a0  FUN_004de6a0   (31 bytes)   [unnamed]
void __cdecl FUN_004de6a0(LPCWSTR fileName,uint param_2)

{
  uint unaff_EBP;
  
  FUN_004de2d0(fileName,param_2 & 0xffff36ff | 0x8000,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de6c0  FUN_004de6c0   (21 bytes)   [unnamed]
void __cdecl FUN_004de6c0(LPCWSTR owner,uint key)

{
  uint unaff_EBP;
  
  FUN_004de2d0(owner,key,unaff_EBP);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de6d8  FUN_004de6d8   (70 bytes)   [unnamed]
undefined4 __cdecl FUN_004de6d8(uint param_1,LPCVOID buffer,DWORD numberOfBytesToWrite)

{
  undefined4 uVar1;
  BOOL ok;
  DWORD numberOfBytesWritten;
  
  if (DAT_005177f0 <= param_1) {
    uVar1 = FUN_004df280(6);
    return uVar1;
  }
  ok = WriteFile(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4),buffer,numberOfBytesToWrite,&numberOfBytesWritten,
                    (LPOVERLAPPED)0x0);
  if (ok != 1) {
    uVar1 = FUN_004df2e4();
    return uVar1;
  }
  return numberOfBytesWritten;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de720  FUN_004de720   (25 bytes)   [unnamed]
void __cdecl FUN_004de720(uint param_1,char *buffer,uint numberOfBytesToWrite)

{
  FUN_004de4cc(param_1,buffer,numberOfBytesToWrite);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de73c  thunk → access   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl thunk_access(LPCSTR fileName,byte param_2)

{
  DWORD attributes;
  undefined4 uVar2;
  
  attributes = GetFileAttributesA(fileName);
  if (attributes == 0xffffffff) {
    uVar2 = FUN_004df2e4();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((attributes & 1) != 0)) {
    _DAT_00518bd0 = 5;
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de744  FUN_004de744   (125 bytes)   [unnamed]
undefined4 __cdecl FUN_004de744(int *param_1,int mem,int param_3,int param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    free();
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_00518c50 = &LAB_004e0fc8;
    if (mem == 0) {
      mem = malloc();
      if (mem == 0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = mem;
    param_1[1] = mem;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de7c4  thunk → FUN_004ddd90   (5 bytes)   [unnamed]
undefined4 __cdecl thunk_FUN_004ddd90(uint param_1)

{
  undefined4 uVar1;
  BOOL ok;
  
  if (DAT_005177f0 <= param_1) {
    uVar1 = FUN_004df280(6);
    return uVar1;
  }
  if (((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 2) & 1) == 0) &&
     (ok = CloseHandle(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4)), ok != 1)) {
    uVar1 = FUN_004df2e4();
    return uVar1;
  }
  (&DAT_005177f4)[param_1] = 0;
  *(undefined4 *)(&DAT_0051c0f8 + param_1 * 4) = 0xffffffff;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de7cc  FUN_004de7cc   (142 bytes)   [unnamed]
undefined4 __cdecl FUN_004de7cc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *fileName;
  
  if ((param_1 == (int *)0x0) || ((char)param_1 != *(char *)((int)param_1 + 0x17))) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[3] != 0) {
      if ((param_1[2] < 0) && (iVar2 = FUN_004de85c(param_1), iVar2 != 0)) {
        return 0xffffffff;
      }
      if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
        free();
      }
    }
    uVar1 = FUN_004ddd90((int)*(char *)((int)param_1 + 0x16));
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    if (*(ushort *)(param_1 + 4) != 0) {
      fileName = FUN_004df5b0((char *)0x0,(char *)0x0,*(ushort *)(param_1 + 4));
      FUN_004e0588(fileName);
      *(undefined2 *)(param_1 + 4) = 0;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de85c  FUN_004de85c   (127 bytes)   [unnamed]
undefined4 __cdecl FUN_004de85c(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint numberOfBytesToWrite;
  
  if (param_1 == (int *)0x0) {
    FUN_004de8dc();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      numberOfBytesToWrite = param_1[3] + param_1[2] + 1;
      param_1[2] = param_1[2] - numberOfBytesToWrite;
      *param_1 = param_1[1];
      uVar2 = FUN_004de4cc((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],numberOfBytesToWrite);
      if ((numberOfBytesToWrite == uVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)param_1 + 0x12) & 8) != 0) || (param_1 + 5 == (int *)*param_1)) &&
         (param_1[2] = 0, param_1 + 5 == (int *)*param_1)) {
        *param_1 = param_1[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de8dc  FUN_004de8dc   (90 bytes)   [unnamed]
int __stdcall FUN_004de8dc(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint numberOfBytesToWrite;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_00517340;
  iVar5 = (*(int *)&DAT_005177f0);
  while (iVar5 != 0) {
    if ((int)puVar2[2] < 0) {
      numberOfBytesToWrite = puVar2[3] + puVar2[2] + 1;
      puVar2[2] = puVar2[2] - numberOfBytesToWrite;
      *puVar2 = (char *)puVar2[1];
      uVar1 = FUN_004de4cc((int)*(char *)((int)puVar2 + 0x16),(char *)puVar2[1],numberOfBytesToWrite);
      if ((numberOfBytesToWrite != uVar1) && ((*(byte *)((int)puVar2 + 0x13) & 2) == 0)) {
        *(ushort *)((int)puVar2 + 0x12) = *(ushort *)((int)puVar2 + 0x12) | 0x10;
      }
      iVar3 = iVar3 + 1;
    }
    puVar2 = puVar2 + 6;
    iVar5 = iVar5 + -1;
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de938  FUN_004de938   (13 bytes)   [unnamed]
void __cdecl FUN_004de938(undefined *param_1)

{
  PTR_DAT_005178c0 = param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de948  FUN_004de948   (19 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004de948(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _DAT_0051733c = *param_1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004de95c  FUN_004de95c   (217 bytes)   [unnamed]
uint __cdecl FUN_004de95c(char *param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = *param_1;
  if (cVar1 == 'r') {
    uVar2 = 0;
    uVar3 = 1;
  }
  else if (cVar1 == 'w') {
    uVar2 = 0x301;
    local_8 = 0x80;
    uVar3 = 2;
  }
  else {
    if (cVar1 != 'a') {
      return 0;
    }
    uVar2 = 0x901;
    local_8 = 0x80;
    uVar3 = 2;
  }
  cVar1 = param_1[1];
  if ((cVar1 == '+') || ((param_1[2] == '+' && ((cVar1 == 't' || (cVar1 == 'b')))))) {
    if (cVar1 == '+') {
      cVar1 = param_1[2];
    }
    uVar3 = 3;
    local_8 = 0x180;
    uVar2 = uVar2 & 0xfffffffe | 2;
  }
  if (cVar1 == 't') {
    uVar2 = uVar2 | 0x4000;
  }
  else if (cVar1 == 'b') {
    uVar2 = uVar2 | 0x8000;
    uVar3 = uVar3 | 0x40;
  }
  else {
    if ((cVar1 != '+') && (cVar1 != '\0')) {
      return 0;
    }
    uVar2 = uVar2 | *(uint *)PTR_DAT_005178c0 & 0xc000;
    if ((*(uint *)PTR_DAT_005178c0 & 0x8000) != 0) {
      uVar3 = uVar3 | 0x40;
    }
  }
  PTR_FUN_00518c54 = &LAB_004e0f98;
  *param_2 = uVar2;
  *param_3 = local_8;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dea38  FUN_004dea38   (169 bytes)   [unnamed]
int * __cdecl FUN_004dea38(int *param_1,LPCSTR fileName,char *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_004de95c(param_3,&local_8,&local_c);
  *(short *)((int)param_1 + 0x12) = (short)uVar1;
  if ((short)uVar1 == 0) {
LAB_004dea83:
    *(undefined1 *)((int)param_1 + 0x16) = 0xff;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    param_1 = (int *)0x0;
  }
  else {
    if (*(char *)((int)param_1 + 0x16) < '\0') {
      iVar2 = FUN_004ddf38(fileName,local_8 | param_4,local_c);
      *(char *)((int)param_1 + 0x16) = (char)iVar2;
      if ((char)iVar2 < '\0') goto LAB_004dea83;
    }
    if ((*(byte *)((int)&DAT_005177f4 + *(char *)((int)param_1 + 0x16) * 4 + 1) & 0x20) != 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x200;
    }
    iVar2 = setvbuf(param_1,0,(uint)((*(byte *)((int)param_1 + 0x13) & 2) != 0),0x200);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 4) = 0;
    }
    else {
      FUN_004de7cc(param_1);
      param_1 = (int *)0x0;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004deae4  FUN_004deae4   (42 bytes)   [unnamed]
undefined4 * __stdcall FUN_004deae4(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00517340;
  while( true ) {
    if (*(char *)((int)puVar1 + 0x16) < '\0') {
      return puVar1;
    }
    if (&DAT_00517340 + (*(int *)&DAT_005177f0) * 6 <= puVar1) break;
    puVar1 = puVar1 + 6;
  }
  return (undefined4 *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004deb10  fopen   (41 bytes)   [analysis (usage pattern)]
int * __cdecl fopen(LPCSTR fileName,char *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = FUN_004deae4();
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_004dea38(piVar1,fileName,param_2,0);
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004deb3c  FUN_004deb3c   (212 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_004deb3c(byte *buffer,uint numberOfBytesToWrite,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = numberOfBytesToWrite;
  if ((*(byte *)((int)param_3 + 0x12) & 8) == 0) {
    uVar3 = param_3[3];
    if ((uVar3 == 0) || (uVar3 < numberOfBytesToWrite)) {
      if ((param_3[3] == 0) || ((param_3[2] == 0 || (iVar2 = FUN_004de85c(param_3), iVar2 == 0)))) {
        uVar3 = FUN_004de4cc((int)*(char *)((int)param_3 + 0x16),(char *)buffer,numberOfBytesToWrite);
        if ((uVar3 == 0xffffffff) || (uVar3 < numberOfBytesToWrite)) {
          numberOfBytesToWrite = 0;
        }
      }
      else {
        numberOfBytesToWrite = 0;
      }
    }
    else {
      if (-1 < (int)(param_3[2] + numberOfBytesToWrite)) {
        if (param_3[2] == 0) {
          param_3[2] = -1 - uVar3;
        }
        else {
          iVar2 = FUN_004de85c(param_3);
          if (iVar2 != 0) {
            return 0;
          }
        }
      }
      memcpy((undefined4 *)*param_3,(undefined4 *)buffer,numberOfBytesToWrite);
      param_3[2] = param_3[2] + numberOfBytesToWrite;
      *param_3 = *param_3 + numberOfBytesToWrite;
    }
  }
  else {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = FUN_004df498(*buffer,param_3);
      if (uVar1 == 0xffffffff) {
        return 0;
      }
      buffer = buffer + 1;
    }
  }
  return numberOfBytesToWrite;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dec18  FUN_004dec18   (303 bytes)   [unnamed]
char * __cdecl FUN_004dec18(char *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  char *unaff_ESI;
  char *numberOfBytesToRead;
  char *buffer;
  uint local_8;
  
  buffer = param_1;
  if (param_3[3] != 0) {
LAB_004dec37:
    if (param_2 == (char *)0x0) {
      return unaff_ESI;
    }
    do {
      pcVar3 = (char *)param_3[2];
      if (pcVar3 != (char *)0x0) {
        numberOfBytesToRead = param_2;
        if (pcVar3 < param_2) {
          numberOfBytesToRead = pcVar3;
        }
        memcpy((undefined4 *)buffer,(undefined4 *)*param_3,(uint)numberOfBytesToRead);
        *param_3 = (int)(numberOfBytesToRead + *param_3);
        param_3[2] = param_3[2] - (int)numberOfBytesToRead;
        if (param_2 == numberOfBytesToRead) {
          return unaff_ESI;
        }
        buffer = buffer + (int)numberOfBytesToRead;
        param_2 = param_2 + -(int)numberOfBytesToRead;
      }
      if ((char *)param_3[3] <= param_2) {
        numberOfBytesToRead = param_2 + -((uint)param_2 % (uint)param_3[3]);
        pcVar3 = FUN_004de1a0((int)*(char *)((int)param_3 + 0x16),buffer,numberOfBytesToRead);
        if (param_2 == pcVar3) {
          return unaff_ESI;
        }
        if (pcVar3 == (char *)0xffffffff) {
          *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x10;
          return unaff_ESI;
        }
        buffer = buffer + (int)pcVar3;
        param_2 = param_2 + -(int)pcVar3;
        if (numberOfBytesToRead != pcVar3) goto code_r0x004decc4;
      }
      uVar4 = FUN_004df3b0(param_3);
      if (uVar4 == 0xffffffff) {
        *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
        return unaff_ESI;
      }
      GH_PIECE(local_8, 0, undefined1) = (char)uVar4;
      *buffer = (char)local_8;
      buffer = buffer + 1;
      param_2 = param_2 + -1;
      if (param_2 == (char *)0x0) {
        return unaff_ESI;
      }
    } while( true );
  }
  for (; param_2 != (char *)0x0; param_2 = param_2 + -1) {
    piVar1 = param_3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      local_8 = FUN_004df398(param_3);
    }
    else {
      pbVar2 = (byte *)*param_3;
      *param_3 = *param_3 + 1;
      local_8 = (uint)*pbVar2;
    }
    if (local_8 == 0xffffffff) break;
    *buffer = (char)local_8;
    buffer = buffer + 1;
  }
  if (local_8 == 0xffffffff) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
  }
  return unaff_ESI;
code_r0x004decc4:
  if (((*(byte *)((int)param_3 + 0x12) & 0x40) != 0) || (pcVar3 == (char *)0x0)) {
    *(ushort *)((int)param_3 + 0x12) = *(ushort *)((int)param_3 + 0x12) | 0x20;
    return unaff_ESI;
  }
  goto LAB_004dec37;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ded48  FUN_004ded48   (51 bytes)   [unnamed]
uint __cdecl FUN_004ded48(char *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    pcVar2 = FUN_004dec18(param_1,(char *)(param_2 * param_3),param_4);
    uVar1 = (uint)(param_2 * param_3 - (int)param_4) / (uint)pcVar2;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ded7c  FUN_004ded7c   (90 bytes)   [unnamed]
int __cdecl FUN_004ded7c(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = param_1[3] + iVar2 + 1;
  }
  if ((*(byte *)((int)param_1 + 0x12) & 0x40) == 0) {
    pcVar6 = (char *)*param_1;
    iVar3 = iVar2;
    iVar5 = iVar2;
    if ((int)param_1[2] < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar2 = iVar3;
        if (*pcVar6 == '\n') {
          iVar5 = iVar5 + 1;
        }
      }
    }
    else {
      while (iVar4 = iVar3 + -1, iVar5 = iVar2, iVar3 != 0) {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar4;
        if (cVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    return iVar5;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dedd8  fseek   (97 bytes)   [analysis (usage pattern)]
undefined4 __cdecl fseek(int *param_1,LONG lDistanceToMove,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  iVar1 = FUN_004de85c(param_1);
  if (iVar1 == 0) {
    if ((param_3 == 1) && (0 < param_1[2])) {
      iVar1 = FUN_004ded7c(param_1);
      lDistanceToMove = lDistanceToMove - iVar1;
    }
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe5f;
    param_1[2] = 0;
    *param_1 = param_1[1];
    DVar3 = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),lDistanceToMove,param_3);
    if (DVar3 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dee3c  FUN_004dee3c   (126 bytes)   [unnamed]
DWORD __cdecl FUN_004dee3c(undefined4 *param_1)

{
  DWORD lDistanceToMove;
  DWORD DVar2;
  int iVar3;
  
  lDistanceToMove = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),0,1);
  if (lDistanceToMove != 0xffffffff) {
    if ((int)param_1[2] < 0) {
      DVar2 = lDistanceToMove;
      if ((*(byte *)((int)&DAT_005177f4 + *(char *)((int)param_1 + 0x16) * 4 + 1) & 8) != 0) {
        DVar2 = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),0,2);
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
        lDistanceToMove = FUN_004ddec0((int)*(char *)((int)param_1 + 0x16),lDistanceToMove,0);
        if (lDistanceToMove == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_004ded7c(param_1);
      lDistanceToMove = DVar2 + iVar3;
    }
    else {
      iVar3 = FUN_004ded7c(param_1);
      lDistanceToMove = lDistanceToMove - iVar3;
    }
  }
  return lDistanceToMove;
}

// ----------------------------------------------------------------------------------------------------
// 0x004deebc  FUN_004deebc   (212 bytes)   [unnamed]
char * __cdecl FUN_004deebc(char *param_1,LPCSTR fileName,uint param_3)

{
  char cVar1;
  LPSTR lpBuffer;
  DWORD DVar2;
  UINT UVar3;
  uint uVar4;
  uint i;
  char *pcVar6;
  char *pcVar7;
  CHAR rootPathName [4];
  LPSTR filePart;
  
  lpBuffer = (LPSTR)malloc();
  if (lpBuffer == (LPSTR)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    DVar2 = GetFullPathNameA(fileName,0x104,lpBuffer,&filePart);
    if ((DVar2 == 0) || (0x103 < DVar2)) {
      free();
      param_1 = (char *)0x0;
    }
    else {
      if (lpBuffer[1] == ':') {
        rootPathName[0] = *lpBuffer;
        rootPathName[1] = 0x3a;
        rootPathName[2] = 0x5c;
        rootPathName[3] = 0;
        UVar3 = GetDriveTypeA(rootPathName);
        if (UVar3 < 2) {
          free();
          return (char *)0x0;
        }
      }
      if (param_1 == (char *)0x0) {
        param_1 = (char *)FUN_004cc754();
      }
      else if (param_3 < DVar2 + 1) {
        free();
        param_1 = (char *)0x0;
      }
      else {
        uVar4 = 0xffffffff;
        do {
          pcVar6 = lpBuffer;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar6 = lpBuffer + 1;
          cVar1 = *lpBuffer;
          lpBuffer = pcVar6;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar6 = pcVar6 + -uVar4;
        pcVar7 = param_1;
        for (i = uVar4 >> 2; i != 0; i = i - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        free();
      }
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004def90  FUN_004def90   (49 bytes)   [unnamed]
uint __cdecl FUN_004def90(byte *buffer,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_004deb3c(buffer,param_2 * param_3,param_4);
    param_3 = uVar1 / param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004defc4  FUN_004defc4   (64 bytes)   [unnamed]
int __cdecl FUN_004defc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *i;
  
  iVar1 = 0;
  for (i = &DAT_005177f4; (iVar1 < (*(int *)&DAT_005177f0) && (*i != 0)); i = i + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == (*(int *)&DAT_005177f0)) {
    return -1;
  }
  (&DAT_005177f4)[iVar1] = param_2;
  *(undefined4 *)(&DAT_0051c0f8 + iVar1 * 4) = param_1;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df004  FUN_004df004   (104 bytes)   [unnamed]
uint __cdecl FUN_004df004(uint param_1,uint param_2,undefined4 param_3)

{
  int *i;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (i = &DAT_005177f4; ((int)param_2 < (int)DAT_005177f0 && (*i != 0));
        i = i + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_005177f0) && (param_2 < DAT_005177f0)) {
    if (((&DAT_005177f4)[param_1] != 0) && ((&DAT_005177f4)[param_2] == 0)) {
      (&DAT_005177f4)[param_2] = (&DAT_005177f4)[param_1];
      *(undefined4 *)(&DAT_0051c0f8 + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df06c  FUN_004df06c   (25 bytes)   [unnamed]
void __cdecl FUN_004df06c(uint param_1)

{
  if (param_1 < DAT_005177f0) {
    (&DAT_005177f4)[param_1] = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df088  FUN_004df088   (154 bytes)   [unnamed]
int __cdecl FUN_004df088(int *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  uint *local_c;
  int local_8;
  
  iVar2 = (*(int *)&DAT_005177f0);
  for (piVar4 = &(*(int *)&DAT_005177f0) + (*(int *)&DAT_005177f0); (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
  {
    iVar2 = iVar2 + -1;
  }
  if (param_1 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *param_1 = iVar2;
    local_8 = 0;
    pbVar5 = (byte *)(param_1 + 1);
    local_c = &DAT_005177f4;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *pbVar5 = bVar3;
        pbVar5 = pbVar5 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    memcpy((undefined4 *)pbVar5,(undefined4 *)&DAT_0051c0f8,iVar2 << 2);
    iVar2 = 0;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df124  FUN_004df124   (345 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_004df124(void)

{
  bool bVar1;
  UINT UVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 regHigh;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _STARTUPINFOA startupInfo;
  
  UVar2 = SetHandleCount(DAT_005177f0);
  if (UVar2 < DAT_005177f0) {
    DAT_005177f0 = UVar2;
  }
  PTR_FUN_00517334 = (undefined*)FUN_004df088;
  bVar1 = false;
  GetStartupInfoA(&startupInfo);
  if (startupInfo.cbReserved2 != 0) {
    uVar7 = *(uint *)startupInfo.lpReserved2;
    puVar8 = (uint *)((int)startupInfo.lpReserved2 + 4);
    if (uVar7 * 5 + 4 == (uint)startupInfo.cbReserved2) {
      bVar1 = true;
      iVar5 = 0;
      puVar9 = &DAT_005177f4;
      if (0 < (int)uVar7) {
        do {
          uVar6 = *puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          uVar3 = 0;
          if ((uVar6 & 0x20) != 0) {
            uVar3 = 0x800;
          }
          if ((uVar6 & 0x40) != 0) {
            uVar3 = uVar3 | 0x2000;
          }
          if ((uVar6 & 0x80) == 0) {
            uVar3 = uVar3 | 0x8000;
          }
          else {
            uVar3 = uVar3 | 0x4000;
          }
          iVar5 = iVar5 + 1;
          *puVar9 = *puVar9 & 3 | uVar3;
          puVar9 = puVar9 + 1;
        } while (iVar5 < (int)uVar7);
      }
      puVar4 = &DAT_005177f4 + uVar7;
      for (uVar6 = uVar7; uVar6 < DAT_005177f0; uVar6 = uVar6 + 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_004dc7f8((undefined4 *)&DAT_0051c0f8,puVar8,uVar7 << 2);
    }
  }
  if (!bVar1) {
    _DAT_0051c0f8 = GetStdHandle(0xfffffff6);
    DAT_0051c0fc = GetStdHandle(0xfffffff5);
    _DAT_0051c100 = GetStdHandle(0xfffffff4);
    uVar7 = 0;
    puVar8 = &DAT_005177f4;
    do {
      bVar1 = FUN_004dde78(uVar7);
      if ((CONCAT31(regHigh,bVar1) == 0) && (DAT_00518de8 == 0)) {
        *puVar8 = *puVar8 & 0xffffdfff;
      }
      else {
        *puVar8 = *puVar8 | 0x2000;
        if (DAT_00518de8 != 0) {
          *puVar8 = *puVar8 | 0x10000;
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while ((int)uVar7 < 3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df280  FUN_004df280   (68 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_004df280(int param_1)

{
  if (param_1 < 0) {
    if (-param_1 < DAT_00517ac0) {
      (*(int *)&_DAT_00518bd0) = -param_1;
      _DAT_0051c1c0 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (param_1 < 299) goto LAB_004df296;
  param_1 = 1;
LAB_004df296:
  _DAT_0051c1c0 = param_1;
  (*(int *)&_DAT_00518bd0) = (int)(char)(&DAT_005178c4)[param_1];
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df2e4  FUN_004df2e4   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_004df2e4(void)

{
  DWORD lastError;
  undefined4 uVar2;
  
  lastError = GetLastError();
  uVar2 = FUN_004df280(lastError & 0xffff);
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df2f8  FUN_004df2f8   (52 bytes)   [unnamed]
void __stdcall FUN_004df2f8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_00517340;
  iVar2 = 0x32;
  while (iVar2 != 0) {
    if ((*(ushort *)((int)piVar1 + 0x12) & 0x300) == 0x300) {
      FUN_004de85c(piVar1);
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df32c  FUN_004df32c   (108 bytes)   [unnamed]
undefined4 __cdecl FUN_004df32c(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_004df2f8();
  }
  *param_1 = (char *)param_1[1];
  pcVar1 = FUN_004de1a0((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],(char *)param_1[3]);
  param_1[2] = pcVar1;
  param_1[2] = pcVar1;
  if ((int)pcVar1 < 1) {
    if (param_1[2] == 0) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      param_1[2] = 0;
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    uVar2 = 0xffffffff;
  }
  else {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df398  FUN_004df398   (22 bytes)   [unnamed]
uint __cdecl FUN_004df398(int *param_1)

{
  uint uVar1;
  
  param_1[2] = param_1[2] + 1;
  uVar1 = FUN_004df3b0(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df3b0  FUN_004df3b0   (230 bytes)   [unnamed]
uint __cdecl FUN_004df3b0(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_0051c1c4 = *pbVar1;
    return (uint)*pbVar1;
  }
  if (((param_1[2] < 0) || ((*(ushort *)((int)param_1 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)param_1 + 0x12) & 1) == 0)) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x80;
  if (param_1[3] != 0) {
    iVar2 = FUN_004df32c(param_1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    param_1[2] = param_1[2] + -1;
    pbVar1 = (byte *)*param_1;
    *param_1 = *param_1 + 1;
    DAT_0051c1c4 = *pbVar1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)param_1 + 0x13) & 2) != 0) {
    FUN_004df2f8();
  }
  pcVar3 = FUN_004de1a0((int)*(char *)((int)param_1 + 0x16),(char *)&DAT_0051c1c4,(char *)0x1);
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_004dddf0((int)*(char *)((int)param_1 + 0x16));
    if (uVar4 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffdf;
  return (uint)DAT_0051c1c4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df498  FUN_004df498   (272 bytes)   [unnamed]
uint __cdecl FUN_004df498(byte param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char buffer [2];
  
  if (param_2[2] < -1) {
    memcpy((undefined4 *)*param_2,(undefined4 *)buffer,1);
    param_2[2] = param_2[2] + 1;
    *param_2 = *param_2 + 1;
    if ((((*(byte *)((int)param_2 + 0x12) & 8) != 0) && ((param_1 == 10 || (param_1 == 0xd)))) &&
       (iVar1 = FUN_004de85c(param_2), iVar1 != 0)) {
      return 0xffffffff;
    }
    uVar2 = (uint)param_1;
  }
  else if (((*(ushort *)((int)param_2 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)param_2 + 0x12) & 2) != 0)) {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x100;
    if (param_2[3] == 0) {
      iVar1 = FUN_004de4cc((int)*(char *)((int)param_2 + 0x16),buffer,1);
      if ((iVar1 == 1) || ((*(byte *)((int)param_2 + 0x13) & 2) != 0)) {
        uVar2 = (uint)param_1;
      }
      else {
        *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
        uVar2 = 0xffffffff;
      }
    }
    else {
      if ((param_2[2] != 0) && (iVar1 = FUN_004de85c(param_2), iVar1 != 0)) {
        return 0xffffffff;
      }
      param_2[2] = -param_2[3];
      memcpy((undefined4 *)*param_2,(undefined4 *)buffer,1);
      param_2[2] = param_2[2];
      *param_2 = *param_2 + 1;
      if (((*(byte *)((int)param_2 + 0x12) & 8) != 0) &&
         (((param_1 == 10 || (param_1 == 0xd)) && (iVar1 = FUN_004de85c(param_2), iVar1 != 0)))) {
        return 0xffffffff;
      }
      uVar2 = (uint)param_1;
    }
  }
  else {
    *(ushort *)((int)param_2 + 0x12) = *(ushort *)((int)param_2 + 0x12) | 0x10;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df5a8  thunk → FUN_004ddec0   (5 bytes)   [unnamed]
DWORD __cdecl thunk_FUN_004ddec0(uint param_1,LONG lDistanceToMove,int param_3)

{
  DWORD moveMethod;
  
  if (param_1 < DAT_005177f0) {
    if (param_3 == 0) {
      moveMethod = 0;
    }
    else if (param_3 == 1) {
      moveMethod = 1;
    }
    else {
      if (param_3 != 2) {
        moveMethod = FUN_004df280(1);
        return moveMethod;
      }
      moveMethod = 2;
    }
    (&DAT_005177f4)[param_1] = (&DAT_005177f4)[param_1] & 0xfffffdff;
    moveMethod = SetFilePointer(*(HANDLE *)(&DAT_0051c0f8 + param_1 * 4),lDistanceToMove,(PLONG)0x0,moveMethod);
    if (moveMethod == 0xffffffff) {
      FUN_004df2e4();
    }
  }
  else {
    moveMethod = FUN_004df280(6);
  }
  return moveMethod;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df5b0  FUN_004df5b0   (79 bytes)   [unnamed]
char * __cdecl FUN_004df5b0(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0051c1ca;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_005179f0 /* "TMP" */;
  }
  pcVar1 = (char *)FUN_004dcdd4(param_1,param_2);
  FUN_004e3f90((uint)param_3,pcVar1,uVar2);
  FUN_004dc8e8(param_1,&DAT_005179f4 /* ".$$$" */);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df600  FUN_004df600   (65 bytes)   [unnamed]
char * __cdecl FUN_004df600(char *fileName,ushort *param_2)

{
  int iVar1;
  
  do {
    *param_2 = *param_2 + 1;
    if (*param_2 == 0) {
      *param_2 = 1;
    }
    fileName = FUN_004df5b0(fileName,(char *)0x0,*param_2);
    iVar1 = thunk_access(fileName,0);
  } while (iVar1 == 0);
  return fileName;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df644  thunk → FUN_004ddf38   (5 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int __cdecl thunk_FUN_004ddf38(LPCSTR fileName,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 regHigh;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD creationDisposition;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_005178c0 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_004ddfa3:
      creationDisposition = 1;
      goto LAB_004ddfc4;
    }
    if (uVar3 == 0x100) {
      creationDisposition = 4;
      goto LAB_004ddfc4;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        creationDisposition = 2;
        goto LAB_004ddfc4;
      }
      goto LAB_004ddfbf;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_004ddfbf:
      creationDisposition = 3;
      goto LAB_004ddfc4;
    }
    goto LAB_004ddfa3;
  }
  creationDisposition = 5;
LAB_004ddfc4:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(fileName);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_00517338 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    DStack_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_004df280(1);
      return iVar2;
    }
    DStack_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar3 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar3 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(fileName,DStack_8,DStack_c,&_Stack_18,creationDisposition,dwFlagsAndAttributes,(HANDLE)0x0)
  ;
  if (hObject == (HANDLE)0xffffffff) {
    creationDisposition = GetLastError();
    uVar3 = creationDisposition & 0xffff;
    if (uVar3 == 0x6e) {
      if ((param_2 & 0x100) == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0x50;
      }
    }
    iVar2 = FUN_004df280(uVar3);
  }
  else {
    bVar1 = FUN_004ddea8(hObject);
    if (CONCAT31(regHigh,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_004defc4(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_004df280(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df654  thunk → FUN_004de1a0   (5 bytes)   [unnamed]
char * __cdecl thunk_FUN_004de1a0(uint param_1,char *buffer,char *numberOfBytesToRead)

{
  char *pcVar1;
  uint uVar2;
  char *found;
  int iVar4;
  char *pcVar5;
  uint numberOfBytesToRead2;
  
  if (param_1 < DAT_005177f0) {
    if (numberOfBytesToRead + 1 < (char *)0x2) {
      pcVar1 = (char *)0x0;
    }
    else if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x40) == 0) {
      pcVar1 = (char *)FUN_004de634(param_1,buffer,(DWORD)numberOfBytesToRead);
    }
    else if ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 2) == 0) {
      pcVar1 = (char *)0x0;
      if (numberOfBytesToRead != (char *)0x0) {
        while( true ) {
          numberOfBytesToRead2 = (int)numberOfBytesToRead - (int)pcVar1;
          uVar2 = FUN_004de634(param_1,buffer,numberOfBytesToRead2);
          if (uVar2 == 0xffffffff) {
            return (char *)0xffffffff;
          }
          if (uVar2 == 0) {
            return pcVar1;
          }
          found = memchr(buffer,'\x1a',uVar2);
          if (found != (char *)0x0) {
            (&DAT_005177f4)[param_1] = (&DAT_005177f4)[param_1] | 0x200;
            uVar2 = (int)found - (int)buffer;
            if (uVar2 == 0) {
              return pcVar1;
            }
          }
          if ((buffer[uVar2 - 1] == '\r') &&
             (iVar4 = FUN_004de634(param_1,buffer + (uVar2 - 1),1), iVar4 == -1)) break;
          pcVar5 = FUN_004de134(buffer,uVar2);
          pcVar1 = pcVar1 + (int)pcVar5;
          if ((uVar2 < numberOfBytesToRead2) && ((*(byte *)((int)&DAT_005177f4 + param_1 * 4 + 1) & 0x20) != 0)) {
            return pcVar1;
          }
          if (found != (char *)0x0) {
            return pcVar1;
          }
          if (pcVar5 != (char *)0x0) {
            return pcVar1;
          }
          if (numberOfBytesToRead <= pcVar1) {
            return pcVar1;
          }
        }
        pcVar1 = (char *)0xffffffff;
      }
    }
    else {
      pcVar1 = (char *)0x0;
    }
  }
  else {
    pcVar1 = (char *)FUN_004df280(-6);
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df65c  FUN_004df65c   (30 bytes)   [unnamed]
undefined4 __cdecl FUN_004df65c(LPCSTR existingFileName,LPCSTR newFileName)

{
  BOOL ok;
  undefined4 uVar2;
  
  ok = MoveFileA(existingFileName,newFileName);
  if (ok == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004df2e4();
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df67c  FUN_004df67c   (33 bytes)   [unnamed]
void __cdecl FUN_004df67c(int *param_1)

{
  int iVar1;
  
  iVar1 = fseek(param_1,0,0);
  if (iVar1 == 0) {
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xffef;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004df6a0  FUN_004df6a0   (2004 bytes, 2 ranges)   [unnamed]
int __cdecl FUN_004df6a0(undefined *param_1,undefined *param_2,byte *param_3,byte *param_4,int *param_5)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte bVar9;
  byte *pbVar10;
  byte local_124 [34];
  byte wideCharStr [2];
  byte multiByteStr;
  undefined1 uStack_ff;
  undefined2 wideCharStr2;
  byte *multiByteStr2;
  uint local_40;
  int local_3c;
  uint local_2c;
  uint local_28;
  uint local_24;
  byte local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
LAB_004df6b9:
  do {
    local_1d = *param_4;
    if (local_1d == 0) {
      return local_8;
    }
    pbVar8 = param_4 + 1;
    if (local_1d == 0x25) {
      local_1d = param_4[1];
      param_4 = param_4 + 2;
      pbVar8 = param_4;
      if (local_1d != 0x25) {
        local_14 = 0xffffffff;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        local_40 = 0;
        pbVar8 = (byte *)0x25;
LAB_004df7e4:
        if ((local_1d & 0x80) == 0) {
          uVar6 = (uint)(char)(&DAT_00517e78)[(int)(char)local_1d & 0x7f];
        }
        else {
          uVar6 = 2;
        }
        switch(uVar6) {
        default:
          goto switchD_004df80a_caseD_0;
        case 2:
          goto switchD_004df80a_caseD_2;
        case 4:
          bVar4 = true;
          local_1d = *param_4;
          pbVar8 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 5:
          if ((int)local_14 < 0) {
            iVar7 = (int)(char)local_1d;
          }
          else {
            iVar7 = local_14 * 10 + (int)(char)local_1d;
          }
          local_14 = iVar7 - 0x30;
          local_1d = *param_4;
          pbVar8 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 6:
        case 7:
          if (bVar2) {
            local_40 = 1;
          }
          else if (bVar3) {
            local_40 = 0;
          }
          else if (uVar6 == 7) {
            local_40 = 1;
          }
          if (!bVar4) {
            if (local_40 == 0) {
              multiByteStr2 = (byte *)*param_5;
              param_5 = param_5 + 1;
            }
            else {
              multiByteStr2 = (byte *)*param_5;
              param_5 = param_5 + 1;
            }
          }
          if ((int)local_14 < 0) {
            local_14 = 1;
          }
          if (local_14 == 0) goto LAB_004dfd54;
          goto LAB_004dfcec;
        case 8:
        case 9:
          local_18 = 10;
          goto switchD_004df80a_caseD_0;
        case 10:
          local_18 = 0;
          goto switchD_004df80a_caseD_0;
        case 0xb:
          thunk_FUN_004e3ab0();
          if (local_10 < 0) goto LAB_004dfeb7;
          if (local_10 == 0) goto switchD_004df80a_caseD_2;
          if (!bVar4) {
            param_5 = param_5 + 1;
            thunk_FUN_004e3ab0();
            local_8 = local_8 + 1;
          }
          goto LAB_004df6b9;
        case 0xc:
          bVar5 = true;
          local_1d = *param_4;
          pbVar8 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 0xd:
          bVar3 = true;
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 0xe:
          bVar2 = true;
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 0xf:
          local_18 = 8;
          goto switchD_004df80a_caseD_0;
        case 0x10:
        case 0x11:
          if (bVar2) {
            local_40 = 1;
          }
          else if (bVar3) {
            local_40 = 0;
          }
          else if (uVar6 == 0x11) {
            pbVar8 = (byte *)0x0;
            uVar6 = 1;
            local_40 = uVar6;
          }
          goto LAB_004dfb42;
        case 0x12:
          memset((undefined4 *)local_124,0,0x20);
          local_1c = 0;
          bVar9 = *param_4;
          pbVar8 = param_4 + 1;
          if (bVar9 == 0x5e) {
            local_1c = 1;
            bVar9 = param_4[1];
            pbVar8 = param_4 + 2;
          }
          goto LAB_004dfd92;
        case 0x13:
          local_28 = (int)local_c >> 0x1f;
          local_2c = local_c;
          goto LAB_004df9bf;
        case 0x14:
          goto switchD_004df80a_caseD_14;
        case 0x15:
          local_2c = FUN_004e00a0(param_1,param_2,(uint)param_3,0x10,8,(int *)&local_c,&local_10);
          if (local_10 < 1) goto switchD_004df80a_caseD_2;
          local_28 = extraout_EDX_00;
          if (!bVar4) {
            *(uint *)*param_5 = local_2c;
            local_8 = local_8 + 1;
            param_5 = param_5 + 1;
          }
          goto LAB_004df6b9;
        case 0x16:
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 0x17:
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        case 0x18:
          if ((*param_4 == 0x36) && (param_4[1] == 0x34)) {
            bVar5 = true;
            bVar3 = false;
            bVar2 = false;
            param_4 = param_4 + 2;
          }
          else if ((*param_4 == 0x33) && (param_4[1] == 0x32)) {
            bVar5 = false;
            bVar3 = false;
            bVar2 = true;
            param_4 = param_4 + 2;
          }
          else if ((*param_4 == 0x31) && (param_4[1] == 0x36)) {
            bVar5 = false;
            bVar3 = true;
            bVar2 = false;
            param_4 = param_4 + 2;
          }
          else if (*param_4 == 0x38) {
            bVar5 = false;
            bVar3 = false;
            bVar2 = false;
            param_4 = param_4 + 1;
          }
          local_1d = *param_4;
          pbVar8 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_004df7e4;
        }
      }
    }
    param_4 = pbVar8;
    local_c = local_c + 1;
    pbVar8 = param_3;
    local_24 = (*(code *)param_1)();
    if (local_24 == 0xffffffff) goto LAB_004dfeb7;
    if (((local_1d & 0x80) != 0) || ((&DAT_00517e78)[(int)(char)local_1d & 0x7f] != '\x01')) {
      bVar9 = (byte)local_24;
      if (bVar9 != local_1d) {
        (*(code *)param_2)(param_3,(int)(char)bVar9,pbVar8,(int)(char)bVar9,param_3);
        goto switchD_004df80a_caseD_2;
      }
      if ((((&DAT_0051c1d9)[local_24 & 0xff] & 4) != 0) && (*param_4 != 0)) {
        local_24 = (*(code *)param_1)();
        local_1d = (byte)local_24;
        if (local_24 == 0xffffffff) goto LAB_004dfeb7;
        bVar9 = *param_4;
        param_4 = param_4 + 1;
        if (bVar9 != local_1d) {
          (*(code *)param_2)();
          (*(code *)param_2)();
          goto switchD_004df80a_caseD_2;
        }
        local_c = local_c + 1;
      }
      goto LAB_004df6b9;
    }
    while (((local_24 & 0x80) == 0 &&
           (uVar6 = (int)(char)local_24 & 0x7f, (&DAT_00517e78)[uVar6] == '\x01'))) {
      local_c = local_c + 1;
      pbVar10 = param_3;
      local_24 = (*(code *)param_1)(uVar6,param_3,pbVar8);
      pbVar8 = pbVar10;
      if (local_24 == 0xffffffff) goto LAB_004dfeb7;
    }
    (*(code *)param_2)();
    local_c = local_c - 1;
  } while( true );
switchD_004df80a_caseD_14:
  local_18 = 0x10;
switchD_004df80a_caseD_0:
  local_2c = FUN_004e00a0(param_1,param_2,(uint)param_3,local_18,local_14 & 0x7fff,(int *)&local_c,
                          &local_10);
  local_28 = extraout_EDX;
  if (local_10 < 0) goto LAB_004dfeb7;
  if (local_10 == 0) goto switchD_004df80a_caseD_2;
LAB_004df9bf:
  if ((('@' < (char)local_1d) && ((char)local_1d < '[')) && (local_1d != 0x58)) {
    bVar2 = true;
  }
  if (!bVar4) {
    if (bVar5) {
      puVar1 = (uint *)*param_5;
      *puVar1 = local_2c;
      puVar1[1] = local_28;
    }
    else if (bVar2) {
      *(uint *)*param_5 = local_2c;
    }
    else if (bVar3) {
      *(short *)*param_5 = (short)local_2c;
    }
    else {
      *(uint *)*param_5 = local_2c;
    }
    param_5 = param_5 + 1;
    if (local_1d != 0x6e) {
      local_8 = local_8 + 1;
    }
  }
  goto LAB_004df6b9;
LAB_004dfd92:
  pbVar10 = pbVar8;
  local_1d = bVar9;
  if (bVar9 == 0) goto switchD_004df80a_caseD_2;
  pbVar8 = (byte *)((int)(char)bVar9 & 7);
  local_124[(int)(char)bVar9 >> 3 & 0x1f] =
       local_124[(int)(char)bVar9 >> 3 & 0x1f] | '\x01' << (sbyte)pbVar8;
  bVar9 = *pbVar10;
  param_4 = pbVar10 + 1;
  if (bVar9 != 0x5d) {
    pbVar8 = param_4;
    if (((bVar9 == 0x2d) && ((char)local_1d < (char)*param_4)) && (*param_4 != 0x5d)) {
      bVar9 = *param_4;
      while( true ) {
        local_1d = local_1d + 1;
        pbVar8 = pbVar10 + 2;
        if ((char)bVar9 <= (char)local_1d) break;
        local_124[(int)(char)local_1d >> 3 & 0x1f] =
             local_124[(int)(char)local_1d >> 3 & 0x1f] | '\x01' << (local_1d & 7);
      }
    }
    goto LAB_004dfd92;
  }
  if (local_14 == 0xffffffff) {
    local_14 = 0x7fff;
  }
  if (!bVar4) {
    pbVar8 = (byte *)*param_5;
    param_5 = param_5 + 1;
    multiByteStr2 = pbVar8;
  }
  local_3c = 0;
  uVar6 = 0x5d;
  while (local_14 = local_14 - 1, -1 < (int)local_14) {
    local_c = local_c + 1;
    pbVar8 = param_3;
    uVar6 = (*(code *)param_1)();
    local_24 = uVar6;
    if (uVar6 == 0xffffffff) break;
    bVar9 = (byte)uVar6;
    pbVar8 = (byte *)((int)(char)bVar9 & 7);
    if (((1 << (sbyte)pbVar8 & (int)(char)local_124[(int)(char)bVar9 >> 3 & 0x1f]) != 0) == local_1c
       ) break;
    local_3c = local_3c + 1;
    if (!bVar4) {
      *multiByteStr2 = bVar9;
      pbVar8 = multiByteStr2;
      multiByteStr2 = multiByteStr2 + 1;
    }
  }
  if (-1 < (int)local_14) {
    (*(code *)param_2)(param_3,(int)(char)uVar6,pbVar8,(int)(char)uVar6,param_3);
    local_c = local_c - 1;
  }
  if ((local_3c != 0) && (!bVar4)) {
    *multiByteStr2 = 0;
    local_8 = local_8 + 1;
    multiByteStr2 = multiByteStr2 + 1;
  }
  if (local_24 == 0xffffffff) {
LAB_004dfeb7:
    (*(code *)param_2)();
    if (local_8 == 0) {
      local_8 = -1;
    }
    else {
switchD_004df80a_caseD_2:
    }
    return local_8;
  }
  goto LAB_004df6b9;
  while (((local_24 & 0x80) == 0 &&
         (uVar6 = (int)(char)local_24 & 0x7f, (&DAT_00517e78)[uVar6] == '\x01'))) {
LAB_004dfb42:
    local_c = local_c + 1;
    pbVar10 = param_3;
    local_24 = (*(code *)param_1)(uVar6,param_3,pbVar8);
    pbVar8 = pbVar10;
    if (local_24 == 0xffffffff) goto LAB_004dfeb7;
  }
  if (!bVar4) {
    if (local_40 == 0) {
      multiByteStr2 = (byte *)*param_5;
    }
    else {
      multiByteStr2 = (byte *)*param_5;
    }
    param_5 = param_5 + 1;
    local_8 = local_8 + 1;
  }
  if (local_14 == 0xffffffff) {
    local_14 = 0x7fff;
  }
  do {
    if (!bVar4) {
      if (local_40 == 0) {
        *multiByteStr2 = (byte)local_24;
        multiByteStr2 = multiByteStr2 + 1;
      }
      else {
        (*(undefined2 *)&multiByteStr) = CONCAT11((char)((ushort)DAT_00517ef8 >> 8),(byte)local_24);
        iVar7 = FUN_004e3124((LPWSTR)&wideCharStr2,&multiByteStr,DAT_00518404);
        if (iVar7 < 1) {
          local_c = local_c - 1;
        }
        else {
          *(undefined2 *)multiByteStr2 = wideCharStr2;
          multiByteStr2 = multiByteStr2 + 2;
        }
      }
    }
    local_c = local_c + 1;
    local_24 = (*(code *)param_1)();
  } while ((((local_24 != 0xffffffff) && ((char)local_24 != '\0')) &&
           (((local_24 & 0x80) != 0 || ((&DAT_00517e78)[(int)(char)local_24 & 0x7f] != '\x01')))) &&
          (local_14 = local_14 - 1, 0 < (int)local_14));
  (*(code *)param_2)();
  local_c = local_c - 1;
  if (!bVar4) {
    if (local_40 == 0) {
      *multiByteStr2 = 0;
    }
    else {
      multiByteStr2[0] = 0;
      multiByteStr2[1] = 0;
    }
  }
  goto LAB_004df6b9;
  while( true ) {
    if (!bVar4) {
      if (local_40 == 0) {
        *multiByteStr2 = (byte)local_24;
        multiByteStr2 = multiByteStr2 + 1;
      }
      else {
        iVar7 = FUN_004e3124((LPWSTR)wideCharStr,multiByteStr2,DAT_00518404);
        if (0 < iVar7) {
          *multiByteStr2 = wideCharStr[0];
          multiByteStr2 = multiByteStr2 + 1;
        }
      }
    }
    local_14 = local_14 - 1;
    if ((int)local_14 < 1) break;
LAB_004dfcec:
    local_c = local_c + 1;
    local_24 = (*(code *)param_1)();
    if (local_24 == 0xffffffff) goto LAB_004dfeb7;
  }
LAB_004dfd54:
  if (!bVar4) {
    local_8 = local_8 + 1;
  }
  goto LAB_004df6b9;
}

// ----------------------------------------------------------------------------------------------------
// 0x004dfed8  FUN_004dfed8   (449 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_004dfed8(undefined *param_1,undefined *param_2,undefined4 param_3,uint param_4,int param_5, int *param_6,int *param_7)

{
  int iVar1;
  uint ch;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_004dff00:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    ch = (*(code *)param_1)();
    if (iVar5 == 0) {
      if (((-1 < (int)ch) && ((int)ch < 0x80)) && (iVar3 = FUN_004e5b18(ch), iVar3 != 0))
      goto LAB_004dff00;
      iVar5 = 1;
    }
    iVar3 = param_5 + -1;
    if (iVar3 < 0) goto LAB_004e004f;
    if ((iVar5 != 1) || ((iVar5 = 2, ch != 0x2b && (ch != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((ch == 0x30) && ((local_18 = 1, param_4 == 0 || (param_4 == 0x10)))) {
          iVar1 = local_c + 2;
          ch = (*(code *)param_1)();
          param_5 = param_5 + -2;
          if (param_5 < 0) goto LAB_004e004f;
          if ((ch == 0x78) || (ch == 0x58)) {
            param_4 = 0x10;
            goto LAB_004dff00;
          }
          iVar3 = param_5;
          if (param_4 == 0) {
            param_4 = 8;
          }
        }
        local_c = iVar1;
        param_5 = iVar3;
        iVar3 = param_5;
        iVar1 = local_c;
        if (param_4 == 0) {
          param_4 = 10;
        }
        else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_004e004f;
      }
      local_c = iVar1;
      param_5 = iVar3;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if (((int)ch < 0x30) || (0x39 < (int)ch)) {
          if (((int)ch < 0x61) || (0x7a < (int)ch)) {
            if (((int)ch < 0x41) || (0x5a < (int)ch)) goto LAB_004e004f;
            local_1c = ch - 0x37;
          }
          else {
            local_1c = ch - 0x57;
          }
        }
        else {
          local_1c = ch - 0x30;
        }
        if ((int)param_4 <= local_1c) goto LAB_004e004f;
        local_18 = local_18 + 1;
        uVar4 = local_14 * param_4 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / param_4;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          if (bVar6) {
            local_14 = 0x80000000;
          }
          else {
            local_14 = 0x7fffffff;
          }
LAB_004e004f:
          local_c = iVar1;
          if (local_10 != 2) {
            (*(code *)param_2)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if (local_18 == 0) {
            if (ch == 0xffffffff) {
              local_10 = -1;
            }
            else {
              local_10 = 0;
            }
          }
          *param_7 = local_10;
          *param_6 = *param_6 + local_c;
          return local_14;
        }
      }
      goto LAB_004dff00;
    }
    bVar6 = ch == 0x2d;
    param_5 = iVar3;
  } while( true );
}

} // namespace tea
