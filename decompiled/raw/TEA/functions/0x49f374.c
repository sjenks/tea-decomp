// name: FUN_0049f374
// address: 0x49f374
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049f374(undefined4 *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x509754);
  param_1[0xb] = 0;
  FUN_004dc844(param_1,0,0x2c);
  *param_1 = 0x2c;
  if (param_2 != '\0') {
    uVar1 = FUN_004cc180();
    FUN_004cc0cc();
    param_1[0xb] = uVar1;
    param_1[9] = param_1[0xb];
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

