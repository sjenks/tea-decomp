// name: FUN_0043eda4
// address: 0x43eda4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0043eda4(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46e22c);
  *param_1 = &PTR_FUN_0046e17c;
  *param_1 = &PTR_FUN_0046e114;
  param_1[1] = param_2;
  param_1[2] = param_4;
  FUN_0044d11c((int)(param_1 + 3),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

