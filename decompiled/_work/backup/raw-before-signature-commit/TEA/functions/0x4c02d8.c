// name: FUN_004c02d8
// address: 0x4c02d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004c02d8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x510016);
  if (DAT_00510012 != '\0') {
    FUN_004c0aac((undefined4 *)&DAT_0051b92b,2);
    DAT_00510012 = '\0';
  }
  if (DAT_00510010 != '\0') {
    FUN_004c0aac((undefined4 *)&DAT_0051b91a,2);
    DAT_00510010 = '\0';
  }
  if (DAT_0051000b != '\0') {
    FUN_004c0aac((undefined4 *)&DAT_0051b8fd,2);
    DAT_0051000b = '\0';
  }
  if (DAT_00510005 != '\0') {
    FUN_004c0aac((undefined4 *)&DAT_0051b8dc,2);
    DAT_00510005 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

