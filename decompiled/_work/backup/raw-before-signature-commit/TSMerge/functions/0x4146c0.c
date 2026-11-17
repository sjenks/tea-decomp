// name: FUN_004146c0
// address: 0x4146c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004146c0(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x465d4c);
  *param_1 = &PTR_FUN_00465d98;
  *(undefined4 *)((int)param_1 + 5) = param_2;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(byte *)(param_1 + 1) = param_3 & 1 | *(byte *)(param_1 + 1) & 0xfe;
  *(byte *)(param_1 + 1) = param_4 * '\x02' | *(byte *)(param_1 + 1) & 1;
  FUN_00414788(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

