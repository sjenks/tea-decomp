// name: FUN_0048d870
// address: 0x48d870
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0048d870(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x506080);
  FUN_004934f8(param_1,param_2,param_3);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_005060a0;
  FUN_0048d7a0((int)param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

