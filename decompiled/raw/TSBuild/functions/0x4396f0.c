// name: FUN_004396f0
// address: 0x4396f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_004396f0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47eb44);
  if (DAT_0047eae1 == '\0') {
    _DAT_0048cc2c = 0;
    _DAT_0048cc30 = 0;
    _DAT_0048cc34 = 0;
    DAT_0047eae1 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048cc2c;
}

