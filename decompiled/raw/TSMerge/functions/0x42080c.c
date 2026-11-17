// name: FUN_0042080c
// address: 0x42080c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042080c(int *param_1,uint *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468270);
  FUN_00416614(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_004682b4;
  FUN_00420864(param_1);
  FUN_004208a4(param_1,param_2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

