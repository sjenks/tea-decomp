// name: FUN_004356b3
// address: 0x4356b3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004356b3(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47e195);
  if (DAT_0047e184 == '\0') {
    FUN_00456b14((int *)&DAT_0048c904,0x10,0x1f,1,FUN_004369a0);
    DAT_0048caf4 = 1;
    DAT_0047e184 = DAT_0047e184 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0048c904;
}

