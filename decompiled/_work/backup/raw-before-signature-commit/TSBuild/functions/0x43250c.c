// name: FUN_0043250c
// address: 0x43250c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043250c(uint *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47d480);
  if (param_1 != (uint *)0x0) {
    if (*(uint **)((int)param_1 + 0x11) != (uint *)0x0) {
      FUN_0041cfe8(*(uint **)((int)param_1 + 0x11),3);
    }
    FUN_0043c5bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

