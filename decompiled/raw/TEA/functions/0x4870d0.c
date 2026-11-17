// name: FUN_004870d0
// address: 0x4870d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004870d0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5043f4);
  if (DAT_00503f03 == '\0') {
    FUN_00486e34((undefined4 *)&DAT_0051afb8);
    DAT_00503f03 = DAT_00503f03 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051afb8;
}

