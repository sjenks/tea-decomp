// name: FUN_004313f8
// address: 0x4313f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004313f8(int param_1,byte param_2)

{
  int iVar1;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 local_14 [4];
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0042af64(local_14,param_1,in_stack_ffffffc0,in_stack_ffffffc4,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0042b9ac(param_1);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  return;
}

