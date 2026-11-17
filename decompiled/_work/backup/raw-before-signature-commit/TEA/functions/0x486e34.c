// name: FUN_00486e34
// address: 0x486e34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00486e34(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_004dce64(0x5043d0);
  local_18 = 8;
  FUN_004c08dc(param_1,(uint *)s_COMCTL32_DLL_00503eac,'\x01','\x01','\0');
  local_c = local_c + 2;
  *param_1 = &PTR_FUN_0050450c;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  FUN_00486eec((int)param_1);
  FUN_004dc844(&local_3c,0,0x14);
  local_3c = 0x14;
  FUN_00486f1c((int)param_1,(int)&local_3c);
  *(uint *)((int)param_1 + 0xd) = CONCAT22(local_38,local_34);
  *in_FS_OFFSET = local_28;
  return param_1;
}

