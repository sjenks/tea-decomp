// name: FUN_00427578
// address: 0x427578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427578(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x4696f4);
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)*param_1 != (uint *)0x0) {
      FUN_00411fc4((uint *)*param_1,3);
    }
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

