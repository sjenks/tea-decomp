// name: FUN_00433c2c
// address: 0x433c2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00433c2c(int *param_1,HDC param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  COLORREF local_58;
  COLORREF local_54;
  COLORREF local_50;
  undefined4 local_4c;
  undefined2 local_3c;
  int local_30;
  int local_28 [9];
  
  FUN_00467ba8(0x47dc28);
  local_3c = 8;
  FUN_00421c0c(local_28,param_2);
  local_30 = local_30 + 1;
  local_3c = 0x14;
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      FUN_0042210c(&local_58,local_28,(uint *)(param_1 + 8));
    }
    else {
      FUN_0042210c(&local_54,local_28,(uint *)(param_1 + 9));
    }
  }
  else {
    FUN_0042210c(&local_50,local_28,(uint *)(param_1 + 10));
  }
  uVar1 = FUN_00437630(*param_1,param_2,param_3,param_4);
  local_30 = local_30 + -1;
  FUN_00421cb4(local_28,2);
  *in_FS_OFFSET = local_4c;
  return uVar1;
}

