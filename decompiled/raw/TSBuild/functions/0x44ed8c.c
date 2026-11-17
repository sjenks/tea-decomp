// name: FUN_0044ed8c
// address: 0x44ed8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044ed8c(undefined4 *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482f04);
  *param_1 = &PTR_FUN_00474f74;
  *param_1 = &PTR_FUN_004833bc;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0044ef34((int)param_1,param_2);
  if (param_4 != '\0') {
    FUN_0044e870((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

