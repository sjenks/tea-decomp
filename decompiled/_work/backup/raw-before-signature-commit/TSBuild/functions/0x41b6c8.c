// name: FUN_0041b6c8
// address: 0x41b6c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041b6c8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x478b2c);
  if (DAT_0047863b == '\0') {
    FUN_0041b578((undefined4 *)&DAT_0048c470);
    DAT_0047863b = DAT_0047863b + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c470;
}

