// name: FUN_0042c9e0
// address: 0x42c9e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c9e0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c550);
  (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((int)param_1 + 9) = 1;
  (**(code **)*param_1)();
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_0042c9b8();
  (**(code **)(*param_1 + 0x14))();
  *in_FS_OFFSET = local_28;
  return;
}

