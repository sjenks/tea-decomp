// name: FUN_004590e4
// address: 0x4590e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 __cdecl FUN_004590e4(ushort param_1,uint *param_2)

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
    pbVar10 = (byte *)FUN_00455d60(param_2);
  }
  if ((PTR_DAT_00475910 == (undefined *)0x0) || ((undefined4 *)PTR_DAT_00475910 == &DAT_004758e4)) {
    if ((undefined4 *)PTR_DAT_00475910 == &DAT_004758e4) {
      local_10 = 1;
    }
    PTR_DAT_00475910 = (undefined *)FUN_0044b2a0(1,0x2c);
    if ((undefined4 *)PTR_DAT_00475910 == (undefined4 *)0x0) {
      SetLastError(0xe);
      FUN_0044b954();
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_00475910 + 0x24) != 0) {
    FUN_0044b954();
    *(undefined4 *)(PTR_DAT_00475910 + 0x24) = 0;
  }
  if ((pbVar10 == (byte *)0x0) || (*pbVar10 == 0)) {
    if (pbVar10 == (byte *)0x0) {
      if (local_10 == 0) {
        if ((param_1 & 4) == 4) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)s_LC_MONETARY_00475708);
        }
        if ((param_1 & 0x10) == 0x10) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)s_LC_NUMERIC_00475714);
        }
        if ((param_1 & 0x20) == 0x20) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)s_LC_TIME_0047571f);
        }
        if ((param_1 & 1) == 1) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)s_LC_COLLATE_00475727);
        }
        if ((param_1 & 2) == 2) {
          FUN_0045a014((uint *)PTR_DAT_00475910,(uint *)s_LC_CTYPE_00475732);
        }
        FUN_0044b954();
        FUN_0045a9c4();
        return *(undefined4 *)(PTR_DAT_00475910 + 0x24);
      }
      FUN_00459a48((int)PTR_DAT_00475910);
      FUN_0044b954();
      PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
    }
    else {
      local_14 = GetUserDefaultLCID();
      GetLocaleInfoA(local_14,0xb,local_c,7);
      iVar7 = FUN_0045b3a0(local_c);
      puVar2 = PTR_DAT_00475910;
      *(int *)PTR_DAT_00475910 = iVar7;
      *(undefined4 *)(puVar2 + 8) = 0;
    }
  }
  else {
    pcVar3 = FUN_00455e58((char *)param_2,s_en_US_0047573b);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = FUN_00455e58((char *)param_2,s_en_GB_00475745);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = FUN_00455e58((char *)param_2,s_fr_FR_0047574f);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = FUN_00455e58((char *)param_2,s_de_DE_00475759);
          if (pcVar3 != (char *)0x0) {
            *(undefined4 *)pbVar10 = DAT_0047575f;
            local_18 = FUN_00455b20((char *)param_2,'.');
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
          *(undefined4 *)pbVar10 = DAT_00475755;
          local_18 = FUN_00455b20((char *)param_2,'.');
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
        *(undefined4 *)pbVar10 = DAT_0047574b;
        local_18 = FUN_00455b20((char *)param_2,'.');
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
      *(undefined4 *)pbVar10 = DAT_00475741;
      local_18 = FUN_00455b20((char *)param_2,'.');
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
      FUN_0044b954();
      PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
    }
    else {
LAB_00459433:
      if (((*pbVar10 == 0x4c) && (pbVar10[1] == 0x43)) && (pbVar10[2] == 0x5f)) {
        FUN_0044b954();
        uVar6 = FUN_00459df4((int *)PTR_DAT_00475910,(char *)param_2);
        return uVar6;
      }
      *(undefined4 *)(PTR_DAT_00475910 + 8) = 0;
      local_14 = FUN_00459634((int *)puVar2,pbVar10);
      if (local_14 == 0) {
        if (local_10 != 0) {
          FUN_0044b954();
          PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
        }
        FUN_0044b954();
        return 0;
      }
    }
  }
  *(LCID *)(PTR_DAT_00475910 + 4) = local_14;
  FUN_0044b954();
  BVar5 = IsValidLocale(*(LCID *)(PTR_DAT_00475910 + 4),1);
  if ((BVar5 == 0) && (*(int *)(PTR_DAT_00475910 + 8) == 0)) {
    SetLastError(0x20000103);
    if (local_10 != 0) {
      FUN_00459a48((int)PTR_DAT_00475910);
      FUN_0044b954();
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
          FUN_0044b954();
          PTR_DAT_00475910 = (undefined *)&DAT_004758e4;
        }
        uVar6 = 0;
      }
      else {
        iVar7 = FUN_0045cf5c(*(UINT *)PTR_DAT_00475910);
        if ((iVar7 == 0) && (BVar5 = GetCPInfo(*(UINT *)PTR_DAT_00475910,&local_2c), BVar5 != 0)) {
          _DAT_004756bc = local_2c.MaxCharSize;
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

