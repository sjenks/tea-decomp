// name: FUN_00460050
// address: 0x460050
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * FUN_00460050(int param_1,char *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint local_14 [4];
  
  FUN_004dce64(0x4fa8ac);
  local_14[0] = DAT_0051ac64;
  if (DAT_0051ac64 == 1) {
    FUN_00468b6c((int)local_14);
  }
  while( true ) {
    pbVar1 = (byte *)(param_2 + 1);
    if (*param_2 == 0xfc) {
      local_14[0] = local_14[0] | 2;
      if (local_14[0] == 0) {
        DAT_0051ac64 = 0;
      }
      else if (local_14[0] == 1) {
        FUN_00468b8c((int)local_14);
      }
      *in_FS_OFFSET = local_38;
      return pbVar1;
    }
    if (*param_2 == 0xf4) break;
    param_2 = (char *)FUN_0045f1d4(param_1,(byte *)param_2,param_3,param_4,param_5);
    if ((byte *)param_2 == (byte *)0x0) {
      pbVar1 = (byte *)0x0;
      if (local_14[0] == 0) {
        DAT_0051ac64 = 0;
      }
      else if (local_14[0] == 1) {
        FUN_00468b8c((int)local_14);
      }
      *in_FS_OFFSET = local_38;
      return pbVar1;
    }
  }
  pbVar1 = FUN_0045febc(param_1,(byte *)(param_2 + 6),param_3,param_4,
                        param_6 - *(int *)(param_2 + 2),param_6,(uint)*pbVar1);
  if (pbVar1 != (byte *)0x0) {
    FUN_0045ff84(param_2 + 6,param_3,param_6);
    local_14[0] = local_14[0] | 2;
    pbVar1 = pbVar1 + 1;
    if (local_14[0] == 0) {
      DAT_0051ac64 = 0;
    }
    else if (local_14[0] == 1) {
      FUN_00468b8c((int)local_14);
    }
    *in_FS_OFFSET = local_38;
    return pbVar1;
  }
  pbVar1 = (byte *)0x0;
  if (local_14[0] == 0) {
    DAT_0051ac64 = 0;
  }
  else if (local_14[0] == 1) {
    FUN_00468b8c((int)local_14);
  }
  *in_FS_OFFSET = local_38;
  return pbVar1;
}

