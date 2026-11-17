// name: FUN_004989b8
// address: 0x4989b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004989b8(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50827c);
  FUN_0049eb84(param_1,param_4,param_5,param_6,10,param_3,param_7);
  *param_1 = &PTR_FUN_0050829c;
  param_1[0x18] = param_2;
  FUN_0048fe6c((int)param_1,1,1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

