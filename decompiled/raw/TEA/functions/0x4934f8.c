// name: FUN_004934f8
// address: 0x4934f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004934f8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5070c4);
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_3 == 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

