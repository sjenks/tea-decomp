// name: FUN_004c0698
// address: 0x4c0698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004c0698(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_2c;
  
  FUN_004dce64(0x510214);
  uVar1 = FUN_004c07ac(param_1);
  if ((char)uVar1 == '\0') {
    *in_FS_OFFSET = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_004c0740(DAT_005101d0,param_1);
    bVar3 = *(int *)(DAT_005101d0 + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_005101d0 != 0) {
        if (*(int *)(DAT_005101d0 + 9) != 0) {
          FUN_004cc744();
        }
        uVar2 = FUN_004cc0bc();
      }
      DAT_005101d0 = 0;
    }
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

