// name: FUN_0042289c
// address: 0x42289c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl FUN_0042289c(ushort param_1,uint *param_2)

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
    pbVar10 = (byte *)FUN_0041f144(param_2);
  }
  if ((PTR_DAT_0043330c == (undefined *)0x0) || ((undefined4 *)PTR_DAT_0043330c == &DAT_004332e0)) {
    if ((undefined4 *)PTR_DAT_0043330c == &DAT_004332e0) {
      local_10 = 1;
    }
    PTR_DAT_0043330c = (undefined *)FUN_00414f4c(1,0x2c);
    if ((undefined4 *)PTR_DAT_0043330c == (undefined4 *)0x0) {
      SetLastError(0xe);
      FUN_00415600();
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_0043330c + 0x24) != 0) {
    FUN_00415600();
    *(undefined4 *)(PTR_DAT_0043330c + 0x24) = 0;
  }
  if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
    if (pbVar10 == (byte *)0x0) {
      if (local_10 == 0) {
        if ((param_1 & 4) == 4) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)s_LC_MONETARY_00433104);
        }
        if ((param_1 & 0x10) == 0x10) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)s_LC_NUMERIC_00433110);
        }
        if ((param_1 & 0x20) == 0x20) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)s_LC_TIME_0043311b);
        }
        if ((param_1 & 1) == 1) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)s_LC_COLLATE_00433123);
        }
        if ((param_1 & 2) == 2) {
          FUN_004237cc((uint *)PTR_DAT_0043330c,(uint *)s_LC_CTYPE_0043312e);
        }
        FUN_00415600();
        FUN_0042417c();
        return *(undefined4 *)(PTR_DAT_0043330c + 0x24);
      }
      FUN_00423200((int)PTR_DAT_0043330c);
      FUN_00415600();
      PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
    }
    else {
      local_14 = GetUserDefaultLCID();
      GetLocaleInfoA(local_14,0xb,local_c,7);
      iVar7 = FUN_00424b58(local_c);
      puVar2 = PTR_DAT_0043330c;
      *(int *)PTR_DAT_0043330c = iVar7;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
  }
  else {
    pcVar3 = FUN_0041f2b0((char *)param_2,s_en_US_00433137);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = FUN_0041f2b0((char *)param_2,s_en_GB_00433141);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = FUN_0041f2b0((char *)param_2,s_fr_FR_0043314b);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = FUN_0041f2b0((char *)param_2,s_de_DE_00433155);
          if (pcVar3 != (char *)0x0) {
            *(undefined4 *)pbVar10 = DAT_0043315b;
            local_18 = FUN_0041ef2c((char *)param_2,'.');
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
          *(undefined4 *)pbVar10 = DAT_00433151;
          local_18 = FUN_0041ef2c((char *)param_2,'.');
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
        *(undefined4 *)pbVar10 = DAT_00433147;
        local_18 = FUN_0041ef2c((char *)param_2,'.');
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
      *(undefined4 *)pbVar10 = DAT_0043313d;
      local_18 = FUN_0041ef2c((char *)param_2,'.');
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
    puVar2 = PTR_DAT_0043330c;
    pcVar3 = &DAT_0043315f;
    puVar4 = param_2;
    do {
      if ((char)*puVar4 != *pcVar3) goto LAB_00422beb;
      bVar14 = true;
      if ((char)*puVar4 == '\0') break;
      pcVar12 = (char *)((int)puVar4 + 1);
      if (*pcVar12 != pcVar3[1]) goto LAB_00422beb;
      puVar4 = (uint *)((int)puVar4 + 2);
      pcVar3 = pcVar3 + 2;
      bVar14 = *pcVar12 == '\0';
    } while (!bVar14);
    if (bVar14) {
      FUN_00423200((int)PTR_DAT_0043330c);
      FUN_00415600();
      PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
    }
    else {
LAB_00422beb:
      if (((*pbVar10 == 0x4c) && (pbVar10[1] == 0x43)) && (pbVar10[2] == 0x5f)) {
        FUN_00415600();
        uVar6 = FUN_004235ac((int *)PTR_DAT_0043330c,(char *)param_2);
        return uVar6;
      }
      *(undefined4 *)(PTR_DAT_0043330c + 8) = 0;
      local_14 = FUN_00422dec((int *)puVar2,pbVar10);
      if (local_14 == 0) {
        if (local_10 != 0) {
          FUN_00415600();
          PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
        }
        FUN_00415600();
        return 0;
      }
    }
  }
  *(LCID *)(PTR_DAT_0043330c + 4) = local_14;
  FUN_00415600();
  BVar5 = IsValidLocale(*(LCID *)(PTR_DAT_0043330c + 4),1);
  if ((BVar5 == 0) && (*(int *)(PTR_DAT_0043330c + 8) == 0)) {
    SetLastError(0x20000103);
    if (local_10 != 0) {
      FUN_00423200((int)PTR_DAT_0043330c);
      FUN_00415600();
      PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
    }
    uVar6 = 0;
  }
  else {
    SetThreadLocale(*(LCID *)(PTR_DAT_0043330c + 4));
    if (*(int *)(PTR_DAT_0043330c + 8) == 0) {
      FUN_00423200((int)PTR_DAT_0043330c);
      iVar7 = FUN_00423044((uint *)PTR_DAT_0043330c,param_1);
      if (iVar7 == 0) {
        SetLastError(0x20000102);
        if (local_10 != 0) {
          FUN_00423200((int)PTR_DAT_0043330c);
          FUN_00415600();
          PTR_DAT_0043330c = (undefined *)&DAT_004332e0;
        }
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_00426638(*(UINT *)PTR_DAT_0043330c);
        if ((iVar7 == 0) && (BVar5 = GetCPInfo(*(UINT *)PTR_DAT_0043330c,&local_2c), BVar5 != 0)) {
          _DAT_004330b8 = local_2c.MaxCharSize;
          FUN_0042417c();
          uVar6 = *(undefined4 *)(PTR_DAT_0043330c + 0x24);
        }
        else {
          SetLastError(0x20000106);
          uVar6 = 0;
        }
      }
    }
    else {
      _DAT_004330b8 = 1;
      FUN_0042417c();
      uVar6 = *(undefined4 *)(PTR_DAT_0043330c + 0x24);
    }
  }
  return uVar6;
}

