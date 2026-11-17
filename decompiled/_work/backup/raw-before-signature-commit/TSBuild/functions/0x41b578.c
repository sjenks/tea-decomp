// name: FUN_0041b578
// address: 0x41b578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041b578(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00467ba8(0x478b08);
  local_18 = 8;
  FUN_0044ecbc(param_1,(uint *)s_COMCTL32_DLL_004785e4,'\x01','\x01','\0');
  local_c = local_c + 2;
  *param_1 = &PTR_FUN_00478b74;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  FUN_0041b630((int)param_1);
  FUN_004675f0(&local_3c,0,0x14);
  local_3c = 0x14;
  FUN_0041b660((int)param_1,(int)&local_3c);
  *(uint *)((int)param_1 + 0xd) = CONCAT22(local_38,local_34);
  *in_FS_OFFSET = local_28;
  return param_1;
}

