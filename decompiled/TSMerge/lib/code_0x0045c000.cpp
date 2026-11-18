// TSMerge.exe — runtime / library code "code_0x0045c000"
// 88 functions, 0x0045c368..0x0045fdee. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045c368  FUN_0045c368   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0045c368(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_0045b600(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_0045b600(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c400  FUN_0045c400   (1094 bytes)   [unnamed]
void __cdecl FUN_0045c400(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

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
  puVar3 = (ushort *)FUN_00458d3c(0xe);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  do {
    local_18 = local_18 + 1;
    srcStr = (*(code *)param_2)(uVar5,param_4,uVar10,param_4);
    if (srcStr == 0xffffffff) {
      local_1c = 0xffffffff;
      goto LAB_0045c731;
    }
    uVar10 = srcStr;
    uVar5 = FUN_00458f58((ushort)srcStr);
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
      if (srcStr != 0x2d) goto LAB_0045c4be;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar9, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar10 = param_4;
      uVar5 = (*(code *)param_2)();
      srcStr = uVar5;
      iVar7 = iVar8;
LAB_0045c4be:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (srcStr == 0x49) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)(uVar5,param_4,uVar10);
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_0045c72c;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x46)) goto LAB_0045c72c;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00475d24,DAT_00475d20));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d28,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00475d2e,DAT_00475d2a));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d32,local_28);
          }
          goto LAB_0045c701;
        }
        if (srcStr == 0x4e) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x41)) goto LAB_0045c72c;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_0045c72c;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00475d38,DAT_00475d34));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d3c,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00475d42,DAT_00475d3e));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d46,local_28);
          }
          goto LAB_0045c701;
        }
      }
      local_e = '\0';
      iVar8 = iVar7;
      iVar9 = local_c;
      if (srcStr == uVar1) {
        if (local_8 != 0x8000) goto LAB_0045c5a4;
        local_8 = iVar7;
        if (iVar7 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)srcStr < 0x30) || (0x39 < (int)srcStr)) goto LAB_0045c5a4;
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
          iVar6 = FUN_0045b8bc(&local_40,srcStr);
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
LAB_0045c5a4:
  iVar9 = param_5;
  if (iVar8 == -2) {
LAB_0045c72c:
    param_5 = iVar9;
    local_1c = 0;
LAB_0045c731:
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
LAB_0045c5cc:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar7 = (*(code *)param_2)();
        if (!bVar2) goto LAB_0045c5f9;
        bVar2 = false;
        if (iVar7 != 0x2d) goto LAB_0045c5f4;
        local_10 = '\x01';
      }
    }
    else {
LAB_0045c61f:
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
      FUN_0045b4e4((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar9 != 0) {
        FUN_0045b218();
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
LAB_0045c701:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_0045c5f4:
  if (iVar7 != 0x2b) {
LAB_0045c5f9:
    if ((iVar7 < 0x30) || (0x39 < iVar7)) goto LAB_0045c61f;
    iVar9 = iVar7 + iVar9 * 10 + -0x30;
    if (0x1344 < iVar9) {
      local_11 = '\x01';
    }
  }
  goto LAB_0045c5cc;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c848  FUN_0045c848   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0045c848(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_0045b600(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_0045b600(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c8e0  FUN_0045c8e0   (28 bytes)   [unnamed]
int __cdecl FUN_0045c8e0(int *param_1)

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
// 0x0045c8fc  FUN_0045c8fc   (10 bytes)   [unnamed]
void __cdecl FUN_0045c8fc(undefined4 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c908  FUN_0045c908   (139 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint __cdecl FUN_0045c908(char *param_1,int *param_2,uint param_3)

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
    iVar2 = FUN_0045d0f4((int)*param_1);
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
  }
  _DAT_00475dd8 = 0;
  uVar3 = FUN_00457d04((undefined*)FUN_0045c8e0,(undefined*)FUN_0045c8fc,&param_1,param_3,0x7fff,&local_8,&local_c);
  if (local_c < 1) {
    param_1 = param_1 + -local_8;
  }
  else if (local_c == 2) {
    uVar3 = 0xffffffff;
    _DAT_00475dd8 = 0x22;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_1;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c994  FUN_0045c994   (722 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0045c994(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5)

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
  uVar1 = FUN_0045b538((longdouble *)local_10);
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
        FUN_0045b218();
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
      FUN_0045b218();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_0045b218();
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
        FUN_0045b514((longlong *)local_10,(longdouble *)local_10);
        local_28 = (undefined4 *)((int)param_4 + uVar8);
        bVar6 = 0;
        *(undefined1 *)local_28 = 0;
        pcVar5 = (char *)((int)local_28 + -1);
        if (uVar8 == 0) {
          if (local_10[0] != '\x01') goto LAB_0045ca1d;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_0045b894((undefined4 *)local_10);
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
LAB_0045ca1d:
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
// 0x0045cc68  FUN_0045cc68   (753 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0045cc68(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5)

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
  uVar1 = FUN_0045b538((longdouble *)local_10);
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
        FUN_0045b218();
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
      FUN_0045b218();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_0045b218();
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
        FUN_0045b514((longlong *)local_10,(longdouble *)local_10);
        bVar6 = 0;
        local_28 = param_4 + iVar7;
        *local_28 = 0;
        psVar5 = local_28 + -1;
        if (iVar7 == 0) {
          if (local_10[0] != '\x01') goto LAB_0045ccf1;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_0045b894((undefined4 *)local_10);
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
        FUN_00455acc(local_28,0x30,iVar8);
        local_28[iVar8] = 0;
        return local_18;
      }
    }
  }
LAB_0045ccf1:
  if (param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  FUN_00455acc(param_4,0x30,param_2);
  param_4[param_2] = 0;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cf5c  FUN_0045cf5c   (289 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0045cf5c(UINT codePage)

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
    codePage = *(UINT *)PTR_DAT_00475910;
  }
  if ((codePage == 0) || (ok = GetCPInfo(codePage,&cpInfo), ok != 0)) {
    iVar3 = 0;
    puVar6 = &DAT_00477b8c;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if ((codePage == 0) || (cpInfo.MaxCharSize < 2)) {
      _DAT_00477c90 = 0;
    }
    else {
      for (pBVar5 = cpInfo.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar6 = &DAT_00477b8d + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar6 = 4;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 1;
      pbVar7 = &DAT_00477b8e;
      do {
        *pbVar7 = *pbVar7 | 8;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 < 0xff);
      _DAT_00477c90 = codePage;
      if (codePage == 0x3a4) {
        uVar4 = (uint)DAT_00475d48;
        pbVar7 = &DAT_00477b8d + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00475d49; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 1;
          pbVar7 = pbVar7 + 1;
        }
        uVar4 = (uint)DAT_00475d4a;
        pbVar7 = &DAT_00477b8d + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_00475d4b; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_0045d434((uint *)"Error: system code page access failure; MBCS table not initialized");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d098  FUN_0045d098   (61 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d098(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x100) {
    iVar2 = isalpha(param_1 & 0xff);
    if ((iVar2 == 0) && (((&DAT_00477b8d)[param_1 & 0xff] & 1) == 0)) {
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
// 0x0045d0d8  FUN_0045d0d8   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d0d8(uint ch)

{
  undefined4 uVar1;
  
  if (0xff < ch) {
    return 0;
  }
  uVar1 = FUN_00458de8(ch);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d0f4  FUN_0045d0f4   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d0f4(uint ch)

{
  undefined4 uVar1;
  
  if (0xff < ch) {
    return 0;
  }
  uVar1 = FUN_00458e54(ch);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d110  FUN_0045d110   (84 bytes)   [unnamed]
byte * __cdecl FUN_0045d110(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    if ((param_3 == 0) || (*param_2 == 0)) goto joined_r0x0045d153;
    if (((&DAT_00477b8d)[*param_2] & 4) != 0) {
      if ((param_3 < 2) || (param_2[1] == 0)) {
joined_r0x0045d153:
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
// 0x0045d164  FUN_0045d164   (191 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d164(byte *param_1,byte *param_2,int param_3)

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
    if (((&DAT_00477b8d)[bVar1] & 4) == 0) {
      uVar4 = toupper((uint)bVar1);
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
    if (((&DAT_00477b8d)[bVar1] & 4) == 0) {
      uVar5 = toupper((uint)bVar1);
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
// 0x0045d224  FUN_0045d224   (86 bytes)   [unnamed]
byte * __cdecl FUN_0045d224(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  do {
    if (((&DAT_00477b8d)[*param_1] & 4) == 0) {
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
// 0x0045d27c  FUN_0045d27c   (69 bytes)   [unnamed]
void __cdecl FUN_0045d27c(uint *param_1,int param_2)

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
    FUN_00455c4c((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d2c4  FUN_0045d2c4   (94 bytes)   [unnamed]
void __cdecl FUN_0045d2c4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *len;
  
  FUN_0045d27c((uint *)&DAT_00477c94,0xf6);
  len = strlen((uint *)&DAT_00477c94);
  FUN_0045b78c(param_3,len + 0x477c94);
  FUN_0045d434((uint *)&DAT_00477c94);
  FUN_0045d628();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d324  FUN_0045d324   (78 bytes)   [unnamed]
undefined * __stdcall FUN_0045d324(void)

{
  _SYSTEMTIME sysTime;
  
  GetLocalTime(&sysTime);
  wsprintfA(&DAT_00477d94,"%02d/%02d/%04d %02d:%02d:%02d.%03d ",(uint)sysTime.wMonth,
            (uint)sysTime.wDay,(uint)sysTime.wYear,(uint)sysTime.wHour,(uint)sysTime.wMinute,
            (uint)sysTime.wSecond,(uint)sysTime.wMilliseconds);
  return &DAT_00477d94;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d374  FUN_0045d374   (104 bytes)   [unnamed]
void __cdecl FUN_0045d374(LPCSTR fileName,uint *buffer)

{
  HANDLE hFile;
  uint *lpBuffer;
  char *len;
  DWORD *numberOfBytesWritten;
  LPOVERLAPPED p_Var3;
  DWORD local_8;
  
  hFile = CreateFileA(fileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    lpBuffer = (uint *)FUN_0045d324();
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
// 0x0045d3dc  FUN_0045d3dc   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_0045d3dc(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d3f0  FUN_0045d3f0   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0045d3f0(void)

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
  lpfn = FUN_0045d3dc;
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
// 0x0045d434  FUN_0045d434   (283 bytes)   [unnamed]
void __cdecl FUN_0045d434(uint *buffer)

{
  byte *caption;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte filename [128];
  DWORD numberOfBytesWritten;
  
  if ((DAT_00475de0 == (LPCSTR)0x0) && (DAT_00475ddc == (code *)0x0)) {
    if (DAT_00475ff0 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)filename,0x80);
      caption = FUN_0045d224(filename,0x5c);
      if ((caption == (byte *)0x0) && (caption = FUN_0045d224(filename,0x3a), caption == (byte *)0x0))
      {
        caption = filename;
      }
      else {
        caption = caption + 1;
      }
      uVar2 = FUN_0045d3f0();
      MessageBoxA((HWND)0x0,(LPCSTR)buffer,(LPCSTR)caption,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_00475de4,2,&numberOfBytesWritten,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &numberOfBytesWritten;
    nNumberOfBytesToWrite = strlen(buffer);
    WriteFile(hFile,buffer,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_00475de7,2,&numberOfBytesWritten,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_00475ddc != (code *)0x0) {
    if (DAT_00475ddc == (code *)0xffffffff) {
      return;
    }
    ((code *)DAT_00475ddc)();
  }
  if (DAT_00475de0 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_00475de0 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_00475de0 == '\0') {
    return;
  }
  FUN_0045d374(DAT_00475de0,buffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d550  FUN_0045d550   (15 bytes)   [unnamed]
void __cdecl FUN_0045d550(uint *buffer)

{
  FUN_0045d434(buffer);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d560  FUN_0045d560   (23 bytes)   [unnamed]
void __cdecl FUN_0045d560(uint *buffer)

{
  FUN_0045d434(buffer);
  FUN_0045d6a8(1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d604  vshared_45d604   (16 bytes)   [rtti:vtable shared-virtual-stub]
//   in vtables of 10 classes across unrelated hierarchies (OWL::TOpenSaveDialog, MergeClient, OWL::TStreamer, OWL::TAppDictImp, …)
void __stdcall vshared_45d604(void)

{
  FUN_0045d560((uint *)"Pure virtual function called");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d614  FUN_0045d614   (20 bytes)   [unnamed]
void __stdcall FUN_0045d614(void)

{
  FUN_0045d434((uint *)"Abnormal program termination");
  FUN_0045d6a8(3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d628  FUN_0045d628   (14 bytes)   [unnamed]
void __stdcall FUN_0045d628(void)

{
  FUN_0045e190(0x16);
  FUN_0045d614();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d638  FUN_0045d638   (1 bytes)   [unnamed]
void __stdcall FUN_0045d638(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d63c  FUN_0045d63c   (81 bytes)   [unnamed]
void __cdecl FUN_0045d63c(int param_1,int param_2,UINT exitCode)

{
  if (param_1 == 0) {
    if (DAT_00475e54 != (code *)0x0) {
      ((code *)DAT_00475e54)();
    }
    FUN_0045e2ec();
    (*(code *)PTR_FUN_00475e58)();
  }
  else {
    DAT_00475e54 = (undefined*)((code *)(undefined*)(0x0));
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_00475e5c)();
      (*(code *)PTR_FUN_00475e60)();
    }
    FUN_0045e200(exitCode);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d690  FUN_0045d690   (21 bytes)   [unnamed]
void __cdecl FUN_0045d690(UINT exitCode)

{
  FUN_0045d63c(0,0,exitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d6a8  FUN_0045d6a8   (21 bytes)   [unnamed]
void __cdecl FUN_0045d6a8(UINT exitCode)

{
  FUN_0045d63c(1,0,exitCode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d6e0  FUN_0045d6e0   (87 bytes)   [unnamed]
char * __cdecl FUN_0045d6e0(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = strlen(param_1);
  piVar3 = DAT_00477dc8;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    for (; (*piVar3 != 0 &&
           ((iVar2 = FUN_0045d164((byte *)*piVar3,(byte *)param_1,(int)pcVar1), iVar2 != 0 ||
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
// 0x0045d738  FUN_0045d738   (26 bytes)   [unnamed]
void __cdecl FUN_0045d738(undefined4 *param_1,undefined4 *param_2)

{
  PTR_FUN_00475f14 = (undefined *)*param_1;
  PTR_FUN_00475f18 = (undefined *)*param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d754  FUN_0045d754   (17 bytes)   [unnamed]
void __cdecl FUN_0045d754(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d768  FUN_0045d768   (17 bytes)   [unnamed]
void __cdecl FUN_0045d768(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d77c  FUN_0045d77c   (39 bytes)   [unnamed]
void __cdecl FUN_0045d77c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  PTR_FUN_00475e64 = param_1;
  PTR_LAB_00475e68 = param_2;
  PTR_FUN_00475e6c = param_3;
  PTR_LAB_00475e70 = param_4;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d860  FUN_0045d860   (176 bytes)   [unnamed]
void __cdecl FUN_0045d860(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_00477dec == DAT_00477db8) {
    DAT_00477db8 = DAT_00477db8 + 0x10;
    DAT_00477db4 = FUN_0044b964();
    if (DAT_00477db4 == 0) {
      FUN_0045d560((uint *)"No space for command line argument vector");
    }
  }
  puVar1 = param_1;
  if (param_2 != 0) {
    strlen(param_1);
    puVar1 = (uint *)malloc();
    if (puVar1 == (uint *)0x0) {
      FUN_0045d560((uint *)"No space for command line argument");
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
  *(uint **)(DAT_00477db4 + DAT_00477dec * 4) = puVar1;
  DAT_00477dec = DAT_00477dec + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d910  FUN_0045d910   (344 bytes)   [unnamed]
undefined4 __cdecl FUN_0045d910(undefined4 param_1,uint *param_2,undefined *param_3)

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
  DAT_00477dc0 = (undefined1 *)malloc();
  local_c = DAT_00477dc0;
  if (DAT_00477dc0 == (undefined1 *)0x0) {
    FUN_0045d560((uint *)"No space for copy of command line");
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
          FUN_0045da84((int *)&local_c,(int *)&local_8);
        }
        if ((char)*local_8 == '\"') {
          local_8 = (uint *)((int)local_8 + 1);
        }
      }
      else {
        if (((char)*local_8 == '*') || ((char)*local_8 == '?')) {
          bVar2 = true;
        }
        FUN_0045da84((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_00475f14)();
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
// 0x0045da84  FUN_0045da84   (113 bytes)   [unnamed]
void __cdecl FUN_0045da84(int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(char *)*param_2 == '\\') && (((char *)*param_2)[1] == '\"')) {
    *(undefined1 *)*param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((DAT_00475ec8 == 0) || ((*(char *)*param_2 != '\\' || (((char *)*param_2)[1] != '\\'))))
  {
    bVar1 = *(byte *)*param_2;
    if ((((&DAT_00477b8d)[bVar1] & 4) != 0) && (((byte *)*param_2)[1] != 0)) {
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
// 0x0045daf8  FUN_0045daf8   (403 bytes)   [unnamed]
undefined4 __cdecl FUN_0045daf8(undefined4 param_1,short *param_2,undefined *param_3)

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
  FUN_00455eac(local_8);
  DAT_00477dc4 = (undefined2 *)malloc();
  local_c = DAT_00477dc4;
  if (DAT_00477dc4 == (undefined2 *)0x0) {
    FUN_0045d560((uint *)"No space for copy of command line");
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
          FUN_0045dca8((int *)&local_c,(int *)&local_8);
        }
        if (*local_8 == 0x22) {
          local_8 = local_8 + 1;
        }
      }
      else {
        if ((*local_8 == 0x2a) || (*local_8 == 0x3f)) {
          bVar2 = true;
        }
        FUN_0045dca8((int *)&local_c,(int *)&local_8);
      }
    }
    *local_c = 0;
    local_c = local_c + 1;
    if (bVar2) {
      (*(code *)PTR_FUN_00475f18)();
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
// 0x0045dca8  FUN_0045dca8   (92 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_0045dca8(int *param_1,int *param_2)

{
  if ((*(short *)*param_2 == 0x5c) && (((short *)*param_2)[1] == 0x22)) {
    *(undefined2 *)*param_1 = 0x22;
    *param_2 = *param_2 + 4;
  }
  else if ((DAT_00475ec8 == 0) || ((*(short *)*param_2 != 0x5c || (((short *)*param_2)[1] != 0x5c)))
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
// 0x0045dd9c  FUN_0045dd9c   (330 bytes)   [unnamed]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall FUN_0045dd9c(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if ((*(undefined4 * *)&DAT_00477dc8) == (undefined4 *)0x0) {
    if (((*(uint * *)&DAT_00477de8) == (uint *)0x0) &&
       ((*(uint * *)&DAT_00477de8) = (uint *)GetEnvironmentStrings(), (*(uint * *)&DAT_00477de8) == (uint *)0x0)) {
      FUN_0045d560((uint *)"GetEnvironmentStrings failed");
    }
    pcVar6 = (char *)0x0;
    iVar8 = 0;
    puVar4 = (*(uint * *)&DAT_00477de8);
    while (pcVar1 = strlen(puVar4), pcVar1 != (char *)0x0) {
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + (int)(pcVar1 + 1);
      puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1));
    }
    DAT_00477dcc = (uint *)malloc();
    if (DAT_00477dcc == (uint *)0x0) {
      return 0;
    }
    memcpy(DAT_00477dcc,(*(uint * *)&DAT_00477de8),(uint)(pcVar6 + 1));
  }
  else {
    iVar8 = 0;
    for (puVar2 = (*(undefined4 * *)&DAT_00477dc8); (uint *)*puVar2 != (uint *)0x0; puVar2 = puVar2 + 1) {
      pcVar6 = strlen((uint *)*puVar2);
      if (pcVar6 == (char *)0x0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    }
  }
  _DAT_00477dd0 = iVar8 + 4;
  puVar2 = calloc(iVar8 + 5,4);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = (*(undefined4 * *)&DAT_00477dc8);
    puVar4 = DAT_00477dcc;
    puVar7 = puVar2;
    if ((*(undefined4 * *)&DAT_00477dc8) == (undefined4 *)0x0) {
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
    if ((*(undefined4 * *)&DAT_00477dc8) != (undefined4 *)0x0) {
      free();
    }
    uVar3 = 1;
    (*(undefined4 * *)&DAT_00477dc8) = puVar2;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045df08  FUN_0045df08   (31 bytes)   [unnamed]
int __cdecl FUN_0045df08(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00475fbc;
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
// 0x0045df28  FUN_0045df28   (455 bytes, 2 ranges)   [unnamed]
undefined4 __cdecl FUN_0045df28(int *param_1,undefined4 param_2,int param_3)

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
  pcVar1 = *(code **)(&DAT_00475f94 + iVar2 * 4);
  if (pcVar1 == (code *)0x1) {
    local_c = 0;
  }
  else if (pcVar1 == (code *)0x0) {
    local_c = 1;
  }
  else {
    *(undefined4 *)(&DAT_00475f94 + iVar2 * 4) = 0;
    if (((iVar2 == 1) || (iVar2 == 3)) || (iVar2 == 2)) {
      FUN_0045b418();
      FUN_0045b42c(DAT_00475c2c,7999);
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
// 0x0045e108  FUN_0045e108   (37 bytes)   [unnamed]
undefined4 __stdcall FUN_0045e108(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0x15;
  }
  FUN_0045e190(iVar1);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e130  FUN_0045e130   (93 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0045e130(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_00475f90 == '\0') {
    DAT_004779f0 = (undefined*)FUN_0045df28;
    SetConsoleCtrlHandler(FUN_0045e108,1);
    DAT_00475f90 = '\x01';
  }
  iVar2 = FUN_0045df08(param_1);
  if (iVar2 == -1) {
    _DAT_00475dd8 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00475f94 + iVar2 * 4);
  *(undefined4 *)(&DAT_00475f94 + iVar2 * 4) = param_2;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e190  FUN_0045e190   (112 bytes)   [unnamed]
undefined4 __cdecl FUN_0045e190(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar2 = FUN_0045df08(param_1);
  if (iVar2 == -1) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(&DAT_00475f94 + iVar2 * 4);
    if (pcVar1 != (code *)0x1) {
      if (pcVar1 == (code *)0x0) {
        if ((1 < param_1 - 0x10U) && (param_1 != 0x14)) {
          if (param_1 == 0x16) {
            FUN_0045d614();
          }
          else {
            FUN_0045d6a8(3);
          }
        }
      }
      else {
        *(undefined4 *)(&DAT_00475f94 + iVar2 * 4) = 0;
        (*pcVar1)(pcVar1,(&DAT_00475fe4)[iVar2],iVar4,param_1,(&DAT_00475fe4)[iVar2],0);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e200  FUN_0045e200   (12 bytes)   [unnamed]
void __stdcall FUN_0045e200(UINT exitCode)

{
                    /* WARNING: Subroutine does not return */
  ExitProcess(exitCode);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e210  FUN_0045e210   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_0045e210(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e214  FUN_0045e214   (3 bytes)   [unnamed]
undefined4 __stdcall FUN_0045e214(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e218  FUN_0045e218   (210 bytes)   [unnamed]
void __cdecl FUN_0045e218(int *param_1,int param_2)

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
// 0x0045e2ec  FUN_0045e2ec   (107 bytes)   [unnamed]
void __stdcall FUN_0045e2ec(void)

{
  int *piVar1;
  int *piVar2;
  int i;
  
  if (DAT_00475ff4 == 0) {
    DAT_00475ff4 = 1;
    FUN_0045e218((int *)&DAT_00477e0c,1);
    FUN_0045e218((int *)&DAT_00477df0,1);
    piVar1 = (int *)FUN_0045e214();
    if (piVar1 != (int *)0x0) {
      FUN_0045e218(piVar1,1);
      piVar2 = piVar1;
      for (i = 0; piVar2 = piVar2 + 1, i < *piVar1; i = i + 1) {
        (**(code **)(*piVar2 + 0x18))();
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e358  FUN_0045e358   (387 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0045e358(int param_1)

{
  char cVar1;
  int *piVar2;
  UINT exitCode;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int i;
  undefined1 newStr [8];
  
  (*(uint *)&DAT_00475ff0) = *(uint *)(param_1 + 0x10) & 1;
  FUN_0045b4a4();
  FUN_0045b87c(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_004578b8(*(undefined **)(param_1 + 0x28));
  FUN_004578c8(*(undefined4 **)(param_1 + 0x44));
  _DAT_00477e0c = 1;
  _DAT_00477e10 = param_1;
  DAT_00477df8 = newStr;
  FUN_00456d74();
  DAT_00477de8 = GetEnvironmentStrings();
  DAT_00477de4 = GetCommandLineA();
  FUN_0045d738(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x30));
  FUN_0045d77c(*(undefined **)(param_1 + 0x34),*(undefined **)(param_1 + 0x38),
               *(undefined **)(param_1 + 0x3c),*(undefined **)(param_1 + 0x40));
  piVar2 = (int *)FUN_0045e210();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_0045e218(piVar2,0);
    piVar5 = piVar2;
    for (i = 0; piVar5 = piVar5 + 1, i < *piVar2; i = i + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_0045e218((int *)&DAT_00477e0c,0);
  pcVar6 = DAT_00477de4;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    exitCode = (**(code **)(param_1 + 0x18))();
    FUN_0045d690(exitCode);
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
    FUN_0045e4dc();
    GetModuleHandleA((LPCSTR)0x0);
    exitCode = (**(code **)(param_1 + 0x18))();
    FUN_0045d690(exitCode);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e4dc  FUN_0045e4dc   (32 bytes)   [unnamed]
WORD __stdcall FUN_0045e4dc(void)

{
  _STARTUPINFOA _Stack_44;
  
  GetStartupInfoA(&_Stack_44);
  if (((byte)_Stack_44.dwFlags & 1) == 0) {
    _Stack_44.wShowWindow = 10;
  }
  return _Stack_44.wShowWindow;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e504  FUN_0045e504   (16 bytes)   [unnamed]
void __stdcall FUN_0045e504(DWORD tlsIndex)

{
  TlsFree(tlsIndex);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e514  FUN_0045e514   (16 bytes)   [unnamed]
void __stdcall FUN_0045e514(DWORD tlsIndex)

{
  TlsGetValue(tlsIndex);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e524  FUN_0045e524   (20 bytes)   [unnamed]
void __stdcall FUN_0045e524(DWORD tlsIndex,LPVOID tlsValue)

{
  TlsSetValue(tlsIndex,tlsValue);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e538  FUN_0045e538   (7 bytes)   [unnamed]
void __stdcall FUN_0045e538(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e540  FUN_0045e540   (7 bytes)   [unnamed]
void __stdcall FUN_0045e540(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e554  FUN_0045e554   (456 bytes)   [unnamed]
char * __stdcall FUN_0045e554(void)

{
  char ch;
  undefined *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  char *len;
  int iVar7;
  int timeZoneInformation;
  WCHAR local_68;
  short local_22;
  WCHAR local_14;
  
  puVar3 = (uint *)FUN_0045d6e0((uint *)&DAT_00476008);
  if ((((((puVar3 == (uint *)0x0) || (pcVar4 = strlen(puVar3), pcVar4 < (char *)0x4)) ||
        (iVar5 = FUN_0045d098((int)(char)*puVar3), iVar5 == 0)) ||
       ((iVar5 = FUN_0045d098((int)*(char *)((int)puVar3 + 1)), iVar5 == 0 ||
        (iVar5 = FUN_0045d098((int)*(char *)((int)puVar3 + 2)), iVar5 == 0)))) ||
      ((ch = *(char *)((int)puVar3 + 3), ch != '-' &&
       ((ch != '+' && (iVar5 = FUN_0045d0d8((int)ch), iVar5 == 0)))))) ||
     ((iVar5 = FUN_0045d0d8((int)*(char *)((int)puVar3 + 3)), iVar5 == 0 &&
      (iVar5 = FUN_0045d0d8((int)(char)puVar3[1]), iVar5 == 0)))) {
    GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&timeZoneInformation);
    if (local_22 == 0) {
      (*(uint *)&DAT_00475ffc) = 0;
    }
    else {
      (*(uint *)&DAT_00475ffc) = (uint)(local_14 != L'\0');
    }
    DAT_00475ff8 = (timeZoneInformation + local_68) * 0x3c;
    *PTR_DAT_00476000 = DAT_0047600b;
    puVar2 = PTR_DAT_00476004;
    *PTR_DAT_00476004 = DAT_0047600c;
    return puVar2;
  }
  memset((undefined4 *)PTR_DAT_00476004,0,4);
  FUN_0045d110(PTR_DAT_00476000,(byte *)puVar3,3);
  PTR_DAT_00476000[3] = 0;
  iVar5 = atoi((char *)((int)puVar3 + 3));
  iVar7 = 3;
  pcVar4 = (char *)((int)puVar3 + 3);
  DAT_00475ff8 = iVar5 * 0xe10;
  (*(uint *)&DAT_00475ffc) = 0;
  while( true ) {
    if (*pcVar4 == '\0') {
      return (char *)0x0;
    }
    iVar5 = FUN_0045d098((int)*pcVar4);
    if (iVar5 != 0) break;
    iVar7 = iVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  len = strlen((uint *)(iVar7 + (int)puVar3));
  if (len < (char *)0x3) {
    return len;
  }
  iVar5 = FUN_0045d098((int)pcVar4[1]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  iVar5 = FUN_0045d098((int)pcVar4[2]);
  if (iVar5 == 0) {
    return (char *)0x0;
  }
  FUN_0045d110(PTR_DAT_00476004,(byte *)(iVar7 + (int)puVar3),3);
  puVar2 = PTR_DAT_00476004;
  PTR_DAT_00476004[3] = 0;
  (*(uint *)&DAT_00475ffc) = 1;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e74f  FUN_0045e74f   (6 bytes)   [unnamed]
void FUN_0045e74f(undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0045e753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e756  FUN_0045e756   (74 bytes)   [unnamed]
int __cdecl FUN_0045e756(uint param_1)

{
  int iVar1;
  
  iVar1 = malloc();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 < 0x81) {
    iVar1 = __getTlsBlock();
    if ((*(byte *)(iVar1 + 4) & 1) == 0) goto LAB_0045e783;
  }
  FUN_0045d628();
LAB_0045e783:
  iVar1 = __getTlsBlock();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  iVar1 = __getTlsBlock();
  return *(int *)(iVar1 + 0x14);
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e7a0  FUN_0045e7a0   (45 bytes)   [unnamed]
void __cdecl FUN_0045e7a0(int param_1)

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
// 0x0045e7cd  FUN_0045e7cd   (198 bytes)   [unnamed]
undefined4 __cdecl FUN_0045e7cd(int *param_1,undefined4 param_2,int *param_3,byte param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_0045653c(param_1,param_3,0,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *(ushort *)(param_3 + 1);
  if ((uVar2 & 0x20) != 0) {
    iVar3 = FUN_0045653c(param_1,(int *)param_3[2],1,param_2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = *(ushort *)((int *)param_3[2] + 1);
    if ((uVar2 & 0x10) == 0) {
      return 0;
    }
    iVar3 = FUN_0045653c(param_1,(int *)param_3[2],0,param_2);
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
// 0x0045e893  FUN_0045e893   (270 bytes)   [unnamed]
void __cdecl FUN_0045e893(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_0045d2c4("(ctorMask & 0x0100) != 0 || (ctorMask & 0x0020) == 0","xx.cpp",0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_0045d2c4("(ctorMask & 0x0080) == 0","xx.cpp",0x207);
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
      FUN_0045d2c4("!\"what\?\"","xx.cpp",0x25e);
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
      FUN_0045d2c4("!\"what\?\"","xx.cpp",0x232);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e9a1  FUN_0045e9a1   (24 bytes)   [unnamed]
int __cdecl FUN_0045e9a1(char *param_1)

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
// 0x0045e9b9  FUN_0045e9b9   (29 bytes)   [unnamed]
void __cdecl FUN_0045e9b9(undefined4 arguments,int param_2)

{
  RaiseException(0xeedfae6,0,param_2 + 2,&arguments);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e9d6  FUN_0045e9d6   (208 bytes)   [unnamed]
void __cdecl FUN_0045e9d6(undefined4 param_1,int param_2,byte param_3,undefined *param_4,uint param_5,int param_6 )

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
  if (*DAT_00477e24 == 2) {
    pcVar1 = FUN_00456428(param_2);
    FUN_0045e9a1(pcVar1);
    FUN_0045e9b9(0,3);
  }
  if ((param_5 & 0x80) != 0) {
    FUN_0045d2c4("(dtorMask & 0x0080) == 0","xx.cpp",0x2cd);
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
    FUN_0045d2c4("!\"what\?\"","xx.cpp",0x2f4);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045eaa6  FUN_0045eaa6   (126 bytes)   [unnamed]
void __cdecl FUN_0045eaa6(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_0045d2c4("(mfnMask & 0x0080) == 0","xx.cpp",0x2fc);
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
  FUN_0045d2c4("!\"what\?\"","xx.cpp",0x323);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045eb24  __raiseException   (576 bytes, 2 ranges)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00427e50. builds the Borland exception record (type, object copy, source position) and calls RaiseException
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
  
  __InitExceptBlockLDTC(0x476034);
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
  record = (undefined4 *)FUN_0045e756(uVar3 + 0x52);
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
  record[7] = FUN_0045e7a0;
  record[0xd] = throwFile;
  record[0xe] = throwLine;
  record[8] = copyCtor;
  record[9] = copyCtorMask;
  *(undefined1 *)((int)record + 0x45) = 0;
  *(undefined1 *)(record + 0x11) = 1;
  memcpy((undefined4 *)((int)record + 0x52),object,uVar3);
  if ((*DAT_00477e24 == 1) || (*DAT_00477e24 == 2)) {
    pcVar5 = FUN_00456428((int)typeDesc);
    FUN_0045e9a1(pcVar5);
    FUN_0045e9b9(1,0xb);
  }
  if ((objectOffset & 1) != 0) {
    if (copyCtor == (undefined *)0x0) {
      FUN_0045d2c4("cctrAddr","xx.cpp",0x445);
    }
    local_38 = DAT_00477e20;
    ehContext = 8;
    FUN_0045e893((int)record + 0x52,object,copyCtor,copyCtorMask);
    ehContext = 0;
    DAT_00477e20 = local_38;
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

// ----------------------------------------------------------------------------------------------------
// 0x0045ed74  _ThrowExceptionLDTC   (53 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004280a0. Borland throw: records the exception type descriptor and object in the thread's exception state and raises it
void __cdecl _ThrowExceptionLDTC(uint *typeDesc,undefined4 *object,undefined4 objectDtor,undefined *copyCtor,uint copyCtorMask, undefined4 throwFlags,undefined4 throwFile,undefined4 throwLine)

{
  undefined4 throwReturn;
  
  __raiseException(typeDesc,object,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine,throwReturn);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045eda9  FUN_0045eda9   (107 bytes)   [unnamed]
void __cdecl FUN_0045eda9(undefined4 throwFile,undefined4 throwLine)

{
  int iVar1;
  int *piVar2;
  undefined4 *object;
  undefined4 throwReturn;
  
  piVar2 = (int *)__getTlsBlock();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_00456ae0();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    object = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    object = (undefined4 *)(iVar1 + 0x52);
  }
  __raiseException(*(uint **)(iVar1 + 4),object,*(undefined4 *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20)
               ,*(uint *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0xc),throwFile,throwLine,
               throwReturn);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ee14  FUN_0045ee14   (63 bytes)   [unnamed]
void __cdecl FUN_0045ee14(PVOID targetFrame,PEXCEPTION_RECORD exceptionRecord)

{
  EXCEPTION_RECORD local_54;
  
  if (exceptionRecord == (PEXCEPTION_RECORD)0x0) {
    local_54.ExceptionCode = 0x26;
    local_54.ExceptionFlags = 2;
    exceptionRecord = &local_54;
    local_54.NumberParameters = 0;
  }
  exceptionRecord->ExceptionFlags = exceptionRecord->ExceptionFlags | 2;
  FUN_00456dd6(targetFrame,exceptionRecord);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ee53  FUN_0045ee53   (101 bytes, 2 ranges)   [unnamed]
void __cdecl FUN_0045ee53(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476068);
  if (param_3 == (undefined *)0x0) {
    FUN_0045d2c4("dtorAddr","xx.cpp",0x5b9);
  }
  FUN_0045e9d6(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045eec8  FUN_0045eec8   (136 bytes)   [unnamed]
void __cdecl FUN_0045eec8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00477e20;
  if (*(char *)(param_1 + 0x44) != '\0') {
    if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      FUN_0045ee53(param_1 + 0x52,iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    DAT_00477e20 = uVar2;
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_0045d2c4("argType","xx.cpp",0x5fe);
    }
    if (((*(byte *)(iVar1 + 4) & 2) != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
      FUN_0045ee53(*(undefined4 *)(param_1 + 0x40),iVar1,*(undefined **)(iVar1 + 0x28),
                   (uint)*(ushort *)(iVar1 + 0x2c));
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ef50  FUN_0045ef50   (234 bytes)   [unnamed]
/* WARNING: Unable to track spacebase fully for stack */
void __stdcall FUN_0045ef50(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined2 in_FS;
  undefined4 in_stack_00000000;
  
  piVar4 = (int *)__getTlsBlock();
  if (*piVar4 == 0) {
    FUN_0045d2c4("__CPPexceptionList","xx.cpp",0x629);
  }
  piVar4 = (int *)__getTlsBlock();
  puVar1 = (undefined4 *)*piVar4;
  puVar5 = (undefined4 *)__getTlsBlock();
  *puVar5 = *puVar1;
  iVar2 = puVar1[10];
  piVar4 = (int *)segment(in_FS,0);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
    FUN_0045d2c4(&DAT_00476228,"xx.cpp",0x637);
  }
  if (iVar3 != puVar1[10]) {
    FUN_0045d2c4("xdrPtr->xdERRaddr == xl","xx.cpp",0x638);
  }
  *(undefined2 *)(iVar2 + 0x10) =
       *(undefined2 *)(*(int *)(iVar2 + 8) + (uint)*(ushort *)(iVar2 + 0x10));
  FUN_0045eec8((int)puVar1);
  (*(code *)puVar1[7])();
  if (*DAT_00477e24 == 2) {
    FUN_0045e9b9(6,1);
  }
  *(undefined4 *)(*(int *)(iVar2 + 0xc) + -4) = in_stack_00000000;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f041  FUN_0045f041   (724 bytes)   [unnamed]
void __cdecl FUN_0045f041(int param_1,int param_2,int param_3,int *param_4,int param_5)

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
    FUN_0045d2c4("dscPtr->xdERRaddr == errPtr","xx.cpp",0x722);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_0045d2c4("dscPtr->xdHtabAdr == hdtPtr","xx.cpp",0x723);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_0045d2c4("dscPtr->xdArgCopy == 0","xx.cpp",0x725);
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
              FUN_0045d2c4("dscPtr->xdSize == size","xx.cpp",0x7f8);
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
            FUN_0045d2c4("dscPtr->xdTypeID == dscPtr->xdBase","xx.cpp",0x7b6);
          }
          iVar5 = FUN_00456460(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar5 == 0) {
            local_c = (int *)FUN_004568cc((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar5 == 0 || bVar7;
          if ((puVar6[3] & 1) == 0) {
            memcpy(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_0045d2c4("hdtPtr->HDcctrAddr","xx.cpp",2000);
            }
            FUN_0045e893(*(undefined4 *)(param_3 + 0x40),local_c,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_0045d2c4("mask & TM_IS_PTR","xx.cpp",0x795);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_0045d2c4("dscPtr->xdMask & TM_IS_PTR","xx.cpp",0x796);
          }
          local_c = (int *)*local_c;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_0045d2c4("(dscPtr->xdMask & TM_IS_PTR) == 0","xx.cpp",0x782);
          }
          bVar7 = true;
        }
        iVar5 = FUN_00456460(*(int **)(param_3 + 0x14),(int *)puVar6);
        piVar4 = local_c;
        if (iVar5 == 0) {
          local_c = (int *)FUN_004568cc((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
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
        FUN_0045ee53(local_c,(int)puVar6,(undefined *)puVar6[10],(uint)(ushort)puVar6[0xb]);
      }
      *(undefined1 *)(param_3 + 0x44) = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f315  FUN_0045f315   (358 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0045f315(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = &GHIDRA_STACK(0xfffffffc);
  uVar6 = (uint)*(ushort *)(param_1 + 0x10);
  while ((uVar4 = uVar6, uVar4 != 0 && (uVar4 != *(uint *)(puVar5 + 0xc)))) {
    uVar6 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    uVar3 = (uint)*(ushort *)(*(int *)(puVar5 + -4) + uVar4 + 2);
    *(ushort *)(*(int *)(puVar5 + 8) + 0x10) = *(ushort *)(*(int *)(puVar5 + -4) + uVar4);
    if (uVar3 == 0) {
      _DAT_00477e28 = *(undefined4 *)(*(int *)(puVar5 + -4) + 4 + uVar4 + 4);
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 1;
      FUN_00456deb();
      *(undefined2 *)(*(int *)(puVar5 + 8) + 0x12) = 0;
    }
    else if (2 < uVar3 - 1) {
      if (uVar3 == 4) {
        uVar2 = __getTlsBlock();
        *(undefined4 *)(puVar5 + -0x10) = uVar2;
        while ((puVar1 = (undefined4 *)**(int **)(puVar5 + -0x10), puVar1 != (undefined4 *)0x0 &&
               ((puVar1[10] != *(int *)(puVar5 + 8) || (uVar4 != puVar1[0xc]))))) {
          *(undefined4 **)(puVar5 + -0x10) = puVar1;
        }
        if ((puVar1 == (undefined4 *)0x0) || (puVar1 != (undefined4 *)**(int **)(puVar5 + -0x10))) {
          FUN_0045d2c4("xdrPtr && xdrPtr == *xdrLPP","xx.cpp",0x8ba);
        }
        **(undefined4 **)(puVar5 + -0x10) = *puVar1;
        FUN_0045eec8((int)puVar1);
        (*(code *)puVar1[7])();
      }
      else if (uVar3 - 1 == 4) {
        uVar2 = FUN_0045fdee(*(int **)(*(int *)(puVar5 + -4) + uVar4 + 8),
                             *(int *)(*(int *)(puVar5 + -4) + uVar4 + 4) + *(int *)(puVar5 + -0xc),
                             *(int *)(puVar5 + 8),*(int *)(puVar5 + -8));
        *(undefined4 *)(puVar5 + -0xc) = uVar2;
      }
      else {
        FUN_0045d2c4("!\"bogus context in Local_unwind()\"","xx.cpp",0x8e9);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f480  FUN_0045f480   (19 bytes)   [unnamed]
void __cdecl FUN_0045f480(int param_1)

{
  FUN_0045f315(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f493  FUN_0045f493   (28 bytes)   [unnamed]
void __cdecl FUN_0045f493(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  
  FUN_0045f315((int)param_1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = *param_1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f4af  FUN_0045f4af   (69 bytes)   [unnamed]
int * __cdecl FUN_0045f4af(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if ((int *)piVar2[1] == (int *)0x0) break;
    iVar1 = FUN_0045e7cd(*(int **)(param_2 + 4),*(undefined4 *)(param_2 + 8),(int *)piVar2[1],
                         (byte)*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f4f4  FUN_0045f4f4   (837 bytes, 2 ranges)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0045f4f4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined2 in_FS;
  
  puVar8 = &GHIDRA_STACK(0xfffffffc);
  iVar9 = param_1[7];
  piVar6 = (int *)param_2[2];
  if (*param_1 == 0xeedfae6) {
    uVar1 = 0;
  }
  else {
    FUN_0045b4a4();
    if ((*(byte *)(param_1 + 1) & 6) == 0) {
      uVar7 = (uint)*(ushort *)(param_2 + 4);
      while (uVar7 != 0) {
        *(uint *)(puVar8 + -8) = (uint)*(ushort *)((int)piVar6 + uVar7);
        *(uint *)(puVar8 + -0x14) = (uint)*(ushort *)((int)piVar6 + uVar7 + 2);
        iVar9 = uVar7 + 4;
        switch(*(undefined4 *)(puVar8 + -0x14)) {
        case 0:
        case 4:
        case 5:
          break;
        case 1:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(puVar8 + -0x28) = *(undefined4 *)(puVar8 + 8);
            *(undefined4 *)(puVar8 + -0x24) = *(undefined4 *)(puVar8 + 0x10);
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            *(undefined1 **)(*(int *)(puVar8 + 0xc) + 0x18) = puVar8 + -0x28;
            _DAT_00477e2c = *(undefined4 *)((int)piVar6 + iVar9);
            iVar2 = FUN_00456deb();
LAB_0045f7df:
            if (iVar2 < 0) {
              if ((*(byte *)(*(int *)(puVar8 + 8) + 4) & 1) != 0) {
                *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -8);
              }
              return 0;
            }
            if (iVar2 != 0) {
              *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x18) = 0;
              *(undefined4 *)(puVar8 + -0x20) = *(undefined4 *)(puVar8 + -8);
              UNRECOVERED_JUMPTABLE = *(undefined **)((int)piVar6 + iVar9 + 4);
LAB_0045f6b2:
              FUN_0045ee14(*(PVOID *)(puVar8 + 0xc),*(PEXCEPTION_RECORD *)(puVar8 + 8));
              FUN_0045f315(*(int *)(puVar8 + 0xc));
              *(undefined2 *)(*(int *)(puVar8 + 0xc) + 0x10) = *(undefined2 *)(puVar8 + -0x20);
              if (*(int *)(puVar8 + -0x14) == 3) {
                FUN_0045f041(*(int *)(puVar8 + -0x18),*(int *)(puVar8 + 0xc),*(int *)(puVar8 + -4),
                             *(int **)(puVar8 + -0x1c),*(int *)(puVar8 + -0xc));
              }
              iVar9 = __getTlsBlock();
              *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) & 0xfffffffd;
              if ((*DAT_00477e24 == 2) && (*(int *)(puVar8 + -0x14) == 3)) {
                pcVar5 = FUN_00456428(*(int *)(*(int *)(puVar8 + -4) + 4));
                FUN_0045e9a1(pcVar5);
                FUN_0045e9b9(3,5);
              }
              FUN_0045e74f(UNRECOVERED_JUMPTABLE);
            }
          }
          break;
        case 2:
          if (**(int **)(puVar8 + 8) != 0xeefface) {
            *(undefined4 *)(*(int *)(puVar8 + 0xc) + 0x14) = **(undefined4 **)(puVar8 + 8);
            iVar2 = *(int *)((int)piVar6 + iVar9);
            goto LAB_0045f7df;
          }
          break;
        case 3:
          if (**(int **)(puVar8 + 8) == 0xeefface) {
            *(undefined4 *)(puVar8 + -0x1c) = *(undefined4 *)((int)piVar6 + iVar9);
            piVar3 = FUN_0045f4af(*(int *)(puVar8 + -0x1c),*(int *)(puVar8 + -4));
            *(int **)(puVar8 + -0x18) = piVar3;
            if (*(int *)(puVar8 + -0x18) != 0) {
              if (((*DAT_00477e24 == 1) || (*DAT_00477e24 == 2)) &&
                 ((**(uint **)(puVar8 + 8) < 0xeedface || (0xeefface < **(uint **)(puVar8 + 8))))) {
                FUN_0045e9b9(2,3);
              }
              puVar4 = (undefined4 *)__getTlsBlock();
              **(undefined4 **)(puVar8 + -4) = *puVar4;
              puVar4 = (undefined4 *)__getTlsBlock();
              *puVar4 = *(undefined4 *)(puVar8 + -4);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x28) = *(undefined4 *)(puVar8 + 0xc);
              *(undefined4 *)(*(int *)(puVar8 + -4) + 0x2c) = *(undefined4 *)(puVar8 + -0x18);
              *(uint *)(*(int *)(puVar8 + -4) + 0x30) = uVar7 + 8;
              *(uint *)(puVar8 + -0x20) = uVar7 + 8;
              UNRECOVERED_JUMPTABLE = (undefined *)**(undefined4 **)(puVar8 + -0x18);
              goto LAB_0045f6b2;
            }
          }
          break;
        default:
          FUN_0045d2c4("!\"bogus context in _ExceptionHandler()\"","xx.cpp",0xc00);
        }
        uVar7 = *(uint *)(puVar8 + -8);
      }
      uVar1 = 1;
    }
    else {
      FUN_0045f315((int)param_2);
      if ((*param_1 == 0xeefface) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)) {
        for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
          iVar2 = FUN_0045e7cd(*(int **)(iVar9 + 4),*(undefined4 *)(iVar9 + 8),(int *)*piVar6,
                               (byte)*(undefined4 *)(iVar9 + 0xc));
          if (iVar2 != 0) goto LAB_0045f5a4;
        }
        puVar4 = (undefined4 *)segment(in_FS,0);
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = *param_2;
        FUN_00456b54();
        puVar4 = (undefined4 *)segment(in_FS,0);
        *puVar4 = uVar1;
      }
LAB_0045f5a4:
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f851  FUN_0045f851   (215 bytes, 3 ranges)   [unnamed]
void __cdecl FUN_0045f851(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4760bc);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_0045d2c4("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_0045d2c4("varType->tpClass.tpcDtorAddr","xx.cpp",0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_0045d2c4("(errPtr->ERRcInitDtc >= varType->tpClass.tpcDtorCount) || flags","xx.cpp",0xc28);
  }
  if ((param_3 & 2) == 0) {
    if (param_4 == 0) {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar2;
  }
  FUN_0045e9d6(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f948  FUN_0045f948   (75 bytes)   [unnamed]
void __cdecl FUN_0045f948(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  
  while (piVar2 = param_3 + -3, param_4 <= piVar2) {
    puVar1 = (undefined4 *)(param_3[-2] + param_1);
    if (in_stack_00000018 != 0) {
      puVar1 = (undefined4 *)*puVar1;
    }
    param_3 = piVar2;
    if ((*(byte *)(*piVar2 + 0xc) & 2) != 0) {
      FUN_0045f993((int)puVar1,*piVar2,param_2,in_stack_00000014,0,in_stack_0000001c,
                   in_stack_00000020);
      in_stack_00000014 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045f993  FUN_0045f993   (688 bytes)   [unnamed]
void __cdecl FUN_0045f993(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6, int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_0045d2c4("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xcb3);
  }
  if (param_5 == 0) {
    uVar4 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar4 <= param_4)) {
    FUN_0045f851(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar4 <= param_4) {
      FUN_0045d2c4("dtorCnt < varCount","xx.cpp",0xced);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar2 = *local_14, iVar2 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar2 + 4) & 1) == 0) {
          FUN_0045d2c4("IS_STRUC(blType->tpMask)","xx.cpp",0xd18);
        }
        if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar2 + 0x24)) {
            FUN_0045f948(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar2 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar2 = *local_c, iVar2 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar2 + 4) & 1) == 0) {
        FUN_0045d2c4("IS_STRUC(blType->tpMask)","xx.cpp",0xd3f);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar2 + 0x24)) {
          FUN_0045f948(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_0045f948(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar2 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        FUN_0045d2c4("memType","xx.cpp",0xd65);
      }
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(int *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
        FUN_0045d2c4("memType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xd73);
      }
      local_1c = local_1c * *(int *)(iVar2 + 0x20);
      if (param_4 <= local_1c) break;
      param_4 = param_4 - local_1c;
      piVar6 = piVar6 + 2;
    }
    do {
      iVar2 = *piVar6;
      local_1c = 1;
      if ((*(byte *)(iVar2 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (local_1c < 2) {
        FUN_0045f993(piVar6[1] + param_1,iVar2,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_0045fc43(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_0045f948(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_0045f948(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fc43  FUN_0045fc43   (292 bytes)   [unnamed]
void __cdecl FUN_0045fc43(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_0045d2c4("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_0045d2c4("varType->tpArr.tpaElemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_0045d2c4("vdtCount","xx.cpp",0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_0045d2c4("etdCount <= elemCount || elemCount == 0","xx.cpp",0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_0045d2c4("dtrCount <= vdtCount","xx.cpp",0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_0045f993(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_0045f993(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fd67  FUN_0045fd67   (135 bytes)   [unnamed]
int __cdecl FUN_0045fd67(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_0045d2c4("IS_CLASS(varType->tpMask)","xx.cpp",0xe13);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    }
    param_1 = param_1 - *(int *)(param_3 + -8);
    iVar1 = param_3 - *(int *)(param_3 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_0045d2c4("((unsigned __far *)vftAddr)[-1] == 0","xx.cpp",0xe39);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045fdee  FUN_0045fdee   (1156 bytes)   [unnamed]
undefined4 __cdecl FUN_0045fdee(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_8 = *(int *)(param_3 + 0x1c) - param_2;
    if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 1) & 0x11) == 0) {
        FUN_0045d2c4("dttPtr->dttFlags & (DTCVF_PTRVAL|DTCVF_RETVAL)","xx.cpp",0xe78);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_0045d2c4("dttPtr->dttType->tpMask & TM_IS_PTR","xx.cpp",0xe7c);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_0045d2c4("dttPtr->dttType->tpPtr.tppBaseType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xe7d);
      }
      local_8 = *(uint *)(*(int *)(*param_1 + 8) + 0x20);
    }
    if ((*(byte *)((int)param_1 + 5) & 1) == 0) {
      piVar5 = param_1;
      if (((int)local_8 < 1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
        if ((param_1[1] & 3U) != 3) {
          return 0;
        }
        local_c = local_c + 1;
      }
      else {
        for (; *piVar5 != 0; piVar5 = piVar5 + 3) {
          if ((*(byte *)((int)piVar5 + 5) & 0x10) == 0) {
            local_10 = *piVar5;
          }
          else {
            if ((*(byte *)(*piVar5 + 5) & 4) == 0) {
              FUN_0045d2c4("dtvtPtr->dttType->tpMask & TM_IS_ARRAY","xx.cpp",0xed7);
            }
            local_10 = *(int *)(*piVar5 + 8);
          }
          iVar8 = 1;
          if (((((*(byte *)(local_10 + 4) & 0x10) != 0) &&
               (local_10 = *(int *)(local_10 + 8), (*(byte *)(local_10 + 4) & 2) != 0)) &&
              ((*(byte *)(local_10 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar5 + 1) & 8) != 0)) {
            iVar6 = 0;
            if ((*(byte *)(local_10 + 0xc) & 2) == 0) {
              FUN_0045d2c4("varType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xef7);
            }
            if ((*(byte *)(piVar5 + 1) & 4) == 0) {
              local_14 = (int *)piVar5[2];
            }
            else {
              local_14 = (int *)(param_4 + piVar5[2]);
            }
            iVar1 = *local_14;
            if ((*(byte *)((int)piVar5 + 5) & 0x10) != 0) {
              iVar6 = local_14[1];
            }
            local_14 = (int *)iVar1;
            if ((*(byte *)(piVar5 + 1) & 0x40) != 0) {
              local_14 = (int *)(iVar1 + 4);
            }
            local_14 = (int *)FUN_0045fd67((int)local_14,&local_10,iVar6);
          }
          iVar6 = local_10;
          if ((*(byte *)(local_10 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_10 + 0xc);
            iVar6 = *(int *)(local_10 + 8);
          }
          if ((*(byte *)(iVar6 + 0xc) & 2) == 0) {
            FUN_0045d2c4("elemType->tpClass.tpcFlags & CF_HAS_DTOR","xx.cpp",0xf22);
          }
          uVar7 = iVar8 * *(int *)(iVar6 + 0x20);
          if (local_8 <= uVar7) goto LAB_00460029;
          local_8 = local_8 - uVar7;
        }
        piVar5 = piVar5 + -3;
      }
LAB_00460029:
      do {
        local_18 = *piVar5;
        uVar7 = piVar5[1];
        if ((uVar7 & 4) == 0) {
          local_1c = (int *)piVar5[2];
        }
        else {
          local_1c = (int *)(param_4 + piVar5[2]);
        }
        if ((uVar7 & 0x1000) != 0) {
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_0045d2c4("varType->tpMask & TM_IS_ARRAY","xx.cpp",0xf52);
          }
          local_18 = *(int *)(local_18 + 8);
        }
        if ((uVar7 & 0x11) != 0) {
          iVar8 = 0;
          if ((*(byte *)(local_18 + 4) & 0x10) == 0) {
            FUN_0045d2c4("varType->tpMask & TM_IS_PTR","xx.cpp",0xf5c);
          }
          local_18 = *(int *)(local_18 + 8);
          local_20 = (int *)*local_1c;
          if ((uVar7 & 0x1000) != 0) {
            iVar8 = local_1c[1];
          }
          local_1c = local_20;
          if ((uVar7 & 0x48) == 0x40) {
            local_1c = local_20 + 1;
          }
          if ((((*(byte *)(local_18 + 4) & 2) != 0) && ((*(byte *)(local_18 + 0xc) & 0x20) != 0)) &&
             ((uVar7 & 8) != 0)) {
            local_20 = (int *)FUN_0045fd67((int)local_1c,&local_18,iVar8);
            local_1c = local_20;
          }
        }
        if (local_c == 0) {
          if ((uVar7 & 0x400) == 0) {
            uVar4 = 0;
          }
          else {
            if (*(short *)(local_18 + 0x10) == 0) {
              uVar4 = 0;
            }
            else {
              piVar9 = (int *)((uint)*(ushort *)(local_18 + 0x10) + local_18);
              if (piVar9 == (int *)0x0) {
                FUN_0045d2c4(&DAT_00476889,"xx.cpp",0xf92);
              }
              uVar4 = *(uint *)(*piVar9 + 0x20);
            }
            if (local_8 < uVar4) {
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
            }
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_0045f993((int)local_1c,local_18,uVar4,local_8,1,param_4,param_3);
          }
          else {
            FUN_0045fc43((int)local_1c,local_18,local_8,param_4,param_3);
          }
          if ((((uVar7 & 0x400) != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
             (*(char *)(param_3 + 0x20) != -1)) {
            (**(code **)(*local_1c + -8))(local_1c);
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((uVar7 & 0x48) == 0x48) {
            local_20 = local_20 + -1;
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            if (*(int *)(local_18 + 0x14) == 0) {
              operator_delete();
            }
            else {
              FUN_0045eaa6(local_20,*(undefined **)(local_18 + 0x14),
                           (uint)*(ushort *)(local_18 + 0x18));
            }
          }
          else {
            local_18 = *(int *)(local_18 + 8);
            if (*(int *)(local_18 + 0x1c) == 0) {
              operator_delete_array();
            }
            else {
              FUN_0045eaa6(local_20,*(undefined **)(local_18 + 0x1c),
                           (uint)*(ushort *)(local_18 + 0x1a));
            }
          }
        }
        local_8 = 0;
        bVar2 = param_1 < piVar5;
        piVar5 = piVar5 + -3;
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      if (((*(byte *)(*param_1 + 4) & 2) == 0) || ((*(byte *)(*param_1 + 0xc) & 2) == 0)) {
        FUN_0045d2c4("IS_CLASS(dttPtr->dttType->tpMask) && (dttPtr->dttType->tpClass.tpcFlags & CF_HAS_DTOR)","xx.cpp",0xe8b);
      }
      uVar3 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar3;
}

} // namespace tea
