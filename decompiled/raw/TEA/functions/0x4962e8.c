// name: FUN_004962e8
// address: 0x4962e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_004962e8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50778d);
  if (DAT_0050777c == '\0') {
    _DAT_0051b254 = 0;
    DAT_0050777c = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b254;
}

