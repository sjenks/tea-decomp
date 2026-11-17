// name: FUN_0049f498
// address: 0x49f498
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0049f498(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50979c);
  param_1[0xb] = 0;
  FUN_004dc844(param_1,0,0x2c);
  *param_1 = 0x2c;
  FUN_0049f51c((int)param_1,param_3,param_2);
  FUN_0049f534((int)param_1,param_4,'\0');
  *in_FS_OFFSET = local_28;
  return param_1;
}

