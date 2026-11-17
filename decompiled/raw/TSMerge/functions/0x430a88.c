// name: FUN_00430a88
// address: 0x430a88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00430a88(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46b550);
  puVar1 = (undefined4 *)FUN_0044b300();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00417b88(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &PTR_FUN_00464da0;
    *puVar1 = &PTR_FUN_0046b5d8;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

