// name: FUN_0046382c
// address: 0x46382c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046382c(int param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48778c);
  if (param_1 != 0) {
    FUN_0040473c(param_1 + 8,2);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

