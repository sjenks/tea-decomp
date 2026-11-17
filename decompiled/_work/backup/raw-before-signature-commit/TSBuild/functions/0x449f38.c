// name: FUN_00449f38
// address: 0x449f38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_00449f38(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482008);
  *param_1 = &PTR_FUN_00481f58;
  *param_1 = &PTR_FUN_00481ef0;
  param_1[1] = param_2;
  param_1[2] = param_4;
  FUN_00459d78((int)(param_1 + 3),param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

