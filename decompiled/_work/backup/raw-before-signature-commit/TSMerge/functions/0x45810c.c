// name: FUN_0045810c
// address: 0x45810c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl
FUN_0045810c(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4,undefined4 param_5,
            uint *param_6)

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
  uint uVar14;
  bool bVar15;
  undefined1 local_524 [80];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  uint local_4c8;
  int local_4c4;
  undefined4 *local_4c0;
  uint local_4bc [256];
  undefined1 local_bc [2];
  undefined2 local_ba;
  undefined1 local_b4;
  CHAR local_5a [2];
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
  local_4d4 = 0;
  local_4d0 = param_1;
  local_4cc = param_2;
  if (param_4 == 0) {
    local_4c0 = (undefined4 *)0x0;
  }
  else {
    local_4c0 = &param_5;
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
        uVar14 = 0;
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
          uVar14 = uVar14 | 0x10;
          uVar5 = 5;
          goto switchD_004581f5_default;
        case 7:
          uVar5 = 5;
          uVar14 = uVar14 & 0xffffffef;
          bVar4 = true;
          goto switchD_004581f5_default;
        case 8:
          uVar5 = 5;
          uVar14 = 0x200;
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
          local_b4 = 0;
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
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
switchD_004581f5_caseD_10:
          if ((uVar14 & 0x10) == 0) {
            local_1c = (uint *)local_bc;
            local_bc[1] = 0;
            local_bc[0] = (byte)*param_6;
            local_20 = 0;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          else {
            local_1c = (uint *)local_bc;
            local_bc = SUB42(*param_6,0);
            local_ba = 0;
            local_20 = 1;
            local_44 = (char *)0x1;
            param_6 = param_6 + 1;
          }
          goto LAB_004587f2;
        case 0x13:
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
switchD_004581f5_caseD_11:
          if ((uVar14 & 0x10) == 0) {
            local_1c = (uint *)*param_6;
            local_20 = 0;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)s__null__004751b4;
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
            uVar14 = local_c;
            if ((int)local_c < 0) {
              uVar14 = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar8 = local_1c; (uVar14 != 0 && ((byte)*puVar8 != 0));
                puVar8 = (uint *)((int)puVar8 + 1)) {
              uVar14 = uVar14 - 1;
              local_44 = local_44 + 1;
            }
          }
          else {
            uVar14 = local_c;
            if ((int)local_c < 0) {
              uVar14 = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar8 = local_1c; (uVar14 != 0 && ((ushort)*puVar8 != 0));
                puVar8 = (uint *)((int)puVar8 + 2)) {
              uVar14 = uVar14 - 1;
              local_44 = local_44 + 1;
            }
          }
          goto LAB_004587f2;
        case 0x14:
          puVar8 = param_6 + 1;
          local_1c = (uint *)*param_6;
          param_6 = puVar8;
          if ((uVar14 & 0x10) == 0) {
            if ((uVar14 & 0x200) == 0) {
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
            uVar14 = 0;
            bVar4 = true;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if ((*param_3 == 0x33) && (pbVar13[2] == 0x32)) {
            uVar14 = 0x10;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if ((*param_3 == 0x31) && (pbVar13[2] == 0x36)) {
            uVar14 = 0x200;
            bVar4 = false;
            uVar5 = 5;
            param_3 = pbVar13 + 3;
          }
          else if (*param_3 == 0x38) {
            uVar14 = 0;
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
  else if ((uVar14 & 0x10) == 0) {
    if ((uVar14 & 0x200) == 0) {
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
      local_44 = FUN_00455bf0(local_1c);
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
    local_44 = FUN_00455bf0(local_1c);
  }
  else {
    local_40 = FUN_00455bf0(local_1c);
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
      uVar14 = *local_1c;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_004580a4((byte)uVar14,(int)local_524);
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
      uVar14 = *local_48;
      local_48 = (uint *)((int)local_48 + 2);
      local_54 = FUN_0045ac78(local_5a,(ushort)uVar14);
      if (local_54 < 1) break;
      iVar7 = 0;
      pcVar9 = (char *)((int)local_4bc + (int)local_50);
      pcVar6 = local_5a;
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
      uVar14 = *local_1c;
      local_44 = local_44 + -1;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_004580a4((byte)uVar14,(int)local_524);
    }
    local_44 = (char *)0xffffffff;
  }
  while (uVar14 = local_8 - 1, bVar15 = 0 < (int)local_8, local_8 = uVar14, bVar15) {
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

