// name: FUN_00425594
// address: 0x425594
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00425594(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4690cc);
  param_1[0xb] = 0;
  FUN_00455a40(param_1,0,0x2c);
  *param_1 = 0x2c;
  if (param_2 != '\0') {
    uVar1 = FUN_0044b390();
    FUN_0044b2dc();
    param_1[0xb] = uVar1;
    param_1[9] = param_1[0xb];
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

