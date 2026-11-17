// name: FUN_00420adc
// address: 0x420adc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00420adc(undefined4 *param_1,HWND param_2,int param_3)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4683a8);
  *param_1 = &PTR_FUN_0046858c;
  pHVar1 = GetMenu(param_2);
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_3 != 0;
  FUN_00420c24((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

