// name: FUN_004177fc
// address: 0x4177fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004177fc(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0041f3fc(0x42fcfc);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_00415120(*param_1,0x10,0,0x19,FUN_00404fb4);
    }
    if ((param_2 & 1) != 0) {
      FUN_00414f78();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

