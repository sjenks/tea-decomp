// name: FUN_004106a4
// address: 0x4106a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004106a4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x464d78);
  if (DAT_00464887 == '\0') {
    FUN_00410554((undefined4 *)&DAT_004769c8);
    DAT_00464887 = DAT_00464887 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_004769c8;
}

