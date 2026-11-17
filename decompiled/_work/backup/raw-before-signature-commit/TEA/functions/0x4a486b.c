// name: FUN_004a486b
// address: 0x4a486b
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004a486b(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50abd9);
  if (DAT_0050abc8 == '\0') {
    FUN_004cc3c4((int *)&DAT_0051b458,0x10,0x1f,1,FUN_004a5cec);
    DAT_0051b648 = 1;
    DAT_0050abc8 = DAT_0050abc8 + '\x01';
  }
  *in_FS_OFFSET = local_28;
  return &DAT_0051b458;
}

