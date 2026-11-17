// name: FUN_004cefbc
// address: 0x4cefbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cefbc(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x513e30);
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004cf040(puVar1,param_2,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

