// name: FUN_00439654
// address: 0x439654
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00439654(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47eb20);
  if (DAT_0047eae0 == '\0') {
    FUN_004395e4((undefined4 *)&DAT_0048cc28);
    DAT_0047eae0 = DAT_0047eae0 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048cc28;
}

