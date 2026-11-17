// name: FUN_004653b0
// address: 0x4653b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004653b0(int param_1,undefined4 param_2,UINT param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4882d0);
  uVar1 = FUN_0046526c(param_1);
  if (uVar1 < DAT_0048d070) {
    param_4 = FUN_00464fb0(*(undefined4 **)(DAT_0048d06c + uVar1 * 4),param_2,param_3,param_4);
    *in_FS_OFFSET = local_28;
  }
  else {
    *in_FS_OFFSET = local_28;
  }
  return param_4;
}

