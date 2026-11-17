// name: FUN_0048f980
// address: 0x48f980
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LONG * __cdecl FUN_0048f980(LONG *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  int local_2c [10];
  
  FUN_004dce64(0x50676c);
  FUN_004a8760(local_2c);
  FUN_0048f9ec(param_1,param_2,(int)local_2c,param_3);
  FUN_004a86dc(local_2c,0);
  *in_FS_OFFSET = local_50;
  return param_1;
}

