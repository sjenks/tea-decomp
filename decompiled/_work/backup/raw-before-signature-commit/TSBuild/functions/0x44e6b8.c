// name: FUN_0044e6b8
// address: 0x44e6b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044e6b8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482c62);
  if (DAT_00482c5e != '\0') {
    FUN_0044ee8c((undefined4 *)&DAT_0048cdb7,2);
    DAT_00482c5e = '\0';
  }
  if (DAT_00482c5c != '\0') {
    FUN_0044ee8c((undefined4 *)&DAT_0048cda6,2);
    DAT_00482c5c = '\0';
  }
  if (DAT_00482c57 != '\0') {
    FUN_0044ee8c((undefined4 *)&DAT_0048cd89,2);
    DAT_00482c57 = '\0';
  }
  if (DAT_00482c51 != '\0') {
    FUN_0044ee8c((undefined4 *)&DAT_0048cd68,2);
    DAT_00482c51 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

