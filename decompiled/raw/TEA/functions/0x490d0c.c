// name: FUN_00490d0c
// address: 0x490d0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00490d0c(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x506af0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00506b1c;
    puVar1 = (undefined4 *)param_1[1];
    while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)((int)puVar2 + 0x3e);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

