// name: FUN_00490b68
// address: 0x490b68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00490b68(int param_1,undefined4 *param_2)

{
  tagRECT local_28;
  undefined1 local_15;
  int local_14;
  int local_10 [2];
  int local_8;
  
  local_8 = 0;
  local_10[1] = 0;
  local_10[0] = 0;
  local_14 = 0;
  FUN_004905e8(param_1,local_10 + 2,local_10 + 1,local_10,&local_14);
  local_28.left = local_8;
  local_28.top = local_10[0];
  local_28.right = (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)) + 1;
  local_28.bottom = (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe)) + 1;
  FUN_004a1e48(&local_15);
  FUN_004a1e70(&local_15,param_2,&local_28,3,8);
  return;
}

