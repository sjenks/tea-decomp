// name: FUN_0041cb6c
// address: 0x41cb6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_0041cb6c(void)

{
  LONG LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x4677e8);
  if (DAT_004677d0 == 0) {
    LVar1 = InterlockedIncrement((LONG *)&DAT_004677d4);
    if (LVar1 == 0) {
      InterlockedIncrement((LONG *)&DAT_004677d4);
      DAT_004677d0 = FUN_0044b300();
      if (DAT_004677d0 != 0) {
        *(undefined4 *)(DAT_004677d0 + 1) = 0;
        *(undefined4 *)(DAT_004677d0 + 5) = 0;
        *(undefined4 *)(DAT_004677d0 + 9) = 0;
        *(undefined4 *)(DAT_004677d0 + 0xd) = 0;
        *(undefined4 *)(DAT_004677d0 + 0x12) = 0;
        *(undefined4 *)(DAT_004677d0 + 0x16) = 0x3c;
        *(undefined4 *)(DAT_004677d0 + 0x1a) = 0;
        *(undefined4 *)(DAT_004677d0 + 0x1e) = 0x3c;
        *(undefined4 *)(DAT_004677d0 + 0x22) = 6;
      }
      _DAT_004677d4 = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

