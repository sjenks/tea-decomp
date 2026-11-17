// name: FUN_004536e8
// address: 0x4536e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004536e8(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x4732d8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0047331c;
    while (param_1[6] != 0) {
      param_1[6] = param_1[6] + -1;
      (**(code **)(param_1[8] + 4 + param_1[6] * 8))();
    }
    FUN_0044b2dc();
    FUN_0044b2dc();
    puVar1 = (undefined4 *)param_1[4];
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

