// name: FUN_004355cc
// address: 0x4355cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004355cc(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47e12c);
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)*param_1 != (uint *)0x0) {
      FUN_004284a8((uint *)*param_1,0);
      FUN_0045680c();
    }
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

