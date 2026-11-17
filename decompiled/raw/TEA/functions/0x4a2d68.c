// name: FUN_004a2d68
// address: 0x4a2d68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a2d68(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  FUN_004dce64(0x50a62c);
  FUN_0049af8c(local_6c,*(HWND *)(*param_1 + 0xc));
  (**(code **)(param_1[3] + 0x44))();
  FUN_0049b014(local_6c,2);
  *in_FS_OFFSET = local_90;
  return;
}

