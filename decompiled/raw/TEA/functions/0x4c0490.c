// name: FUN_004c0490
// address: 0x4c0490
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004c0490(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5101e4);
  uVar1 = FUN_004c07ac(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_005101d0 == 0) && (DAT_005101d0 = FUN_004cc0f0(), DAT_005101d0 != 0)) {
      *(undefined4 *)(DAT_005101d0 + 1) = 0;
      *(undefined4 *)(DAT_005101d0 + 5) = 0;
      *(undefined4 *)(DAT_005101d0 + 9) = 0;
    }
    FUN_004c055c(DAT_005101d0,param_1,0);
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

