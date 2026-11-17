// name: FUN_0043c108
// address: 0x43c108
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0043c108(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47f428);
  if (DAT_0047f40c == '\0') {
    FUN_0043c1a4((undefined4 *)&DAT_0048cc54);
    DAT_0047f40c = DAT_0047f40c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048cc54;
}

