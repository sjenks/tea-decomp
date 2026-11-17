// name: FUN_0040e79c
// address: 0x40e79c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int FUN_0040e79c(int param_1,byte *param_2,int param_3,char param_4,int param_5,int param_6,
                int param_7,uint param_8,int param_9,undefined4 param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  byte *local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_34;
  byte local_10 [12];
  
  FUN_0041f3fc(0x42cedc);
  local_44 = (uint)*(byte *)(param_6 + 1);
  local_48 = (uint)*(byte *)(param_6 + 2);
  local_4c = 0x7fffffff;
  if ((param_4 == -5) && (param_5 == 1)) {
    if ((int)param_8 < 0) {
      local_44 = local_44 + local_48;
      local_4c = 0;
    }
    else if ((int)local_48 < (int)param_8) {
      local_44 = local_44 + local_48;
      local_4c = 0;
    }
    else {
      local_48 = param_8;
      local_4c = 1;
    }
  }
  else if ((int)(param_9 - local_44) < (int)local_48) {
    local_48 = param_9 - local_44;
  }
  do {
    if (((int)local_48 < 0) || (local_4c == 0)) {
      local_44 = param_8 + local_44;
      if ((int)local_44 < 1) {
        if (param_5 < 2) {
          pbVar1 = FUN_0040ea58(param_1,param_2,(byte *)param_3,param_7,local_44,param_9,param_10);
          *in_FS_OFFSET = local_34;
        }
        else {
          pbVar1 = (byte *)FUN_0040e79c(param_1,param_2,param_3,param_4,param_5 + -1,param_6,param_7
                                        ,local_44,param_9,param_10);
          *in_FS_OFFSET = local_34;
        }
      }
      else {
        pbVar1 = (byte *)0x0;
        *in_FS_OFFSET = local_34;
      }
      return (int)pbVar1;
    }
    for (iVar3 = param_9 - (local_44 + local_48); -1 < iVar3; iVar3 = iVar3 + -1) {
      local_10[0] = DAT_00434684;
      if (DAT_00434684 == 1) {
        FUN_0040da30(local_10);
      }
      pbVar1 = (byte *)(param_3 + iVar3);
      pbVar2 = pbVar1 + local_48 + local_44;
      for (; (pbVar1 < pbVar2 && ((*pbVar1 & 0x80) == 0)); pbVar1 = pbVar1 + 1) {
      }
      if ((pbVar2 == pbVar1) &&
         (pbVar1 = FUN_0040ebec(param_1,(char *)(param_6 + 3),(byte *)(param_3 + iVar3),param_7,
                                local_48,local_44 + local_48), pbVar1 != (byte *)0x0)) {
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (param_5 < 2) {
          local_50 = FUN_0040ea58(param_1,param_2,(byte *)param_3,param_7,param_8 - local_48,param_9
                                  ,param_10);
        }
        else {
          local_50 = (byte *)FUN_0040e79c(param_1,param_2,param_3,param_4,param_5 + -1,param_6,
                                          param_7,param_8 - local_48,param_9,param_10);
        }
        for (pbVar1 = (byte *)(param_3 + iVar3); pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
          *pbVar1 = *pbVar1 ^ 0x80;
        }
        if (local_50 != (byte *)0x0) {
          local_10[0] = local_10[0] | 2;
          if (local_10[0] == 0) {
            DAT_00434684 = 0;
          }
          else if (local_10[0] == 1) {
            FUN_0040da50(local_10);
          }
          *in_FS_OFFSET = local_34;
          return (int)local_50;
        }
      }
      if (local_10[0] == 0) {
        DAT_00434684 = 0;
      }
      else if (local_10[0] == 1) {
        FUN_0040da50(local_10);
      }
    }
    local_4c = local_4c + -1;
    local_48 = local_48 - 1;
  } while( true );
}

