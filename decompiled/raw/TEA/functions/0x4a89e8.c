// name: FUN_004a89e8
// address: 0x4a89e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004a89e8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b588);
  if (DAT_0050b548 == '\0') {
    FUN_004a8978((undefined4 *)&DAT_0051b77c);
    DAT_0050b548 = DAT_0050b548 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b77c;
}

