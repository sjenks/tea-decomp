// name: FUN_0042f754
// address: 0x42f754
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042f754(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47cc84);
  if (param_1 != (undefined4 *)0x0) {
    if ((*(char *)(param_1 + 3) != '\0') && ((uint *)param_1[2] != (uint *)0x0)) {
      FUN_0041cfe8((uint *)param_1[2],3);
    }
    FUN_0042f7d8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

