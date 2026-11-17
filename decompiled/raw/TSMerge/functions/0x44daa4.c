// name: FUN_0044daa4
// address: 0x44daa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044daa4(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x471fa4);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_0044b474(*param_1,0x10,0,0x19,FUN_004052c4);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

