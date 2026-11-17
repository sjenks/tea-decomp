// name: FUN_00490574
// address: 0x490574
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00490574(int param_1,int *param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_004905e8(param_1,&local_8,&local_c,&local_10,&local_14);
  if (*(char *)(param_1 + 0x36) == '\0') {
    local_8 = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 10);
  }
  else {
    local_8 = local_8 + local_c;
  }
  *param_2 = local_8;
  if (*(char *)(param_1 + 0x37) == '\0') {
    local_10 = *(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe);
  }
  else {
    local_10 = local_10 + local_14;
  }
  param_2[1] = local_10;
  return;
}

