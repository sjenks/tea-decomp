// name: FUN_0042acec
// address: 0x42acec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0042acec(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47bc11);
  if (DAT_0047bc00 == '\0') {
    FUN_0042aee8((undefined4 *)&DAT_0048c710);
    DAT_0047bc00 = DAT_0047bc00 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c710;
}

