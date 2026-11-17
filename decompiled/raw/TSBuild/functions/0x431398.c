// name: FUN_00431398
// address: 0x431398
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_00431398(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47d20d);
  if (DAT_0047d1fc == '\0') {
    FUN_0043c628((uint *)&DAT_0048c8dc,0x47f530,&DAT_0048c698,&DAT_0048c6ac);
    _DAT_0048c8e1 = DAT_0048c6ac;
    _DAT_0048c8e5 = 0;
    _DAT_0048c8e9 = 0;
    DAT_0048c8ed = 0;
    DAT_0047d1fc = DAT_0047d1fc + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c8dc;
}

