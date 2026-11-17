// name: FUN_0045fc04
// address: 0x45fc04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int FUN_0045fc04(int param_1,byte *param_2,int param_3,char param_4,int param_5,int param_6,
                int param_7,uint param_8,int param_9,undefined4 param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  byte *local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_14 [4];
  
  FUN_004dce64(0x4fa854);
  local_48 = (uint)*(byte *)(param_6 + 1);
  local_4c = (uint)*(byte *)(param_6 + 2);
  local_50 = 0x7fffffff;
  if ((param_4 == -5) && (param_5 == 1)) {
    if ((int)param_8 < 0) {
      local_48 = local_48 + local_4c;
      local_50 = 0;
    }
    else if ((int)local_4c < (int)param_8) {
      local_48 = local_48 + local_4c;
      local_50 = 0;
    }
    else {
      local_4c = param_8;
      local_50 = 1;
    }
  }
  else if ((int)(param_9 - local_48) < (int)local_4c) {
    local_4c = param_9 - local_48;
  }
  do {
    if (((int)local_4c < 0) || (local_50 == 0)) {
      local_48 = param_8 + local_48;
      if ((int)local_48 < 1) {
        if (param_5 < 2) {
          pbVar1 = FUN_0045febc(param_1,param_2,(byte *)param_3,param_7,local_48,param_9,param_10);
          *in_FS_OFFSET = local_38;
        }
        else {
          pbVar1 = (byte *)FUN_0045fc04(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7
                                        ,local_48,param_9,param_10);
          *in_FS_OFFSET = local_38;
        }
      }
      else {
        pbVar1 = (byte *)0x0;
        *in_FS_OFFSET = local_38;
      }
      return (int)pbVar1;
    }
    for (iVar3 = param_9 - (local_48 + local_4c); -1 < iVar3; iVar3 = iVar3 + -1) {
      local_14[0] = DAT_0051ac64;
      if (DAT_0051ac64 == 1) {
        FUN_00468b6c((int)local_14);
      }
      pbVar1 = (byte *)(param_3 + iVar3);
      pbVar2 = pbVar1 + local_4c + local_48;
      for (; (pbVar1 < pbVar2 && ((*pbVar1 & 0x80) == 0)); pbVar1 = pbVar1 + 1) {
      }
      if ((pbVar2 == pbVar1) &&
         (pbVar1 = FUN_00460050(param_1,(char *)(param_6 + 3),(byte *)(param_3 + iVar3),param_7,
                                local_4c,local_48 + local_4c), pbVar1 != (byte *)0x0)) {
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (param_5 < 2) {
          local_54 = FUN_0045febc(param_1,param_2,(byte *)param_3,param_7,param_8 - local_4c,param_9
                                  ,param_10);
        }
        else {
          local_54 = (byte *)FUN_0045fc04(param_1,param_2,param_3,param_4,param_5 + -1,param_6,
                                          param_7,param_8 - local_4c,param_9,param_10);
        }
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (local_54 != (byte *)0x0) {
          local_14[0] = local_14[0] | 2;
          if (local_14[0] == 0) {
            DAT_0051ac64 = 0;
          }
          else if (local_14[0] == 1) {
            FUN_00468b8c((int)local_14);
          }
          *in_FS_OFFSET = local_38;
          return (int)local_54;
        }
      }
      if (local_14[0] == 0) {
        DAT_0051ac64 = 0;
      }
      else if (local_14[0] == 1) {
        FUN_00468b8c((int)local_14);
      }
    }
    local_50 = local_50 + -1;
    local_4c = local_4c - 1;
  } while( true );
}

