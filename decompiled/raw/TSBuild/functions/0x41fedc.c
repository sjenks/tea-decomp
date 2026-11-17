// name: FUN_0041fedc
// address: 0x41fedc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041fedc(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x479be4);
  puVar1 = (undefined4 *)FUN_00456840();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00422cfc(puVar1,param_1);
    puVar1[2] = param_1[2];
    *puVar1 = &PTR_FUN_00478b54;
    *puVar1 = &PTR_FUN_00479c48;
  }
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

