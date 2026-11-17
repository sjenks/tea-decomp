// name: FUN_004061d0
// address: 0x4061d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004061d0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff94;
  undefined4 in_stack_ffffff98;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_00467ba8(0x475454);
  iVar2 = param_2;
  while (local_8 = iVar2, local_8 != param_3) {
    iVar2 = local_8 + 0x38;
    if (local_8 != 0) {
      local_1c = 0x14;
      local_10 = local_10 + -2;
      if (*(int *)(local_8 + 0x24) != 0) {
        local_30 = *(undefined4 *)(local_8 + 0x24);
        FUN_004062a0(local_40,local_8,in_stack_ffffff94,in_stack_ffffff98,
                     *(int *)(*(int *)(local_8 + 0x24) + 8));
        iVar1 = *(int *)(local_8 + 0x24);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(local_8 + 0x18);
        *(int *)(local_8 + 0x18) = iVar1;
        FUN_00406ec8(local_8);
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

