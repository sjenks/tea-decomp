// name: FUN_0049754c
// address: 0x49754c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0049754c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507c4d);
  if (DAT_00507c3c == '\0') {
    FUN_00497628(0x51b3b4);
    DAT_00507c3c = DAT_00507c3c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b3b4;
}

