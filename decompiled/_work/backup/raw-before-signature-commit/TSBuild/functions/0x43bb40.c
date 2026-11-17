// name: FUN_0043bb40
// address: 0x43bb40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043bb40(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x47f2d8);
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

