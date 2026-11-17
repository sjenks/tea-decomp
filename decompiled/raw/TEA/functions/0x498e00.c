// name: FUN_00498e00
// address: 0x498e00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00498e00(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50836c);
  (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((int)param_1 + 9) = 1;
  (**(code **)*param_1)();
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_00498dd8();
  (**(code **)(*param_1 + 0x14))();
  *in_FS_OFFSET = local_28;
  return;
}

