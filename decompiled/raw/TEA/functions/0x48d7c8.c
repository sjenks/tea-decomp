// name: FUN_0048d7c8
// address: 0x48d7c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0048d7c8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x506038);
  FUN_004934f8(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_005060a0;
  FUN_0048d7a0((int)param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

