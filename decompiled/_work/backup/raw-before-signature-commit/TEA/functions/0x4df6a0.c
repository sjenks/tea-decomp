// name: FUN_004df6a0
// address: 0x4df6a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl
FUN_004df6a0(undefined *param_1,undefined *param_2,byte *param_3,byte *param_4,int *param_5)

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
  byte local_102 [2];
  byte local_100;
  undefined1 uStack_ff;
  undefined2 local_46;
  byte *local_44;
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
              local_44 = (byte *)*param_5;
              param_5 = param_5 + 1;
            }
            else {
              local_44 = (byte *)*param_5;
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
          FUN_004dc844((undefined4 *)local_124,0,0x20);
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
    local_44 = pbVar8;
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
      *local_44 = bVar9;
      pbVar8 = local_44;
      local_44 = local_44 + 1;
    }
  }
  if (-1 < (int)local_14) {
    (*(code *)param_2)(param_3,(int)(char)uVar6,pbVar8,(int)(char)uVar6,param_3);
    local_c = local_c - 1;
  }
  if ((local_3c != 0) && (!bVar4)) {
    *local_44 = 0;
    local_8 = local_8 + 1;
    local_44 = local_44 + 1;
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
      local_44 = (byte *)*param_5;
    }
    else {
      local_44 = (byte *)*param_5;
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
        *local_44 = (byte)local_24;
        local_44 = local_44 + 1;
      }
      else {
        _local_100 = CONCAT11((char)((ushort)DAT_00517ef8 >> 8),(byte)local_24);
        iVar7 = FUN_004e3124((LPWSTR)&local_46,&local_100,DAT_00518404);
        if (iVar7 < 1) {
          local_c = local_c - 1;
        }
        else {
          *(undefined2 *)local_44 = local_46;
          local_44 = local_44 + 2;
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
      *local_44 = 0;
    }
    else {
      local_44[0] = 0;
      local_44[1] = 0;
    }
  }
  goto LAB_004df6b9;
  while( true ) {
    if (!bVar4) {
      if (local_40 == 0) {
        *local_44 = (byte)local_24;
        local_44 = local_44 + 1;
      }
      else {
        iVar7 = FUN_004e3124((LPWSTR)local_102,local_44,DAT_00518404);
        if (0 < iVar7) {
          *local_44 = local_102[0];
          local_44 = local_44 + 1;
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

