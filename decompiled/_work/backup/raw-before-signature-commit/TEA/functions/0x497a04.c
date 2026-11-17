// name: FUN_00497a04
// address: 0x497a04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00497a04(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507da4);
  *param_1 = &PTR_FUN_00508078;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_2 != 0;
  FUN_00497cdc((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

