// name: FUN_0041576c
// address: 0x41576c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041576c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  FUN_00467ba8(0x476aac);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_00412010(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0041221c(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

