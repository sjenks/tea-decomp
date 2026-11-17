// name: FUN_0042bc04
// address: 0x42bc04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042bc04(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c160);
  *param_1 = &PTR_FUN_0047c368;
  param_1[1] = param_2;
  *(bool *)(param_1 + 2) = param_3 != 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

