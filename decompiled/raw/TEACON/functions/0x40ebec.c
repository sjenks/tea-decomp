// name: FUN_0040ebec
// address: 0x40ebec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_0040ebec(int param_1,char *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  byte local_10 [12];
  
  FUN_0041f3fc(0x42cf34);
  local_10[0] = DAT_00434684;
  if (DAT_00434684 == 1) {
    FUN_0040da30(local_10);
  }
  while( true ) {
    pbVar1 = (byte *)(param_2 + 1);
    if (*param_2 == 0xfc) {
      local_10[0] = local_10[0] | 2;
      if (local_10[0] == 0) {
        DAT_00434684 = 0;
      }
      else if (local_10[0] == 1) {
        FUN_0040da50(local_10);
      }
      *in_FS_OFFSET = local_34;
      return pbVar1;
    }
    if (*param_2 == 0xf4) break;
    param_2 = (char *)FUN_0040dd78(param_1,(byte *)param_2,param_3,param_4,param_5);
    if ((byte *)param_2 == (byte *)0x0) {
      pbVar1 = (byte *)0x0;
      if (local_10[0] == 0) {
        DAT_00434684 = 0;
      }
      else if (local_10[0] == 1) {
        FUN_0040da50(local_10);
      }
      *in_FS_OFFSET = local_34;
      return pbVar1;
    }
  }
  pbVar1 = FUN_0040ea58(param_1,(byte *)(param_2 + 6),param_3,param_4,
                        param_6 - *(int *)(param_2 + 2),param_6,(uint)*pbVar1);
  if (pbVar1 != (byte *)0x0) {
    FUN_0040eb20(param_2 + 6,param_3,param_6);
    local_10[0] = local_10[0] | 2;
    pbVar1 = pbVar1 + 1;
    if (local_10[0] == 0) {
      DAT_00434684 = 0;
    }
    else if (local_10[0] == 1) {
      FUN_0040da50(local_10);
    }
    *in_FS_OFFSET = local_34;
    return pbVar1;
  }
  pbVar1 = (byte *)0x0;
  if (local_10[0] == 0) {
    DAT_00434684 = 0;
  }
  else if (local_10[0] == 1) {
    FUN_0040da50(local_10);
  }
  *in_FS_OFFSET = local_34;
  return pbVar1;
}

