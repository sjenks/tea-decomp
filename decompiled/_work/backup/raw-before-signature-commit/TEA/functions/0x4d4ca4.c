// name: FUN_004d4ca4
// address: 0x4d4ca4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d4ca4(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  undefined1 local_60 [16];
  uint local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28;
  undefined4 local_24 [8];
  
  FUN_004dce64(0x514da0);
  local_50 = 0;
  local_3c = 0x14;
  FUN_004d1a74(local_24,param_1);
  local_30 = local_30 + 1;
  local_3c = 0x20;
  cVar1 = FUN_004d4bf4((int)local_24);
  if (cVar1 != '\0') {
    FUN_004d4c8c(*param_1);
    FUN_004d4c40((int)local_88,param_1);
    local_3c = 0x2c;
    FUN_004cf0b8(&local_28,*param_1);
    local_30 = local_30 + 1;
    piVar2 = (int *)FUN_004d4c00(&local_28);
    FUN_004d4e1c(local_60,piVar2);
    cVar1 = FUN_004d4c98((int)local_60);
    local_30 = local_30 + -1;
    uStack_7c = 0x4d4d64;
    FUN_00437eb0(&local_28,2);
    if (cVar1 != '\0') {
      local_50 = 1;
    }
    FUN_004d4954(*param_1,0);
  }
  local_30 = local_30 + -1;
  FUN_00484c30(local_24,2);
  local_3c = 0;
  if (local_50 != 0) {
    FUN_004d1084(*param_1,local_50);
  }
  *in_FS_OFFSET = local_4c;
  return param_1;
}

