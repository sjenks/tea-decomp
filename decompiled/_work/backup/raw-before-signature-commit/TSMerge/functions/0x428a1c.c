// name: FUN_00428a1c
// address: 0x428a1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428a1c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  FUN_00455f04(0x469e0c);
  FUN_004239f8(local_6c,*(HWND *)(*param_1 + 0xc));
  (**(code **)(param_1[3] + 0x44))();
  FUN_00423a80(local_6c,2);
  *in_FS_OFFSET = local_90;
  return;
}

