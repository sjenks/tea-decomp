// name: FUN_00463874
// address: 0x463874
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00463874(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48779c);
  if (param_1 != 0) {
    FUN_0040473c(param_1 + 0x30,2);
    FUN_0040473c(param_1 + 0x20,2);
    FUN_0040473c(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

