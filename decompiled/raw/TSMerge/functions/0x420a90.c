// name: FUN_00420a90
// address: 0x420a90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00420a90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468384);
  *param_1 = &PTR_FUN_0046858c;
  param_1[1] = param_2;
  *(bool *)(param_1 + 2) = param_3 != 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

