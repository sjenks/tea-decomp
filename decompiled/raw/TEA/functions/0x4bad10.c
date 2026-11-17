// name: FUN_004bad10
// address: 0x4bad10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004bad10(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50efc0);
  *param_1 = &PTR_FUN_0050ef10;
  *param_1 = &PTR_FUN_0050eea8;
  param_1[1] = param_2;
  param_1[2] = param_4;
  FUN_004cf628((int)(param_1 + 3),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

