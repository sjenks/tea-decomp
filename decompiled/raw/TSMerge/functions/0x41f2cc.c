// name: FUN_0041f2cc
// address: 0x41f2cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_0041f2cc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x467d15);
  if (DAT_00467d04 == '\0') {
    _DAT_00476c64 = 0;
    DAT_00467d04 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476c64;
}

