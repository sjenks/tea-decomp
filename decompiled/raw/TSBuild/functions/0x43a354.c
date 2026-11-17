// name: FUN_0043a354
// address: 0x43a354
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043a354(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  
  FUN_00467ba8(0x47eed8);
  if (*(int *)(param_1 + 0x2b) == 0) {
    iVar1 = param_1;
    if (*(int *)(param_1 + 0x1f) == 0) {
      (**(code **)(*(int *)(param_1 + 0x1b) + 0x3c))();
    }
    (**(code **)(*(int *)(param_1 + 0x1b) + 0x40))(param_1,*(int *)(param_1 + 0x1b),iVar1,param_1);
  }
  *(undefined1 *)(param_1 + 0x1a) = 1;
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x10))();
  FUN_0042c9b8();
  *(undefined1 *)(param_1 + 0x1a) = 0;
  (**(code **)(*(int *)(param_1 + 0x1b) + 0x48))();
  *in_FS_OFFSET = local_5c;
  return;
}

