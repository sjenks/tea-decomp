// name: FUN_0042e55c
// address: 0x42e55c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_0042e55c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46ad68);
  if (DAT_0046ad05 == '\0') {
    _DAT_00477184 = 0;
    _DAT_00477188 = 0;
    _DAT_0047718c = 0;
    DAT_0046ad05 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00477184;
}

