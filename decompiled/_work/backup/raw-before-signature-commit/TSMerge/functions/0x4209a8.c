// name: FUN_004209a8
// address: 0x4209a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004209a8(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468324);
  *param_1 = &PTR_FUN_0046858c;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_2 != 0;
  FUN_00420c24((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

