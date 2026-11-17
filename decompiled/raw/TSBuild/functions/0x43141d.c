// name: FUN_0043141d
// address: 0x43141d
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0043141d(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47d24a);
  if (DAT_0047d1fc != '\0') {
    if (DAT_0048c8ed != (uint *)0x0) {
      FUN_0041cfe8(DAT_0048c8ed,3);
    }
    FUN_0043c5bc((uint *)&DAT_0048c8dc,0);
    DAT_0047d1fc = '\0';
  }
  *in_FS_OFFSET = local_2c;
  return;
}

