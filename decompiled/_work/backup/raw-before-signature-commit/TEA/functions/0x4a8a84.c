// name: FUN_004a8a84
// address: 0x4a8a84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_004a8a84(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b5ac);
  if (DAT_0050b549 == '\0') {
    _DAT_0051b780 = 0;
    _DAT_0051b784 = 0;
    _DAT_0051b788 = 0;
    DAT_0050b549 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b780;
}

