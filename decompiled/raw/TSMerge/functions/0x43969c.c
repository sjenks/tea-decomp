// name: FUN_0043969c
// address: 0x43969c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043969c(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46cfcc);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0046cfec;
    param_1[3] = &PTR_LAB_0046d010;
    if ((*(byte *)((int)param_1 + 0x16) & 0x80) != 0) {
      FUN_0044b2cc();
      param_1[2] = 0;
    }
    FUN_0044b2dc();
    FUN_00413978(param_1 + 3,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

