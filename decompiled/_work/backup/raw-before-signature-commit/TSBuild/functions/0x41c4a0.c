// name: FUN_0041c4a0
// address: 0x41c4a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0041c4a0(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x478e54);
  if (DAT_00478e04 == '\0') {
    FUN_0041c53c((undefined4 *)&DAT_0048c5c4);
    DAT_00478e04 = DAT_00478e04 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c5c4;
}

