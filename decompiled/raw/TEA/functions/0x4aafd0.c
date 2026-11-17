// name: FUN_004aafd0
// address: 0x4aafd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004aafd0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x50bd94);
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0048e99c(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &PTR_FUN_005044cc;
    *puVar1 = &PTR_FUN_0050be1c;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

