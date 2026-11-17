// name: FUN_00496b94
// address: 0x496b94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00496b94(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5078ad);
  if (DAT_0050789c == '\0') {
    FUN_00496d90((undefined4 *)&DAT_0051b258);
    DAT_0050789c = DAT_0050789c + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b258;
}

