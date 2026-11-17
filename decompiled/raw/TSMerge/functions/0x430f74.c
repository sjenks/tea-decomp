// name: FUN_00430f74
// address: 0x430f74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00430f74(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46b64c);
  if (DAT_0046b630 == '\0') {
    FUN_00431010((undefined4 *)&DAT_004771ac);
    DAT_0046b630 = DAT_0046b630 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_004771ac;
}

