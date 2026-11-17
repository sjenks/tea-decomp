// name: FUN_0042bb1c
// address: 0x42bb1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042bb1c(undefined4 *param_1,int param_2)

{
  HMENU pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c100);
  *param_1 = &PTR_FUN_0047c368;
  pHVar1 = CreateMenu();
  param_1[1] = pHVar1;
  *(bool *)(param_1 + 2) = param_2 != 0;
  FUN_0042bd98((int)param_1,0x7fe8);
  *in_FS_OFFSET = local_28;
  return param_1;
}

