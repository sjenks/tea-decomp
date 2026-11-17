// name: FUN_004c09ac
// address: 0x4c09ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004c09ac(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5102b8);
  *param_1 = &PTR_FUN_004ea93c;
  *param_1 = &PTR_FUN_00510770;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_004c0b54((int)param_1,param_2);
  if (param_4 != '\0') {
    FUN_004c0490((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

