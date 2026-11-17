// name: FUN_004309ac
// address: 0x4309ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004309ac(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46b4fc);
  while (*(int *)(param_1 + 0x67) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x67) + 0x7e);
    if (*(int *)(param_1 + 0x67) != 0) {
      (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x67) + 8))();
    }
    *(undefined4 *)(param_1 + 0x67) = uVar1;
  }
  *in_FS_OFFSET = local_30;
  return;
}

