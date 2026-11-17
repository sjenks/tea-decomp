// name: FUN_00428a98
// address: 0x428a98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00428a98(int *param_1,HDC param_2,undefined4 param_3,int param_4)

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
  
  FUN_00455f04(0x469e4c);
  local_3c = 8;
  FUN_00416a98(local_28,param_2);
  local_30 = local_30 + 1;
  local_3c = 0x14;
  if (*(char *)((int)param_1 + 0x3e) == '\0') {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      FUN_00416f98(&local_58,local_28,(uint *)(param_1 + 8));
    }
    else {
      FUN_00416f98(&local_54,local_28,(uint *)(param_1 + 9));
    }
  }
  else {
    FUN_00416f98(&local_50,local_28,(uint *)(param_1 + 10));
  }
  uVar1 = FUN_0042c49c(*param_1,param_2,param_3,param_4);
  local_30 = local_30 + -1;
  FUN_00416b40(local_28,2);
  *in_FS_OFFSET = local_4c;
  return uVar1;
}

