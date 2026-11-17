// name: FUN_004ceed4
// address: 0x4ceed4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004ceed4(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x513e0c);
  FUN_004cef38(param_1,param_2,0x80);
  FUN_004cef80((int)(param_1 + 4),param_3);
  *param_1 = &PTR_FUN_00515a3c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

