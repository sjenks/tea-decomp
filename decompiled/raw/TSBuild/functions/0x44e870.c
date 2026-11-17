// name: FUN_0044e870
// address: 0x44e870
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044e870(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x482e30);
  uVar1 = FUN_0044eb8c(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_00482e1c == 0) && (DAT_00482e1c = FUN_00456840(), DAT_00482e1c != 0)) {
      *(undefined4 *)(DAT_00482e1c + 1) = 0;
      *(undefined4 *)(DAT_00482e1c + 5) = 0;
      *(undefined4 *)(DAT_00482e1c + 9) = 0;
    }
    FUN_0044e93c(DAT_00482e1c,param_1,0);
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

