// name: FUN_00423dc8
// address: 0x423dc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00423dc8(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined1 local_6c [28];
  uint local_50 [10];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00467ba8(0x47abf4);
  GetObjectA((HANDLE)*param_2,0x3c,local_6c);
  local_18 = 8;
  FUN_00459d78(param_1,local_50);
  *in_FS_OFFSET = local_28;
  return param_1;
}

