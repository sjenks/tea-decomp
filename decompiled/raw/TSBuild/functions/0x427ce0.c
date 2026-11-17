// name: FUN_00427ce0
// address: 0x427ce0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00427ce0(void)

{
  LONG LVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47b5c4);
  if (DAT_0047b5ac == 0) {
    LVar1 = InterlockedIncrement((LONG *)&DAT_0047b5b0);
    if (LVar1 == 0) {
      InterlockedIncrement((LONG *)&DAT_0047b5b0);
      DAT_0047b5ac = FUN_00456840();
      if (DAT_0047b5ac != 0) {
        *(undefined4 *)(DAT_0047b5ac + 1) = 0;
        *(undefined4 *)(DAT_0047b5ac + 5) = 0;
        *(undefined4 *)(DAT_0047b5ac + 9) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0xd) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0x12) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0x16) = 0x3c;
        *(undefined4 *)(DAT_0047b5ac + 0x1a) = 0;
        *(undefined4 *)(DAT_0047b5ac + 0x1e) = 0x3c;
        *(undefined4 *)(DAT_0047b5ac + 0x22) = 6;
      }
      _DAT_0047b5b0 = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

