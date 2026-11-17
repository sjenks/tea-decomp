// name: FUN_0043986c
// address: 0x43986c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004398b4) */

undefined * __stdcall FUN_0043986c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47eb84);
  if (DAT_0047eb58 == '\0') {
    DAT_0048cc4c = &DAT_00485bd8;
    DAT_0047eb58 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048cc44;
}

