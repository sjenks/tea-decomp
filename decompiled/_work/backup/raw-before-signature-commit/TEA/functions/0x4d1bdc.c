// name: FUN_004d1bdc
// address: 0x4d1bdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d1bdc(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 local_3c [16];
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x514688);
  local_18 = 8;
  FUN_004cf778(param_1,0);
  piVar1 = FUN_004cf7b0(param_1,param_3 - param_2,0);
  local_2c = FUN_004cfaa0((int)piVar1);
  FUN_004cea90((int)local_3c,param_1,&local_2c);
  FUN_004cfad4(param_1,0,0,param_2,param_3 - param_2,0,param_3 - param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

