// name: FUN_00443cf8
// address: 0x443cf8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00443cf8(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46f170);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0046f5e0;
    if ((*(char *)(param_1 + 3) != '\0') && (0x20 < (uint)param_1[2])) {
      FreeLibrary((HMODULE)param_1[2]);
    }
    FUN_0044b2dc();
    FUN_004438e4((int)param_1);
    FUN_00413978(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

