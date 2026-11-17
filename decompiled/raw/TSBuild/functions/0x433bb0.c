// name: FUN_00433bb0
// address: 0x433bb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00433bb0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_90;
  int local_6c [26];
  
  FUN_00467ba8(0x47dbe8);
  FUN_0042eb8c(local_6c,*(HWND *)(*param_1 + 0xc));
  (**(code **)(param_1[3] + 0x44))();
  FUN_0042ec14(local_6c,2);
  *in_FS_OFFSET = local_90;
  return;
}

