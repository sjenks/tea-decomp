// name: FUN_0043ea14
// address: 0x43ea14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0043ea6a) */

undefined4 * __cdecl FUN_0043ea14(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *in_FS_OFFSET;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00455f04(0x46e0e8);
  local_18 = 8;
  *param_1 = &PTR_FUN_0046e17c;
  *param_1 = &PTR_FUN_0046e114;
  param_1[5] = 0;
  param_1[5] = &DAT_00471d68;
  local_c = local_c + 2;
  param_1[2] = param_3;
  FUN_0044cf10((int)(param_1 + 3),param_2);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_0043e9b8(&local_2c,&local_30,&local_34,param_1[2]);
  pvVar1 = CreateFileA((LPCSTR)param_1[5],local_2c,local_30,(LPSECURITY_ATTRIBUTES)0x0,local_34,
                       0x10000000,(HANDLE)0x0);
  param_1[1] = pvVar1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

