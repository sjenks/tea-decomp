// name: FUN_004a8c00
// address: 0x4a8c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004a8c48) */

undefined * __stdcall FUN_004a8c00(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b5ec);
  if (DAT_0050b5c0 == '\0') {
    DAT_0051b7a0 = &DAT_00513d64;
    DAT_0050b5c0 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b798;
}

