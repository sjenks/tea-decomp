// name: FUN_00420530
// address: 0x420530
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_00420530(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4681d5);
  if (DAT_004681c4 == '\0') {
    FUN_0042060c(0x476dc4);
    DAT_004681c4 = DAT_004681c4 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476dc4;
}

