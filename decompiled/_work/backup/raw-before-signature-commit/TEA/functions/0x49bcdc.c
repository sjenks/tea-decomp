// name: FUN_0049bcdc
// address: 0x49bcdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0049bcdc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508ac8);
  FUN_0049ca30(param_1,*param_2,0);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00508d90;
  *(undefined4 *)((int)param_1 + 0x35) = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

