// name: FUN_0044ea78
// address: 0x44ea78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0044ea78(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_2c;
  
  FUN_00467ba8(0x482e60);
  uVar1 = FUN_0044eb8c(param_1);
  if ((char)uVar1 == '\0') {
    *in_FS_OFFSET = local_2c;
    uVar2 = local_2c;
  }
  else {
    FUN_0044eb20(DAT_00482e1c,param_1);
    bVar3 = *(int *)(DAT_00482e1c + 1) == 0;
    uVar2 = (uint)bVar3;
    if (bVar3) {
      if (DAT_00482e1c != 0) {
        if (*(int *)(DAT_00482e1c + 9) != 0) {
          FUN_00456e94();
        }
        uVar2 = FUN_0045680c();
      }
      DAT_00482e1c = 0;
    }
    *in_FS_OFFSET = local_2c;
  }
  return uVar2;
}

