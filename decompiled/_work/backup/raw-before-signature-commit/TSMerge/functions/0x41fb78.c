// name: FUN_0041fb78
// address: 0x41fb78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041fb78(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x467e35);
  if (DAT_00467e24 == '\0') {
    FUN_0041fd74((undefined4 *)&DAT_00476c68);
    DAT_00467e24 = DAT_00467e24 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476c68;
}

