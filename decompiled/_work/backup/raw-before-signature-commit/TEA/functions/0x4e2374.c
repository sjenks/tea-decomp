// name: FUN_004e2374
// address: 0x4e2374
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004e2374(int *param_1,char *param_2)

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
  FUN_004dc844((undefined4 *)local_104,0,0x100);
  iVar3 = 0;
  do {
    if (*param_2 == '\0') {
      uVar5 = FUN_004e1bb4(param_1,local_204);
      param_1[1] = uVar5;
      BVar6 = IsValidLocale(param_1[1],1);
      if ((BVar6 == 0) && (param_1[2] == 0)) {
        SetLastError(0x20000103);
        uVar7 = 0;
      }
      else {
        SetThreadLocale(*(LCID *)(PTR_DAT_00518658 + 4));
        FUN_004e1fc8((int)PTR_DAT_00518658);
        iVar3 = FUN_004e1e0c((uint *)PTR_DAT_00518658,uVar10);
        if (iVar3 == 0) {
          SetLastError(0x20000102);
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(PTR_DAT_00518658 + 0x24);
        }
      }
      return uVar7;
    }
    if (*param_2 == '=') {
      pcVar4 = local_104;
      pcVar9 = s_LC_CTYPE_005184e0;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004e23d8;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004e23d8;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 2;
      }
LAB_004e23d8:
      pcVar4 = local_104;
      pcVar9 = s_LC_TIME_005184e9;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004e2405;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004e2405;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x20;
      }
LAB_004e2405:
      pcVar4 = local_104;
      pcVar9 = s_LC_NUMERIC_005184f1;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004e2432;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004e2432;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 0x10;
      }
LAB_004e2432:
      pcVar4 = local_104;
      pcVar9 = s_LC_MONETARY_005184fc;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004e245f;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004e245f;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 4;
      }
LAB_004e245f:
      pcVar4 = local_104;
      pcVar9 = s_LC_COLLATE_00518508;
      do {
        if (*pcVar4 != *pcVar9) goto LAB_004e248c;
        bVar13 = true;
        if (*pcVar4 == '\0') break;
        pcVar1 = pcVar4 + 1;
        if (*pcVar1 != pcVar9[1]) goto LAB_004e248c;
        pcVar4 = pcVar4 + 2;
        pcVar9 = pcVar9 + 2;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
      if (bVar13) {
        uVar10 = uVar10 | 1;
      }
LAB_004e248c:
      FUN_004dc844((undefined4 *)local_104,0,0x100);
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
      FUN_004dc844((undefined4 *)local_104,0,0x100);
      iVar3 = 0;
    }
    else {
      local_104[iVar3] = *param_2;
      iVar3 = iVar3 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}

