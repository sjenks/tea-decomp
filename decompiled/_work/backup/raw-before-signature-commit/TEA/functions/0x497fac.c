// name: FUN_00497fac
// address: 0x497fac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00497fac(undefined4 *param_1,int *param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507f6c);
  pHVar1 = CreatePopupMenu();
  FUN_00497aec(param_1,pHVar1,param_3);
  *param_1 = &PTR_FUN_0050805c;
  FUN_00497d64((int)param_1,param_2,0,-1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

