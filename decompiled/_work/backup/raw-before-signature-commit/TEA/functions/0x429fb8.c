// name: FUN_00429fb8
// address: 0x429fb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429fb8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f2654);
  while (puVar1 = param_2, param_3 != puVar1) {
    param_2 = puVar1 + 3;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004305f4(puVar1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

