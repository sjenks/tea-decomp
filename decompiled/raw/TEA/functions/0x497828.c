// name: FUN_00497828
// address: 0x497828
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00497828(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507ce8);
  FUN_0048d298(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00507d2c;
  FUN_00497880(param_1);
  FUN_004978c0(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

