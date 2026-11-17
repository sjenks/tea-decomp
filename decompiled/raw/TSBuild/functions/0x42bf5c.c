// name: FUN_0042bf5c
// address: 0x42bf5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042bf5c(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c25c);
  pHVar1 = CreatePopupMenu();
  FUN_0042bc04(param_1,pHVar1,param_2);
  *param_1 = &PTR_FUN_0047c34c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

