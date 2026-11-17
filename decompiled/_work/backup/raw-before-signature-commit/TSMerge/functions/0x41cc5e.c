// name: FUN_0041cc5e
// address: 0x41cc5e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LONG __stdcall FUN_0041cc5e(void)

{
  int iVar1;
  LONG LVar2;
  LONG *in_FS_OFFSET;
  LONG local_2c;
  
  FUN_00455f04(0x467840);
  if ((DAT_004677d0 == 0) || (*(int *)(DAT_004677d0 + 1) != 0)) {
    *in_FS_OFFSET = local_2c;
    LVar2 = local_2c;
  }
  else {
    LVar2 = InterlockedIncrement((LONG *)&DAT_0046782c);
    if (LVar2 == 0) {
      LVar2 = InterlockedIncrement((LONG *)&DAT_0046782c);
      iVar1 = DAT_004677d0;
      if (DAT_004677d0 != 0) {
        FUN_0041cd64(DAT_004677d0);
        if (*(int *)(iVar1 + 9) != 0) {
          FUN_0044b954();
        }
        FUN_004159ac(iVar1 + 0x11,0);
        LVar2 = FUN_0044b2cc();
      }
      DAT_004677d0 = 0;
      _DAT_0046782c = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  return LVar2;
}

