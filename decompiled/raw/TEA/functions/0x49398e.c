// name: FUN_0049398e
// address: 0x49398e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LONG __stdcall FUN_0049398e(void)

{
  int iVar1;
  LONG LVar2;
  LONG *in_FS_OFFSET;
  LONG local_2c;
  
  FUN_004dce64(0x507240);
  if ((DAT_005071d0 == 0) || (*(int *)(DAT_005071d0 + 1) != 0)) {
    *in_FS_OFFSET = local_2c;
    LVar2 = local_2c;
  }
  else {
    LVar2 = InterlockedIncrement((LONG *)&DAT_0050722c);
    if (LVar2 == 0) {
      LVar2 = InterlockedIncrement((LONG *)&DAT_0050722c);
      iVar1 = DAT_005071d0;
      if (DAT_005071d0 != 0) {
        FUN_00493a94(DAT_005071d0);
        if (*(int *)(iVar1 + 9) != 0) {
          FUN_004cc744();
        }
        FUN_0048c8b0(iVar1 + 0x11,0);
        LVar2 = FUN_004cc0bc();
      }
      DAT_005071d0 = 0;
      _DAT_0050722c = 0xffffffff;
    }
    *in_FS_OFFSET = local_2c;
  }
  return LVar2;
}

