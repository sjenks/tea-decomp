// name: FUN_00497f00
// address: 0x497f00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00497f00(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507f24);
  pHVar1 = CreatePopupMenu();
  FUN_00497aec(param_1,pHVar1,param_2);
  *param_1 = &PTR_FUN_0050805c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

