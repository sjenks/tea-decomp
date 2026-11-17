// name: FUN_0042186c
// address: 0x42186c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042186c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468774);
  (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((int)param_1 + 9) = 1;
  (**(code **)*param_1)();
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_00421844();
  (**(code **)(*param_1 + 0x14))();
  *in_FS_OFFSET = local_28;
  return;
}

