// name: FUN_0049e814
// address: 0x49e814
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0049e814(uint *param_1,uint *param_2,char *param_3,uint param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5094c8);
  *param_1 = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = param_4;
  *param_1 = *param_1 | 8;
  FUN_0049e85c(param_1,param_2,param_3);
  *in_FS_OFFSET = local_28;
  return param_1;
}

