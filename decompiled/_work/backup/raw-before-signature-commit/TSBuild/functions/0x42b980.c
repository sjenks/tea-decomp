// name: FUN_0042b980
// address: 0x42b980
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042b980(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c04c);
  FUN_00421638(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047c090;
  FUN_0042b9d8(param_1);
  FUN_0042ba18(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

