// name: FUN_0041f6e4
// address: 0x41f6e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041f6e4(undefined4 *param_1,undefined4 param_2,byte param_3,char param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x479b00);
  *param_1 = &PTR_FUN_00479b4c;
  *(undefined4 *)((int)param_1 + 5) = param_2;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(byte *)(param_1 + 1) = param_3 & 1 | *(byte *)(param_1 + 1) & 0xfe;
  *(byte *)(param_1 + 1) = param_4 * '\x02' | *(byte *)(param_1 + 1) & 1;
  FUN_0041f7ac(param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

