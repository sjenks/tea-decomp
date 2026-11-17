// name: FUN_00420a20
// address: 0x420a20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00420a20(undefined4 *param_1,int *param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x468354);
  *param_1 = &PTR_FUN_0046858c;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_3 != 0;
  FUN_00420c24((int)param_1,0x7fe8);
  FUN_00420c4c((int)param_1,param_2,0,-1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

