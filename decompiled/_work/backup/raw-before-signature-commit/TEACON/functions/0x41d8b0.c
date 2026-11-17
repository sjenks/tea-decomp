// name: FUN_0041d8b0
// address: 0x41d8b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0041d94f) */

undefined4 * __cdecl FUN_0041d8b0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_0041f3fc(0x43155c);
  local_18 = 8;
  *param_1 = &PTR_FUN_00430a68;
  param_1[1] = param_3;
  *param_1 = &PTR_FUN_004318e4;
  param_1[2] = 0;
  param_1[3] = 0;
  local_c = local_c + 2;
  local_2c = 0;
  local_54 = 0x41d911;
  FUN_00416b20(param_1 + 4,param_2,&local_2c);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[10] = &DAT_0042fac0;
  local_c = local_c + 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_18 = 0x38;
  FUN_00416e74((int)&local_54,(uint *)&DAT_00431529);
  local_18 = 0x2c;
  FUN_0041b234(param_1 + 2,6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

