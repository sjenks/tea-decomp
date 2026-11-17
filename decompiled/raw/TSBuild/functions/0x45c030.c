// name: FUN_0045c030
// address: 0x45c030
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045c030(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486490);
  FUN_0045ad88(param_1);
  *param_1 = &PTR_FUN_00487624;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0045c008((int)param_1,0,0);
  FUN_0045bfec((int)param_1,0,0,0);
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

