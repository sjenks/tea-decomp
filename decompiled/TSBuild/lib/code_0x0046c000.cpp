// TSBuild.exe — runtime / library code "code_0x0046c000"
// 83 functions, 0x0046c170..0x0046ff70. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0046c170  FUN_0046c170   (937 bytes)   [unnamed]
void __cdecl FUN_0046c170(int param_1)

{
  if ((*(undefined1 **)(param_1 + 0x14) != (undefined1 *)0x0) &&
     (*(undefined1 **)(param_1 + 0x14) != &DAT_0048a1cc)) {
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
     (*(undefined ***)(param_1 + 0x20) != &PTR_DAT_0048a218)) {
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
     (*(undefined ***)(param_1 + 0x18) != &PTR_DAT_0048a200)) {
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
// 0x0046c51c  FUN_0046c51c   (544 bytes)   [unnamed]
undefined4 __cdecl FUN_0046c51c(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  undefined4 uVar7;
  uint uVar8;
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
      uVar5 = FUN_0046bd5c(param_1,local_204);
      param_1[1] = uVar5;
      BVar6 = IsValidLocale(param_1[1],1);
      if ((BVar6 == 0) && (param_1[2] == 0)) {
        SetLastError(0x20000103);
        uVar7 = 0;
      }
      else {
        SetThreadLocale(*(LCID *)(PTR_DAT_0048a308 + 4));
        FUN_0046c170((int)PTR_DAT_0048a308);
        iVar3 = FUN_0046bfb4((uint *)PTR_DAT_0048a308,uVar10);
        if (iVar3 == 0) {
          SetLastError(0x20000102);
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(PTR_DAT_0048a308 + 0x24);
        }
      }
      return uVar7;
    }
    if (*param_2 == '=') {
      pcVar4 = local_104;
      pcVar9 = "LC_CTYPE";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0046c580;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0046c580;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 2;
      }
LAB_0046c580:
      pcVar4 = local_104;
      pcVar9 = "LC_TIME";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0046c5ad;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0046c5ad;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x20;
      }
LAB_0046c5ad:
      pcVar4 = local_104;
      pcVar9 = "LC_NUMERIC";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0046c5da;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0046c5da;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x10;
      }
LAB_0046c5da:
      pcVar4 = local_104;
      pcVar9 = "LC_MONETARY";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0046c607;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0046c607;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 4;
      }
LAB_0046c607:
      pcVar4 = local_104;
      pcVar9 = "LC_COLLATE";
      do {
        if (*pcVar4 != *pcVar9) goto LAB_0046c634;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_0046c634;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 1;
      }
LAB_0046c634:
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
      for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
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
// 0x0046c73c  FUN_0046c73c   (415 bytes)   [unnamed]
undefined4 __cdecl FUN_0046c73c(uint *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int cchData;
  uint uVar4;
  uint local_204 [128];
  
  GetLocaleInfoA(param_1[1],0x1001,(LPSTR)local_204,0x200);
  FUN_00467694((char *)local_204,&DAT_0048a1c3);
  pcVar1 = strlen(local_204);
  cchData = 0x200 - (int)pcVar1;
  pcVar1 = strlen(local_204);
  GetLocaleInfoA(param_1[1],0x1002,pcVar1 + (int)local_204,cchData);
  FUN_00467694((char *)local_204,&DAT_0048a1c5);
  uVar4 = 10;
  pcVar1 = strlen(local_204);
  thunk_FUN_0046e158(*param_1,pcVar1 + (int)local_204,uVar4);
  if (param_1[9] == 0) {
    strlen(param_2);
    strlen(local_204);
    puVar2 = (undefined4 *)malloc();
    param_1[9] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pcVar1 = strlen(param_2);
    pcVar3 = strlen(local_204);
    memset(puVar2,0,(uint)(pcVar1 + (int)pcVar3 + 3));
  }
  else {
    strlen((uint *)param_1[9]);
    strlen(param_2);
    strlen(local_204);
    uVar4 = FUN_00456ea4();
    param_1[9] = uVar4;
    if (param_1[9] == 0) {
      return 0;
    }
  }
  FUN_00467694((char *)param_1[9],(char *)param_2);
  FUN_00467694((char *)param_1[9],&DAT_0048a1c7);
  FUN_00467694((char *)param_1[9],(char *)local_204);
  FUN_00467694((char *)param_1[9],&DAT_0048a1c9);
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c8dc  FUN_0046c8dc   (89 bytes)   [unnamed]
undefined4 __cdecl FUN_0046c8dc(LCID param_1,LCTYPE param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,0);
  uVar2 = malloc();
  *param_3 = uVar2;
  if (param_3 == (undefined4 *)0x0) {
    SetLastError(0xe);
    uVar2 = 0;
  }
  else {
    iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)*param_3,iVar1 + 1);
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
// 0x0046c938  FUN_0046c938   (92 bytes)   [unnamed]
undefined4 __cdecl FUN_0046c938(LCID param_1,LCTYPE param_2,undefined2 *param_3,int param_4)

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
    iVar2 = GetLocaleInfoA(param_1,param_2,lpLCData,param_4 + 1);
    if (iVar2 == 0) {
      free();
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_0046db78(lpLCData);
      *param_3 = (short)iVar2;
      free();
      uVar1 = 1;
    }
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046c994  FUN_0046c994   (232 bytes)   [unnamed]
undefined4 __cdecl FUN_0046c994(LCID param_1,UINT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCSTR lpSrcStr;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  BYTE *pBVar6;
  _cpinfo local_18;
  
  if (param_1 == 0) {
    memcpy(param_3,(undefined4 *)&DAT_00489c26,0x100);
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
      BVar3 = GetCPInfo(param_2,&local_18);
      if (BVar3 == 0) {
        free();
        uVar1 = 0;
      }
      else {
        if (1 < local_18.MaxCharSize) {
          for (pBVar6 = local_18.LeadByte; (*pBVar6 != 0 && (pBVar6[1] != 0)); pBVar6 = pBVar6 + 2)
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
        BVar3 = GetStringTypeA(param_1,1,lpSrcStr,0x100,(LPWORD)((int)param_3 + 2));
        if (BVar3 == 0) {
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
// 0x0046ca7c  FUN_0046ca7c   (383 bytes)   [unnamed]
bool __cdecl FUN_0046ca7c(LCID param_1,undefined2 *param_2)

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
  int iVar19;
  undefined **ppuVar20;
  undefined4 local_34 [12];
  
  ppuVar20 = &PTR_DAT_0048a42c;
  puVar18 = local_34;
  for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar1 = FUN_0046c8dc(param_1,0x16,(undefined4 *)(param_2 + 0xc));
  uVar2 = FUN_0046c8dc(param_1,0x17,(undefined4 *)(param_2 + 10));
  uVar3 = FUN_0046c8dc(param_1,0x14,(undefined4 *)(param_2 + 0xe));
  uVar4 = FUN_0046c8dc(param_1,0x15,(undefined4 *)(param_2 + 0x10));
  uVar5 = FUN_0046c8dc(param_1,0x18,(undefined4 *)(param_2 + 0x12));
  uVar6 = FUN_0046c8dc(param_1,0x50,(undefined4 *)(param_2 + 0x14));
  uVar7 = FUN_0046c8dc(param_1,0x51,(undefined4 *)(param_2 + 0x16));
  uVar8 = FUN_0046c938(param_1,0x19,param_2,3);
  uVar9 = FUN_0046c938(param_1,0x1a,param_2 + 1,3);
  uVar10 = FUN_0046c938(param_1,0x1b,param_2 + 2,2);
  uVar11 = FUN_0046c938(param_1,0x1c,param_2 + 3,3);
  uVar12 = FUN_0046c938(param_1,0x52,param_2 + 4,2);
  uVar13 = FUN_0046c938(param_1,0x53,param_2 + 5,3);
  uVar14 = FUN_0046c938(param_1,0x54,param_2 + 6,2);
  uVar15 = FUN_0046c938(param_1,0x55,param_2 + 7,2);
  uVar16 = FUN_0046c938(param_1,0x56,param_2 + 8,2);
  uVar17 = FUN_0046c938(param_1,0x57,param_2 + 9,2);
  puVar18 = FUN_00467970((uint *)local_34[(short)param_2[3]]);
  *(undefined4 **)(param_2 + 0x18) = puVar18;
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
          uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046cbfc  FUN_0046cbfc   (1116 bytes)   [unnamed]
bool __cdecl FUN_0046cbfc(LCID param_1,undefined4 *param_2)

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
  
  uVar1 = FUN_0046c8dc(param_1,0x1d,param_2);
  uVar2 = FUN_0046c8dc(param_1,0x1e,param_2 + 1);
  uVar3 = FUN_0046c8dc(param_1,0x1003,param_2 + 2);
  uVar4 = FUN_0046c8dc(param_1,0x1f,param_2 + 3);
  uVar5 = FUN_0046c8dc(param_1,0x20,param_2 + 4);
  uVar6 = FUN_0046c8dc(param_1,0x28,param_2 + 5);
  uVar7 = FUN_0046c8dc(param_1,0x29,param_2 + 6);
  uVar8 = FUN_0046c8dc(param_1,0x2a,param_2 + 0xb);
  uVar9 = FUN_0046c8dc(param_1,0x2b,param_2 + 0xc);
  uVar10 = FUN_0046c8dc(param_1,0x2c,param_2 + 0xd);
  uVar11 = FUN_0046c8dc(param_1,0x2d,param_2 + 0xe);
  uVar12 = FUN_0046c8dc(param_1,0x2e,param_2 + 0xf);
  uVar13 = FUN_0046c8dc(param_1,0x2f,param_2 + 0x10);
  uVar14 = FUN_0046c8dc(param_1,0x30,param_2 + 0x11);
  uVar15 = FUN_0046c8dc(param_1,0x31,param_2 + 0x12);
  uVar16 = FUN_0046c8dc(param_1,0x32,param_2 + 0x13);
  uVar17 = FUN_0046c8dc(param_1,0x33,param_2 + 0x14);
  uVar18 = FUN_0046c8dc(param_1,0x34,param_2 + 0x15);
  uVar19 = FUN_0046c8dc(param_1,0x35,param_2 + 0x16);
  uVar20 = FUN_0046c8dc(param_1,0x36,param_2 + 0x17);
  uVar21 = FUN_0046c8dc(param_1,0x37,param_2 + 0x18);
  uVar22 = FUN_0046c8dc(param_1,0x38,param_2 + 0x19);
  uVar23 = FUN_0046c8dc(param_1,0x39,param_2 + 0x1a);
  uVar24 = FUN_0046c8dc(param_1,0x3a,param_2 + 0x1b);
  uVar25 = FUN_0046c8dc(param_1,0x3b,param_2 + 0x1c);
  uVar26 = FUN_0046c8dc(param_1,0x3c,param_2 + 0x1d);
  uVar27 = FUN_0046c8dc(param_1,0x3d,param_2 + 0x1e);
  uVar28 = FUN_0046c8dc(param_1,0x3e,param_2 + 0x1f);
  uVar29 = FUN_0046c8dc(param_1,0x3f,param_2 + 0x20);
  uVar30 = FUN_0046c8dc(param_1,0x40,param_2 + 0x21);
  uVar31 = FUN_0046c8dc(param_1,0x41,param_2 + 0x22);
  uVar32 = FUN_0046c8dc(param_1,0x42,param_2 + 0x23);
  uVar33 = FUN_0046c8dc(param_1,0x43,param_2 + 0x24);
  uVar34 = FUN_0046c8dc(param_1,0x44,param_2 + 0x25);
  uVar35 = FUN_0046c8dc(param_1,0x45,param_2 + 0x26);
  uVar36 = FUN_0046c8dc(param_1,0x46,param_2 + 0x27);
  uVar37 = FUN_0046c8dc(param_1,0x47,param_2 + 0x28);
  uVar38 = FUN_0046c8dc(param_1,0x48,param_2 + 0x29);
  uVar39 = FUN_0046c8dc(param_1,0x49,param_2 + 0x2a);
  uVar40 = FUN_0046c8dc(param_1,0x4a,param_2 + 0x2b);
  uVar41 = FUN_0046c8dc(param_1,0x4b,param_2 + 0x2c);
  uVar42 = FUN_0046c8dc(param_1,0x4c,param_2 + 0x2d);
  uVar43 = FUN_0046c8dc(param_1,0x4d,param_2 + 0x2e);
  uVar44 = FUN_0046c8dc(param_1,0x4e,param_2 + 0x2f);
  uVar45 = FUN_0046c8dc(param_1,0x4f,param_2 + 0x30);
  uVar46 = FUN_0046c938(param_1,0x21,(undefined2 *)(param_2 + 7),2);
  uVar47 = FUN_0046c938(param_1,0x22,(undefined2 *)((int)param_2 + 0x1e),2);
  uVar48 = FUN_0046c938(param_1,0x23,(undefined2 *)(param_2 + 8),2);
  uVar49 = FUN_0046c938(param_1,0x24,(undefined2 *)((int)param_2 + 0x22),1);
  uVar50 = FUN_0046c938(param_1,0x25,(undefined2 *)(param_2 + 9),2);
  uVar51 = FUN_0046c938(param_1,0x26,(undefined2 *)((int)param_2 + 0x26),2);
  uVar52 = FUN_0046c938(param_1,0x27,(undefined2 *)(param_2 + 10),2);
  uVar52 = uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
           uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 & uVar20 &
           uVar21 & uVar22 & uVar23 & uVar24 & uVar25 & uVar26 & uVar27 & uVar28 & uVar29 & uVar30 &
           uVar31 & uVar32 & uVar33 & uVar34 & uVar35 & uVar36 & uVar37 & uVar38 & uVar39 & uVar40 &
           uVar41 & uVar42 & uVar43 & uVar44 & uVar45 & uVar46 & uVar47 & uVar48 & uVar49 & uVar50 &
           uVar51 & uVar52;
  if (uVar52 != 0) {
    FUN_0046b1a0((char *)param_2[2],(char *)local_44,0x40);
    free();
    puVar53 = FUN_00467970(local_44);
    param_2[2] = puVar53;
    FUN_0046b1a0((char *)param_2[3],(char *)local_44,0x40);
    free();
    puVar53 = FUN_00467970(local_44);
    param_2[3] = puVar53;
    FUN_0046b1a0((char *)param_2[4],(char *)local_44,0x40);
    free();
    puVar53 = FUN_00467970(local_44);
    param_2[4] = puVar53;
  }
  return uVar52 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d058  FUN_0046d058   (136 bytes)   [unnamed]
bool __cdecl FUN_0046d058(LCID param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_0046c8dc(param_1,0xe,param_2 + 1);
  uVar2 = FUN_0046c8dc(param_1,0xf,param_2);
  uVar3 = FUN_0046c8dc(param_1,0x10,param_2 + 2);
  uVar4 = FUN_0046c8dc(param_1,0x50,param_2 + 3);
  uVar5 = FUN_0046c8dc(param_1,0x51,param_2 + 4);
  uVar6 = FUN_0046c938(param_1,0x11,(undefined2 *)(param_2 + 5),3);
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d0e0  FUN_0046d0e0   (10 bytes)   [unnamed]
undefined4 __stdcall FUN_0046d0e0(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d0ec  FUN_0046d0ec   (151 bytes)   [unnamed]
undefined ** __stdcall FUN_0046d0ec(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  memset((undefined4*)&PTR_DAT_00489e28,0,0x30);
  puVar1 = *(undefined4 **)(PTR_DAT_0048a308 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    PTR_DAT_00489e28 = (undefined *)puVar1[1];
    PTR_DAT_00489e2c = (undefined *)*puVar1;
    PTR_DAT_00489e30 = (undefined *)puVar1[2];
    PTR_DAT_00489e48 = (undefined *)puVar1[3];
    PTR_DAT_00489e4c = (undefined *)puVar1[4];
  }
  puVar2 = *(undefined1 **)(PTR_DAT_0048a308 + 0x14);
  if (puVar2 != (undefined1 *)0x0) {
    PTR_DAT_00489e34 = *(undefined **)(puVar2 + 0x20);
    PTR_DAT_00489e38 = *(undefined **)(puVar2 + 0x1c);
    PTR_DAT_00489e3c = *(undefined **)(puVar2 + 0x18);
    PTR_DAT_00489e40 = *(undefined **)(puVar2 + 0x14);
    PTR_DAT_00489e44 = *(undefined **)(puVar2 + 0x24);
    DAT_00489e50 = puVar2[2];
    DAT_00489e51 = *puVar2;
    DAT_00489e52 = puVar2[0xc];
    DAT_00489e53 = puVar2[0xe];
    DAT_00489e54 = puVar2[0x10];
    DAT_00489e55 = puVar2[0x12];
    DAT_00489e56 = puVar2[8];
    DAT_00489e57 = puVar2[10];
  }
  return &PTR_DAT_00489e28;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d184  FUN_0046d184   (36 bytes)   [unnamed]
byte * __cdecl FUN_0046d184(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  while( true ) {
    uVar1 = FUN_0046d1a8((uint)*pbVar2);
    *pbVar2 = (byte)uVar1;
    if ((byte)uVar1 == 0) break;
    pbVar2 = pbVar2 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d1a8  FUN_0046d1a8   (84 bytes)   [unnamed]
uint __cdecl FUN_0046d1a8(uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_0048a308 + 8) != 0) {
    return (uint)(byte)(&DAT_00489eb4)[param_1 & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_0048a308 + 4),0x100,(LPCSTR)&param_1,1,(LPSTR)&local_8,4);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d1fc  FUN_0046d1fc   (84 bytes)   [unnamed]
uint __cdecl FUN_0046d1fc(uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  if (*(int *)(PTR_DAT_0048a308 + 8) != 0) {
    return (uint)(byte)(&DAT_00489fb4)[param_1 & 0xff];
  }
  LCMapStringA(*(LCID *)(PTR_DAT_0048a308 + 4),0x200,(LPCSTR)&param_1,1,(LPSTR)&local_8,4);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d250  FUN_0046d250   (122 bytes)   [unnamed]
undefined4 __cdecl FUN_0046d250(byte *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != (byte *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    if (((&DAT_0048d651)[*param_1] & 4) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,9,(LPCSTR)param_1,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    if (1 < param_2) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,9,(LPCSTR)param_1,2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        return 2;
      }
    }
    return 0xffffffff;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d2cc  FUN_0046d2cc   (209 bytes)   [unnamed]
undefined4 __cdecl FUN_0046d2cc(LPWSTR param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else if (*param_2 == 0) {
    if (param_1 != (LPWSTR)0x0) {
      *(undefined2 *)param_1 = 0;
    }
    uVar1 = 0;
  }
  else if (*(int *)(PTR_DAT_0048a308 + 8) == 0) {
    if (((&DAT_0048d651)[*param_2] & 4) == 0) {
      iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,9,(LPCSTR)param_2,1,param_1,
                                  (uint)(param_1 != (LPWSTR)0x0));
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (((param_3 < 2) ||
             (iVar2 = MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,9,(LPCSTR)param_2,2,param_1,
                                          (uint)(param_1 != (LPWSTR)0x0)), iVar2 == 0)) &&
            ((param_3 < 2 || (param_2[1] == 0)))) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    if (param_1 != (LPWSTR)0x0) {
      *(ushort *)param_1 = (ushort)*param_2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d3a0  FUN_0046d3a0   (113 bytes)   [unnamed]
int __cdecl FUN_0046d3a0(LPSTR param_1,ushort param_2)

{
  int iVar1;
  BOOL local_8;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (*(int *)(PTR_DAT_0048a308 + 8) != 0) {
    if (0xff < param_2) {
      return -1;
    }
    *param_1 = (CHAR)param_2;
    return 1;
  }
  local_8 = 0;
  iVar1 = WideCharToMultiByte(*(UINT *)PTR_DAT_0048a308,0x220,(LPCWSTR)&param_2,1,param_1,2,
                              (LPCSTR)0x0,&local_8);
  if ((iVar1 != 0) && (local_8 == 0)) {
    return iVar1;
  }
  return -1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d414  FUN_0046d414   (295 bytes, 2 ranges)   [unnamed]
char * __cdecl FUN_0046d414(LPWSTR param_1,uint *param_2,char *param_3)

{
  int iVar1;
  DWORD DVar2;
  uint *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  if ((param_1 == (LPWSTR)0x0) || (param_3 != (char *)0x0)) {
    if (param_1 == (LPWSTR)0x0) {
      if (*(int *)(PTR_DAT_0048a308 + 8) == 0) {
        iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
        if (iVar1 == 0) {
          pcVar4 = (char *)0xffffffff;
        }
        else {
          pcVar4 = (char *)(iVar1 + -1);
        }
      }
      else {
        pcVar4 = strlen(param_2);
      }
    }
    else if (*(int *)(PTR_DAT_0048a308 + 8) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,9,(LPCSTR)param_2,-1,param_1,
                                  (int)param_3);
      if (iVar1 == 0) {
        DVar2 = GetLastError();
        puVar3 = param_2;
        pcVar4 = param_3;
        if (DVar2 == 0x7a) {
          for (; (pcVar4 != (char *)0x0 && ((byte)*puVar3 != 0)); puVar3 = (uint *)((int)puVar3 + 1)
              ) {
            if (((&DAT_0048d651)[(byte)*puVar3] & 4) != 0) {
              puVar3 = (uint *)((int)puVar3 + 1);
            }
            pcVar4 = pcVar4 + -1;
          }
          pcVar4 = (char *)MultiByteToWideChar(*(UINT *)PTR_DAT_0048a308,1,(LPCSTR)param_2,
                                               (int)puVar3 - (int)param_2,param_1,(int)param_3);
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
    else if (param_3 != (char *)0x0) {
      do {
        *(ushort *)param_1 = (ushort)*(byte *)((int)param_2 + (int)pcVar4);
        if (*(char *)((int)param_2 + (int)pcVar4) == '\0') {
          return pcVar4;
        }
        pcVar4 = pcVar4 + 1;
        param_1 = (LPWSTR)((int)param_1 + 2);
      } while (pcVar4 < param_3);
    }
  }
  else {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d540  FUN_0046d540   (57 bytes)   [unnamed]
int __cdecl FUN_0046d540(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = param_2 + 1;
  for (psVar1 = param_1; (iVar2 = iVar2 + -1, iVar2 != 0 && (*psVar1 != 0)); psVar1 = psVar1 + 1) {
  }
  if ((iVar2 != 0) && (*psVar1 == 0)) {
    iVar2 = (int)psVar1 - (int)param_1 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)(((int)psVar1 - (int)param_1 & 1U) != 0);
    }
    return iVar2 + 1;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d57c  FUN_0046d57c   (420 bytes)   [unnamed]
uint __cdecl FUN_0046d57c(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  BOOL local_10;
  CHAR local_a [2];
  int local_8;
  
  local_10 = 0;
  uVar5 = 0;
  if ((param_1 == (LPSTR)0x0) || (param_3 != 0)) {
    if (param_1 == (LPSTR)0x0) {
      if (*(int *)(PTR_DAT_0048a308 + 8) == 0) {
        iVar6 = WideCharToMultiByte(*(UINT *)PTR_DAT_0048a308,0x220,param_2,-1,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,&local_10);
        if ((iVar6 == 0) || (local_10 != 0)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = iVar6 - 1;
        }
      }
      else {
        uVar5 = FUN_00467b50((short *)param_2);
      }
    }
    else if (*(int *)(PTR_DAT_0048a308 + 8) == 0) {
      uVar5 = WideCharToMultiByte(*(UINT *)PTR_DAT_0048a308,0x220,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_10);
      if ((uVar5 == 0) || (local_10 != 0)) {
        if ((local_10 == 0) && (DVar2 = GetLastError(), DVar2 == 0x7a)) {
          while (uVar5 < param_3) {
            local_8 = WideCharToMultiByte(*(UINT *)PTR_DAT_0048a308,0,param_2,1,local_a,2,
                                          (LPCSTR)0x0,&local_10);
            if ((local_8 == 0) || (local_10 != 0)) {
              return 0xffffffff;
            }
            if (param_3 < local_8 + uVar5) {
              return uVar5;
            }
            iVar6 = 0;
            pcVar4 = param_1 + uVar5;
            pcVar3 = local_a;
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
            param_2 = (LPCWSTR)((int)param_2 + 2);
            local_10 = 0;
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
    else if (param_3 != 0) {
      while ((ushort)*param_2 < 0x100) {
        param_1[uVar5] = (CHAR)*param_2;
        if ((short)*param_2 == 0) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        param_2 = (LPCWSTR)((int)param_2 + 2);
        if (param_3 <= uVar5) {
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
// 0x0046d720  FUN_0046d720   (22 bytes)   [unnamed]
undefined4 __cdecl FUN_0046d720(ushort param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046b80c(param_1,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d7d3  FUN_0046d7d3   (73 bytes)   [unnamed]
int FUN_0046d7d3(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

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
// 0x0046d896  FUN_0046d896   (78 bytes)   [unnamed]
uint FUN_0046d896(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

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
// 0x0046d938  thunk → FUN_0046e158   (5 bytes)   [unnamed]
void __cdecl thunk_FUN_0046e158(uint param_1,char *param_2,uint param_3)

{
  FUN_0046e078(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d940  FUN_0046d940   (166 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0046d940(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4, undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint local_74 [20];
  int local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_24 = param_1;
  local_20 = param_2;
  if (param_3 == (undefined8 *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *param_3;
  }
  if (param_4 == (undefined8 *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_4;
  }
  local_c = param_5;
  uStack_8 = param_6;
  iVar1 = (*(code *)PTR_FUN_0048a6f4)();
  if (iVar1 == 0) {
    wsprintfA((LPSTR)local_74,"%s: %s error",param_2,(&PTR_FUN_0048a6f8)[param_1]);
    if (param_1 - 2U < 3) {
      _DAT_0048a878 = 0x22;
    }
    else {
      _DAT_0048a878 = 0x21;
    }
    FUN_0046ff70(local_74);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046d9f0  FUN_0046d9f0   (364 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0046d9f0(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046db78  FUN_0046db78   (103 bytes)   [unnamed]
int __cdecl FUN_0046db78(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  do {
    pcVar3 = param_1;
    cVar2 = *pcVar3;
    param_1 = pcVar3 + 1;
    iVar1 = FUN_0046fc30((int)cVar2);
  } while (iVar1 != 0);
  if ((cVar2 == '+') || (cVar2 == '-')) {
    bVar5 = cVar2 == '-';
    cVar2 = *param_1;
    param_1 = pcVar3 + 2;
  }
  else {
    bVar5 = false;
  }
  while (('/' < cVar2 && (cVar2 < ':'))) {
    iVar4 = iVar4 * 10 + (int)cVar2 + -0x30;
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  }
  if (bVar5) {
    iVar4 = -iVar4;
  }
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dbe0  FUN_0046dbe0   (15 bytes)   [unnamed]
void __cdecl FUN_0046dbe0(char *param_1)

{
  FUN_0046db78(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dbf0  FUN_0046dbf0   (19 bytes)   [unnamed]
undefined2 __stdcall FUN_0046dbf0(void)

{
  undefined2 in_FPUStatusWord;
  
  return in_FPUStatusWord;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dc04  FUN_0046dc04   (47 bytes)   [unnamed]
uint __cdecl FUN_0046dc04(uint param_1,int param_2)

{
  ushort in_FPUControlWord;
  
  if (param_2 != 0) {
    (*(uint *)&DAT_0048a634) = param_1;
  }
  return param_1 & param_2 | (uint)in_FPUControlWord & ~param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dc34  thunk → FUN_0046dc4c   (6 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __stdcall thunk_FUN_0046dc4c(void)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046dc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = ((code *)_DAT_0048a564)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dc3a  thunk → FUN_0046dc4c   (6 bytes)   [unnamed]
undefined4 __stdcall thunk_FUN_0046dc4c_46dc3a(void)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0046dc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_FUN_0048a568)();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dc4c  FUN_0046dc4c   (12 bytes)   [unnamed]
undefined4 __stdcall FUN_0046dc4c(void)

{
  undefined4 in_EAX;
  
  FUN_0047009c((uint *)"printf : floating point formats not linked");
  return in_EAX;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dc89  FUN_0046dc89   (192 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_0046dc89(void)

{
  ushort uVar1;
  undefined2 in_CX;
  short sVar2;
  longdouble in_ST0;
  longdouble lVar3;
  longdouble lVar4;
  
  sVar2 = CONCAT11((char)((ushort)in_CX >> 8),1);
  lVar4 = in_ST0;
  lVar3 = (longdouble)1.4426950408889634;
  if (sVar2 != 0) {
    lVar4 = (longdouble)1.4426950408889634;
    lVar3 = in_ST0;
  }
  if (in_ST0 != (longdouble)0) {
    if (sVar2 != 0) {
      lVar4 = lVar4 * lVar3;
    }
    lVar4 = ABS(lVar4);
    if ((longdouble)_DAT_0048a638 < lVar4) {
      lVar3 = (longdouble)fscale(lVar4,(longdouble)1);
      uVar1 = (ushort)ROUND(ROUND(lVar3));
      lVar3 = (longdouble)fscale(ROUND(lVar3),-(longdouble)1);
      lVar4 = (longdouble)f2xm1(lVar4 - lVar3);
      lVar4 = (longdouble)1 + lVar4;
      if ((uVar1 & 1) != 0) {
        lVar4 = _DAT_0048a63c * lVar4;
      }
      fscale(lVar4,(longdouble)(uVar1 >> 1));
    }
    else {
      f2xm1(lVar4);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dd54  FUN_0046dd54   (64 bytes)   [unnamed]
void __stdcall FUN_0046dd54(void)

{
  longdouble in_ST0;
  
  if ((in_ST0 != (longdouble)0) && ((longdouble)0 <= in_ST0)) {
    log2(in_ST0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046dd94  FUN_0046dd94   (22 bytes)   [unnamed]
void __stdcall FUN_0046dd94(void)

{
  FUN_0046dc04(DAT_0048a634,0x1fff);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ddac  FUN_0046ddac   (40 bytes)   [unnamed]
undefined4 __stdcall FUN_0046ddac(void)

{
  longdouble in_ST0;
  undefined4 local_10;
  
  local_10 = (undefined4)(longlong)ROUND(in_ST0);
  return local_10;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ddd4  FUN_0046ddd4   (45 bytes)   [unnamed]
void __cdecl FUN_0046ddd4(int param_1)

{
  if ((*(byte *)(param_1 + 7) & 0x80) == 0) {
    return;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046de04  FUN_0046de04   (33 bytes)   [unnamed]
void __cdecl FUN_0046de04(longlong *param_1,longdouble *param_2)

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
// 0x0046de28  FUN_0046de28   (17 bytes)   [unnamed]
ushort __cdecl FUN_0046de28(longdouble *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longdouble)0;
  return (ushort)NAN(lVar1) << 8 | (ushort)(lVar1 < lVar2) << 9 | (ushort)(lVar1 != lVar2) << 10 |
         (ushort)(lVar1 == lVar2) << 0xe;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046de3c  FUN_0046de3c   (177 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0046de69) */
char * __cdecl FUN_0046de3c(int param_1,uint param_2,char *param_3,uint param_4,char param_5,char param_6)

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
        uVar2 = FUN_0046d896(param_1,param_2,in_ECX,param_4,(int)param_4 >> 0x1f);
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        param_1 = FUN_0046d7d3(param_1,param_2,extraout_ECX,param_4,(int)param_4 >> 0x1f);
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
// 0x0046def0  FUN_0046def0   (279 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0046def0(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

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
      uVar1 = FUN_0046dc04(0,0);
      FUN_0046dc04(0xc00,0xc00);
      FUN_0046dc04(uVar1,0xc00);
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
  _DAT_0048a878 = 0x22;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e008  FUN_0046e008   (109 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0046e008(undefined4 param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  double local_c;
  
  if ((short)(GH_PIECE(param_2, 2, undefined2) * 2) == 0) {
    iVar2 = 2;
    local_c = -_DAT_0048a668;
    pdVar1 = &local_c;
  }
  else if (param_2 < 0) {
    iVar2 = 1;
    pdVar1 = (double *)&DAT_0048a6e8;
  }
  else {
    if ((short)(GH_PIECE(param_2, 2, undefined2) * 2) != -0x20) {
      FUN_0046dd54();
      return;
    }
    iVar2 = 3;
    pdVar1 = (double *)&DAT_0048a668;
  }
  FUN_0046d940(iVar2,&DAT_0048a6f0 /* "log" */,(undefined8 *)&param_1,(undefined8 *)0x0,*(undefined4 *)pdVar1,
               *(undefined4 *)((int)pdVar1 + 4));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e078  FUN_0046e078   (113 bytes)   [unnamed]
char * __cdecl FUN_0046e078(uint param_1,char *param_2,uint param_3,char param_4,char param_5)

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
// 0x0046e0ec  FUN_0046e0ec   (27 bytes)   [unnamed]
void __cdecl FUN_0046e0ec(uint param_1,char *param_2)

{
  FUN_0046e078(param_1,param_2,10,'\0','a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e108  FUN_0046e108   (48 bytes)   [unnamed]
void __cdecl FUN_0046e108(uint param_1,char *param_2,uint param_3)

{
  FUN_0046e078(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e138  FUN_0046e138   (29 bytes)   [unnamed]
void __cdecl FUN_0046e138(uint param_1,char *param_2,uint param_3)

{
  FUN_0046e078(param_1,param_2,param_3,'\0','a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e158  FUN_0046e158   (37 bytes)   [unnamed]
void __cdecl FUN_0046e158(uint param_1,char *param_2,uint param_3)

{
  FUN_0046e078(param_1,param_2,param_3,param_3 == 10,'a');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e180  FUN_0046e180   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_0046e180(int *param_1)

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
// 0x0046e1ac  FUN_0046e1ac   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_0046e1ac(int *param_1)

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
// 0x0046e1dc  FUN_0046e1dc   (22 bytes)   [unnamed]
void __cdecl FUN_0046e1dc(undefined *param_1,undefined *param_2)

{
  PTR_FUN_0048a6f4 = param_1;
  PTR_FUN_0048a6f8 = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e1f4  FUN_0046e1f4   (476 bytes)   [unnamed]
/* WARNING: Removing unreachable block (ram,0x0046e2b6) */
void __cdecl FUN_0046e1f4(double param_1,undefined4 param_2,uint param_3)

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
      puVar5 = &DAT_0048a750;
    }
    else {
      puVar5 = &DAT_0048a668;
    }
  }
  else {
    if ((uVar1 & 0x7ff0) == 0x7ff0) {
      if ((int)param_3 < 0) {
        iVar6 = 4;
        puVar5 = &DAT_0048a748;
        goto LAB_0046e27b;
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
          puVar5 = &DAT_0048a740;
          goto LAB_0046e27b;
        }
        FUN_0046dd54();
        lVar8 = lVar8 * (longdouble)
                        (double)CONCAT17(GH_PIECE(param_3, 3, undefined1),
                                         CONCAT16(GH_PIECE(param_3, 2, undefined1),
                                                  CONCAT24((undefined2)param_3,param_2)));
        uStack_e = (ushort)((unkuint10)lVar8 >> 0x40);
        if ((uStack_e & 0x7fff) < 0x4008) {
LAB_0046e327:
          FUN_0046dc89();
          return;
        }
        uStack_10 = 0xffff;
        if ((uStack_e & 0x7fff) < 0x4009) {
          uStack_10 = (ushort)((unkuint10)lVar8 >> 0x30);
        }
        GH_PIECE(uStack_e, 1, undefined1) = (byte)((unkuint10)lVar8 >> 0x48);
        if ((GH_PIECE(uStack_e, 1, undefined1) & 0x80) == 0) {
          if (uStack_10 < 0xb172) goto LAB_0046e327;
          iVar6 = 3;
          puVar5 = &DAT_0048a668;
        }
        else {
          if (uStack_10 < 0xb172) goto LAB_0046e327;
          iVar6 = 4;
          puVar5 = &DAT_0048a748;
        }
        goto LAB_0046e27b;
      }
    }
    iVar6 = 3;
    puVar5 = &DAT_0048a668;
  }
LAB_0046e27b:
  FUN_0046d940(iVar6,&DAT_0048a758 /* "pow" */,(undefined8*)&param_1,(undefined8 *)&param_2,*puVar5,puVar5[1]);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e3d0  FUN_0046e3d0   (37 bytes)   [unnamed]
undefined4 __cdecl FUN_0046e3d0(undefined4 *param_1)

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
// 0x0046e3f8  FUN_0046e3f8   (46 bytes)   [unnamed]
undefined4 __cdecl FUN_0046e3f8(uint *param_1,uint param_2)

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
// 0x0046e428  FUN_0046e428   (65 bytes)   [unnamed]
uint __cdecl FUN_0046e428(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_0046b464(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_0046e45a;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_0046e45a:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e46c  FUN_0046e46c   (645 bytes)   [unnamed]
byte * __cdecl FUN_0046e46c(longdouble *param_1,uint param_2,byte *param_3,byte param_4,char param_5,int param_6)

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
  
  pbVar2 = (byte *)FUN_0046b464(0xe);
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
  iVar3 = FUN_0046f4d0(param_1,uVar6,&local_8,(undefined4 *)local_3c,param_6);
  if (iVar3 == 0x7fff) {
    if (local_8 == 0) {
      pcVar4 = &DAT_0048a761 /* "+INF" */;
    }
    else {
      pcVar4 = &DAT_0048a75c /* "-INF" */;
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
      pcVar4 = &DAT_0048a76b /* "+NAN" */;
    }
    else {
      pcVar4 = &DAT_0048a766 /* "-NAN" */;
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
    if ((local_d != 0x47) || (iVar3 < -3)) goto LAB_0046e636;
    uVar6 = param_2;
    if (param_2 == 0) {
      uVar6 = 1;
    }
    if ((int)uVar6 < iVar3) goto LAB_0046e636;
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
      pbVar5 = (byte *)FUN_0046e428(param_4,(uint)param_3,(uint)pbVar2);
      pbVar2 = pbVar5;
    }
    if (pbVar2 == param_3) {
      *pbVar2 = 0x30;
      pbVar2 = pbVar2 + 1;
    }
    *pbVar2 = 0;
    return pbVar5;
  }
LAB_0046e636:
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
      pbVar5 = (byte *)FUN_0046e428(param_4,(uint)param_3,(uint)pbVar5);
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
// 0x0046e6f4  FUN_0046e6f4   (22 bytes)   [unnamed]
int __cdecl FUN_0046e6f4(int param_1,int param_2)

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
// 0x0046e724  FUN_0046e724   (74 bytes)   [unnamed]
uint __cdecl FUN_0046e724(short param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_0046b464(0xe);
  if ((param_1 == 0x47) || (uVar1 = param_3, param_1 == 0x67)) {
    do {
      uVar1 = param_3;
      if (*(short *)(param_3 - 2) != 0x30) goto LAB_0046e75b;
      param_3 = param_3 - 2;
    } while (param_2 < param_3);
  }
  else {
LAB_0046e75b:
    param_2 = uVar1;
    if (*psVar2 == *(short *)(param_2 - 2)) {
      param_2 = param_2 - 2;
    }
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046e770  FUN_0046e770   (695 bytes)   [unnamed]
void __cdecl FUN_0046e770(longdouble *param_1,int param_2,ushort *param_3,ushort param_4,short param_5, int param_6)

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
  
  puVar1 = (ushort *)FUN_0046b464(0xe);
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
  iVar2 = FUN_0046f7a4(param_1,iVar2,&local_8,local_68,param_6);
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pwVar3 = L"+INF";
    }
    else {
      pwVar3 = L"-INF";
    }
    FUN_00467b68((short *)param_3,pwVar3);
    return;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pwVar3 = L"+NAN";
    }
    else {
      pwVar3 = L"-NAN";
    }
    FUN_00467b68((short *)param_3,pwVar3);
    return;
  }
  puVar1 = param_3;
  if (local_8 != 0) {
    *param_3 = 0x2d;
    puVar1 = param_3 + 1;
  }
  if (local_e != 0x46) {
    if ((local_e != 0x47) || (iVar2 < -3)) goto LAB_0046e93b;
    iVar7 = param_2;
    if (param_2 == 0) {
      iVar7 = 1;
    }
    if (iVar7 < iVar2) goto LAB_0046e93b;
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
      puVar1 = (ushort *)FUN_0046e724(param_4,(uint)param_3,(uint)puVar1);
    }
    if (puVar1 == param_3) {
      *puVar1 = 0x30;
      puVar1 = puVar1 + 1;
    }
    *puVar1 = 0;
    return;
  }
LAB_0046e93b:
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
      puVar4 = (ushort *)FUN_0046e724(param_4,(uint)param_3,(uint)puVar4);
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
// 0x0046ea28  FUN_0046ea28   (22 bytes)   [unnamed]
int __cdecl FUN_0046ea28(int param_1,int param_2)

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
// 0x0046ea58  FUN_0046ea58   (1097 bytes)   [unnamed]
void __cdecl FUN_0046ea58(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

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
  pbVar3 = (byte *)FUN_0046b464(0xe);
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
      goto LAB_0046ed8c;
    }
    if ((uVar4 & 0x80) != 0) break;
    uVar11 = uVar4;
    uVar6 = FUN_0046fc30(uVar4);
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
      if (uVar4 != 0x2d) goto LAB_0046eb19;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar10, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar11 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar8 = iVar9;
LAB_0046eb19:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)(uVar5,param_4,uVar11);
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_0046ed87;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x46)) goto LAB_0046ed87;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_0048a79c,DAT_0048a798));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7a0,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_0048a7a6,DAT_0048a7a2));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7aa,local_28);
          }
          goto LAB_0046ed5c;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -1;
          if ((iVar10 < 0) || (iVar9 != 0x41)) goto LAB_0046ed87;
          local_18 = local_18 + 1;
          iVar9 = (*(code *)param_2)();
          iVar10 = param_5 + -2;
          if ((iVar10 < 0) || (iVar9 != 0x4e)) goto LAB_0046ed87;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_0048a7b0,DAT_0048a7ac));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7b4,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_0048a7ba,DAT_0048a7b6));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7be,local_28);
          }
          goto LAB_0046ed5c;
        }
      }
      local_e = '\0';
      iVar9 = iVar8;
      iVar10 = local_c;
      if (uVar4 == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_0046ebff;
        local_8 = iVar8;
        if (iVar8 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_0046ebff;
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
          iVar7 = FUN_0046e3f8(&local_40,uVar4);
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
LAB_0046ebff:
  iVar10 = param_5;
  if (iVar9 == -2) {
LAB_0046ed87:
    param_5 = iVar10;
    local_1c = 0;
LAB_0046ed8c:
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
LAB_0046ec27:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar8 = (*(code *)param_2)();
        if (!bVar2) goto LAB_0046ec54;
        bVar2 = false;
        if (iVar8 != 0x2d) goto LAB_0046ec4f;
        local_10 = '\x01';
      }
    }
    else {
LAB_0046ec7a:
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
      FUN_0046ddd4((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar10 != 0) {
        FUN_0046d9f0();
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
LAB_0046ed5c:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_0046ec4f:
  if (iVar8 != 0x2b) {
LAB_0046ec54:
    if ((iVar8 < 0x30) || (0x39 < iVar8)) goto LAB_0046ec7a;
    iVar10 = iVar8 + iVar10 * 10 + -0x30;
    if (0x1344 < iVar10) {
      local_11 = '\x01';
    }
  }
  goto LAB_0046ec27;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046eea4  FUN_0046eea4   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0046eea4(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_0046def0(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_0046def0(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ef3c  FUN_0046ef3c   (1094 bytes)   [unnamed]
void __cdecl FUN_0046ef3c(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5, int *param_6,undefined4 *param_7)

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
  puVar3 = (ushort *)FUN_0046b464(0xe);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  do {
    local_18 = local_18 + 1;
    uVar4 = (*(code *)param_2)(uVar5,param_4,uVar10,param_4);
    if (uVar4 == 0xffffffff) {
      local_1c = 0xffffffff;
      goto LAB_0046f26d;
    }
    uVar10 = uVar4;
    uVar5 = FUN_0046b680((ushort)uVar4);
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
      if (uVar4 != 0x2d) goto LAB_0046effa;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar9, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar10 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar7 = iVar8;
LAB_0046effa:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)(uVar5,param_4,uVar10);
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_0046f268;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x46)) goto LAB_0046f268;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_0048a7c4,DAT_0048a7c0));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7c8,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_0048a7ce,DAT_0048a7ca));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7d2,local_28);
          }
          goto LAB_0046f23d;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x41)) goto LAB_0046f268;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_0046f268;
          if (local_d == '\0') {
            GH_SET(local_28, CONCAT44(DAT_0048a7d8,DAT_0048a7d4));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7dc,local_28);
          }
          else {
            GH_SET(local_28, CONCAT44(DAT_0048a7e2,DAT_0048a7de));
            (*(longdouble *)&local_28) = (longdouble)CONCAT28(DAT_0048a7e6,local_28);
          }
          goto LAB_0046f23d;
        }
      }
      local_e = '\0';
      iVar8 = iVar7;
      iVar9 = local_c;
      if (uVar4 == uVar1) {
        if (local_8 != 0x8000) goto LAB_0046f0e0;
        local_8 = iVar7;
        if (iVar7 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_0046f0e0;
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
          iVar6 = FUN_0046e3f8(&local_40,uVar4);
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
LAB_0046f0e0:
  iVar9 = param_5;
  if (iVar8 == -2) {
LAB_0046f268:
    param_5 = iVar9;
    local_1c = 0;
LAB_0046f26d:
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
LAB_0046f108:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar7 = (*(code *)param_2)();
        if (!bVar2) goto LAB_0046f135;
        bVar2 = false;
        if (iVar7 != 0x2d) goto LAB_0046f130;
        local_10 = '\x01';
      }
    }
    else {
LAB_0046f15b:
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
      FUN_0046ddd4((int)local_28);
      (*(longdouble *)&local_28) = in_ST0;
      if (iVar9 != 0) {
        FUN_0046d9f0();
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
LAB_0046f23d:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = GH_PIECE(local_28, 0, undefined4);
  param_1[1] = GH_PIECE(local_28, 4, undefined4);
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_0046f130:
  if (iVar7 != 0x2b) {
LAB_0046f135:
    if ((iVar7 < 0x30) || (0x39 < iVar7)) goto LAB_0046f15b;
    iVar9 = iVar7 + iVar9 * 10 + -0x30;
    if (0x1344 < iVar9) {
      local_11 = '\x01';
    }
  }
  goto LAB_0046f108;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046f384  FUN_0046f384   (128 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl FUN_0046f384(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_0046def0(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_0046def0(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046f41c  FUN_0046f41c   (28 bytes)   [unnamed]
int __cdecl FUN_0046f41c(int *param_1)

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
// 0x0046f438  FUN_0046f438   (10 bytes)   [unnamed]
void __cdecl FUN_0046f438(undefined4 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046f444  FUN_0046f444   (139 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint __cdecl FUN_0046f444(char *param_1,int *param_2,uint param_3)

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
    iVar2 = FUN_0046fc30((int)*param_1);
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
  }
  _DAT_0048a878 = 0;
  uVar3 = FUN_0046a388((undefined*)FUN_0046f41c,(undefined*)FUN_0046f438,&param_1,param_3,0x7fff,&local_8,&local_c);
  if (local_c < 1) {
    param_1 = param_1 + -local_8;
  }
  else if (local_c == 2) {
    uVar3 = 0xffffffff;
    _DAT_0048a878 = 0x22;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_1;
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046f4d0  FUN_0046f4d0   (722 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0046f4d0(longdouble *param_1,uint param_2,uint *param_3,undefined4 *param_4,int param_5)

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
  uVar1 = FUN_0046de28((longdouble *)local_10);
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
        FUN_0046d9f0();
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
      FUN_0046d9f0();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_0046d9f0();
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
        FUN_0046de04((longlong *)local_10,(longdouble *)local_10);
        local_28 = (undefined4 *)((int)param_4 + uVar8);
        bVar6 = 0;
        *(undefined1 *)local_28 = 0;
        pcVar5 = (char *)((int)local_28 + -1);
        if (uVar8 == 0) {
          if (local_10[0] != '\x01') goto LAB_0046f559;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_0046e3d0((undefined4 *)local_10);
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
LAB_0046f559:
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
// 0x0046f7a4  FUN_0046f7a4   (753 bytes)   [unnamed]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_0046f7a4(longdouble *param_1,int param_2,uint *param_3,undefined2 *param_4,int param_5)

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
  uVar1 = FUN_0046de28((longdouble *)local_10);
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
        FUN_0046d9f0();
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
      FUN_0046d9f0();
      if ((*(longdouble *)&local_10) <= in_ST0) {
        FUN_0046d9f0();
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
        FUN_0046de04((longlong *)local_10,(longdouble *)local_10);
        bVar6 = 0;
        local_28 = param_4 + iVar7;
        *local_28 = 0;
        psVar5 = local_28 + -1;
        if (iVar7 == 0) {
          if (local_10[0] != '\x01') goto LAB_0046f82d;
          bVar6 = 0;
        }
        else {
          do {
            uVar3 = FUN_0046e3d0((undefined4 *)local_10);
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
        FUN_0046767c(local_28,0x30,iVar8);
        local_28[iVar8] = 0;
        return local_18;
      }
    }
  }
LAB_0046f82d:
  if (param_2 < 1) {
    param_2 = 1 - param_2;
  }
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  FUN_0046767c(param_4,0x30,param_2);
  param_4[param_2] = 0;
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fa98  FUN_0046fa98   (289 bytes)   [unnamed]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 __cdecl FUN_0046fa98(UINT param_1)

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
    param_1 = *(UINT *)PTR_DAT_0048a308;
  }
  if ((param_1 == 0) || (BVar1 = GetCPInfo(param_1,&local_18), BVar1 != 0)) {
    iVar3 = 0;
    puVar6 = &DAT_0048d650;
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 0x101);
    if ((param_1 == 0) || (local_18.MaxCharSize < 2)) {
      _DAT_0048d754 = 0;
    }
    else {
      for (pBVar5 = local_18.LeadByte; (uVar4 = (uint)*pBVar5, *pBVar5 != 0 && (pBVar5[1] != 0));
          pBVar5 = pBVar5 + 2) {
        puVar6 = &DAT_0048d651 + uVar4;
        for (; (int)uVar4 <= (int)(uint)pBVar5[1]; uVar4 = uVar4 + 1) {
          *puVar6 = 4;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 1;
      pbVar7 = &DAT_0048d652;
      do {
        *pbVar7 = *pbVar7 | 8;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 1;
      } while (iVar3 < 0xff);
      _DAT_0048d754 = param_1;
      if (param_1 == 0x3a4) {
        uVar4 = (uint)DAT_0048a7e8;
        pbVar7 = &DAT_0048d651 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_0048a7e9; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 1;
          pbVar7 = pbVar7 + 1;
        }
        uVar4 = (uint)DAT_0048a7ea;
        pbVar7 = &DAT_0048d651 + uVar4;
        for (; (int)uVar4 <= (int)(uint)DAT_0048a7eb; uVar4 = uVar4 + 1) {
          *pbVar7 = *pbVar7 | 2;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    FUN_0046ff70((uint *)"Error: system code page access failure; MBCS table not initialized");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fbd4  FUN_0046fbd4   (61 bytes)   [unnamed]
undefined4 __cdecl FUN_0046fbd4(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 0x100) {
    iVar2 = FUN_0046b4e4(param_1 & 0xff);
    if ((iVar2 == 0) && (((&DAT_0048d651)[param_1 & 0xff] & 1) == 0)) {
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
// 0x0046fc14  FUN_0046fc14   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0046fc14(uint param_1)

{
  undefined4 uVar1;
  
  if (0xff < param_1) {
    return 0;
  }
  uVar1 = FUN_0046b510(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fc30  FUN_0046fc30   (26 bytes)   [unnamed]
undefined4 __cdecl FUN_0046fc30(uint param_1)

{
  undefined4 uVar1;
  
  if (0xff < param_1) {
    return 0;
  }
  uVar1 = FUN_0046b57c(param_1);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fc4c  FUN_0046fc4c   (84 bytes)   [unnamed]
byte * __cdecl FUN_0046fc4c(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  do {
    if ((param_3 == 0) || (*param_2 == 0)) goto joined_r0x0046fc8f;
    if (((&DAT_0048d651)[*param_2] & 4) != 0) {
      if ((param_3 < 2) || (param_2[1] == 0)) {
joined_r0x0046fc8f:
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
// 0x0046fca0  FUN_0046fca0   (191 bytes)   [unnamed]
undefined4 __cdecl FUN_0046fca0(byte *param_1,byte *param_2,int param_3)

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
    if (((&DAT_0048d651)[bVar1] & 4) == 0) {
      uVar4 = FUN_0046d1fc((uint)bVar1);
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
    if (((&DAT_0048d651)[bVar1] & 4) == 0) {
      uVar5 = FUN_0046d1fc((uint)bVar1);
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
// 0x0046fd60  FUN_0046fd60   (86 bytes)   [unnamed]
byte * __cdecl FUN_0046fd60(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  do {
    if (((&DAT_0048d651)[*param_1] & 4) == 0) {
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
// 0x0046fdb8  FUN_0046fdb8   (69 bytes)   [unnamed]
void __cdecl FUN_0046fdb8(uint *param_1,int param_2)

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
    FUN_004677fc((char *)param_1,pcVar1,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fe00  FUN_0046fe00   (94 bytes)   [unnamed]
void __cdecl FUN_0046fe00(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  
  FUN_0046fdb8((uint *)&DAT_0048d758,0xf6);
  pcVar1 = strlen((uint *)&DAT_0048d758);
  FUN_0046e0ec(param_3,pcVar1 + 0x48d758);
  FUN_0046ff70((uint *)&DAT_0048d758);
  FUN_0047039c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046fe60  FUN_0046fe60   (78 bytes)   [unnamed]
undefined * __stdcall FUN_0046fe60(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  wsprintfA(&DAT_0048d858,"%02d/%02d/%04d %02d:%02d:%02d.%03d ",(uint)local_10.wMonth,
            (uint)local_10.wDay,(uint)local_10.wYear,(uint)local_10.wHour,(uint)local_10.wMinute,
            (uint)local_10.wSecond,(uint)local_10.wMilliseconds);
  return &DAT_0048d858;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046feb0  FUN_0046feb0   (104 bytes)   [unnamed]
void __cdecl FUN_0046feb0(LPCSTR param_1,uint *param_2)

{
  HANDLE hFile;
  uint *lpBuffer;
  char *pcVar1;
  DWORD *pDVar2;
  LPOVERLAPPED p_Var3;
  DWORD local_8;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    lpBuffer = (uint *)FUN_0046fe60();
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
// 0x0046ff18  FUN_0046ff18   (18 bytes)   [unnamed]
undefined4 __stdcall FUN_0046ff18(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046ff2c  FUN_0046ff2c   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_0046ff2c(void)

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
  lpfn = FUN_0046ff18;
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
// 0x0046ff70  FUN_0046ff70   (283 bytes)   [unnamed]
void __cdecl FUN_0046ff70(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_88 [128];
  DWORD local_8;
  
  if ((DAT_0048a880 == (LPCSTR)0x0) && (DAT_0048a87c == (code *)0x0)) {
    if (DAT_0048aa90 != 0) {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_88,0x80);
      pbVar1 = FUN_0046fd60(local_88,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_0046fd60(local_88,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_88;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_0046ff2c();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_0048a884,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = strlen(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_0048a887,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_0048a87c != (code *)0x0) {
    if (DAT_0048a87c == (code *)0xffffffff) {
      return;
    }
    ((code *)DAT_0048a87c)();
  }
  if (DAT_0048a880 == (LPCSTR)0x0) {
    return;
  }
  if (DAT_0048a880 == (LPCSTR)0xffffffff) {
    return;
  }
  if (*DAT_0048a880 == '\0') {
    return;
  }
  FUN_0046feb0(DAT_0048a880,param_1);
  return;
}

} // namespace tea
