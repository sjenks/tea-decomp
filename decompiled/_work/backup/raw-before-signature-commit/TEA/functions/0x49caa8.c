// name: FUN_0049caa8
// address: 0x49caa8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0049caa8(int *param_1,LPCSTR param_2,LPCSTR param_3,LPCSTR param_4,DEVMODEA *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508e30);
  FUN_0048d2f8(param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00508e50;
  FUN_004dc844((undefined4 *)((int)param_1 + 0x21),0,0x14);
  *(undefined4 *)((int)param_1 + 0x21) = 0x14;
  *(undefined **)((int)param_1 + 0x29) = &DAT_00508df8;
  *(undefined **)((int)param_1 + 0x2d) = &DAT_00508df8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

