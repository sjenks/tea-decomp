// name: FUN_0042a438
// address: 0x42a438
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042a438(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46a350);
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)*param_1 != (uint *)0x0) {
      FUN_0041d334((uint *)*param_1,0);
      FUN_0044b2cc();
    }
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

