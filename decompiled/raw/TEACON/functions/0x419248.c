// name: FUN_00419248
// address: 0x419248
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00419248(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_0041f3fc(0x430260);
  puVar1 = (undefined4 *)FUN_00414fac();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00418fc0(puVar1,param_3);
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

