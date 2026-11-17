// name: FUN_004cffb0
// address: 0x4cffb0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cffb0(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5140c0);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_004cc264(*param_1,0x10,0,0x19,FUN_00402880);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

