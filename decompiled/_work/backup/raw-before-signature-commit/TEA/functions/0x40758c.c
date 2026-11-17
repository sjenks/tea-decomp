// name: FUN_0040758c
// address: 0x40758c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0040758c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eb3a8);
  if (DAT_004eb4c0 != '\0') {
    FUN_0040771c(&DAT_004eb4a0,DAT_004eb4a4,DAT_004eb4a8);
    FUN_004cc0bc();
    DAT_004eb4c0 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

