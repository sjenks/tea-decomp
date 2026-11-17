// name: FUN_00453dcc
// address: 0x453dcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00453dcc(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x473834);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00473854;
    if (*(char *)(param_1 + 9) != '\0') {
      FUN_0044b2dc();
    }
    FUN_0044b2dc();
    FUN_0044b2dc();
    FUN_00454464(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

