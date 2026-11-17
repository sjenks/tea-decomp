// name: FUN_0049ca30
// address: 0x49ca30
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049ca30(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508e0c);
  FUN_0048d35c(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00508e50;
  FUN_004dc844((undefined4 *)((int)param_1 + 0x21),0,0x14);
  *(undefined4 *)((int)param_1 + 0x21) = 0x14;
  *(undefined **)((int)param_1 + 0x29) = &DAT_00508df8;
  *(undefined **)((int)param_1 + 0x2d) = &DAT_00508df8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

