// name: FUN_0045f1d4
// address: 0x45f1d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0045f1d4(int param_1,byte *param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined3 extraout_var;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  int local_6c;
  uint local_50;
  undefined4 local_48;
  uint local_24 [4];
  uint local_14 [4];
  
  FUN_004dce64(0x4fa748);
  local_14[0] = DAT_0051ac64;
  if (DAT_0051ac64 == 1) {
    FUN_00468b6c((int)local_14);
  }
  do {
    while( true ) {
      while( true ) {
        bVar2 = *param_2;
        pbVar8 = param_2 + 1;
        if (bVar2 == 0xfc) {
          local_14[0] = local_14[0] | 2;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
        if (bVar2 != 0xf0) break;
        bVar2 = *pbVar8;
        param_2 = FUN_0045f0dc(param_1,(int)param_2,(int)param_3);
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
        param_3 = param_3 + bVar2;
      }
      if (bVar2 == 0xf1) break;
      if (bVar2 == 0xf3) {
        pbVar8 = param_2 + 2;
        bVar2 = param_3[param_5 + 0x80];
        while (param_2 = FUN_0045f1d4(param_1,pbVar8,param_3 + param_5,param_4,0),
              param_2 == (byte *)0x0) {
          if ((int)(uint)bVar2 <= param_4) {
            pbVar8 = (byte *)0x0;
            if (local_14[0] == 0) {
              DAT_0051ac64 = 0;
            }
            else if (local_14[0] == 1) {
              FUN_00468b8c((int)local_14);
            }
            *in_FS_OFFSET = local_48;
            return pbVar8;
          }
          param_4 = param_4 + 1;
        }
      }
      else if (bVar2 == 0xf2) {
        pbVar8 = param_2 + 2;
        while( true ) {
          bVar2 = param_3[0x80];
          for (; (param_2 = FUN_0045f1d4(param_1,pbVar8,param_3,param_4,param_5),
                 param_2 == (byte *)0x0 && (param_4 < (int)(uint)bVar2)); param_4 = param_4 + 1) {
          }
          if (param_2 != (byte *)0x0) break;
          if (param_5 == 0) {
            pbVar8 = (byte *)0x0;
            if (local_14[0] == 0) {
              DAT_0051ac64 = 0;
            }
            else if (local_14[0] == 1) {
              FUN_00468b8c((int)local_14);
            }
            *in_FS_OFFSET = local_48;
            return pbVar8;
          }
          param_3 = param_3 + 1;
          param_5 = param_5 + -1;
        }
      }
      else if (bVar2 == 0xf9) {
        bVar2 = *pbVar8;
        param_2 = FUN_00460050(param_1,(char *)(param_2 + 3),param_3,param_4,0,(uint)bVar2);
        if (param_2 == (byte *)0x0) {
          pbVar8 = (byte *)0x0;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
        param_3 = param_3 + bVar2;
      }
      else if (bVar2 == 0xfb) {
        bVar2 = *pbVar8;
        if ((int)(uint)param_2[2] < param_5) {
          pbVar8 = (byte *)0x0;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
        pbVar8 = FUN_00460050(param_1,(char *)(param_2 + 3),param_3,param_4,param_5,
                              (uint)bVar2 + param_5);
        if ((pbVar8 == (byte *)0x0) ||
           (param_2 = FUN_0045f1d4(param_1,pbVar8,param_3 + (uint)bVar2 + param_5,param_4,0),
           param_2 == (byte *)0x0)) {
          pbVar8 = (byte *)0x0;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
      }
      else if (bVar2 == 0xfa) {
        local_50 = (uint)*pbVar8;
        bVar2 = param_2[2];
        pbVar8 = param_2 + 3;
        local_6c = 0;
        while( true ) {
          local_24[0] = DAT_0051ac64;
          if (DAT_0051ac64 == 1) {
            FUN_00468b6c((int)local_24);
          }
          pbVar7 = FUN_00460050(param_1,(char *)pbVar8,param_3,param_4,local_6c,local_50);
          if ((pbVar7 != (byte *)0x0) &&
             (param_2 = FUN_0045f1d4(param_1,pbVar7,param_3 + local_50,param_4,param_5),
             param_2 != (byte *)0x0)) break;
          local_50 = local_50 + 1;
          param_5 = param_5 + -1;
          local_6c = local_6c + 1;
          if ((param_5 < 0) || ((int)(uint)bVar2 < local_6c)) {
            pbVar8 = (byte *)0x0;
            if (local_24[0] == 0) {
              DAT_0051ac64 = 0;
            }
            else if (local_24[0] == 1) {
              FUN_00468b8c((int)local_24);
            }
            if (local_14[0] == 0) {
              DAT_0051ac64 = 0;
            }
            else if (local_14[0] == 1) {
              FUN_00468b8c((int)local_14);
            }
            *in_FS_OFFSET = local_48;
            return pbVar8;
          }
          if (local_24[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_24[0] == 1) {
            FUN_00468b8c((int)local_24);
          }
        }
        local_24[0] = local_24[0] | 2;
        if (local_24[0] == 0) {
          DAT_0051ac64 = 0;
        }
        else if (local_24[0] == 1) {
          FUN_00468b8c((int)local_24);
        }
      }
      else {
        iVar1 = param_4 + 0x100;
        if (bVar2 == 0xff) {
          param_4 = param_4 + 1;
        }
        param_2 = param_2 + 2;
        if (*pbVar8 != param_3[iVar1]) {
          pbVar8 = (byte *)0x0;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
      }
    }
    bVar2 = *pbVar8;
    param_2 = param_2 + 2;
    while (bVar4 = *param_2, bVar4 < 0xf0) {
      pbVar8 = param_2 + 1;
      if ((bVar4 & 0x40) == 0) {
        if ((bVar4 & 0x80) == 0) {
          param_2 = param_2 + 2;
          if (param_3[bVar4] != *pbVar8) {
            pbVar8 = (byte *)0x0;
            if (local_14[0] == 0) {
              DAT_0051ac64 = 0;
            }
            else if (local_14[0] == 1) {
              FUN_00468b8c((int)local_14);
            }
            *in_FS_OFFSET = local_48;
            return pbVar8;
          }
        }
        else {
          param_2 = param_2 + 2;
          bVar9 = FUN_00468ab8((uint)*pbVar8,param_3[bVar4 & 0xffffff7f]);
          if (CONCAT31(extraout_var,bVar9) == 0) {
            pbVar8 = (byte *)0x0;
            if (local_14[0] == 0) {
              DAT_0051ac64 = 0;
            }
            else if (local_14[0] == 1) {
              FUN_00468b8c((int)local_14);
            }
            *in_FS_OFFSET = local_48;
            return pbVar8;
          }
        }
      }
      else {
        param_2 = param_2 + 2;
        bVar9 = (bVar4 & 0x80) != 0;
        uVar5 = (uint)*pbVar8;
        do {
          uVar6 = uVar5 - 1;
          if ((int)uVar5 < 1) break;
          bVar3 = *param_2;
          param_2 = param_2 + 1;
          uVar5 = uVar6;
        } while (param_3[bVar4 & 0x3f] != bVar3);
        if (-1 < (int)uVar6 == bVar9) {
          pbVar8 = (byte *)0x0;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_48;
          return pbVar8;
        }
        if (!bVar9) {
          while (0 < (int)uVar6) {
            param_2 = param_2 + 1;
            uVar6 = uVar6 - 1;
          }
        }
      }
    }
    param_3 = param_3 + bVar2;
  } while( true );
}

