// name: FUN_004647d4
// address: 0x4647d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004647d4(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x487fc4);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00487ff4;
    if (*(char *)(param_1 + 9) != '\0') {
      FUN_0045681c();
    }
    FUN_0045681c();
    FUN_0045681c();
    FUN_004658c8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

