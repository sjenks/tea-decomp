// name: FUN_00416a98
// address: 0x416a98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00416a98(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4666d8);
  FUN_0041c7c8(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0046671c;
  FUN_00416a70((int)param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

