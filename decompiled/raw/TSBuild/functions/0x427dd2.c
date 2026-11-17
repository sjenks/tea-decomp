// name: FUN_00427dd2
// address: 0x427dd2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LONG __stdcall FUN_00427dd2(void)

{
  int iVar1;
  LONG LVar2;
  LONG *in_FS_OFFSET;
  LONG local_2c;
  
  FUN_00467ba8(0x47b61c);
  if ((DAT_0047b5ac == 0) || (*(int *)(DAT_0047b5ac + 1) != 0)) {
    *in_FS_OFFSET = local_2c;
    LVar2 = local_2c;
  }
  else {
    LVar2 = InterlockedIncrement((LONG *)&DAT_0047b608);
    if (LVar2 == 0) {
      LVar2 = InterlockedIncrement((LONG *)&DAT_0047b608);
      iVar1 = DAT_0047b5ac;
      if (DAT_0047b5ac != 0) {
        FUN_00427ed8(DAT_0047b5ac);
        if (*(int *)(iVar1 + 9) != 0) {
          FUN_00456e94();
        }
        FUN_004209d0(iVar1 + 0x11,0);
        LVar2 = FUN_0045680c();
      }
      DAT_0047b5ac = 0;
      _DAT_0047b608 = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  return LVar2;
}

