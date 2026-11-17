// name: FUN_0048a99c
// address: 0x48a99c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0048a99c(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5053c0);
  *param_1 = &PTR_FUN_0050540c;
  *(undefined4 *)((int)param_1 + 5) = param_2;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(byte *)(param_1 + 1) = param_3 & 1 | *(byte *)(param_1 + 1) & 0xfe;
  *(byte *)(param_1 + 1) = param_4 * '\x02' | *(byte *)(param_1 + 1) & 1;
  FUN_0048aa64(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

