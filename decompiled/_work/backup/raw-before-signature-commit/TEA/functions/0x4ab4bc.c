// name: FUN_004ab4bc
// address: 0x4ab4bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004ab4bc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50be90);
  if (DAT_0050be74 == '\0') {
    FUN_004ab558((undefined4 *)&DAT_0051b7a8);
    DAT_0050be74 = DAT_0050be74 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b7a8;
}

