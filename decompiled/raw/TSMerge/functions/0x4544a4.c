// name: FUN_004544a4
// address: 0x4544a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00454543) */

undefined4 * __cdecl FUN_004544a4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00455f04(0x473b4c);
  local_18 = 8;
  *param_1 = &PTR_FUN_00472fcc;
  param_1[1] = param_3;
  *param_1 = &PTR_FUN_00473ed4;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x454505;
  FUN_0044cdc8(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_00471d68;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  FUN_0044d11c((int)&local_54,(uint *)&DAT_00473b19);
  local_18 = 0x2c;
  FUN_004520dc(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

