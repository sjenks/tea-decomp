// name: FUN_0049d0a8
// address: 0x49d0a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_0049d0a8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508fe7);
  if (DAT_00508fd6 == '\0') {
    _DAT_0051b408 = 0;
    DAT_0051b40c = 0;
    DAT_0051b410 = 0;
    DAT_00508fd6 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b408;
}

