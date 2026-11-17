// name: FUN_00498c80
// address: 0x498c80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00498c80(undefined4 *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508310);
  *param_1 = &PTR_FUN_0050838c;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

