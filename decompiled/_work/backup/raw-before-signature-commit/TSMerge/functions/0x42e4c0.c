// name: FUN_0042e4c0
// address: 0x42e4c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0042e4c0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46ad44);
  if (DAT_0046ad04 == '\0') {
    FUN_0042e450((undefined4 *)&DAT_00477180);
    DAT_0046ad04 = DAT_0046ad04 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00477180;
}

