// TEA.exe — runtime / library code "code_0x004e4000"
// 97 functions, 0x004e4004..0x004e7f91. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004e4004  FUN_004e4004   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_004e4004(int *param_1)

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
// 0x004e4034  FUN_004e4034   (22 bytes)   [unnamed]
void __cdecl FUN_004e4034(undefined *param_1,undefined *param_2)

{
  PTR_FUN_00518a44 = param_1;
  PTR_FUN_00518a48 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e404c  FUN_004e404c   (476 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x004e410e) */
void __cdecl FUN_004e404c(double param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  short sVar7;
  longdouble lVar8;
  ushort uStack_10;
  undefined2 uStack_e;
  
  lVar8 = (longdouble)param_1;
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (ushort)(param_3 >> 0x10);
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    if (0xffff < (int)param_3) {
      return;
    }
    iVar6 = 1;
    if (uVar3 == 0) {
      puVar5 = &DAT_00518aa0;
    }
    else {
      puVar5 = &DAT_005189b8;
    }
  }
  else {
    if ((uVar1 & 0x7ff0) == 0x7ff0) {
      if ((int)param_3 < 0) {
        iVar6 = 4;
        puVar5 = &DAT_00518a98;
        goto LAB_004e40d3;
      }
    }
    else {
      uVar3 = uVar3 & 0x7ff0;
      if ((param_3 & 0x7ff00000) == 0) {
        return;
      }
      if (uVar3 != 0x7ff0) {
        uVar3 = uVar3 >> 4;
        if ((ushort)(uVar3 - 0x3ff) < 0x3f) {
          if (((byte)(uVar3 - 0x3ff) < 0xc) &&
             (sVar7 = uVar1 * 2 + -0x7fe0, bVar4 = (char)uVar3 + 2, uVar3 = uVar3 - 0x3ff,
             (short)(sVar7 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f) == sVar7)) {
            do {
              cVar2 = (char)uVar3;
              uVar3 = (ushort)(byte)(cVar2 - 1);
            } while ('\0' < cVar2);
            return;
          }
          if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
            lVar8 = -lVar8;
          }
        }
        if (lVar8 < (longdouble)0) {
          iVar6 = 1;
          puVar5 = &DAT_00518a90;
          goto LAB_004e40d3;
        }
        FUN_004e3bac();
        lVar8 = lVar8 * (longdouble)
                        (double)CONCAT17(GH_PIECE(param_3, 3, undefined1),
                                         CONCAT16(GH_PIECE(param_3, 2, undefined1),
                                                  CONCAT24((undefined2)param_3,param_2)));
        uStack_e = (ushort)((unkuint10)lVar8 >> 0x40);
        if ((uStack_e & 0x7fff) < 0x4008) {
LAB_004e417f:
          FUN_004e3ae1();
          return;
        }
        uStack_10 = 0xffff;
        if ((uStack_e & 0x7fff) < 0x4009) {
          uStack_10 = (ushort)((unkuint10)lVar8 >> 0x30);
        }
        GH_PIECE(uStack_e, 1, undefined1) = (byte)((unkuint10)lVar8 >> 0x48);
        if ((GH_PIECE(uStack_e, 1, undefined1) & 0x80) == 0) {
          if (uStack_10 < 0xb172) goto LAB_004e417f;
          iVar6 = 3;
          puVar5 = &DAT_005189b8;
        }
        else {
          if (uStack_10 < 0xb172) goto LAB_004e417f;
          iVar6 = 4;
          puVar5 = &DAT_00518a98;
        }
        goto LAB_004e40d3;
      }
    }
    iVar6 = 3;
    puVar5 = &DAT_005189b8;
  }
LAB_004e40d3:
  FUN_004e3798(iVar6,&DAT_00518aa8 /* "pow" */,(undefined8*)&param_1,(undefined8 *)&param_2,*puVar5,puVar5[1]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e4228  FUN_004e4228   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_004e4228(undefined4 *param_1)

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
// 0x004e4250  FUN_004e4250   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_004e4250(uint *param_1,uint param_2)

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
// 0x004e4280  FUN_004e4280   (26 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004e4280(undefined4 param_1)

{
  (*(undefined4 *)&DAT_00518aac) = param_1;
  _DAT_00518ab0 = 0;
  FUN_004e42a8();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e42a8  FUN_004e42a8   (25 bytes)   [unnamed]
uint __stdcall FUN_004e42a8(void)

{
  DAT_00518aac = DAT_00518aac * 0x15a4e35 + 1;
  return DAT_00518aac >> 0x10 & 0x7fff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e4310  FUN_004e4310   (65 bytes)   [unnamed]
uint __cdecl FUN_004e4310(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_004e12bc(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_004e4342;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_004e4342:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e4354  FUN_004e4354   (645 bytes)   [unnamed]
byte * __cdecl FUN_004e4354(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte local_3c [46];
  byte local_e;
  byte local_d;
  uint local_c;
  uint local_8;
  
  pbVar2 = (byte *)FUN_004e12bc(0xe);
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
  iVar3 = FUN_004e53b8(param_1,uVar6,&local_8,(undefined4 *)local_3c,param_6);
  if (iVar3 == 0x7fff) {
    if (local_8 == 0) {
      pcVar4 = &DAT_00518ab9 /* "+INF" */;
    }
    else {
      pcVar4 = &DAT_00518ab4 /* "-INF" */;
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
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
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
      pcVar4 = &DAT_00518ac3 /* "+NAN" */;
    }
    else {
      pcVar4 = &DAT_00518abe /* "-NAN" */;
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
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
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
    if ((local_d != 0x47) || (iVar3 < -3)) goto LAB_004e451e;
    uVar6 = param_2;
    if (param_2 == 0) {
      uVar6 = 1;
    }
    if ((int)uVar6 < iVar3) goto LAB_004e451e;
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
      pbVar5 = (byte *)FUN_004e4310(param_4,(uint)param_3,(uint)pbVar2);
      pbVar2 = pbVar5;
    }
    if (pbVar2 == param_3) {
      *pbVar2 = 0x30;
      pbVar2 = pbVar2 + 1;
    }
    *pbVar2 = 0;
    return pbVar5;
  }
LAB_004e451e:
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
      pbVar5 = (byte *)FUN_004e4310(param_4,(uint)param_3,(uint)pbVar5);
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
// 0x004e45dc  FUN_004e45dc   (22 bytes)   [unnamed]
int __cdecl FUN_004e45dc(int param_1,int param_2)

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
// 0x004e460c  FUN_004e460c   (74 bytes)   [unnamed]
uint __cdecl FUN_004e460c(short param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_004e12bc(0xe);
  if ((param_1 == 0x47) || (uVar1 = param_3, param_1 == 0x67)) {
    do {
      uVar1 = param_3;
      if (*(short *)(param_3 - 2) != 0x30) goto LAB_004e4643;
      param_3 = param_3 - 2;
    } while (param_2 < param_3);
  }
  else {
LAB_004e4643:
    param_2 = uVar1;
    if (*psVar2 == *(short *)(param_2 - 2)) {
      param_2 = param_2 - 2;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e4658  FUN_004e4658   (695 bytes)   [unnamed]
void __cdecl FUN_004e4658(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6)

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
  
  puVar1 = (ushort *)FUN_004e12bc(0xe);
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
  iVar2 = FUN_004e568c(param_1,iVar2,&local_8,local_68,param_6);
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pwVar3 = L"+INF";
    }
    else {
      pwVar3 = L"-INF";
    }
    FUN_004dce24((short *)param_3,pwVar3);
    return;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pwVar3 = L"+NAN";
    }
    else {
      pwVar3 = L"-NAN";
    }
    FUN_004dce24((short *)param_3,pwVar3);
    return;
  }
  puVar1 = param_3;
  if (local_8 != 0) {
    *param_3 = 0x2d;
    puVar1 = param_3 + 1;
  }
  if (local_e != 0x46) {
    if ((local_e != 0x47) || (iVar2 < -3)) goto LAB_004e4823;
    iVar7 = param_2;
    if (param_2 == 0) {
      iVar7 = 1;
    }
    if (iVar7 < iVar2) goto LAB_004e4823;
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
      puVar1 = (ushort *)FUN_004e460c(param_4,(uint)param_3,(uint)puVar1);
    }
    if (puVar1 == param_3) {
      *puVar1 = 0x30;
      puVar1 = puVar1 + 1;
    }
    *puVar1 = 0;
    return;
  }
LAB_004e4823:
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
      puVar4 = (ushort *)FUN_004e460c(param_4,(uint)param_3,(uint)puVar4);
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
// 0x004e4910  FUN_004e4910   (22 bytes)   [unnamed]
int __cdecl FUN_004e4910(int param_1,int param_2)

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
// 0x004e4940  FUN_004e4940   (1097 bytes)   [unnamed]
void __cdecl FUN_004e4940(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
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
  pbVar3 = (byte *)FUN_004e12bc(0xe);
  bVar1 = *pbVar3;
  uVar6 = (uint)bVar1;
  do {
    local_18 = local_18 + 1;
    uVar5 = param_4;
    uVar4 = (*(code *)param_2)(uVar6,param_4,uVar11);
    uVar11 = uVar5;
    uVar5 = uVar4 + 1;
    if (uVar5 == 0) {
      local_1c = 0xffffffff;
      goto LAB_004e4c74;
    }
    if ((uVar4 & 0x80) != 0) break;
    uVar11 = uVar4;
    uVar6 = FUN_004e5b18(uVar4);
    uVar5 = 0;
  } while (uVar6 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar10 = local_c;
    if (uVar4 == 0x2b) {
      local_f = '\x01';
    }
    else {
      iVar8 = iVar9;
      if (uVar4 != 0x2d) goto LAB_004e4a01;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar10, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar11 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar8 = iVar9;
LAB_004e4a01:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)(uVar5,param_4,uVar11);
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_004e4c6f;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x46)) goto LAB_004e4c6f;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00518af4,DAT_00518af0));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518af8,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00518afe,DAT_00518afa));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b02,local_28);
          }
          goto LAB_004e4c44;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x41)) goto LAB_004e4c6f;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_004e4c6f;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00518b08,DAT_00518b04));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b0c,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00518b12,DAT_00518b0e));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b16,local_28);
          }
          goto LAB_004e4c44;
        }
      }
      local_e = '\0';
      iVar9 = iVar8;
      iVar10 = local_c;
      if (uVar4 == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_004e4ae7;
        local_8 = iVar8;
        if (iVar8 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_004e4ae7;
        uVar4 = uVar4 - 0x30;
        iVar9 = iVar8 + 1;
        if (iVar9 < 1) {
          *local_38 = (short)uVar4;
          iVar10 = local_c;
          if (uVar4 == 0) {
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
          (*(longdouble *)&local_28) = (longdouble)CONCAT64(GHIDRA_STACK(0xffffffdc),GH_PIECE(local_28, 0, undefined4) * 10 + uVar4);
        }
        else if (iVar9 <= local_c) {
          local_40 = GH_PIECE(local_28, 0, undefined4);
          local_3c = GH_PIECE(local_28, 4, undefined4);
          iVar7 = FUN_004e4250(&local_40,uVar4);
          iVar10 = iVar8;
          if (iVar7 == 0) {
            GH_SET(local_28, CONCAT44(local_3c,local_40));
            iVar10 = local_c;
          }
        }
      }
    }
  }
  uVar4 = 0x65;
LAB_004e4ae7:
  iVar10 = param_5;
  if (iVar9 == -2) {
LAB_004e4c6f:
    param_5 = iVar10;
    local_1c = 0;
LAB_004e4c74:
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
    if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
      bVar2 = true;
LAB_004e4b0f:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar8 = (*(code *)param_2)();
        if (!bVar2) goto LAB_004e4b3c;
        bVar2 = false;
        if (iVar8 != 0x2d) goto LAB_004e4b37;
        local_10 = '\x01';
      }
    }
    else {
LAB_004e4b62:
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
      FUN_004e3c2c((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar10 != 0) {
        FUN_004e3848();
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
LAB_004e4c44:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_004e4b37:
  if (iVar8 != 0x2b) {
LAB_004e4b3c:
    if ((iVar8 < 0x30) || (0x39 < iVar8)) goto LAB_004e4b62;
    iVar10 = iVar8 + iVar10 * 10 + -0x30;
    if (0x1344 < iVar10) {
      local_11 = '\x01';
    }
  }
  goto LAB_004e4b0f;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e4d8c  FUN_004e4d8c   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004e4d8c(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_004e3d48(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_004e3d48(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e4e24  FUN_004e4e24   (1094 bytes)   [unnamed]
void __cdecl FUN_004e4e24(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
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
  puVar3 = (ushort *)FUN_004e12bc(0xe);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  do {
    local_18 = local_18 + 1;
    uVar4 = (*(code *)param_2)(uVar5,param_4,uVar10,param_4);
    if (uVar4 == 0xffffffff) {
      local_1c = 0xffffffff;
      goto LAB_004e5155;
    }
    uVar10 = uVar4;
    uVar5 = FUN_004e14d8((ushort)uVar4);
  } while (uVar5 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar9 = local_c;
    if (uVar4 == 0x2b) {
      local_f = '\x01';
    }
    else {
      uVar5 = 0;
      iVar7 = iVar8;
      if (uVar4 != 0x2d) goto LAB_004e4ee2;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar9, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar10 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar7 = iVar8;
LAB_004e4ee2:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)(uVar5,param_4,uVar10);
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_004e5150;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x46)) goto LAB_004e5150;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00518b1c,DAT_00518b18));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b20,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00518b26,DAT_00518b22));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b2a,local_28);
          }
          goto LAB_004e5125;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x41)) goto LAB_004e5150;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_004e5150;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00518b30,DAT_00518b2c));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b34,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00518b3a,DAT_00518b36));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00518b3e,local_28);
          }
          goto LAB_004e5125;
        }
      }
      local_e = '\0';
      iVar8 = iVar7;
      iVar9 = local_c;
      if (uVar4 == uVar1) {
        if (local_8 != 0x8000) goto LAB_004e4fc8;
        local_8 = iVar7;
        if (iVar7 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_004e4fc8;
        uVar4 = uVar4 - 0x30;
        iVar8 = iVar7 + 1;
        if (iVar8 < 1) {
          *local_38 = (short)uVar4;
          iVar9 = local_c;
          if (uVar4 == 0) {
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
          (*(longdouble *)&local_28) = (longdouble)CONCAT64(GHIDRA_STACK(0xffffffdc),GH_PIECE(local_28, 0, undefined4) * 10 + uVar4);
        }
        else if (iVar8 <= local_c) {
          local_40 = GH_PIECE(local_28, 0, undefined4);
          local_3c = GH_PIECE(local_28, 4, undefined4);
          iVar6 = FUN_004e4250(&local_40,uVar4);
          iVar9 = iVar7;
          if (iVar6 == 0) {
            GH_SET(local_28, CONCAT44(local_3c,local_40));
            iVar9 = local_c;
          }
        }
      }
    }
  }
  uVar4 = 0x65;
LAB_004e4fc8:
  iVar9 = param_5;
  if (iVar8 == -2) {
LAB_004e5150:
    param_5 = iVar9;
    local_1c = 0;
LAB_004e5155:
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
    if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
      bVar2 = true;
LAB_004e4ff0:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar7 = (*(code *)param_2)();
        if (!bVar2) goto LAB_004e501d;
        bVar2 = false;
        if (iVar7 != 0x2d) goto LAB_004e5018;
        local_10 = '\x01';
      }
    }
    else {
LAB_004e5043:
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
      FUN_004e3c2c((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar9 != 0) {
        FUN_004e3848();
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
LAB_004e5125:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_004e5018:
  if (iVar7 != 0x2b) {
LAB_004e501d:
    if ((iVar7 < 0x30) || (0x39 < iVar7)) goto LAB_004e5043;
    iVar9 = iVar7 + iVar9 * 10 + -0x30;
    if (0x1344 < iVar9) {
      local_11 = '\x01';
    }
  }
  goto LAB_004e4ff0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e526c  FUN_004e526c   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004e526c(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_004e3d48(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_004e3d48(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5304  FUN_004e5304   (28 bytes)   [unnamed]
int __cdecl FUN_004e5304(int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)*param_1;
  *param_1 = *param_1 + 1;
  iVar2 = (int)*pcVar1;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5320  FUN_004e5320   (10 bytes)   [unnamed]
void __cdecl FUN_004e5320(undefined4 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e532c  FUN_004e532c   (139 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint __cdecl FUN_004e532c(char *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  local_c = 0;
  while( true ) {
    iVar2 = FUN_004e5b18((int)*param_1);
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
  }
  _DAT_00518bd0 = 0;
  uVar3 = FUN_004dfed8((undefined*)FUN_004e5304,(undefined*)FUN_004e5320,&param_1,param_3,0x7fff,&local_8,&local_c);
  if (local_c < 1) {
    param_1 = param_1 + -local_8;
  }
  else if (local_c == 2) {
    uVar3 = 0xffffffff;
    _DAT_00518bd0 = 0x22;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_1;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e53b8  FUN_004e53b8   (722 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_004e53b8(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5)

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
  uVar1 = FUN_004e3c80((longdouble *)local_10);
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
        FUN_004e3848();
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
      FUN_004e3848();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_004e3848();
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
        FUN_004e3c5c((longlong *)local_10,(longdouble *)local_10);
        local_28 = (undefined4 *)((int)param_4 + uVar8);
        bVar6 = 0;
        *(undefined1 *)local_28 = 0;
        pcVar5 = (char *)((int)local_28 + -1);
        if (uVar8 == 0) {
          if (local_10[0] != '\x01') goto LAB_004e5441;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_004e4228((undefined4 *)local_10);
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
LAB_004e5441:
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
// 0x004e568c  FUN_004e568c   (753 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_004e568c(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5)

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
  uVar1 = FUN_004e3c80((longdouble *)local_10);
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
        FUN_004e3848();
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
      FUN_004e3848();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_004e3848();
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
        FUN_004e3c5c((longlong *)local_10,(longdouble *)local_10);
        bVar6 = 0;
        local_28 = param_4 + iVar7;
        *local_28 = 0;
        psVar5 = local_28 + -1;
        if (iVar7 == 0) {
          if (local_10[0] != '\x01') goto LAB_004e5715;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_004e4228((undefined4 *)local_10);
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
        FUN_004dc8d0(local_28,0x30,iVar8);
        local_28[iVar8] = 0;
        return local_18;
      }
    }
  }
LAB_004e5715:
  if (param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  FUN_004dc8d0(param_4,0x30,param_2);
  param_4[param_2] = 0;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5980  FUN_004e5980   (289 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_004e5980(UINT param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  BYTE *pBVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  _cpinfo local_18;
  
  if (param_1 == 0xfffffffe) {
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    param_1 = *(UINT *)PTR_DAT_00518658;
  }
  if ((param_1 == 0) || (BVar1 = GetCPInfo(param_1,&local_18), BVar1 != 0)) {
    iVar3 = 0;
    puVar6 = &DAT_0051c1d8;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if ((param_1 == 0) || (local_18.MaxCharSize < 2)) {
      _DAT_0051c2dc = 0;
    }
    else {
      for (pBVar5 = local_18.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar6 = &DAT_0051c1d9 + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar6 = 4;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 1;
      pbVar7 = &DAT_0051c1da;
      do {
        *pbVar7 = *pbVar7 | 8;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 < 0xff);
      _DAT_0051c2dc = param_1;
      if (param_1 == 0x3a4) {
        uVar4 = (uint)DAT_00518b40;
        pbVar7 = &DAT_0051c1d9 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00518b41; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 1;
          pbVar7 = pbVar7 + 1;
        }
        uVar4 = (uint)DAT_00518b42;
        pbVar7 = &DAT_0051c1d9 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00518b43; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_004e5e58((uint *)"Error: system code page access failure; MBCS table not initialized");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5abc  FUN_004e5abc   (61 bytes)   [unnamed]
undefined4 __cdecl FUN_004e5abc(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x100) {
    iVar2 = FUN_004e133c(param_1 & 0xff);
    if ((iVar2 == 0) && (((&DAT_0051c1d9)[param_1 & 0xff] & 1) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5afc  FUN_004e5afc   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004e5afc(uint param_1)

{
  undefined4 uVar1;
  
  if (0xff < param_1) {
    return 0;
  }
  uVar1 = FUN_004e1368(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5b18  FUN_004e5b18   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_004e5b18(uint param_1)

{
  undefined4 uVar1;
  
  if (0xff < param_1) {
    return 0;
  }
  uVar1 = FUN_004e13d4(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5b34  FUN_004e5b34   (84 bytes)   [unnamed]
byte * __cdecl FUN_004e5b34(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    if ((param_3 == 0) || (*param_2 == 0)) goto joined_r0x004e5b77;
    if (((&DAT_0051c1d9)[*param_2] & 4) != 0) {
      if ((param_3 < 2) || (param_2[1] == 0)) {
joined_r0x004e5b77:
        for (; param_3 != 0; param_3 = param_3 - 1) {
          *pbVar2 = 0;
          pbVar2 = pbVar2 + 1;
        }
        return param_1;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *pbVar2 = bVar1;
      pbVar2 = pbVar2 + 1;
      param_3 = param_3 - 1;
    }
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    param_3 = param_3 - 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5b88  FUN_004e5b88   (191 bytes)   [unnamed]
undefined4 __cdecl FUN_004e5b88(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  pbVar2 = param_1;
  pbVar3 = param_2;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = param_3 + -1;
    bVar1 = *pbVar2;
    param_1 = pbVar2 + 1;
    if (((&DAT_0051c1d9)[bVar1] & 4) == 0) {
      uVar4 = FUN_004e3054((uint)bVar1);
    }
    else {
      if (iVar6 == 0) {
        return 0;
      }
      if (*param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)CONCAT11(bVar1,*param_1);
        param_1 = pbVar2 + 2;
      }
    }
    bVar1 = *pbVar3;
    param_2 = pbVar3 + 1;
    if (((&DAT_0051c1d9)[bVar1] & 4) == 0) {
      uVar5 = FUN_004e3054((uint)bVar1);
    }
    else {
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = param_3 + -2;
      if (*param_2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)CONCAT11(bVar1,*param_2);
        param_2 = pbVar3 + 2;
      }
    }
    if (uVar5 != uVar4) break;
    pbVar2 = param_1;
    pbVar3 = param_2;
    param_3 = iVar6;
    if (uVar4 == 0) {
      return 0;
    }
  }
  if (uVar5 <= uVar4) {
    return 1;
  }
  return 0xffffffff;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5c48  FUN_004e5c48   (86 bytes)   [unnamed]
byte * __cdecl FUN_004e5c48(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  do {
    if (((&DAT_0051c1d9)[*param_1] & 4) == 0) {
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
// 0x004e5ca0  FUN_004e5ca0   (69 bytes)   [unnamed]
void __cdecl FUN_004e5ca0(uint *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *local_8;
  
  *(undefined1 *)param_1 = 0;
  local_8 = (undefined4 *)&GHIDRA_STACK(0x0000000c);
  while( true ) {
    pcVar1 = (char *)*local_8;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    pcVar2 = strlen(param_1);
    uVar3 = (param_2 - (int)pcVar2) - 1;
    if ((int)uVar3 < 1) break;
    FUN_004dca50((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5ce8  FUN_004e5ce8   (94 bytes)   [unnamed]
void __cdecl FUN_004e5ce8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  
  FUN_004e5ca0((uint *)&DAT_0051c2e0,0xf6);
  pcVar1 = strlen((uint *)&DAT_0051c2e0);
  FUN_004e3f44(param_3,pcVar1 + 0x51c2e0);
  FUN_004e5e58((uint *)&DAT_0051c2e0);
  FUN_004e6284();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5d48  FUN_004e5d48   (78 bytes)   [unnamed]
undefined * __stdcall FUN_004e5d48(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  wsprintfA(&DAT_0051c3e0,"%02d/%02d/%04d %02d:%02d:%02d.%03d ",(uint)local_10.wMonth,
            (uint)local_10.wDay,(uint)local_10.wYear,(uint)local_10.wHour,(uint)local_10.wMinute,
            (uint)local_10.wSecond,(uint)local_10.wMilliseconds);
  return &DAT_0051c3e0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5d98  FUN_004e5d98   (104 bytes)   [unnamed]
void __cdecl FUN_004e5d98(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  uint *lpBuffer;
  char *pcVar1;
  DWORD *pDVar2;
  LPOVERLAPPED p_Var3;
  DWORD local_8;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    lpBuffer = (uint *)FUN_004e5d48();
    pDVar2 = &local_8;
    p_Var3 = (LPOVERLAPPED)0x0;
    pcVar1 = strlen(lpBuffer);
    WriteFile(hFile,lpBuffer,(DWORD)pcVar1,pDVar2,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    pDVar2 = &local_8;
    pcVar1 = strlen(param_2);
    WriteFile(hFile,param_2,(DWORD)pcVar1,pDVar2,p_Var3);
    CloseHandle(hFile);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5e00  FUN_004e5e00   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_004e5e00(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5e14  FUN_004e5e14   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_004e5e14(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  code *lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 >> 0x10 & 0x8000) == 0) {
    return 0x2000;
  }
  lpfn = FUN_004e5e00;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  else {
    uVar2 = 0x2000;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5e58  FUN_004e5e58   (283 bytes)   [unnamed]
void __cdecl FUN_004e5e58(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_00518bd8 == (LPCSTR)0x0) && (DAT_00518bd4 == (code *)0x0)) {
    if (DAT_00518de8 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_004e5c48(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_004e5c48(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_004e5e14();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_00518bdc,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = strlen(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_00518bdf,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_00518bd4 != (code *)0x0) {
    if (DAT_00518bd4 == (code *)0xffffffff) {
      return;
    }
    ((code *)DAT_00518bd4)();
  }
  if (DAT_00518bd8 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_00518bd8 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_00518bd8 == '\0') {
    return;
  }
  FUN_004e5d98(DAT_00518bd8,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5f74  FUN_004e5f74   (15 bytes)   [unnamed]
void __cdecl FUN_004e5f74(uint *param_1)

{
  FUN_004e5e58(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e5f84  FUN_004e5f84   (23 bytes)   [unnamed]
void __cdecl FUN_004e5f84(uint *param_1)

{
  FUN_004e5e58(param_1);
  FUN_004e6304(1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6028  __vstub_4e6028   (16 bytes)   [rtti:vtable shared-virtual-stub]
//   in vtables of 13 classes across unrelated hierarchies (PrintPreviewPrintout, PrintoutFeeder, OWL::TCommandEnabler, DictionaryMaintainer, …)
void __stdcall __vstub_4e6028(void)

{
  FUN_004e5f84((uint *)"Pure virtual function called");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6038  FUN_004e6038   (38 bytes)   [unnamed]
void __cdecl FUN_004e6038(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < DAT_0051c404; uVar2 = uVar2 + 1) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6060  FUN_004e6060   (482 bytes)   [unnamed]
void __cdecl FUN_004e6060(undefined1 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_c;
  undefined1 *local_8;
  
  do {
    if (param_2 < 3) {
      if (param_2 == 2) {
        puVar4 = param_1 + DAT_0051c404;
        iVar1 = ((code *)DAT_0051c400)();
        if (0 < iVar1) {
          FUN_004e6038(param_1,puVar4);
        }
      }
      return;
    }
    puVar4 = param_1 + (param_2 - 1) * DAT_0051c404;
    puVar3 = param_1 + (param_2 >> 1) * DAT_0051c404;
    iVar1 = ((code *)DAT_0051c400)();
    if (0 < iVar1) {
      FUN_004e6038(puVar3,puVar4);
    }
    iVar1 = ((code *)DAT_0051c400)();
    if (iVar1 < 1) {
      iVar1 = ((code *)DAT_0051c400)();
      if (0 < iVar1) {
        FUN_004e6038(param_1,puVar4);
      }
    }
    else {
      FUN_004e6038(puVar3,param_1);
    }
    if (param_2 == 3) {
      FUN_004e6038(param_1,puVar3);
      return;
    }
    puVar3 = param_1 + DAT_0051c404;
    local_8 = puVar3;
    do {
      while (iVar1 = ((code *)DAT_0051c400)(), iVar1 < 1) {
        if (iVar1 == 0) {
          FUN_004e6038(puVar3,local_8);
          local_8 = local_8 + DAT_0051c404;
        }
        if (puVar4 <= puVar3) goto LAB_004e61a7;
        puVar3 = puVar3 + DAT_0051c404;
      }
      for (; puVar3 < puVar4; puVar4 = puVar4 + -DAT_0051c404) {
        iVar1 = ((code *)DAT_0051c400)();
        if (-1 < iVar1) {
          FUN_004e6038(puVar3,puVar4);
          if (iVar1 != 0) {
            puVar3 = puVar3 + DAT_0051c404;
            puVar4 = puVar4 + -DAT_0051c404;
          }
          break;
        }
      }
    } while (puVar3 < puVar4);
LAB_004e61a7:
    iVar1 = ((code *)DAT_0051c400)();
    if (iVar1 < 1) {
      puVar3 = puVar3 + DAT_0051c404;
    }
    puVar4 = param_1;
    for (local_c = puVar3 + -DAT_0051c404; (puVar4 < local_8 && (local_8 <= local_c));
        local_c = local_c + -DAT_0051c404) {
      FUN_004e6038(puVar4,local_c);
      puVar4 = puVar4 + DAT_0051c404;
    }
    uVar2 = (uint)((int)puVar3 - (int)local_8) / DAT_0051c404;
    param_2 = (uint)(param_1 + (param_2 * DAT_0051c404 - (int)puVar3)) / DAT_0051c404;
    if (param_2 < uVar2) {
      FUN_004e6060(puVar3,param_2);
      param_2 = uVar2;
    }
    else {
      FUN_004e6060(param_1,uVar2);
      param_1 = puVar3;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6244  FUN_004e6244   (42 bytes)   [unnamed]
void __cdecl FUN_004e6244(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  (*(int *)&DAT_0051c404) = param_3;
  if (param_3 != 0) {
    (*(undefined4 *)&DAT_0051c400) = param_4;
    FUN_004e6060(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6270  FUN_004e6270   (20 bytes)   [unnamed]
void __stdcall FUN_004e6270(void)

{
  FUN_004e5e58((uint *)"Abnormal program termination");
  FUN_004e6304(3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6284  FUN_004e6284   (14 bytes)   [unnamed]
void __stdcall FUN_004e6284(void)

{
  FUN_004e6dec(0x16);
  FUN_004e6270();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6294  FUN_004e6294   (1 bytes)   [unnamed]
void __stdcall FUN_004e6294(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6298  FUN_004e6298   (81 bytes)   [unnamed]
void __cdecl FUN_004e6298(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    if (DAT_00518c4c != (code *)0x0) {
      ((code *)DAT_00518c4c)();
    }
    FUN_004e6f48();
    (*(code *)PTR_FUN_00518c50)();
  }
  else {
    DAT_00518c4c = (undefined*)((code *)(undefined*)(0x0));
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_00518c54)();
      (*(code *)PTR_FUN_00518c58)();
    }
    FUN_004e6e5c(param_3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e62ec  FUN_004e62ec   (21 bytes)   [unnamed]
void __cdecl FUN_004e62ec(UINT param_1)

{
  FUN_004e6298(0,0,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6304  FUN_004e6304   (21 bytes)   [unnamed]
void __cdecl FUN_004e6304(UINT param_1)

{
  FUN_004e6298(1,0,param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e633c  FUN_004e633c   (87 bytes)   [unnamed]
char * __cdecl FUN_004e633c(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = strlen(param_1);
  piVar3 = DAT_0051c41c;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    for (; (*piVar3 != 0 &&
           ((iVar2 = FUN_004e5b88((byte *)*piVar3,(byte *)param_1,(int)pcVar1), iVar2 != 0 ||
            (pcVar1[*piVar3] != '=')))); piVar3 = piVar3 + 1) {
    }
    if (*piVar3 == 0) {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = pcVar1 + *piVar3 + 1;
    }
  }
  return pcVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6394  FUN_004e6394   (26 bytes)   [unnamed]
void __cdecl FUN_004e6394(undefined4 *param_1,undefined4 *param_2)

{
  PTR_FUN_00518d0c = (undefined *)*param_1;
  PTR_FUN_00518d10 = (undefined *)*param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e63b0  FUN_004e63b0   (17 bytes)   [unnamed]
void __cdecl FUN_004e63b0(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e63c4  FUN_004e63c4   (17 bytes)   [unnamed]
void __cdecl FUN_004e63c4(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e63d8  FUN_004e63d8   (39 bytes)   [unnamed]
void __cdecl FUN_004e63d8(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  PTR_FUN_00518c5c = param_1;
  PTR_LAB_00518c60 = param_2;
  PTR_FUN_00518c64 = param_3;
  PTR_LAB_00518c68 = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e64bc  FUN_004e64bc   (176 bytes)   [unnamed]
void __cdecl FUN_004e64bc(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_0051c440 == DAT_0051c40c) {
    DAT_0051c40c = DAT_0051c40c + 0x10;
    DAT_0051c408 = FUN_004cc754();
    if (DAT_0051c408 == 0) {
      FUN_004e5f84((uint *)"No space for command line argument vector");
    }
  }
  puVar1 = param_1;
  if (param_2 != 0) {
    strlen(param_1);
    puVar1 = (uint *)malloc();
    if (puVar1 == (uint *)0x0) {
      FUN_004e5f84((uint *)"No space for command line argument");
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
  *(uint **)(DAT_0051c408 + DAT_0051c440 * 4) = puVar1;
  DAT_0051c440 = DAT_0051c440 + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e656c  FUN_004e656c   (344 bytes)   [unnamed]
undefined4 __cdecl FUN_004e656c(undefined4 param_1,uint *param_2,undefined *param_3)

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
  DAT_0051c414 = (undefined1 *)malloc();
  local_c = DAT_0051c414;
  if (DAT_0051c414 == (undefined1 *)0x0) {
    FUN_004e5f84((uint *)"No space for copy of command line");
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
          FUN_004e66e0((int *)&local_c,(int *)&local_8);
        }
        if ((char)*local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if (((char)*local_8 == '*') || ((char)*local_8 == '?')) {
          bVar2 = true;
        }
        FUN_004e66e0((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_00518d0c)();
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
// 0x004e66e0  FUN_004e66e0   (113 bytes)   [unnamed]
void __cdecl FUN_004e66e0(int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(char *)*param_2 == '\\') && (((char *)*param_2)[1] == '\"')) {
    *(undefined1 *)*param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((DAT_00518cc0 == 0) || ((*(char *)*param_2 != '\\' || (((char *)*param_2)[1] != '\\'))))
  {
    bVar1 = *(byte *)*param_2;
    if ((((&DAT_0051c1d9)[bVar1] & 4) != 0) && (((byte *)*param_2)[1] != 0)) {
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
// 0x004e6754  FUN_004e6754   (403 bytes)   [unnamed]
undefined4 __cdecl FUN_004e6754(undefined4 param_1,short *param_2,undefined *param_3)

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
  FUN_004dce0c(local_8);
  DAT_0051c418 = (undefined2 *)malloc();
  local_c = DAT_0051c418;
  if (DAT_0051c418 == (undefined2 *)0x0) {
    FUN_004e5f84((uint *)"No space for copy of command line");
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
          FUN_004e6904((int *)&local_c,(int *)&local_8);
        }
        if (*local_8 == 0x22) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if ((*local_8 == 0x2a) || (*local_8 == 0x3f)) {
          bVar2 = true;
        }
        FUN_004e6904((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_00518d10)();
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
// 0x004e6904  FUN_004e6904   (92 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_004e6904(int *param_1,int *param_2)

{
  if ((*(short *)*param_2 == 0x5c) && (((short *)*param_2)[1] == 0x22)) {
    *(undefined2 *)*param_1 = 0x22;
    *param_2 = *param_2 + 4;
  }
  else if ((DAT_00518cc0 == 0) || ((*(short *)*param_2 != 0x5c || (((short *)*param_2)[1] != 0x5c)))
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
// 0x004e69f8  FUN_004e69f8   (330 bytes)   [unnamed]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall FUN_004e69f8(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if ((*(undefined4 * *)&DAT_0051c41c) == (undefined4 *)0x0) {
    if (((*(uint * *)&DAT_0051c43c) == (uint *)0x0) &&
       ((*(uint * *)&DAT_0051c43c) = (uint *)GetEnvironmentStrings(), (*(uint * *)&DAT_0051c43c) == (uint *)0x0)) {
      FUN_004e5f84((uint *)"GetEnvironmentStrings failed");
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = (*(uint * *)&DAT_0051c43c);
    while (pcVar1 = strlen(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_0051c420 = (uint *)malloc();
    if (DAT_0051c420 == (uint *)0x0) {
      return 0;
    }
    memcpy(DAT_0051c420,(*(uint * *)&DAT_0051c43c),(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = (*(undefined4 * *)&DAT_0051c41c); (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = strlen((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_0051c424 = iVar8 + 4;
  puVar2 = calloc(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = (*(undefined4 * *)&DAT_0051c41c);
    puVar4 = DAT_0051c420;
    puVar7 = puVar2;
    if ((*(undefined4 * *)&DAT_0051c41c) == (undefined4 *)0x0) {
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
    if ((*(undefined4 * *)&DAT_0051c41c) != (undefined4 *)0x0) {
      free();
    }
    uVar3 = 1;
    (*(undefined4 * *)&DAT_0051c41c) = puVar2;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6b64  FUN_004e6b64   (31 bytes)   [unnamed]
int __cdecl FUN_004e6b64(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00518db4;
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
// 0x004e6b84  FUN_004e6b84   (455 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_004e6b84(int *param_1,undefined4 param_2,int param_3)

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
  pcVar1 = *(code **)(&DAT_00518d8c + iVar2 * 4);
  if (pcVar1 == (code *)0x1) {
    local_c = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    local_c = 1;
  }
  else {
    *(undefined4 *)(&DAT_00518d8c + iVar2 * 4) = 0;
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 2)) {
      FUN_004e3a48();
      FUN_004e3a5c(DAT_00518984,7999);
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
// 0x004e6d64  FUN_004e6d64   (37 bytes)   [unnamed]
undefined4 __stdcall FUN_004e6d64(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x15;
  }
  FUN_004e6dec(iVar1);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6d8c  FUN_004e6d8c   (93 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_004e6d8c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_00518d88 == '\0') {
    DAT_0051c028 = (undefined*)FUN_004e6b84;
    SetConsoleCtrlHandler(FUN_004e6d64,1);
    DAT_00518d88 = '\x01';
  }
  iVar2 = FUN_004e6b64(param_1);
  if (iVar2 == -1) {
    _DAT_00518bd0 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00518d8c + iVar2 * 4);
  *(undefined4 *)(&DAT_00518d8c + iVar2 * 4) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6dec  FUN_004e6dec   (112 bytes)   [unnamed]
undefined4 __cdecl FUN_004e6dec(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_004e6b64(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_00518d8c + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_004e6270();
          }
          else {
            FUN_004e6304(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_00518d8c + iVar2 * 4) = 0;
        (*pcVar1)(pcVar1,(&DAT_00518ddc)[iVar2],iVar4,param_1,(&DAT_00518ddc)[iVar2],0);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6e5c  FUN_004e6e5c   (12 bytes)   [unnamed]
void __stdcall FUN_004e6e5c(UINT param_1)

{
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6e6c  FUN_004e6e6c   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004e6e6c(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6e70  FUN_004e6e70   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_004e6e70(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6e74  FUN_004e6e74   (210 bytes)   [unnamed]
void __cdecl FUN_004e6e74(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  
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
    for (local_c = 0; local_18 = local_18 + 1, local_c < *param_1; local_c = local_c + 1) {
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
// 0x004e6f48  FUN_004e6f48   (107 bytes)   [unnamed]
void __stdcall FUN_004e6f48(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_00518dec == 0) {
    DAT_00518dec = 1;
    FUN_004e6e74((int *)&DAT_0051c460,1);
    FUN_004e6e74((int *)&DAT_0051c444,1);
    piVar1 = (int *)FUN_004e6e70();
    if (piVar1 != (int *)0x0) {
      FUN_004e6e74(piVar1,1);
      piVar2 = piVar1;
      for (iVar3 = 0; piVar2 = piVar2 + 1, iVar3 < *piVar1; iVar3 = iVar3 + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e6fb4  FUN_004e6fb4   (387 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_004e6fb4(int param_1)

{
  char cVar1;
  int *piVar2;
  UINT UVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int local_10;
  undefined1 local_c [8];
  
  (*(uint *)&DAT_00518de8) = *(uint *)(param_1 + 0x10) & 1;
  FUN_004e3bec();
  FUN_004e4034(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_004de938(*(undefined **)(param_1 + 0x28));
  FUN_004de948(*(undefined4 **)(param_1 + 0x44));
  _DAT_0051c460 = 1;
  _DAT_0051c464 = param_1;
  DAT_0051c44c = local_c;
  FUN_004ddcd4();
  DAT_0051c43c = GetEnvironmentStrings();
  DAT_0051c438 = GetCommandLineA();
  FUN_004e6394(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x30));
  FUN_004e63d8(*(undefined **)(param_1 + 0x34),*(undefined **)(param_1 + 0x38),
               *(undefined **)(param_1 + 0x3c),*(undefined **)(param_1 + 0x40));
  piVar2 = (int *)FUN_004e6e6c();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_004e6e74(piVar2,0);
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_004e6e74((int *)&DAT_0051c460,0);
  pcVar6 = DAT_0051c438;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_004e62ec(UVar3);
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
    FUN_004e7138();
    GetModuleHandleA((LPCSTR)0x0);
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_004e62ec(UVar3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7138  FUN_004e7138   (32 bytes)   [unnamed]
WORD __stdcall FUN_004e7138(void)

{
  _STARTUPINFOA _Stack_44;
  
  GetStartupInfoA(&_Stack_44);
  if (((byte)_Stack_44.dwFlags & 1) == 0) {
    _Stack_44.wShowWindow = 10;
  }
  return _Stack_44.wShowWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7160  FUN_004e7160   (16 bytes)   [unnamed]
void __stdcall FUN_004e7160(DWORD param_1)

{
  TlsFree(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7170  FUN_004e7170   (16 bytes)   [unnamed]
void __stdcall FUN_004e7170(DWORD param_1)

{
  TlsGetValue(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7180  FUN_004e7180   (20 bytes)   [unnamed]
void __stdcall FUN_004e7180(DWORD param_1,LPVOID param_2)

{
  TlsSetValue(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7194  FUN_004e7194   (7 bytes)   [unnamed]
void __stdcall FUN_004e7194(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e719c  FUN_004e719c   (7 bytes)   [unnamed]
void __stdcall FUN_004e719c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e71a8  FUN_004e71a8   (276 bytes)   [unnamed]
bool __cdecl FUN_004e71a8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint local_8;
  
  if (param_3 == 0) {
    local_8 = param_2;
    if ((0x3a < param_2) && ((param_4 + 0x46 & 3) == 0)) {
      local_8 = param_2 - 1;
    }
    param_3 = 0;
    for (puVar1 = &DAT_00518e9c; *puVar1 <= local_8; puVar1 = puVar1 + 1) {
      param_3 = param_3 + 1;
    }
  }
  else {
    param_2 = param_2 + (&DAT_00518e98)[param_3];
    if ((2 < param_3) && ((param_4 + 0x46 & 3) == 0)) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_3 < 4) || (10 < param_3)) {
    bVar4 = false;
  }
  else if ((param_3 < 5) || (9 < param_3)) {
    if ((param_4 < 0x11) || (param_3 != 4)) {
      iVar2 = (&DAT_00518e9c)[param_3];
    }
    else {
      iVar2 = iRam00518ea8 + 7;
    }
    if ((param_4 + 0x46 & 3) != 0) {
      iVar2 = iVar2 + -1;
    }
    uVar3 = iVar2 - ((param_4 + 1 >> 2) + iVar2 + param_4 * 0x16d + 4) % 7;
    if (param_3 == 4) {
      if (uVar3 < param_2) {
        bVar4 = true;
      }
      else if (param_2 < uVar3) {
        bVar4 = false;
      }
      else {
        bVar4 = 1 < param_1;
      }
    }
    else if (param_2 < uVar3) {
      bVar4 = true;
    }
    else if (uVar3 < param_2) {
      bVar4 = false;
    }
    else {
      bVar4 = param_1 < 2;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e72bc  FUN_004e72bc   (400 bytes)   [unnamed]
int __cdecl FUN_004e72bc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_8;
  
  if ((param_1 < 0x46) || (0x8a < param_1)) {
    local_8 = -1;
  }
  else {
    iVar6 = param_5 + param_6 / 0x3c;
    iVar4 = param_4 + iVar6 / 0x3c;
    uVar8 = param_3 + iVar4 / 0x18;
    uVar5 = iVar4 % 0x18;
    uVar9 = param_1 + param_2 / 0xc;
    pcVar1 = &DAT_00518e90 + param_2 % 0xc;
    iVar4 = param_2 % 0xc;
    while (iVar7 = iVar4, pcVar3 = pcVar1, (int)*pcVar3 <= (int)uVar8) {
      if (((uVar9 & 3) == 0) && (iVar7 == 1)) {
        if ((int)uVar8 < 0x1d) break;
        iVar4 = -0x1d;
      }
      else {
        iVar4 = -(int)*pcVar3;
      }
      uVar8 = uVar8 + iVar4;
      pcVar1 = pcVar3 + 1;
      iVar4 = iVar7 + 1;
      if (0xb < iVar7 + 1) {
        uVar9 = uVar9 + 1;
        pcVar1 = pcVar3 + -0xb;
        iVar4 = iVar7 + -0xb;
      }
    }
    iVar4 = uVar9 - 0x44;
    if (iVar4 < 0) {
      iVar4 = uVar9 - 0x41;
    }
    iVar4 = iVar4 >> 2;
    if (((uVar9 & 3) == 0) && (iVar7 < 2)) {
      iVar4 = iVar4 + -1;
    }
    local_8 = (iVar4 + (uVar9 - 0x46) * 0x16d + (&DAT_00518e9c)[iVar7] + uVar8) * 0x15180 +
              uVar5 * 0xe10 + (iVar6 % 0x3c) * 0x3c + param_6 % 0x3c + DAT_00518fb4;
    if (param_7 == -1) {
      if ((DAT_00518fb8 != 0) &&
         (bVar2 = FUN_004e71a8(uVar5,uVar8,iVar7 + 1,uVar9 - 0x46),
         CONCAT31(extraout_var,bVar2) != 0)) {
        local_8 = local_8 + -0xe10;
      }
    }
    else {
      if (param_7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0xe10;
      }
      local_8 = local_8 - iVar6;
    }
    if (local_8 < 1) {
      local_8 = -1;
    }
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7454  FUN_004e7454   (456 bytes)   [unnamed]
char * __stdcall FUN_004e7454(void)

{
  char cVar1;
  undefined *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_bc;
  WCHAR local_68;
  short local_22;
  WCHAR local_14;
  
  puVar3 = (uint *)FUN_004e633c((uint *)&DAT_00518fc4);
  if ((((((puVar3 == (uint *)0x0) || (pcVar4 = strlen(puVar3), pcVar4 < (char *)0x4)) ||
        (iVar5 = FUN_004e5abc((int)(char)*puVar3), iVar5 == 0)) ||
       ((iVar5 = FUN_004e5abc((int)*(char *)((int)puVar3 + 1)), iVar5 == 0 ||
        (iVar5 = FUN_004e5abc((int)*(char *)((int)puVar3 + 2)), iVar5 == 0)))) ||
      ((cVar1 = *(char *)((int)puVar3 + 3), cVar1 != '-' &&
       ((cVar1 != '+' && (iVar5 = FUN_004e5afc((int)cVar1), iVar5 == 0)))))) ||
     ((iVar5 = FUN_004e5afc((int)*(char *)((int)puVar3 + 3)), iVar5 == 0 &&
      (iVar5 = FUN_004e5afc((int)(char)puVar3[1]), iVar5 == 0)))) {
    GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&local_bc);
    if (local_22 == 0) {
      (*(uint *)&DAT_00518fb8) = 0;
    }
    else {
      (*(uint *)&DAT_00518fb8) = (uint)(local_14 != L'\0');
    }
    DAT_00518fb4 = (local_bc + local_68) * 0x3c;
    *PTR_DAT_00518fbc = DAT_00518fc7;
    puVar2 = PTR_DAT_00518fc0;
    *PTR_DAT_00518fc0 = DAT_00518fc8;
    return puVar2;
  }
  memset((undefined4 *)PTR_DAT_00518fc0,0,4);
  FUN_004e5b34(PTR_DAT_00518fbc,(byte *)puVar3,3);
  PTR_DAT_00518fbc[3] = 0;
  iVar5 = FUN_004e39d0((char *)((int)puVar3 + 3));
  iVar7 = 3;
  pcVar4 = (char *)((int)puVar3 + 3);
  DAT_00518fb4 = iVar5 * 0xe10;
  (*(uint *)&DAT_00518fb8) = 0;
  while( true ) {
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    iVar5 = FUN_004e5abc((int)*pcVar4);
    if (iVar5 != 0) break;
    iVar7 = iVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar6 = strlen((uint *)(iVar7 + (int)puVar3));
  if (pcVar6 < (char *)0x3) {
    return pcVar6;
  }
  iVar5 = FUN_004e5abc((int)pcVar4[1]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar5 = FUN_004e5abc((int)pcVar4[2]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  FUN_004e5b34(PTR_DAT_00518fc0,(byte *)(iVar7 + (int)puVar3),3);
  puVar2 = PTR_DAT_00518fc0;
  PTR_DAT_00518fc0[3] = 0;
  (*(uint *)&DAT_00518fb8) = 1;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7624  FUN_004e7624   (77 bytes)   [unnamed]
int __cdecl FUN_004e7624(int *param_1)

{
  int iVar1;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  iVar1 = FUN_004e72bc(local_14.wYear - 0x76c,local_14.wMonth - 1,local_14.wDay - 1,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,-1);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar1;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e769f  FUN_004e769f   (6 bytes)   [unnamed]
void FUN_004e769f(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x004e76a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e76a6  FUN_004e76a6   (74 bytes)   [unnamed]
int __cdecl FUN_004e76a6(uint param_1)

{
  int iVar1;
  
  iVar1 = malloc();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = FUN_00401140();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_004e76d3;
  }
  FUN_004e6284();
LAB_004e76d3:
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = FUN_00401140();
  return *(int *)(iVar1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x004e76f0  FUN_004e76f0   (45 bytes)   [unnamed]
void __cdecl FUN_004e76f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00401140();
  if (param_1 == *(int *)(iVar1 + 0x14)) {
    iVar1 = FUN_00401140();
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    return;
  }
  free();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e771d  FUN_004e771d   (198 bytes)   [unnamed]
undefined4 __cdecl FUN_004e771d(int *param_1,undefined4 param_2,int *param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_004dd49c(param_1,param_3,0,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_3 + 1);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_004dd49c(param_1,(int *)param_3[2],1,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = *(ushort *)((int *)param_3[2] + 1);
    if ((uVar2 & 0x10) == 0) {
      return 0;
    }
    iVar3 = FUN_004dd49c(param_1,(int *)param_3[2],0,param_2);
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
// 0x004e77e3  FUN_004e77e3   (270 bytes)   [unnamed]
void __cdecl FUN_004e77e3(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_004e5ce8("(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0","xx.cpp",0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_004e5ce8("(ctorMask & 0x0080) == 0","xx.cpp",0x207);
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
      FUN_004e5ce8("!\"what\?\"","xx.cpp",0x25e);
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
      FUN_004e5ce8("!\"what\?\"","xx.cpp",0x232);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e78f1  FUN_004e78f1   (24 bytes)   [unnamed]
int __cdecl FUN_004e78f1(char *param_1)

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
// 0x004e7909  FUN_004e7909   (29 bytes)   [unnamed]
void __cdecl FUN_004e7909(undefined4 param_1,int param_2)

{
  RaiseException(0xeedfae6,0,param_2 + 2,&param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7926  FUN_004e7926   (208 bytes)   [unnamed]
void __cdecl FUN_004e7926(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 )

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
  if (*DAT_0051c478 == 2) {
    pcVar1 = FUN_004dd388(param_2);
    FUN_004e78f1(pcVar1);
    FUN_004e7909(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_004e5ce8("(dtorMask & 0x0080) == 0","xx.cpp",0x2cd);
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
    FUN_004e5ce8("!\"what\?\"","xx.cpp",0x2f4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e79f6  FUN_004e79f6   (126 bytes)   [unnamed]
void __cdecl FUN_004e79f6(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_004e5ce8("(mfnMask & 0x0080) == 0","xx.cpp",0x2fc);
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
  FUN_004e5ce8("!\"what\?\"","xx.cpp",0x323);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7a74  FUN_004e7a74   (576 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_004e7a74(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 in_FS;
  ULONG_PTR local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  __InitExceptBlockLDTC(0x518ff0);
  iVar4 = FUN_00401140();
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 2;
  iVar4 = FUN_00401140();
  if (param_1 == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)((int)param_1 + 6) + (int)param_1;
  }
  *(int *)(iVar4 + 0x10) = iVar6;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 0xc) = param_7;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 8) = param_8;
  local_2c = param_1;
  uVar2 = (ushort)param_1[1];
  uVar3 = *param_1;
  if ((uVar2 & 2) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[3];
  }
  if ((uVar2 & 0x30) != 0) {
    local_2c = (uint *)param_1[2];
  }
  local_34 = (undefined4 *)FUN_004e76a6(uVar3 + 0x52);
  *local_34 = 0;
  local_34[1] = param_1;
  local_34[3] = param_6;
  local_34[4] = uVar3;
  *(ushort *)(local_34 + 6) = uVar2;
  *(undefined2 *)((int)local_34 + 0x1a) = (undefined2)local_30;
  local_34[5] = local_2c;
  local_34[2] = param_3;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[7] = FUN_004e76f0;
  local_34[0xd] = param_7;
  local_34[0xe] = param_8;
  local_34[8] = param_4;
  local_34[9] = param_5;
  *(undefined1 *)((int)local_34 + 0x45) = 0;
  *(undefined1 *)(local_34 + 0x11) = 1;
  memcpy((undefined4 *)((int)local_34 + 0x52),param_2,uVar3);
  if ((*DAT_0051c478 == 1) || (*DAT_0051c478 == 2)) {
    pcVar5 = FUN_004dd388((int)param_1);
    FUN_004e78f1(pcVar5);
    FUN_004e7909(1,0xb);
  }
  if ((local_30 & 1) != 0) {
    if (param_4 == (undefined *)0x0) {
      FUN_004e5ce8("cctrAddr","xx.cpp",0x445);
    }
    local_38 = DAT_0051c474;
    local_18 = 8;
    FUN_004e77e3((int)local_34 + 0x52,param_2,param_4,param_5);
    local_18 = 0;
    DAT_0051c474 = local_38;
  }
  iVar4 = FUN_00401140();
  local_44 = *(ULONG_PTR *)(iVar4 + 0x10);
  local_40 = param_9;
  local_3c = local_34;
  RaiseException(0xeefface,1,3,&local_44);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7cc4  FUN_004e7cc4   (53 bytes)   [unnamed]
void __cdecl FUN_004e7cc4(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 in_stack_00000000;
  
  FUN_004e7a74(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000000);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7cf9  FUN_004e7cf9   (107 bytes)   [unnamed]
void __cdecl FUN_004e7cf9(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000000;
  
  piVar2 = (int *)FUN_00401140();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_004dda40();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    puVar3 = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0x52);
  }
  FUN_004e7a74(*(uint **)(iVar1 + 4),puVar3,*(undefined4 *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20)
               ,*(uint *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0xc),param_1,param_2,
               in_stack_00000000);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7d64  FUN_004e7d64   (63 bytes)   [unnamed]
void __cdecl FUN_004e7d64(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  EXCEPTION_RECORD local_54;
  
  if (param_2 == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    param_2 = &local_54;
    local_54.NumberParameters = 0;
  }
  param_2->ExceptionFlags = param_2->ExceptionFlags | 2;
  FUN_004ddd36(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7da3  FUN_004e7da3   (101 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_004e7da3(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x519024);
  if (param_3 == (undefined *)0x0) {
    FUN_004e5ce8("dtorAddr","xx.cpp",0x5b9);
  }
  FUN_004e7926(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7e18  FUN_004e7e18   (136 bytes)   [unnamed]
void __cdecl FUN_004e7e18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0051c474;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_004e7da3(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_0051c474 = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_004e5ce8("argType","xx.cpp",0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_004e7da3(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7ea0  FUN_004e7ea0   (234 bytes)   [unnamed]
/* WARNING: Unable to track spacebase fully for stack */
void __stdcall FUN_004e7ea0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)FUN_00401140();
  if (*piVar4 == 0) {
    FUN_004e5ce8("__CPPexceptionList","xx.cpp",0x629);
  }
  piVar4 = (int *)FUN_00401140();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)FUN_00401140();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_004e5ce8(&DAT_005191e4,"xx.cpp",0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_004e5ce8("xdrPtr->xdERRaddr == xl","xx.cpp",0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_004e7e18((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_0051c478 == 2) {
    FUN_004e7909(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004e7f91  FUN_004e7f91   (724 bytes)   [unnamed]
void __cdecl FUN_004e7f91(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  int *local_c;
  uint local_8;
  
  if (*(int *)(param_3 + 0x28) != param_2) {
    FUN_004e5ce8("dscPtr->xdERRaddr == errPtr","xx.cpp",0x722);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_004e5ce8("dscPtr->xdHtabAdr == hdtPtr","xx.cpp",0x723);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_004e5ce8("dscPtr->xdArgCopy == 0","xx.cpp",0x725);
  }
  puVar6 = *(uint **)(param_1 + 4);
  *(uint **)(param_3 + 0x3c) = puVar6;
  if ((puVar6 != (uint *)0x0) && ((*(byte *)(param_1 + 8) & 0x80) == 0)) {
    bVar7 = (*(byte *)(param_1 + 8) & 1) == 0;
    local_c = (int *)(param_3 + 0x52);
    *(undefined1 *)(param_3 + 0x45) = 1;
    *(int *)(param_3 + 0x40) = *param_4 + param_5;
    uVar1 = (ushort)puVar6[1];
    uVar3 = *puVar6;
    uVar2 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      puVar6 = (uint *)puVar6[2];
      uVar2 = (ushort)puVar6[1];
    }
    local_8 = (uint)uVar2;
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      if (((uVar2 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar3 != *(uint *)(param_3 + 0x10)) {
              FUN_004e5ce8("dscPtr->xdSize == size","xx.cpp",0x7f8);
            }
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            memcpy(*(undefined4 **)(param_3 + 0x40),(undefined4*)&local_c,uVar3);
            bVar7 = true;
          }
        }
        else {
          if (*(int *)(param_3 + 4) != *(int *)(param_3 + 0x14)) {
            FUN_004e5ce8("dscPtr->xdTypeID == dscPtr->xdBase","xx.cpp",0x7b6);
          }
          iVar5 = FUN_004dd3c0(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar5 == 0) {
            local_c = (int *)FUN_004dd82c((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar5 == 0 || bVar7;
          if ((puVar6[3] & 1) == 0) {
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_004e5ce8("hdtPtr->HDcctrAddr","xx.cpp",2000);
            }
            FUN_004e77e3(*(undefined4 *)(param_3 + 0x40),local_c,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_004e5ce8("mask & TM_IS_PTR","xx.cpp",0x795);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_004e5ce8("dscPtr->xdMask & TM_IS_PTR","xx.cpp",0x796);
          }
          local_c = (int *)*local_c;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_004e5ce8("(dscPtr->xdMask & TM_IS_PTR) == 0","xx.cpp",0x782);
          }
          bVar7 = true;
        }
        iVar5 = FUN_004dd3c0(*(int **)(param_3 + 0x14),(int *)puVar6);
        piVar4 = local_c;
        if (iVar5 == 0) {
          local_c = (int *)FUN_004dd82c((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          if (local_c != piVar4) {
            bVar7 = true;
          }
        }
        memcpy(*(undefined4 **)(param_3 + 0x40),(undefined4*)&local_c,uVar3);
      }
    }
    else {
      memset(*(undefined4 **)(param_3 + 0x40),0,uVar3);
      bVar7 = true;
    }
    if ((!bVar7) && ((local_8 & 3) != 0)) {
      if ((puVar6[3] & 2) != 0) {
        FUN_004e7da3(local_c,(int)puVar6,(undefined *)puVar6[10],(uint)(ushort)puVar6[0xb]);
      }
      *(undefined1 *)(param_3 + 0x44) = 0;
    }
  }
  return;
}

} // namespace tea
