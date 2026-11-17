// name: FUN_00419e2c
// address: 0x419e2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00419e2c(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x4670e8);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00467114;
    puVar1 = (undefined4 *)param_1[1];
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)((int)puVar2 + 0x3e);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

