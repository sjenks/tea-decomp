// name: FUN_004a9708
// address: 0x4a9708
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a9708(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  
  FUN_004dce64(0x50b940);
  if (*(int *)(param_1 + 0x2b) == 0) {
    iVar1 = param_1;
    if (*(int *)(param_1 + 0x1f) == 0) {
      (**(code **)(*(int *)(param_1 + 0x1b) + 0x3c))();
    }
    (**(code **)(*(int *)(param_1 + 0x1b) + 0x40))(param_1,*(int *)(param_1 + 0x1b),iVar1,param_1);
  }
  *(undefined1 *)(param_1 + 0x1a) = 1;
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  FUN_00498dd8();
  *(undefined1 *)(param_1 + 0x1a) = 0;
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x48))();
  *in_FS_OFFSET = local_5c;
  return;
}

