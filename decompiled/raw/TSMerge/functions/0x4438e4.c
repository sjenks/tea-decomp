// name: FUN_004438e4
// address: 0x4438e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004438e4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_2c;
  
  FUN_00455f04(0x46f084);
  uVar1 = FUN_004439f8(param_1);
  if ((char)uVar1 == '\0') {
    *in_FS_OFFSET = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_0044398c(DAT_0046f040,param_1);
    bVar3 = *(int *)(DAT_0046f040 + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_0046f040 != 0) {
        if (*(int *)(DAT_0046f040 + 9) != 0) {
          FUN_0044b954();
        }
        uVar2 = FUN_0044b2cc();
      }
      DAT_0046f040 = 0;
    }
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

