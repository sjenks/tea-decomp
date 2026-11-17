// name: FUN_00497b98
// address: 0x497b98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00497b98(undefined4 *param_1,HINSTANCE param_2,LPCSTR param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507e58);
  *param_1 = &PTR_FUN_00508078;
  pHVar1 = LoadMenuA(param_2,param_3);
  param_1[1] = pHVar1;
  FUN_00497cdc((int)param_1,0x7fe8);
  *(undefined1 *)(param_1 + 2) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

