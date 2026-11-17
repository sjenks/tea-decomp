// name: FUN_00420de8
// address: 0x420de8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00420de8(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468480);
  pHVar1 = CreatePopupMenu();
  FUN_00420a90(param_1,pHVar1,param_2);
  *param_1 = &PTR_FUN_00468570;
  *in_FS_OFFSET = local_28;
  return param_1;
}

