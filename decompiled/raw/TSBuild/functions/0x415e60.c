// name: FUN_00415e60
// address: 0x415e60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415e60(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  FUN_00467ba8(0x476b68);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00412010(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
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

