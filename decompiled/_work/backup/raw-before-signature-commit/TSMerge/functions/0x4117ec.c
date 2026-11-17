// name: FUN_004117ec
// address: 0x4117ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004117ec(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46518c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004651dc;
    FUN_0041199c();
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

