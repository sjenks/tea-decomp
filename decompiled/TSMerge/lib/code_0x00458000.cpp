// TSMerge.exe — runtime / library code "code_0x00458000"
// 93 functions, 0x0045805c..0x0045bf1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0045805c  FUN_0045805c   (69 bytes)   [unnamed]
void __cdecl FUN_0045805c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = (**(code **)(param_1 + 0x54))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004580a4  FUN_004580a4   (52 bytes)   [unnamed]
void __cdecl FUN_004580a4(undefined1 param_1,int param_2)

{
  if (0x4f < *(int *)(param_2 + 0x50)) {
    FUN_0045805c(param_2);
  }
  if ((*(uint **)(param_2 + 100) == (uint *)0x0) ||
     (*(uint *)(param_2 + 0x5c) < **(uint **)(param_2 + 100))) {
    *(undefined1 *)(param_2 + *(int *)(param_2 + 0x50)) = param_1;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004580d8  FUN_004580d8   (52 bytes)   [unnamed]
void __cdecl FUN_004580d8(uint param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 7;
  pcVar1 = (char *)(param_2 + 7);
  do {
    cVar3 = (char)(param_1 & 0xf);
    if ((param_1 & 0xf) < 10) {
      *pcVar1 = cVar3 + '0';
    }
    else {
      *pcVar1 = cVar3 + '7';
    }
    param_1 = param_1 >> 4;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045810c  FUN_0045810c   (2256 bytes, 2 ranges)   [unnamed]
uint __cdecl FUN_0045810c(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5, uint *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  char cVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint wideCharStr;
  bool bVar15;
  undefined1 local_524 [80];
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  uint local_4c8;
  int local_4c4;
  undefined4 *unused4;
  uint local_4bc [256];
  undefined1 local_bc [2];
  undefined2 unused5;
  undefined1 unused6;
  CHAR multiByteStr [2];
  char *local_58;
  int local_54;
  char *local_50;
  uint *local_48;
  char *local_44;
  char *local_40;
  uint local_3c;
  ushort local_36;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  char local_21;
  int local_20;
  uint *local_1c;
  byte *local_18;
  int local_14;
  byte local_d;
  uint local_c;
  uint local_8;
  
  local_4c4 = 0;
  local_4c8 = 0;
  unused = 0;
  unused2 = param_1;
  unused3 = param_2;
  if (param_4 == 0) {
    unused4 = (undefined4 *)0x0;
  }
  else {
    unused4 = &param_5;
  }
LAB_00458154:
  pbVar12 = param_3;
  bVar10 = *pbVar12;
  param_3 = pbVar12 + 1;
  if (bVar10 != 0) {
    if (bVar10 == 0x25) {
      if (*param_3 != 0x25) {
        uVar5 = 0;
        local_14 = 0;
        local_d = 0;
        local_c = 0xffffffff;
        local_8 = 0xffffffff;
        wideCharStr = 0;
        bVar4 = false;
        bVar2 = false;
        bVar15 = false;
        bVar3 = false;
        local_20 = 0;
switchD_004581f5_default:
        pbVar13 = param_3;
        bVar1 = false;
        bVar10 = *pbVar13;
        param_3 = pbVar13 + 1;
        local_18 = pbVar12;
        if (((char)bVar10 < ' ') || ('\x7f' < (char)bVar10)) goto switchD_004581f5_caseD_15;
        switch((&DAT_004751ca)[(byte)(bVar10 - 0x20)]) {
        case 0:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_004581f5_caseD_15;
          if (local_d != 0x2b) {
            local_d = bVar10;
          }
          goto switchD_004581f5_default;
        case 1:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_004581f5_caseD_15;
          bVar2 = true;
          goto switchD_004581f5_default;
        case 2:
          puVar8 = param_6 + 1;
          local_34 = *param_6;
          param_6 = puVar8;
          if (uVar5 < 2) {
            local_8 = local_34;
            if ((int)local_34 < 0) {
              local_8 = -local_34;
              bVar3 = true;
            }
            uVar5 = 3;
          }
          else {
            local_18 = pbVar12;
            if (uVar5 != 4) goto switchD_004581f5_caseD_15;
            uVar5 = 5;
            local_c = local_34;
          }
          goto switchD_004581f5_default;
        case 3:
          local_18 = pbVar12;
          if (uVar5 != 0) goto switchD_004581f5_caseD_15;
          bVar3 = true;
          goto switchD_004581f5_default;
        case 4:
          local_18 = pbVar12;
          if (3 < uVar5) goto switchD_004581f5_caseD_15;
          uVar5 = 4;
          local_c = local_c + 1;
          goto switchD_004581f5_default;
        case 5:
          goto switchD_004581f5_caseD_5;
        case 6:
          wideCharStr = wideCharStr | 0x10;
          uVar5 = 5;
          goto switchD_004581f5_default;
        case 7:
          uVar5 = 5;
          wideCharStr = wideCharStr & 0xffffffef;
          bVar4 = true;
          goto switchD_004581f5_default;
        case 8:
          uVar5 = 5;
          wideCharStr = 0x200;
          goto switchD_004581f5_default;
        case 9:
          if (uVar5 == 0) {
            if (!bVar3) {
              bVar15 = true;
              uVar5 = 1;
            }
          }
          else {
switchD_004581f5_caseD_5:
            cVar11 = bVar10 - 0x30;
            if (uVar5 < 3) {
              uVar5 = 2;
              if (local_8 == 0xffffffff) {
                local_8 = (uint)cVar11;
              }
              else {
                local_8 = local_8 * 10 + (int)cVar11;
              }
            }
            else {
              local_18 = pbVar12;
              if (uVar5 != 4) goto switchD_004581f5_caseD_15;
              local_c = local_c * 10 + (int)cVar11;
            }
          }
          goto switchD_004581f5_default;
        case 10:
          goto switchD_004581f5_caseD_a;
        case 0xb:
          local_3c = 8;
          break;
        case 0xc:
          local_3c = 10;
          break;
        case 0xd:
          local_3c = 0x10;
          local_21 = bVar10 - 0x17;
          break;
        case 0xe:
          local_1c = (uint *)*param_6;
          param_6 = param_6 + 1;
          FUN_004580d8((uint)local_1c,(int)local_bc);
          unused6 = 0;
          local_1c = (uint *)local_bc;
          goto LAB_00458784;
        case 0xf:
          local_1c = (uint *)(local_bc + 1);
          thunk_FUN_0045b474();
          param_6 = (uint *)thunk_FUN_0045b474();
          goto LAB_00458784;
        case 0x10:
          goto switchD_004581f5_caseD_10;
        case 0x11:
          goto switchD_004581f5_caseD_11;
        case 0x12:
          if (wideCharStr == 0) {
            wideCharStr = 0x10;
          }
switchD_004581f5_caseD_10:
          if ((wideCharStr & 0x10) == 0) {
            local_1c = (uint *)local_bc;
            local_bc[1] = 0;
            local_bc[0] = (byte)*param_6;
            local_20 = 0;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          else {
            local_1c = (uint *)local_bc;
            GH_SET(local_bc, SUB42(*param_6,0));
            unused5 = 0;
            local_20 = 1;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          goto LAB_004587f2;
        case 0x13:
          if (wideCharStr == 0) {
            wideCharStr = 0x10;
          }
switchD_004581f5_caseD_11:
          if ((wideCharStr & 0x10) == 0) {
            local_1c = (uint *)*param_6;
            local_20 = 0;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)"(null)";
            }
          }
          else {
            local_1c = (uint *)*param_6;
            local_20 = 1;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)&DAT_004751bc;
            }
          }
          param_6 = param_6 + 1;
          if (local_20 == 0) {
            wideCharStr = local_c;
            if ((int)local_c < 0) {
              wideCharStr = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar8 = local_1c; (wideCharStr != 0 && ((byte)*puVar8 != 0));
                puVar8 = (uint *)((int)puVar8 + 1)) {
              wideCharStr = wideCharStr - 1;
              local_44 = local_44 + 1;
            }
          }
          else {
            wideCharStr = local_c;
            if ((int)local_c < 0) {
              wideCharStr = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar8 = local_1c; (wideCharStr != 0 && ((ushort)*puVar8 != 0));
                puVar8 = (uint *)((int)puVar8 + 2)) {
              wideCharStr = wideCharStr - 1;
              local_44 = local_44 + 1;
            }
          }
          goto LAB_004587f2;
        case 0x14:
          puVar8 = param_6 + 1;
          local_1c = (uint *)*param_6;
          param_6 = puVar8;
          if ((wideCharStr & 0x10) == 0) {
            if ((wideCharStr & 0x200) == 0) {
              *local_1c = local_4c8;
            }
            else {
              *(ushort *)local_1c = (ushort)local_4c8;
            }
          }
          else {
            *local_1c = local_4c8;
          }
          goto LAB_00458154;
        case 0x15:
        case 0x16:
        case 0x17:
          goto switchD_004581f5_caseD_15;
        case 0x18:
          uVar5 = 5;
          goto switchD_004581f5_default;
        case 0x19:
          uVar5 = 5;
          goto switchD_004581f5_default;
        case 0x1a:
          if ((*param_3 == 0x36) && (pbVar13[2] == 0x34)) {
            wideCharStr = 0;
            bVar4 = true;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if ((*param_3 == 0x33) && (pbVar13[2] == 0x32)) {
            wideCharStr = 0x10;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if ((*param_3 == 0x31) && (pbVar13[2] == 0x36)) {
            wideCharStr = 0x200;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if (*param_3 == 0x38) {
            wideCharStr = 0;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 2;
          }
        default:
          goto switchD_004581f5_default;
        }
        local_d = 0;
        cVar11 = '\0';
        goto LAB_00458470;
      }
      param_3 = pbVar12 + 2;
      bVar10 = 0x25;
    }
    if ((((&DAT_00477b8d)[bVar10] & 4) != 0) && (*param_3 != 0)) {
      FUN_004580a4(bVar10,(int)local_524);
      bVar10 = *param_3;
      param_3 = param_3 + 1;
    }
    FUN_004580a4(bVar10,(int)local_524);
    goto LAB_00458154;
  }
  goto LAB_00458a20;
switchD_004581f5_caseD_a:
  local_3c = 10;
  cVar11 = '\x01';
LAB_00458470:
  if (bVar4) {
    local_2c = *param_6;
    local_28 = param_6[1];
    param_6 = param_6 + 2;
  }
  else if ((wideCharStr & 0x10) == 0) {
    if ((wideCharStr & 0x200) == 0) {
      local_34 = *param_6;
      local_2c = local_34;
      if (cVar11 == '\0') {
        local_28 = 0;
        param_6 = param_6 + 1;
      }
      else {
        local_28 = (int)local_34 >> 0x1f;
        param_6 = param_6 + 1;
      }
    }
    else {
      local_36 = (ushort)*param_6;
      if (cVar11 == '\0') {
        local_2c = (uint)local_36;
        local_28 = 0;
        param_6 = param_6 + 1;
      }
      else {
        local_2c = (uint)(short)local_36;
        local_28 = (int)local_2c >> 0x1f;
        param_6 = param_6 + 1;
      }
    }
  }
  else {
    local_30 = *param_6;
    local_2c = local_30;
    if (cVar11 == '\0') {
      local_28 = 0;
      param_6 = param_6 + 1;
    }
    else {
      local_28 = (int)local_30 >> 0x1f;
      param_6 = param_6 + 1;
    }
  }
  local_1c = (uint *)(local_bc + 1);
  if (((local_28 == 0) && (local_2c == 0)) && (local_c == 0)) {
                    /* WARNING: Ignoring partial resolution of indirect */
    local_bc[1] = 0;
  }
  else {
    FUN_0045b54c(local_2c,local_28,(char *)local_1c,local_3c,cVar11,local_21);
  }
  if ((int)local_c < 0) {
LAB_00458784:
    if ((bVar15) && (0 < (int)local_8)) {
      local_44 = strlen(local_1c);
      if ((byte)*local_1c == 0x2d) {
        local_44 = local_44 + -1;
      }
      if ((int)local_44 < (int)local_8) {
        local_14 = local_8 - (int)local_44;
      }
    }
    if (((byte)*local_1c == 0x2d) || (local_d != 0)) {
      if ((byte)*local_1c != 0x2d) {
        local_1c = (uint *)((int)local_1c + -1);
        *(byte *)local_1c = local_d;
      }
      if (0 < local_14) {
        local_14 = local_14 + -1;
      }
    }
    local_44 = strlen(local_1c);
  }
  else {
    local_40 = strlen(local_1c);
    local_44 = local_40;
    if ((byte)*local_1c == 0x2d) {
      local_40 = local_40 + -1;
    }
    else if (local_d != 0) {
      local_44 = local_40 + 1;
      local_1c = (uint *)((int)local_1c + -1);
      *(byte *)local_1c = local_d;
    }
    if ((int)local_40 < (int)local_c) {
      local_14 = local_c - (int)local_40;
    }
  }
LAB_004587f2:
  if (bVar2) {
    if (bVar10 == 0x6f) {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((bVar10 == 0x78) || (bVar10 == 0x58)) {
      bVar1 = true;
      local_8 = local_8 - 2;
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_44 = local_44 + local_14;
  if ((!bVar3) && ((int)local_44 < (int)local_8)) {
    do {
      FUN_004580a4(0x20,(int)local_524);
      local_8 = local_8 - 1;
    } while ((int)local_44 < (int)local_8);
  }
  if (bVar1) {
    FUN_004580a4(0x30,(int)local_524);
    FUN_004580a4(bVar10,(int)local_524);
  }
  if (0 < local_14) {
    local_44 = local_44 + -local_14;
    local_8 = local_8 - local_14;
    if ((((byte)*local_1c == 0x2d) || ((byte)*local_1c == 0x20)) || ((byte)*local_1c == 0x2b)) {
      wideCharStr = *local_1c;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_004580a4((byte)wideCharStr,(int)local_524);
      local_44 = local_44 + -1;
      local_8 = local_8 - 1;
    }
    while (iVar7 = local_14 + -1, bVar15 = local_14 != 0, local_14 = iVar7, bVar15) {
      FUN_004580a4(0x30,(int)local_524);
    }
  }
  if (local_20 != 0) {
    local_48 = local_1c;
    local_50 = (char *)0x0;
    local_58 = local_44;
    while (pcVar6 = local_58 + -1, bVar15 = 0 < (int)local_58, local_58 = pcVar6, bVar15) {
      wideCharStr = *local_48;
      local_48 = (uint *)((int)local_48 + 2);
      local_54 = FUN_0045ac78(multiByteStr,(ushort)wideCharStr);
      if (local_54 < 1) break;
      iVar7 = 0;
      pcVar9 = (char *)((int)local_4bc + (int)local_50);
      pcVar6 = multiByteStr;
      if (0 < local_54) {
        do {
          cVar11 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar9 = cVar11;
          pcVar9 = pcVar9 + 1;
          local_50 = local_50 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_54);
      }
    }
    local_1c = local_4bc;
    local_44 = local_50;
  }
  if (local_44 != (char *)0x0) {
    local_8 = local_8 - (int)local_44;
    while (local_44 != (char *)0x0) {
      wideCharStr = *local_1c;
      local_44 = local_44 + -1;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_004580a4((byte)wideCharStr,(int)local_524);
    }
    local_44 = (char *)0xffffffff;
  }
  while (wideCharStr = local_8 - 1, bVar15 = 0 < (int)local_8, local_8 = wideCharStr, bVar15) {
    FUN_004580a4(0x20,(int)local_524);
  }
  goto LAB_00458154;
switchD_004581f5_caseD_15:
  while( true ) {
    pbVar12 = local_18 + 1;
    bVar10 = *local_18;
    local_18 = pbVar12;
    if (bVar10 == 0) break;
    FUN_004580a4(bVar10,(int)local_524);
  }
LAB_00458a20:
  FUN_0045805c((int)local_524);
  if (local_4c4 != 0) {
    local_4c8 = 0xffffffff;
  }
  return local_4c8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458a48  thunk → FUN_004574e4   (5 bytes)   [unnamed]
int __cdecl thunk_FUN_004574e4(uint param_1,char *buffer,uint numberOfBytesToWrite)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char buffer2 [512];
  int iStack_c;
  int iStack_8;
  
  if (param_1 < DAT_00474b38) {
    if (numberOfBytesToWrite + 1 < 2) {
      iStack_c = 0;
    }
    else {
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 8) != 0) {
        FUN_00456ed8(param_1,0,2);
      }
      if ((*(byte *)((int)&DAT_00474b3c + param_1 * 4 + 1) & 0x40) == 0) {
        iStack_c = FUN_004576e8(param_1,buffer,numberOfBytesToWrite);
      }
      else {
        iStack_8 = 0;
        iStack_c = 0;
        pcVar4 = buffer;
        while ((uint)((int)pcVar4 - (int)buffer) < numberOfBytesToWrite) {
          pcVar3 = buffer2;
          while (((int)pcVar3 - (int)buffer2 < 0x1ff &&
                 ((uint)((int)pcVar4 - (int)buffer) < numberOfBytesToWrite))) {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == '\n') {
              iStack_8 = iStack_8 + 1;
              *pcVar3 = '\r';
              pcVar3[1] = '\n';
              pcVar3 = pcVar3 + 2;
            }
            else {
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
            }
          }
          iVar2 = FUN_004576e8(param_1,buffer2,(int)pcVar3 - (int)buffer2);
          if (iVar2 != (int)pcVar3 - (int)buffer2) {
            if (iVar2 == -1) {
              return -1;
            }
            return (iStack_c - iStack_8) + iVar2;
          }
          iStack_c = iStack_c + iVar2;
        }
        iStack_c = iStack_c - iStack_8;
      }
    }
  }
  else {
    iStack_c = FUN_00457c6c(-6);
  }
  return iStack_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458a78  FUN_00458a78   (707 bytes)   [unnamed]
char * __cdecl FUN_00458a78(char *param_1,char *param_2,uint n)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  memset((undefined4 *)param_2,0,n);
  do {
    iVar3 = 0;
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return param_2;
    }
    if (cVar1 < 'i') {
      if (cVar1 == 'h') {
        if (param_1[1] == 'h') {
          FUN_00455ae4(param_2,&DAT_0047546f /* "%+0I" */);
          param_1 = param_1 + 1;
        }
        else {
          FUN_00455ae4(param_2,&DAT_00475474);
        }
      }
      else if (cVar1 < 'N') {
        pcVar2 = param_1;
        if (cVar1 == 'M') {
          while (*pcVar2 == 'M') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_00455ae4(param_2,&DAT_004754a0);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00455ae4(param_2,&DAT_004754a3 /* "%+0m" */);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00455ae4(param_2,&DAT_004754a8);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00455ae4(param_2,&DAT_004754ab);
          }
        }
        else if (cVar1 != '\'') {
          if (cVar1 != 'H') goto LAB_00458d1a;
          if (param_1[1] == 'H') {
            FUN_00455ae4(param_2,&DAT_00475487 /* "%+0H" */);
            param_1 = param_1 + 1;
          }
          else {
            FUN_00455ae4(param_2,&DAT_0047548c);
          }
        }
      }
      else {
        pcVar2 = param_1;
        if (cVar1 == 'd') {
          while (*pcVar2 == 'd') {
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          if (iVar3 == 1) {
            FUN_00455ae4(param_2,&DAT_00475492);
          }
          else if (iVar3 == 2) {
            param_1 = param_1 + 1;
            FUN_00455ae4(param_2,&DAT_00475495 /* "%+0d" */);
          }
          else if (iVar3 == 3) {
            param_1 = param_1 + 2;
            FUN_00455ae4(param_2,&DAT_0047549a);
          }
          else if (iVar3 == 4) {
            param_1 = param_1 + 3;
            FUN_00455ae4(param_2,&DAT_0047549d);
          }
        }
        else if (cVar1 == 'g') {
          if (param_1[1] == 'g') {
            FUN_00455ae4(param_2,&DAT_0047546c);
            param_1 = param_1 + 1;
          }
        }
        else {
LAB_00458d1a:
          FUN_00455c4c(param_2,param_1,1);
        }
      }
    }
    else if (cVar1 == 'm') {
      if (param_1[1] == 'm') {
        FUN_00455ae4(param_2,&DAT_00475477 /* "%+0M" */);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00455ae4(param_2,&DAT_0047547c);
      }
    }
    else if (cVar1 == 's') {
      if (param_1[1] == 's') {
        FUN_00455ae4(param_2,&DAT_0047547f /* "%+0S" */);
        param_1 = param_1 + 1;
      }
      else {
        FUN_00455ae4(param_2,&DAT_00475484);
      }
    }
    else if (cVar1 == 't') {
      if (param_1[1] == 't') {
        param_1 = param_1 + 1;
      }
      else {
        FUN_00455ae4(param_2,&DAT_0047548f);
      }
    }
    else {
      pcVar2 = param_1;
      if (cVar1 != 'y') goto LAB_00458d1a;
      while (*pcVar2 == 'y') {
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      if (iVar3 == 1) {
        FUN_00455ae4(param_2,&DAT_004754ae);
      }
      else if (iVar3 == 2) {
        param_1 = param_1 + 1;
        FUN_00455ae4(param_2,&DAT_004754b1 /* "%+0y" */);
      }
      else if (iVar3 == 4) {
        param_1 = param_1 + 3;
        FUN_00455ae4(param_2,&DAT_004754b6);
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00458d3c  FUN_00458d3c   (81 bytes)   [unnamed]
undefined4 __cdecl FUN_00458d3c(int param_1)

{
  if (param_1 < 0x11) {
    if (param_1 == 0x10) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 8);
    }
    if (param_1 == 0xe) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 4);
    }
    if (param_1 == 0xf) {
      return **(undefined4 **)(PTR_DAT_00475910 + 0x18);
    }
  }
  else {
    if (param_1 == 0x50) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 0xc);
    }
    if (param_1 == 0x51) {
      return *(undefined4 *)(*(int *)(PTR_DAT_00475910 + 0x18) + 0x10);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458d90  isalnum   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00422548 (22 bytes; the code occurs several times, e.g. one template instance per type). _isctype(c, C1_ALPHA | C1_DIGIT)
undefined4 __cdecl isalnum(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x104);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458da8  FUN_00458da8   (18 bytes)   [unnamed]
bool __cdecl FUN_00458da8(uint param_1)

{
  return param_1 < 0x80;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458dbc  isalpha   (22 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x00422574 (22 bytes; the code occurs several times, e.g. one template instance per type). _isctype(c, C1_ALPHA)
undefined4 __cdecl isalpha(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x100);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458dd4  FUN_00458dd4   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00458dd4(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x20);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458de8  FUN_00458de8   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00458de8(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,4);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458dfc  FUN_00458dfc   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00458dfc(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x194);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e14  FUN_00458e14   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00458e14(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,2);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e28  FUN_00458e28   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00458e28(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x1d4);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e40  FUN_00458e40   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00458e40(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x10);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e54  FUN_00458e54   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00458e54(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,8);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e68  FUN_00458e68   (19 bytes)   [unnamed]
undefined4 __cdecl FUN_00458e68(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,1);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e7c  FUN_00458e7c   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_00458e7c(uint ch)

{
  ushort uVar1;
  undefined2 regHigh;
  
  uVar1 = _isctype(ch,0x80);
  return CONCAT22(regHigh,uVar1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00458e94  FUN_00458e94   (23 bytes)   [unnamed]
void __cdecl FUN_00458e94(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x104);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458eac  FUN_00458eac   (20 bytes)   [unnamed]
bool __cdecl FUN_00458eac(ushort param_1)

{
  return param_1 < 0x80;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458ec0  FUN_00458ec0   (23 bytes)   [unnamed]
void __cdecl FUN_00458ec0(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458ed8  FUN_00458ed8   (20 bytes)   [unnamed]
void __cdecl FUN_00458ed8(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x20);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458eec  FUN_00458eec   (20 bytes)   [unnamed]
void __cdecl FUN_00458eec(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f00  FUN_00458f00   (23 bytes)   [unnamed]
void __cdecl FUN_00458f00(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x194);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f18  FUN_00458f18   (20 bytes)   [unnamed]
void __cdecl FUN_00458f18(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f2c  FUN_00458f2c   (23 bytes)   [unnamed]
void __cdecl FUN_00458f2c(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x1d4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f44  FUN_00458f44   (20 bytes)   [unnamed]
void __cdecl FUN_00458f44(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f58  FUN_00458f58   (20 bytes)   [unnamed]
uint __cdecl FUN_00458f58(ushort srcStr)

{
  uint uVar1;
  
  uVar1 = FUN_00458fdc((uint)srcStr,8);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f6c  FUN_00458f6c   (20 bytes)   [unnamed]
void __cdecl FUN_00458f6c(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f80  FUN_00458f80   (23 bytes)   [unnamed]
void __cdecl FUN_00458f80(ushort srcStr)

{
  FUN_00458fdc((uint)srcStr,0x80);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458f98  _isctype   (67 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00422750. tests a character's classification bits (C1_* mask)
ushort __cdecl _isctype(uint ch,ushort mask)

{
  if (0xff < ch) {
    return 0;
  }
  if ((*(int *)(PTR_DAT_00475910 + 8) == 0) && (*(int *)(PTR_DAT_00475910 + 0x10) != 0)) {
    return mask & *(ushort *)(*(int *)(PTR_DAT_00475910 + 0x10) + 2 + ch * 2);
  }
  return *(ushort *)(&DAT_0047522e + (short)ch * 2) & mask;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458fdc  FUN_00458fdc   (85 bytes)   [unnamed]
uint __cdecl FUN_00458fdc(WCHAR srcStr,uint param_2)

{
  uint uVar1;
  ushort charType;
  
  uVar1 = param_2;
  if (srcStr == L'\xffff') {
    uVar1 = 0;
  }
  else if ((*(int *)(PTR_DAT_00475910 + 8) == 0) || (L'ÿ' < srcStr)) {
    GetStringTypeW(1,&srcStr,1,&charType);
    uVar1 = charType & uVar1;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0047522e + (short)srcStr * 2) & param_2;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459034  FUN_00459034   (173 bytes)   [unnamed]
undefined4 __cdecl FUN_00459034(ushort param_1,LPCWSTR wideCharStr)

{
  uint *mem;
  char *len;
  LPWSTR wideCharStr2;
  
  if (wideCharStr == (LPCWSTR)0x0) {
    FUN_004590e4(param_1,(uint *)0x0);
  }
  else {
    mem = (uint *)malloc();
    FUN_0045ae54((LPSTR)mem,wideCharStr,0x1000);
    FUN_004590e4(param_1,mem);
    if ((undefined4 *)PTR_DAT_00475910 != &DAT_004758e4) {
      len = strlen(*(uint **)(PTR_DAT_00475910 + 0x24));
      wideCharStr2 = (LPWSTR)FUN_0044b964();
      *(LPWSTR *)(PTR_DAT_00475910 + 0x28) = wideCharStr2;
      FUN_0045acec(wideCharStr2,*(uint **)(PTR_DAT_00475910 + 0x24),(char *)((int)len * 2));
    }
    free();
  }
  return *(undefined4 *)(PTR_DAT_00475910 + 0x28);
}

// ----------------------------------------------------------------------------------------------------
// 0x004590e4  FUN_004590e4   (1223 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
undefined4 __cdecl FUN_004590e4(ushort param_1,uint *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  uint *puVar4;
  BOOL ok;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint i;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  _cpinfo cpInfo;
  char *found;
  LCID locale;
  int local_10;
  CHAR lcData [8];
  
  pbVar10 = (byte *)0x0;
  local_10 = 0;
  locale = 0;
  if (param_2 != (uint *)0x0) {
    pbVar10 = (byte *)FUN_00455d60(param_2);
  }
  if ((PTR_DAT_00475910 == (undefined *)0x0) || ((undefined4 *)PTR_DAT_00475910 == &DAT_004758e4)) {
    if ((undefined4 *)PTR_DAT_00475910 == &DAT_004758e4) {
      local_10 = 1;
    }
    PTR_DAT_00475910 = (undefined *)calloc(1,0x2c);
    if ((undefined4 *)PTR_DAT_00475910 == (undefined4 *)0x0) {
      SetLastError(0xe);
      free();
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_00475910 + 0x24) != 0) {
    free();
    *(undefined4 *)(PTR_DAT_00475910 + 0x24) = 0;
  }
  if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
    if (pbVar10 == (byte *)0x0) {
      if (local_10 == 0) {
        if ((param_1 & 4) == 4) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)"LC_MONETARY");
        }
        if ((param_1 & 0x10) == 0x10) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)"LC_NUMERIC");
        }
        if ((param_1 & 0x20) == 0x20) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)"LC_TIME");
        }
        if ((param_1 & 1) == 1) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)"LC_COLLATE");
        }
        if ((param_1 & 2) == 2) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)"LC_CTYPE");
        }
        free();
        FUN_0045a9c4();
        return *(undefined4 *)(PTR_DAT_00475910 + 0x24);
      }
      FUN_00459a48((int)PTR_DAT_00475910);
      free();
      PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
    }
    else {
      locale = GetUserDefaultLCID();
      GetLocaleInfoA(locale,0xb,lcData,7);
      iVar7 = atoi(lcData);
      puVar2 = PTR_DAT_00475910;
      *(int *)PTR_DAT_00475910 = iVar7;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
  }
  else {
    pcVar3 = FUN_00455e58((char *)param_2,"en_US");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = FUN_00455e58((char *)param_2,"en_GB");
      if (pcVar3 == (char *)0x0) {
        pcVar3 = FUN_00455e58((char *)param_2,"fr_FR");
        if (pcVar3 == (char *)0x0) {
          pcVar3 = FUN_00455e58((char *)param_2,"de_DE");
          if (pcVar3 != (char *)0x0) {
            *(undefined4 *)pbVar10 = DAT_0047575f;
            found = strchr((char *)param_2,'.');
            if (found != (char *)0x0) {
              uVar8 = 0xffffffff;
              pcVar3 = found;
              do {
                pcVar12 = pcVar3;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar12 = pcVar3 + 1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar12;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              pbVar11 = (byte *)(pcVar12 + -uVar8);
              pbVar13 = pbVar10 + 3;
              for (i = uVar8 >> 2; i != 0; i = i - 1) {
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
                pbVar11 = pbVar11 + 4;
                pbVar13 = pbVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pbVar13 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                pbVar13 = pbVar13 + 1;
              }
            }
          }
        }
        else {
          *(undefined4 *)pbVar10 = DAT_00475755;
          found = strchr((char *)param_2,'.');
          if (found != (char *)0x0) {
            uVar8 = 0xffffffff;
            pcVar3 = found;
            do {
              pcVar12 = pcVar3;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pbVar11 = (byte *)(pcVar12 + -uVar8);
            pbVar13 = pbVar10 + 3;
            for (i = uVar8 >> 2; i != 0; i = i - 1) {
              *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
              pbVar11 = pbVar11 + 4;
              pbVar13 = pbVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pbVar13 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              pbVar13 = pbVar13 + 1;
            }
          }
        }
      }
      else {
        *(undefined4 *)pbVar10 = DAT_0047574b;
        found = strchr((char *)param_2,'.');
        if (found != (char *)0x0) {
          uVar8 = 0xffffffff;
          pcVar3 = found;
          do {
            pcVar12 = pcVar3;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar12 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar12;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pbVar11 = (byte *)(pcVar12 + -uVar8);
          pbVar13 = pbVar10 + 3;
          for (i = uVar8 >> 2; i != 0; i = i - 1) {
            *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
            pbVar11 = pbVar11 + 4;
            pbVar13 = pbVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pbVar13 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            pbVar13 = pbVar13 + 1;
          }
        }
      }
    }
    else {
      *(undefined4 *)pbVar10 = DAT_00475741;
      found = strchr((char *)param_2,'.');
      if (found != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar3 = found;
        do {
          pcVar12 = pcVar3;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pbVar11 = (byte *)(pcVar12 + -uVar8);
        pbVar13 = pbVar10 + 3;
        for (i = uVar8 >> 2; i != 0; i = i - 1) {
          *(undefined4 *)pbVar13 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar13 = pbVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar13 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar13 = pbVar13 + 1;
        }
      }
    }
    puVar2 = PTR_DAT_00475910;
    pcVar3 = &DAT_00475763;
    puVar4 = param_2;
    do {
      if ((char)*puVar4 != *pcVar3) goto LAB_00459433;
      bVar14 = true;
      if ((char)*puVar4 == '\0') break;
      pcVar12 = (char *)((int)puVar4 + 1);
      if (*pcVar12 != pcVar3[1]) goto LAB_00459433;
      puVar4 = (uint *)((int)puVar4 + 2);
      pcVar3 = pcVar3 + 2;
      bVar14 = *pcVar12 == '\0';
    } while (!bVar14);
    if (bVar14) {
      FUN_00459a48((int)PTR_DAT_00475910);
      free();
      PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
    }
    else {
LAB_00459433:
      if (((*pbVar10 == 0x4c) && (pbVar10[1] == 0x43)) && (pbVar10[2] == 0x5f)) {
        free();
        uVar6 = FUN_00459df4((int *)PTR_DAT_00475910,(char *)param_2);
        return uVar6;
      }
      *(undefined4 *)(PTR_DAT_00475910 + 8) = 0;
      locale = FUN_00459634((int *)puVar2,pbVar10);
      if (locale == 0) {
        if (local_10 != 0) {
          free();
          PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
        }
        free();
        return 0;
      }
    }
  }
  *(LCID *)(PTR_DAT_00475910 + 4) = locale;
  free();
  ok = IsValidLocale(*(LCID *)(PTR_DAT_00475910 + 4),1);
  if ((ok == 0) && (*(int *)(PTR_DAT_00475910 + 8) == 0)) {
    SetLastError(0x20000103);
    if (local_10 != 0) {
      FUN_00459a48((int)PTR_DAT_00475910);
      free();
      PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
    }
    uVar6 = 0;
  }
  else {
    SetThreadLocale(*(LCID *)(PTR_DAT_00475910 + 4));
    if (*(int *)(PTR_DAT_00475910 + 8) == 0) {
      FUN_00459a48((int)PTR_DAT_00475910);
      iVar7 = FUN_0045988c((uint *)PTR_DAT_00475910,param_1);
      if (iVar7 == 0) {
        SetLastError(0x20000102);
        if (local_10 != 0) {
          FUN_00459a48((int)PTR_DAT_00475910);
          free();
          PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
        }
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_0045cf5c(*(UINT *)PTR_DAT_00475910);
        if ((iVar7 == 0) && (ok = GetCPInfo(*(UINT *)PTR_DAT_00475910,&cpInfo), ok != 0)) {
          _DAT_004756bc = cpInfo.MaxCharSize;
          FUN_0045a9c4();
          uVar6 = *(undefined4 *)(PTR_DAT_00475910 + 0x24);
        }
        else {
          SetLastError(0x20000106);
          uVar6 = 0;
        }
      }
    }
    else {
      _DAT_004756bc = 1;
      FUN_0045a9c4();
      uVar6 = *(undefined4 *)(PTR_DAT_00475910 + 0x24);
    }
  }
  return uVar6;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459634  FUN_00459634   (598 bytes)   [unnamed]
uint __cdecl FUN_00459634(int *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  LANGID LVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte lcData [64];
  CHAR lcData2 [8];
  char *found;
  byte *local_1c;
  undefined4 lcData3;
  uint locale;
  int local_10;
  int local_c;
  LCID locale2;
  
  local_10 = 1;
  locale = 0;
  uVar9 = 1;
  puVar10 = &DAT_004756c4 /* "none" */;
  pbVar5 = lcData;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pbVar5 = *puVar10;
    puVar10 = puVar10 + 1;
    pbVar5 = pbVar5 + 4;
  }
  bVar2 = false;
  lcData3 = DAT_00475704;
  FUN_0045aa5c(param_2);
  while ((!bVar2 && ((int)uVar9 < 0x39))) {
    locale2 = (LCID)(ushort)((ushort)uVar9 | 0x400);
    GetLocaleInfoA(locale2,0x1001,(LPSTR)lcData,0x40);
    GetLocaleInfoA(locale2,3,(LPSTR)&lcData3,4);
    FUN_0045aa5c(lcData);
    FUN_0045aa5c((byte *)&lcData3);
    pcVar4 = FUN_00455e58((char *)param_2,(char *)lcData);
    if (pcVar4 == (char *)0x0) {
      pbVar5 = (byte *)FUN_00455e58((char *)param_2,(char *)&lcData3);
      if (param_2 == pbVar5) {
        bVar2 = true;
      }
      else {
        uVar9 = uVar9 + 1;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (((bVar2) || (pcVar4 = strchr((char *)param_2,'_'), pcVar4 != (char *)0x0)) ||
     (pcVar4 = strchr((char *)param_2,'.'), pcVar4 != (char *)0x0)) {
    if (!bVar2) {
      if (param_1[1] == 0) {
        LVar3 = GetSystemDefaultLangID();
        uVar9 = (uint)LVar3;
      }
      else {
        uVar9 = param_1[1] & 0x3ff;
      }
    }
    pcVar4 = strchr((char *)param_2,'_');
    uVar8 = (ushort)uVar9;
    if (pcVar4 == (char *)0x0) {
      locale = (uint)(uVar8 | 0x400);
      local_1c = (byte *)0x0;
    }
    else {
      local_1c = (byte *)(pcVar4 + 1);
      found = strchr((char *)local_1c,'.');
      if (found != (char *)0x0) {
        *found = '\0';
      }
      local_c = 1;
      bVar2 = false;
      while ((!bVar2 && (local_c != 0))) {
        local_c = GetLocaleInfoA((uint)(ushort)((short)local_10 << 10 | uVar8),0x1002,
                                 (LPSTR)lcData,0x40);
        FUN_0045aa5c(lcData);
        pbVar5 = lcData;
        pbVar7 = local_1c;
        do {
          if (*pbVar5 != *pbVar7) goto LAB_004597ff;
          bVar11 = true;
          if (*pbVar5 == 0) break;
          pbVar1 = pbVar5 + 1;
          if (*pbVar1 != pbVar7[1]) goto LAB_004597ff;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
          bVar11 = *pbVar1 == 0;
        } while (!bVar11);
        if (bVar11) {
          bVar2 = true;
          locale = (uint)(ushort)((short)local_10 << 10 | uVar8);
        }
        else {
LAB_004597ff:
          local_10 = local_10 + 1;
        }
      }
      if (!bVar2) {
        SetLastError(0x20000101);
        return 0;
      }
      if (found != (char *)0x0) {
        *found = '.';
      }
    }
    local_1c = (byte *)strchr((char *)param_2,'.');
    if (local_1c == (byte *)0x0) {
      GetLocaleInfoA(locale,0xb,lcData2,7);
      iVar6 = atoi(lcData2);
      *param_1 = iVar6;
    }
    else {
      local_1c = local_1c + 1;
      iVar6 = atoi((char *)local_1c);
      *param_1 = iVar6;
    }
  }
  else {
    SetLastError(0x20000101);
    locale = 0;
  }
  return locale;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045988c  FUN_0045988c   (444 bytes)   [unnamed]
int __cdecl FUN_0045988c(uint *param_1,ushort param_2)

{
  bool bVar1;
  uint mem;
  undefined3 regHigh;
  undefined3 regHigh2;
  undefined3 regHigh3;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  if (param_1[9] != 0) {
    free();
  }
  param_1[9] = 0;
  if ((param_2 & 4) == 4) {
    mem = malloc();
    param_1[5] = mem;
    if (mem == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0045a354(param_1[1],(undefined2 *)param_1[5]);
    iVar3 = 0;
    if (CONCAT31(regHigh,bVar1) != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)"LC_MONETARY");
      iVar3 = CONCAT31(regHigh,bVar1) * iVar3;
    }
  }
  if ((param_2 & 0x20) == 0x20) {
    mem = malloc();
    param_1[8] = mem;
    if (mem == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0045a4d4(param_1[1],(undefined4 *)param_1[8]);
    iVar4 = iVar3 * CONCAT31(regHigh2,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)"LC_TIME");
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 0x10) == 0x10) {
    mem = malloc();
    param_1[6] = mem;
    if (mem == 0) {
      SetLastError(0xe);
      return 0;
    }
    bVar1 = FUN_0045a930(param_1[1],(undefined4 *)param_1[6]);
    iVar4 = iVar3 * CONCAT31(regHigh3,bVar1);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)"LC_NUMERIC");
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 1) == 1) {
    mem = malloc();
    param_1[7] = mem;
    if (mem == 0) {
      SetLastError(0xe);
      return 0;
    }
    iVar4 = FUN_0045a9b8();
    iVar4 = iVar3 * iVar4;
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = FUN_0045a014(param_1,(uint *)"LC_COLLATE");
      iVar3 = iVar4 * iVar3;
    }
  }
  if ((param_2 & 2) == 2) {
    mem = malloc();
    param_1[4] = mem;
    if (mem == 0) {
      SetLastError(0xe);
      iVar3 = 0;
    }
    else {
      iVar4 = FUN_0045a26c(param_1[1],*param_1,(undefined4 *)param_1[4]);
      iVar4 = iVar3 * iVar4;
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = FUN_0045a014(param_1,(uint *)"LC_CTYPE");
        iVar3 = iVar4 * iVar3;
      }
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459a48  FUN_00459a48   (937 bytes)   [unnamed]
void __cdecl FUN_00459a48(int param_1)

{
  if ((*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) &&
     (*(undefined1 **)(param_1 + 0x14) != &DAT_004757d4)) {
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) &&
     (*(undefined ***)(param_1 + 0x20) != &PTR_DAT_00475820)) {
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    free();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) &&
     (*(undefined ***)(param_1 + 0x18) != &PTR_DAT_00475808)) {
    free();
    free();
    free();
    free();
    free();
    free();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    free();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    free();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459df4  FUN_00459df4   (544 bytes)   [unnamed]
undefined4 __cdecl FUN_00459df4(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  BOOL ok;
  undefined4 uVar7;
  uint i;
  char *pcVar9;
  ushort uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  byte local_204 [256];
  char local_104 [256];
  
  uVar10 = 0;
  memset((undefined4 *)local_104,0,0x100);
  iVar3 = 0;
  do {
    if (*param_2 == '\0') {
      uVar5 = FUN_00459634(param_1,local_204);
      param_1[1] = uVar5;
      ok = IsValidLocale(param_1[1],1);
      if ((ok == 0) && (param_1[2] == 0)) {
        SetLastError(0x20000103);
        uVar7 = 0;
      }
      else {
        SetThreadLocale(*(LCID *)(PTR_DAT_00475910 + 4));
        FUN_00459a48((int)PTR_DAT_00475910);
        iVar3 = FUN_0045988c((uint *)PTR_DAT_00475910,uVar10);
        if (iVar3 == 0) {
          SetLastError(0x20000102);
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(PTR_DAT_00475910 + 0x24);
        }
      }
      return uVar7;
    }
    if (*param_2 == '=') {
      pcVar4 = local_104;
      pcVar9 = "LC_CTYPE";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00459e58;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00459e58;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 2;
      }
LAB_00459e58:
      pcVar4 = local_104;
      pcVar9 = "LC_TIME";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00459e85;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00459e85;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x20;
      }
LAB_00459e85:
      pcVar4 = local_104;
      pcVar9 = "LC_NUMERIC";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00459eb2;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00459eb2;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x10;
      }
LAB_00459eb2:
      pcVar4 = local_104;
      pcVar9 = "LC_MONETARY";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00459edf;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00459edf;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 4;
      }
LAB_00459edf:
      pcVar4 = local_104;
      pcVar9 = "LC_COLLATE";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_00459f0c;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_00459f0c;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 1;
      }
LAB_00459f0c:
      memset((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else if (*param_2 == '\n') {
      uVar5 = 0xffffffff;
      pcVar4 = local_104;
      do {
        pcVar9 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pbVar11 = (byte *)(pcVar9 + -uVar5);
      pbVar12 = local_204;
      for (i = uVar5 >> 2; i != 0; i = i - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar12 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      memset((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else {
      local_104[iVar3] = *param_2;
      iVar3 = iVar3 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a014  FUN_0045a014   (415 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a014(uint *param_1,uint *param_2)

{
  char *len;
  undefined4 *mem;
  char *len2;
  int cchData;
  uint uVar4;
  uint lcData [128];
  
  GetLocaleInfoA(param_1[1],0x1001,(LPSTR)lcData,0x200);
  FUN_00455ae4((char *)lcData,&DAT_004757cb);
  len = strlen(lcData);
  cchData = 0x200 - (int)len;
  len = strlen(lcData);
  GetLocaleInfoA(param_1[1],0x1002,len + (int)lcData,cchData);
  FUN_00455ae4((char *)lcData,&DAT_004757cd);
  uVar4 = 10;
  len = strlen(lcData);
  thunk_FUN_0045b7f8(*param_1,len + (int)lcData,uVar4);
  if (param_1[9] == 0) {
    strlen(param_2);
    strlen(lcData);
    mem = (undefined4 *)malloc();
    param_1[9] = (uint)mem;
    if (mem == (undefined4 *)0x0) {
      return 0;
    }
    len = strlen(param_2);
    len2 = strlen(lcData);
    memset(mem,0,(uint)(len + (int)len2 + 3));
  }
  else {
    strlen((uint *)param_1[9]);
    strlen(param_2);
    strlen(lcData);
    uVar4 = FUN_0044b964();
    param_1[9] = uVar4;
    if (param_1[9] == 0) {
      return 0;
    }
  }
  FUN_00455ae4((char *)param_1[9],(char *)param_2);
  FUN_00455ae4((char *)param_1[9],&DAT_004757cf);
  FUN_00455ae4((char *)param_1[9],(char *)lcData);
  FUN_00455ae4((char *)param_1[9],&DAT_004757d1);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a1b4  FUN_0045a1b4   (89 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a1b4(LCID locale,LCTYPE lcType,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetLocaleInfoA(locale,lcType,(LPSTR)*param_3,0);
  uVar2 = malloc();
  *param_3 = uVar2;
  if (param_3 == (undefined4 *)0x0) {
    SetLastError(0xe);
    uVar2 = 0;
  }
  else {
    iVar1 = GetLocaleInfoA(locale,lcType,(LPSTR)*param_3,iVar1 + 1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a210  FUN_0045a210   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a210(LCID locale,LCTYPE lcType,undefined2 *param_3,int param_4)

{
  char *lpLCData;
  undefined4 uVar1;
  int iVar2;
  
  lpLCData = (char *)malloc();
  if (lpLCData == (char *)0x0) {
    SetLastError(0xe);
    uVar1 = 0;
  }
  else {
    iVar2 = GetLocaleInfoA(locale,lcType,lpLCData,param_4 + 1);
    if (iVar2 == 0) {
      free();
      uVar1 = 0;
    }
    else {
      iVar2 = atoi(lpLCData);
      *param_3 = (short)iVar2;
      free();
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a26c  FUN_0045a26c   (232 bytes)   [unnamed]
undefined4 __cdecl FUN_0045a26c(LCID locale,UINT codePage,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCSTR lpSrcStr;
  int iVar2;
  BOOL ok;
  uint uVar4;
  LPCSTR pCVar5;
  BYTE *pBVar6;
  _cpinfo cpInfo;
  
  if (locale == 0) {
    memcpy(param_3,(undefined4 *)&DAT_0047522e,0x100);
    uVar1 = 1;
  }
  else {
    lpSrcStr = (LPCSTR)malloc();
    if (lpSrcStr == (LPCSTR)0x0) {
      SetLastError(0xe);
      uVar1 = 0;
    }
    else {
      iVar2 = 0;
      pCVar5 = lpSrcStr;
      do {
        GH_WRITABLE(*pCVar5) = (CHAR)iVar2;
        pCVar5 = pCVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      ok = GetCPInfo(codePage,&cpInfo);
      if (ok == 0) {
        free();
        uVar1 = 0;
      }
      else {
        if (1 < cpInfo.MaxCharSize) {
          for (pBVar6 = cpInfo.LeadByte; (*pBVar6 != 0 && (pBVar6[1] != 0)); pBVar6 = pBVar6 + 2)
          {
            uVar4 = (uint)*pBVar6;
            pCVar5 = lpSrcStr + uVar4;
            for (; (int)uVar4 <= (int)(uint)pBVar6[1]; uVar4 = uVar4 + 1) {
              GH_WRITABLE(*pCVar5) = '\0';
              pCVar5 = pCVar5 + 1;
            }
          }
        }
        *(undefined2 *)param_3 = 0;
        ok = GetStringTypeA(locale,1,lpSrcStr,0x100,(LPWORD)((int)param_3 + 2));
        if (ok == 0) {
          free();
          uVar1 = 0;
        }
        else {
          free();
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a354  FUN_0045a354   (383 bytes)   [unnamed]
bool __cdecl FUN_0045a354(LCID locale,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int i;
  undefined **ppuVar20;
  undefined4 local_34 [12];
  
  ppuVar20 = &PTR_DAT_00475a34;
  puVar18 = local_34;
  for (i = 0xc; i != 0; i = i + -1) {
    *puVar18 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar1 = FUN_0045a1b4(locale,0x16,(undefined4 *)(param_2 + 0xc));
  uVar2 = FUN_0045a1b4(locale,0x17,(undefined4 *)(param_2 + 10));
  uVar3 = FUN_0045a1b4(locale,0x14,(undefined4 *)(param_2 + 0xe));
  uVar4 = FUN_0045a1b4(locale,0x15,(undefined4 *)(param_2 + 0x10));
  uVar5 = FUN_0045a1b4(locale,0x18,(undefined4 *)(param_2 + 0x12));
  uVar6 = FUN_0045a1b4(locale,0x50,(undefined4 *)(param_2 + 0x14));
  uVar7 = FUN_0045a1b4(locale,0x51,(undefined4 *)(param_2 + 0x16));
  uVar8 = FUN_0045a210(locale,0x19,param_2,3);
  uVar9 = FUN_0045a210(locale,0x1a,param_2 + 1,3);
  uVar10 = FUN_0045a210(locale,0x1b,param_2 + 2,2);
  uVar11 = FUN_0045a210(locale,0x1c,param_2 + 3,3);
  uVar12 = FUN_0045a210(locale,0x52,param_2 + 4,2);
  uVar13 = FUN_0045a210(locale,0x53,param_2 + 5,3);
  uVar14 = FUN_0045a210(locale,0x54,param_2 + 6,2);
  uVar15 = FUN_0045a210(locale,0x55,param_2 + 7,2);
  uVar16 = FUN_0045a210(locale,0x56,param_2 + 8,2);
  uVar17 = FUN_0045a210(locale,0x57,param_2 + 9,2);
  puVar18 = FUN_00455d60((uint *)local_34[(short)param_2[3]]);
  *(undefined4 **)(param_2 + 0x18) = puVar18;
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
          uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a4d4  FUN_0045a4d4   (1116 bytes)   [unnamed]
bool __cdecl FUN_0045a4d4(LCID locale,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined4 *puVar53;
  uint local_44 [16];
  
  uVar1 = FUN_0045a1b4(locale,0x1d,param_2);
  uVar2 = FUN_0045a1b4(locale,0x1e,param_2 + 1);
  uVar3 = FUN_0045a1b4(locale,0x1003,param_2 + 2);
  uVar4 = FUN_0045a1b4(locale,0x1f,param_2 + 3);
  uVar5 = FUN_0045a1b4(locale,0x20,param_2 + 4);
  uVar6 = FUN_0045a1b4(locale,0x28,param_2 + 5);
  uVar7 = FUN_0045a1b4(locale,0x29,param_2 + 6);
  uVar8 = FUN_0045a1b4(locale,0x2a,param_2 + 0xb);
  uVar9 = FUN_0045a1b4(locale,0x2b,param_2 + 0xc);
  uVar10 = FUN_0045a1b4(locale,0x2c,param_2 + 0xd);
  uVar11 = FUN_0045a1b4(locale,0x2d,param_2 + 0xe);
  uVar12 = FUN_0045a1b4(locale,0x2e,param_2 + 0xf);
  uVar13 = FUN_0045a1b4(locale,0x2f,param_2 + 0x10);
  uVar14 = FUN_0045a1b4(locale,0x30,param_2 + 0x11);
  uVar15 = FUN_0045a1b4(locale,0x31,param_2 + 0x12);
  uVar16 = FUN_0045a1b4(locale,0x32,param_2 + 0x13);
  uVar17 = FUN_0045a1b4(locale,0x33,param_2 + 0x14);
  uVar18 = FUN_0045a1b4(locale,0x34,param_2 + 0x15);
  uVar19 = FUN_0045a1b4(locale,0x35,param_2 + 0x16);
  uVar20 = FUN_0045a1b4(locale,0x36,param_2 + 0x17);
  uVar21 = FUN_0045a1b4(locale,0x37,param_2 + 0x18);
  uVar22 = FUN_0045a1b4(locale,0x38,param_2 + 0x19);
  uVar23 = FUN_0045a1b4(locale,0x39,param_2 + 0x1a);
  uVar24 = FUN_0045a1b4(locale,0x3a,param_2 + 0x1b);
  uVar25 = FUN_0045a1b4(locale,0x3b,param_2 + 0x1c);
  uVar26 = FUN_0045a1b4(locale,0x3c,param_2 + 0x1d);
  uVar27 = FUN_0045a1b4(locale,0x3d,param_2 + 0x1e);
  uVar28 = FUN_0045a1b4(locale,0x3e,param_2 + 0x1f);
  uVar29 = FUN_0045a1b4(locale,0x3f,param_2 + 0x20);
  uVar30 = FUN_0045a1b4(locale,0x40,param_2 + 0x21);
  uVar31 = FUN_0045a1b4(locale,0x41,param_2 + 0x22);
  uVar32 = FUN_0045a1b4(locale,0x42,param_2 + 0x23);
  uVar33 = FUN_0045a1b4(locale,0x43,param_2 + 0x24);
  uVar34 = FUN_0045a1b4(locale,0x44,param_2 + 0x25);
  uVar35 = FUN_0045a1b4(locale,0x45,param_2 + 0x26);
  uVar36 = FUN_0045a1b4(locale,0x46,param_2 + 0x27);
  uVar37 = FUN_0045a1b4(locale,0x47,param_2 + 0x28);
  uVar38 = FUN_0045a1b4(locale,0x48,param_2 + 0x29);
  uVar39 = FUN_0045a1b4(locale,0x49,param_2 + 0x2a);
  uVar40 = FUN_0045a1b4(locale,0x4a,param_2 + 0x2b);
  uVar41 = FUN_0045a1b4(locale,0x4b,param_2 + 0x2c);
  uVar42 = FUN_0045a1b4(locale,0x4c,param_2 + 0x2d);
  uVar43 = FUN_0045a1b4(locale,0x4d,param_2 + 0x2e);
  uVar44 = FUN_0045a1b4(locale,0x4e,param_2 + 0x2f);
  uVar45 = FUN_0045a1b4(locale,0x4f,param_2 + 0x30);
  uVar46 = FUN_0045a210(locale,0x21,(undefined2 *)(param_2 + 7),2);
  uVar47 = FUN_0045a210(locale,0x22,(undefined2 *)((int)param_2 + 0x1e),2);
  uVar48 = FUN_0045a210(locale,0x23,(undefined2 *)(param_2 + 8),2);
  uVar49 = FUN_0045a210(locale,0x24,(undefined2 *)((int)param_2 + 0x22),1);
  uVar50 = FUN_0045a210(locale,0x25,(undefined2 *)(param_2 + 9),2);
  uVar51 = FUN_0045a210(locale,0x26,(undefined2 *)((int)param_2 + 0x26),2);
  uVar52 = FUN_0045a210(locale,0x27,(undefined2 *)(param_2 + 10),2);
  uVar52 = uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
           uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 & uVar20 &
           uVar21 & uVar22 & uVar23 & uVar24 & uVar25 & uVar26 & uVar27 & uVar28 & uVar29 & uVar30 &
           uVar31 & uVar32 & uVar33 & uVar34 & uVar35 & uVar36 & uVar37 & uVar38 & uVar39 & uVar40 &
           uVar41 & uVar42 & uVar43 & uVar44 & uVar45 & uVar46 & uVar47 & uVar48 & uVar49 & uVar50 &
           uVar51 & uVar52;
  if (uVar52 != 0) {
    FUN_00458a78((char *)param_2[2],(char *)local_44,0x40);
    free();
    puVar53 = FUN_00455d60(local_44);
    param_2[2] = puVar53;
    FUN_00458a78((char *)param_2[3],(char *)local_44,0x40);
    free();
    puVar53 = FUN_00455d60(local_44);
    param_2[3] = puVar53;
    FUN_00458a78((char *)param_2[4],(char *)local_44,0x40);
    free();
    puVar53 = FUN_00455d60(local_44);
    param_2[4] = puVar53;
  }
  return uVar52 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a930  FUN_0045a930   (136 bytes)   [unnamed]
bool __cdecl FUN_0045a930(LCID locale,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_0045a1b4(locale,0xe,param_2 + 1);
  uVar2 = FUN_0045a1b4(locale,0xf,param_2);
  uVar3 = FUN_0045a1b4(locale,0x10,param_2 + 2);
  uVar4 = FUN_0045a1b4(locale,0x50,param_2 + 3);
  uVar5 = FUN_0045a1b4(locale,0x51,param_2 + 4);
  uVar6 = FUN_0045a210(locale,0x11,(undefined2 *)(param_2 + 5),3);
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a9b8  FUN_0045a9b8   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0045a9b8(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a9c4  FUN_0045a9c4   (151 bytes)   [unnamed]
undefined ** __stdcall FUN_0045a9c4(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  memset((undefined4*)&PTR_DAT_00475430,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_00475910 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00475430 = (undefined *)puVar1[1];
    PTR_DAT_00475434 = (undefined *)*puVar1;
    PTR_DAT_00475438 = (undefined *)puVar1[2];
    PTR_DAT_00475450 = (undefined *)puVar1[3];
    PTR_DAT_00475454 = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_00475910 + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_0047543c = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00475440 = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00475444 = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00475448 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_0047544c = *(undefined **)(puVar2 + 0x24);
    DAT_00475458 = puVar2[2];
    DAT_00475459 = *puVar2;
    DAT_0047545a = puVar2[0xc];
    DAT_0047545b = puVar2[0xe];
    DAT_0047545c = puVar2[0x10];
    DAT_0047545d = puVar2[0x12];
    DAT_0047545e = puVar2[8];
    DAT_0047545f = puVar2[10];
  }
  return &PTR_DAT_00475430;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aa5c  FUN_0045aa5c   (36 bytes)   [unnamed]
byte * __cdecl FUN_0045aa5c(byte *param_1)

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
// 0x0045aa80  tolower   (84 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00424238.
uint __cdecl tolower(uint ch)

{
  uint destStr;
  
  destStr = 0;
  if (ch == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_00475910 + 8) != 0) {
    return (uint)(byte)(&DAT_004754bc)[ch & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_00475910 + 4),0x100,(LPCSTR)&ch,1,(LPSTR)&destStr,4);
  return destStr;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aad4  toupper   (84 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0042428c.
uint __cdecl toupper(uint ch)

{
  uint destStr;
  
  destStr = 0;
  if (ch == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_00475910 + 8) != 0) {
    return (uint)(byte)(&DAT_004755bc)[ch & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_00475910 + 4),0x200,(LPCSTR)&ch,1,(LPSTR)&destStr,4);
  return destStr;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ab28  FUN_0045ab28   (122 bytes)   [unnamed]
undefined4 __cdecl FUN_0045ab28(byte *multiByteStr,int param_2)

{
  int iVar1;
  
  if (((multiByteStr != (byte *)0x0) && (*multiByteStr != 0)) && (param_2 != 0)) {
    if (((&DAT_00477b8d)[*multiByteStr] & 4) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,9,(LPCSTR)multiByteStr,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    if (1 < param_2) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,9,(LPCSTR)multiByteStr,2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        return 2;
      }
    }
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045aba4  FUN_0045aba4   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_0045aba4(LPWSTR wideCharStr,byte *multiByteStr,int param_3)

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
  else if (*(int *)(PTR_DAT_00475910 + 8) == 0) {
    if (((&DAT_00477b8d)[*multiByteStr] & 4) == 0) {
      iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,9,(LPCSTR)multiByteStr,1,wideCharStr,
                                  (uint)(wideCharStr != (LPWSTR)0x0));
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (((param_3 < 2) ||
             (iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,9,(LPCSTR)multiByteStr,2,wideCharStr,
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
// 0x0045ac78  FUN_0045ac78   (113 bytes)   [unnamed]
int __cdecl FUN_0045ac78(LPSTR multiByteStr,ushort wideCharStr)

{
  int iVar1;
  BOOL ok;
  
  if (multiByteStr == (LPSTR)0x0) {
    return 0;
  }
  if (*(int *)(PTR_DAT_00475910 + 8) != 0) {
    if (0xff < wideCharStr) {
      return -1;
    }
    *multiByteStr = (CHAR)wideCharStr;
    return 1;
  }
  ok = 0;
  iVar1 = WideCharToMultiByte(*(UINT *)PTR_DAT_00475910,0x220,(LPCWSTR)&wideCharStr,1,multiByteStr,2,
                              (LPCSTR)0x0,&ok);
  if ((iVar1 != 0) && (ok == 0)) {
    return iVar1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045acec  FUN_0045acec   (295 bytes, 2 ranges)   [unnamed]
char * __cdecl FUN_0045acec(LPWSTR wideCharStr,uint *multiByteStr,char *wideChar)

{
  int iVar1;
  DWORD lastError;
  uint *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  if ((wideCharStr == (LPWSTR)0x0) || (wideChar != (char *)0x0)) {
    if (wideCharStr == (LPWSTR)0x0) {
      if (*(int *)(PTR_DAT_00475910 + 8) == 0) {
        iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,9,(LPCSTR)multiByteStr,-1,(LPWSTR)0x0,0);
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
    else if (*(int *)(PTR_DAT_00475910 + 8) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,9,(LPCSTR)multiByteStr,-1,wideCharStr,
                                  (int)wideChar);
      if (iVar1 == 0) {
        lastError = GetLastError();
        puVar3 = multiByteStr;
        pcVar4 = wideChar;
        if (lastError == 0x7a) {
          for (; (pcVar4 != (char *)0x0 && ((byte)*puVar3 != 0)); puVar3 = (uint *)((int)puVar3 + 1)
              ) {
            if (((&DAT_00477b8d)[(byte)*puVar3] & 4) != 0) {
              puVar3 = (uint *)((int)puVar3 + 1);
            }
            pcVar4 = pcVar4 + -1;
          }
          pcVar4 = (char *)MultiByteToWideChar(*(UINT *)PTR_DAT_00475910,1,(LPCSTR)multiByteStr,
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
// 0x0045ae18  FUN_0045ae18   (57 bytes)   [unnamed]
int __cdecl FUN_0045ae18(short *param_1,int param_2)

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
// 0x0045ae54  FUN_0045ae54   (420 bytes)   [unnamed]
uint __cdecl FUN_0045ae54(LPSTR multiByteStr,LPCWSTR wideCharStr,uint multiByte)

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
      if (*(int *)(PTR_DAT_00475910 + 8) == 0) {
        iVar6 = WideCharToMultiByte(*(UINT *)PTR_DAT_00475910,0x220,wideCharStr,-1,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,&ok);
        if ((iVar6 == 0) || (ok != 0)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = iVar6 - 1;
        }
      }
      else {
        uVar5 = FUN_00455eac((short *)wideCharStr);
      }
    }
    else if (*(int *)(PTR_DAT_00475910 + 8) == 0) {
      uVar5 = WideCharToMultiByte(*(UINT *)PTR_DAT_00475910,0x220,wideCharStr,-1,multiByteStr,multiByte,
                                  (LPCSTR)0x0,&ok);
      if ((uVar5 == 0) || (ok != 0)) {
        if ((ok == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
          while (uVar5 < multiByte) {
            local_8 = WideCharToMultiByte(*(UINT *)PTR_DAT_00475910,0,wideCharStr,1,multiByteStr2,2,
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
// 0x0045aff8  FUN_0045aff8   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0045aff8(ushort param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004590e4(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b0ab  FUN_0045b0ab   (73 bytes)   [unnamed]
int FUN_0045b0ab(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

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
// 0x0045b16e  FUN_0045b16e   (78 bytes)   [unnamed]
uint FUN_0045b16e(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

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
// 0x0045b210  thunk → FUN_0045b7f8   (5 bytes)   [unnamed]
void __cdecl thunk_FUN_0045b7f8(uint param_1,char *param_2,uint param_3)

{
  FUN_0045b718(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b218  FUN_0045b218   (364 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0045b218(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b3a0  atoi   (103 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00424b58.
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
    iVar1 = FUN_0045d0f4((int)ch);
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
// 0x0045b408  FUN_0045b408   (15 bytes)   [unnamed]
void __cdecl FUN_0045b408(char *s)

{
  atoi(s);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b418  FUN_0045b418   (19 bytes)   [unnamed]
undefined2 __stdcall FUN_0045b418(void)

{
  undefined2 in_FPUStatusWord;
  
  return in_FPUStatusWord;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b42c  FUN_0045b42c   (47 bytes)   [unnamed]
uint __cdecl FUN_0045b42c(uint param_1,int param_2)

{
  ushort in_FPUControlWord;
  
  if (param_2 != 0) {
    (*(uint *)&DAT_00475c2c) = param_1;
  }
  return param_1 & param_2 | (uint)in_FPUControlWord & ~param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b45c  thunk → FUN_0045b474   (6 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall thunk_FUN_0045b474(void)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0045b45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ((code *)_DAT_00475b5c)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b462  thunk → FUN_0045b474   (6 bytes)   [unnamed]
undefined4 __stdcall thunk_FUN_0045b474_45b462(void)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0045b462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_FUN_00475b60)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b474  FUN_0045b474   (12 bytes)   [unnamed]
undefined4 __stdcall FUN_0045b474(void)

{
  undefined4 in_EAX;
  
  FUN_0045d560((uint *)"printf : floating point formats not linked");
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b4a4  FUN_0045b4a4   (22 bytes)   [unnamed]
void __stdcall FUN_0045b4a4(void)

{
  FUN_0045b42c(DAT_00475c2c,0x1fff);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b4bc  __ftol   (40 bytes)   [analysis (matched TEA.exe)]
//   identical body to TEA.exe 0x004e3c04. converts the FPU top-of-stack to a 32-bit integer (rounded); the floating-point operands of its callers are not visible in the decompiled code
undefined4 __stdcall __ftol(void)

{
  longdouble in_ST0;
  undefined4 result;
  
  result = (undefined4)(longlong)ROUND(in_ST0);
  return result;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b4e4  FUN_0045b4e4   (45 bytes)   [unnamed]
void __cdecl FUN_0045b4e4(int param_1)

{
  if ((*(byte *)(param_1 + 7) & 0x80) == 0) {
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b514  FUN_0045b514   (33 bytes)   [unnamed]
void __cdecl FUN_0045b514(longlong *param_1,longdouble *param_2)

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
// 0x0045b538  FUN_0045b538   (17 bytes)   [unnamed]
ushort __cdecl FUN_0045b538(longdouble *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longdouble)0;
  return (ushort)NAN(lVar1) << 8 | (ushort)(lVar1 < lVar2) << 9 | (ushort)(lVar1 != lVar2) << 10 |
         (ushort)(lVar1 == lVar2) << 0xe;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b54c  FUN_0045b54c   (177 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0045b579) */
char * __cdecl FUN_0045b54c(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6)

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
        uVar2 = FUN_0045b16e(param_1,param_2,in_ECX,param_4,(int)param_4 >> 0x1f);
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        param_1 = FUN_0045b0ab(param_1,param_2,extraout_ECX,param_4,(int)param_4 >> 0x1f);
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
// 0x0045b600  FUN_0045b600   (279 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0045b600(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

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
      uVar1 = FUN_0045b42c(0,0);
      FUN_0045b42c(0xc00,0xc00);
      FUN_0045b42c(uVar1,0xc00);
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
  _DAT_00475dd8 = 0x22;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b718  FUN_0045b718   (113 bytes)   [unnamed]
char * __cdecl FUN_0045b718(uint param_1,char *param_2,uint param_3,char param_4,char param_5)

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
// 0x0045b78c  FUN_0045b78c   (27 bytes)   [unnamed]
void __cdecl FUN_0045b78c(uint param_1,char *param_2)

{
  FUN_0045b718(param_1,param_2,10,'\0','a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b7a8  FUN_0045b7a8   (48 bytes)   [unnamed]
void __cdecl FUN_0045b7a8(uint param_1,char *param_2,uint param_3)

{
  FUN_0045b718(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b7d8  FUN_0045b7d8   (29 bytes)   [unnamed]
void __cdecl FUN_0045b7d8(uint param_1,char *param_2,uint param_3)

{
  FUN_0045b718(param_1,param_2,param_3,'\0','a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b7f8  FUN_0045b7f8   (37 bytes)   [unnamed]
void __cdecl FUN_0045b7f8(uint param_1,char *param_2,uint param_3)

{
  FUN_0045b718(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b820  FUN_0045b820   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b820(int *param_1)

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
// 0x0045b84c  FUN_0045b84c   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b84c(int *param_1)

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
// 0x0045b87c  FUN_0045b87c   (22 bytes)   [unnamed]
void __cdecl FUN_0045b87c(undefined *param_1,undefined *param_2)

{
  PTR_FUN_00475cb4 = param_1;
  PTR_FUN_00475cb8 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b894  FUN_0045b894   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b894(undefined4 *param_1)

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
// 0x0045b8bc  FUN_0045b8bc   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_0045b8bc(uint *param_1,uint param_2)

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
// 0x0045b8ec  FUN_0045b8ec   (65 bytes)   [unnamed]
uint __cdecl FUN_0045b8ec(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00458d3c(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_0045b91e;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_0045b91e:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b930  FUN_0045b930   (645 bytes)   [unnamed]
byte * __cdecl FUN_0045b930(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6)

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
  
  pbVar2 = (byte *)FUN_00458d3c(0xe);
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
  iVar3 = FUN_0045c994(param_1,uVar6,&local_8,(undefined4 *)local_3c,param_6);
  if (iVar3 == 0x7fff) {
    if (local_8 == 0) {
      pcVar4 = &DAT_00475cc1 /* "+INF" */;
    }
    else {
      pcVar4 = &DAT_00475cbc /* "-INF" */;
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
      pcVar4 = &DAT_00475ccb /* "+NAN" */;
    }
    else {
      pcVar4 = &DAT_00475cc6 /* "-NAN" */;
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
    if ((local_d != 0x47) || (iVar3 < -3)) goto LAB_0045bafa;
    uVar6 = param_2;
    if (param_2 == 0) {
      uVar6 = 1;
    }
    if ((int)uVar6 < iVar3) goto LAB_0045bafa;
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
      pbVar5 = (byte *)FUN_0045b8ec(param_4,(uint)param_3,(uint)pbVar2);
      pbVar2 = pbVar5;
    }
    if (pbVar2 == param_3) {
      *pbVar2 = 0x30;
      pbVar2 = pbVar2 + 1;
    }
    *pbVar2 = 0;
    return pbVar5;
  }
LAB_0045bafa:
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
      pbVar5 = (byte *)FUN_0045b8ec(param_4,(uint)param_3,(uint)pbVar5);
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
// 0x0045bbb8  FUN_0045bbb8   (22 bytes)   [unnamed]
int __cdecl FUN_0045bbb8(int param_1,int param_2)

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
// 0x0045bbe8  FUN_0045bbe8   (74 bytes)   [unnamed]
uint __cdecl FUN_0045bbe8(short param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_00458d3c(0xe);
  if ((param_1 == 0x47) || (uVar1 = param_3, param_1 == 0x67)) {
    do {
      uVar1 = param_3;
      if (*(short *)(param_3 - 2) != 0x30) goto LAB_0045bc1f;
      param_3 = param_3 - 2;
    } while (param_2 < param_3);
  }
  else {
LAB_0045bc1f:
    param_2 = uVar1;
    if (*psVar2 == *(short *)(param_2 - 2)) {
      param_2 = param_2 - 2;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bc34  FUN_0045bc34   (695 bytes)   [unnamed]
void __cdecl FUN_0045bc34(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6)

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
  
  puVar1 = (ushort *)FUN_00458d3c(0xe);
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
  iVar2 = FUN_0045cc68(param_1,iVar2,&local_8,local_68,param_6);
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pwVar3 = L"+INF";
    }
    else {
      pwVar3 = L"-INF";
    }
    FUN_00455ec4((short *)param_3,pwVar3);
    return;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pwVar3 = L"+NAN";
    }
    else {
      pwVar3 = L"-NAN";
    }
    FUN_00455ec4((short *)param_3,pwVar3);
    return;
  }
  puVar1 = param_3;
  if (local_8 != 0) {
    *param_3 = 0x2d;
    puVar1 = param_3 + 1;
  }
  if (local_e != 0x46) {
    if ((local_e != 0x47) || (iVar2 < -3)) goto LAB_0045bdff;
    iVar7 = param_2;
    if (param_2 == 0) {
      iVar7 = 1;
    }
    if (iVar7 < iVar2) goto LAB_0045bdff;
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
      puVar1 = (ushort *)FUN_0045bbe8(param_4,(uint)param_3,(uint)puVar1);
    }
    if (puVar1 == param_3) {
      *puVar1 = 0x30;
      puVar1 = puVar1 + 1;
    }
    *puVar1 = 0;
    return;
  }
LAB_0045bdff:
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
      puVar4 = (ushort *)FUN_0045bbe8(param_4,(uint)param_3,(uint)puVar4);
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
// 0x0045beec  FUN_0045beec   (22 bytes)   [unnamed]
int __cdecl FUN_0045beec(int param_1,int param_2)

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
// 0x0045bf1c  FUN_0045bf1c   (1097 bytes)   [unnamed]
void __cdecl FUN_0045bf1c(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

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
  pbVar3 = (byte *)FUN_00458d3c(0xe);
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
      goto LAB_0045c250;
    }
    if ((ch & 0x80) != 0) break;
    uVar11 = ch;
    uVar6 = FUN_0045d0f4(ch);
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
      if (ch != 0x2d) goto LAB_0045bfdd;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar10, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar11 = param_4;
      uVar5 = (*(code *)param_2)();
      ch = uVar5;
      iVar8 = iVar9;
LAB_0045bfdd:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (ch == 0x49) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)(uVar5,param_4,uVar11);
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_0045c24b;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x46)) goto LAB_0045c24b;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00475cfc,DAT_00475cf8));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d00,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00475d06,DAT_00475d02));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d0a,local_28);
          }
          goto LAB_0045c220;
        }
        if (ch == 0x4e) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x41)) goto LAB_0045c24b;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_0045c24b;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_00475d10,DAT_00475d0c));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d14,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_00475d1a,DAT_00475d16));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_00475d1e,local_28);
          }
          goto LAB_0045c220;
        }
      }
      local_e = '\0';
      iVar9 = iVar8;
      iVar10 = local_c;
      if (ch == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_0045c0c3;
        local_8 = iVar8;
        if (iVar8 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)ch < 0x30) || (0x39 < (int)ch)) goto LAB_0045c0c3;
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
          iVar7 = FUN_0045b8bc(&local_40,ch);
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
LAB_0045c0c3:
  iVar10 = param_5;
  if (iVar9 == -2) {
LAB_0045c24b:
    param_5 = iVar10;
    local_1c = 0;
LAB_0045c250:
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
LAB_0045c0eb:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar8 = (*(code *)param_2)();
        if (!bVar2) goto LAB_0045c118;
        bVar2 = false;
        if (iVar8 != 0x2d) goto LAB_0045c113;
        local_10 = '\x01';
      }
    }
    else {
LAB_0045c13e:
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
      FUN_0045b4e4((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar10 != 0) {
        FUN_0045b218();
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
LAB_0045c220:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_0045c113:
  if (iVar8 != 0x2b) {
LAB_0045c118:
    if ((iVar8 < 0x30) || (0x39 < iVar8)) goto LAB_0045c13e;
    iVar10 = iVar8 + iVar10 * 10 + -0x30;
    if (0x1344 < iVar10) {
      local_11 = '\x01';
    }
  }
  goto LAB_0045c0eb;
}

} // namespace tea
