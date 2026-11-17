// name: FUN_0044cde0
// address: 0x44cde0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044cde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f71e0);
  while (puVar2 = param_3, puVar1 = param_1, param_2 != puVar1) {
    param_1 = puVar1 + 4;
    param_3 = puVar2 + 4;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
  }
  *in_FS_OFFSET = local_2c;
  return puVar2;
}

