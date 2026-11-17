// name: FUN_0042bb18
// address: 0x42bb18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042bb18(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a4 [4];
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_7c;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_4c;
  undefined4 *local_44;
  undefined4 *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined4 *local_14;
  int local_10 [3];
  
  FUN_004dce64(0x4f278c);
  local_3c = (int *)param_1[0x16];
  piVar1 = (int *)param_1[0x15];
  piVar2 = FUN_0042bce8(local_3c,local_3c,piVar1);
  local_40 = (undefined4 *)param_1[0x16];
  param_1[0x16] = param_1[0x16] + (((int)local_3c - (int)piVar1) / 0xc) * -0xc;
  FUN_00429fb8(param_1 + 0x14,piVar2,local_40);
  local_28 = 8;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_1c = local_1c + 1;
  if (param_1[0x16] == param_1[0x1a]) {
    FUN_00429ffc((int)(param_1 + 0x14),(int *)param_1[0x16],local_10);
  }
  else {
    local_44 = (undefined4 *)param_1[0x16];
    local_14 = local_44;
    if (local_44 != (undefined4 *)0x0) {
      local_28 = 0x14;
      FUN_00430560(local_44,local_10);
    }
    local_28 = 8;
    param_1[0x16] = param_1[0x16] + 0xc;
  }
  local_1c = local_1c + -1;
  FUN_004305f4(local_10);
  param_1[0x1c] = 0;
  local_4c = param_1[0xf];
  local_5c = *(int *)(local_4c + 8);
  FUN_0042af64(local_74,(int)(param_1 + 6),local_64,local_60,local_5c);
  (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))();
  local_7c = param_1[0x27];
  local_8c = *(int *)(local_7c + 8);
  FUN_0042a474(local_a4,(int)(param_1 + 0x1e),local_94,local_90,local_8c);
  param_1[0x41] = -1;
  param_1[0x42] = 2;
  param_1[0x43] = -1;
  param_1[0x44] = -1;
  (**(code **)(param_1[3] + 0x24))();
  *in_FS_OFFSET = local_38;
  return;
}

