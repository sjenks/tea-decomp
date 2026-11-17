// name: FUN_004e1664
// address: 0x4e1664
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl FUN_004e1664(ushort param_1,uint *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  uint *puVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  _cpinfo local_2c;
  char *local_18;
  LCID local_14;
  int local_10;
  CHAR local_c [8];
  
  pbVar10 = (byte *)0x0;
  local_10 = 0;
  local_14 = 0;
  if (param_2 != (uint *)0x0) {
    pbVar10 = (byte *)FUN_004dcbc4(param_2);
  }
  if ((PTR_DAT_00518658 == (undefined *)0x0) || ((undefined4 *)PTR_DAT_00518658 == &DAT_0051862c)) {
    if ((undefined4 *)PTR_DAT_00518658 == &DAT_0051862c) {
      local_10 = 1;
    }
    PTR_DAT_00518658 = (undefined *)FUN_004cc090(1,0x2c);
    if ((undefined4 *)PTR_DAT_00518658 == (undefined4 *)0x0) {
      SetLastError(0xe);
      FUN_004cc744();
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_00518658 + 0x24) != 0) {
    FUN_004cc744();
    *(undefined4 *)(PTR_DAT_00518658 + 0x24) = 0;
  }
  if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
    if (pbVar10 == (byte *)0x0) {
      if (local_10 == 0) {
        if ((param_1 & 4) == 4) {
          FUN_004e2594((uint *)PTR_DAT_00518658,(uint *)s_LC_MONETARY_00518450);
        }
        if ((param_1 & 0x10) == 0x10) {
          FUN_004e2594((uint *)PTR_DAT_00518658,(uint *)s_LC_NUMERIC_0051845c);
        }
        if ((param_1 & 0x20) == 0x20) {
          FUN_004e2594((uint *)PTR_DAT_00518658,(uint *)s_LC_TIME_00518467);
        }
        if ((param_1 & 1) == 1) {
          FUN_004e2594((uint *)PTR_DAT_00518658,(uint *)s_LC_COLLATE_0051846f);
        }
        if ((param_1 & 2) == 2) {
          FUN_004e2594((uint *)PTR_DAT_00518658,(uint *)s_LC_CTYPE_0051847a);
        }
        FUN_004cc744();
        FUN_004e2f44();
        return *(undefined4 *)(PTR_DAT_00518658 + 0x24);
      }
      FUN_004e1fc8((int)PTR_DAT_00518658);
      FUN_004cc744();
      PTR_DAT_00518658 = (undefined *)&DAT_0051862c;
    }
    else {
      local_14 = GetUserDefaultLCID();
      GetLocaleInfoA(local_14,0xb,local_c,7);
      iVar7 = FUN_004e39d0(local_c);
      puVar2 = PTR_DAT_00518658;
      *(int *)PTR_DAT_00518658 = iVar7;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
  }
  else {
    pcVar3 = FUN_004dcd18((char *)param_2,s_en_US_00518483);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = FUN_004dcd18((char *)param_2,s_en_GB_0051848d);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = FUN_004dcd18((char *)param_2,s_fr_FR_00518497);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = FUN_004dcd18((char *)param_2,s_de_DE_005184a1);
          if (pcVar3 != (char *)0x0) {
            *(undefined4 *)pbVar10 = DAT_005184a7;
            local_18 = FUN_004dc924((char *)param_2,'.');
            if (local_18 != (char *)0x0) {
              uVar8 = 0xffffffff;
              pcVar3 = local_18;
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
              for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
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
          *(undefined4 *)pbVar10 = DAT_0051849d;
          local_18 = FUN_004dc924((char *)param_2,'.');
          if (local_18 != (char *)0x0) {
            uVar8 = 0xffffffff;
            pcVar3 = local_18;
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
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
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
        *(undefined4 *)pbVar10 = DAT_00518493;
        local_18 = FUN_004dc924((char *)param_2,'.');
        if (local_18 != (char *)0x0) {
          uVar8 = 0xffffffff;
          pcVar3 = local_18;
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
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
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
      *(undefined4 *)pbVar10 = DAT_00518489;
      local_18 = FUN_004dc924((char *)param_2,'.');
      if (local_18 != (char *)0x0) {
        uVar8 = 0xffffffff;
        pcVar3 = local_18;
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
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
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
    puVar2 = PTR_DAT_00518658;
    pcVar3 = &DAT_005184ab;
    puVar4 = param_2;
    do {
      if ((char)*puVar4 != *pcVar3) goto LAB_004e19b3;
      bVar14 = true;
      if ((char)*puVar4 == '\0') break;
      pcVar12 = (char *)((int)puVar4 + 1);
      if (*pcVar12 != pcVar3[1]) goto LAB_004e19b3;
      puVar4 = (uint *)((int)puVar4 + 2);
      pcVar3 = pcVar3 + 2;
      bVar14 = *pcVar12 == '\0';
    } while (!bVar14);
    if (bVar14) {
      FUN_004e1fc8((int)PTR_DAT_00518658);
      FUN_004cc744();
      PTR_DAT_00518658 = (undefined *)&DAT_0051862c;
    }
    else {
LAB_004e19b3:
      if (((*pbVar10 == 0x4c) && (pbVar10[1] == 0x43)) && (pbVar10[2] == 0x5f)) {
        FUN_004cc744();
        uVar6 = FUN_004e2374((int *)PTR_DAT_00518658,(char *)param_2);
        return uVar6;
      }
      *(undefined4 *)(PTR_DAT_00518658 + 8) = 0;
      local_14 = FUN_004e1bb4((int *)puVar2,pbVar10);
      if (local_14 == 0) {
        if (local_10 != 0) {
          FUN_004cc744();
          PTR_DAT_00518658 = (undefined *)&DAT_0051862c;
        }
        FUN_004cc744();
        return 0;
      }
    }
  }
  *(LCID *)(PTR_DAT_00518658 + 4) = local_14;
  FUN_004cc744();
  BVar5 = IsValidLocale(*(LCID *)(PTR_DAT_00518658 + 4),1);
  if ((BVar5 == 0) && (*(int *)(PTR_DAT_00518658 + 8) == 0)) {
    SetLastError(0x20000103);
    if (local_10 != 0) {
      FUN_004e1fc8((int)PTR_DAT_00518658);
      FUN_004cc744();
      PTR_DAT_00518658 = (undefined *)&DAT_0051862c;
    }
    uVar6 = 0;
  }
  else {
    SetThreadLocale(*(LCID *)(PTR_DAT_00518658 + 4));
    if (*(int *)(PTR_DAT_00518658 + 8) == 0) {
      FUN_004e1fc8((int)PTR_DAT_00518658);
      iVar7 = FUN_004e1e0c((uint *)PTR_DAT_00518658,param_1);
      if (iVar7 == 0) {
        SetLastError(0x20000102);
        if (local_10 != 0) {
          FUN_004e1fc8((int)PTR_DAT_00518658);
          FUN_004cc744();
          PTR_DAT_00518658 = (undefined *)&DAT_0051862c;
        }
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_004e5980(*(UINT *)PTR_DAT_00518658);
        if ((iVar7 == 0) && (BVar5 = GetCPInfo(*(UINT *)PTR_DAT_00518658,&local_2c), BVar5 != 0)) {
          DAT_00518404 = local_2c.MaxCharSize;
          FUN_004e2f44();
          uVar6 = *(undefined4 *)(PTR_DAT_00518658 + 0x24);
        }
        else {
          SetLastError(0x20000106);
          uVar6 = 0;
        }
      }
    }
    else {
      DAT_00518404 = 1;
      FUN_004e2f44();
      uVar6 = *(undefined4 *)(PTR_DAT_00518658 + 0x24);
    }
  }
  return uVar6;
}

