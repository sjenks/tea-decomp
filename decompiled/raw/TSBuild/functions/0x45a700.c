// name: FUN_0045a700
// address: 0x45a700
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045a700(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x485f34);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_004569b4(*param_1,0x10,0,0x19,FUN_0040473c);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

