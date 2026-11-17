// name: FUN_0042a440
// address: 0x42a440
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_0042a440(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47baf1);
  if (DAT_0047bae0 == '\0') {
    _DAT_0048c70c = 0;
    DAT_0047bae0 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c70c;
}

