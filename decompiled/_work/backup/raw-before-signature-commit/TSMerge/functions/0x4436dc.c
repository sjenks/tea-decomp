// name: FUN_004436dc
// address: 0x4436dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004436dc(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x46f054);
  uVar1 = FUN_004439f8(param_1);
  if ((char)uVar1 == '\0') {
    if ((DAT_0046f040 == 0) && (DAT_0046f040 = FUN_0044b300(), DAT_0046f040 != 0)) {
      *(undefined4 *)(DAT_0046f040 + 1) = 0;
      *(undefined4 *)(DAT_0046f040 + 5) = 0;
      *(undefined4 *)(DAT_0046f040 + 9) = 0;
    }
    FUN_004437a8(DAT_0046f040,param_1,0);
    *in_FS_OFFSET = local_2c;
  }
  else {
    *in_FS_OFFSET = local_2c;
  }
  return local_2c;
}

