// name: FUN_0042b6a4
// address: 0x42b6a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0042b6a4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47bfb1);
  if (DAT_0047bfa0 == '\0') {
    FUN_0042b780(0x48c86c);
    DAT_0047bfa0 = DAT_0047bfa0 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c86c;
}

