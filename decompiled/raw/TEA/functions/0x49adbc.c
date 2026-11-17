// name: FUN_0049adbc
// address: 0x49adbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __stdcall FUN_0049adbc(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_10 [3];
  
  FUN_004dce64(0x508830);
  if (DAT_00508798 == '\0') {
    DAT_0051b404 = HeapCreate(0x40000,0x8000,0);
    if (DAT_0051b404 == (HANDLE)0x0) {
      piVar1 = FUN_0048f460(local_10);
      (**(code **)(*piVar1 + 0xc))();
      FUN_0048ee7c(local_10,0);
    }
    DAT_00508798 = DAT_00508798 + '\x01';
  }
  *in_FS_OFFSET = local_34;
  return &DAT_0051b404;
}

