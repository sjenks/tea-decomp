// name: FUN_0042a51f
// address: 0x42a51f
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0042a51f(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46a3b9);
  if (DAT_0046a3a8 == '\0') {
    FUN_0044b5d4((int *)&DAT_00476e5c,0x10,0x1f,1,FUN_0042b80c);
    DAT_0047704c = 1;
    DAT_0046a3a8 = DAT_0046a3a8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_00476e5c;
}

