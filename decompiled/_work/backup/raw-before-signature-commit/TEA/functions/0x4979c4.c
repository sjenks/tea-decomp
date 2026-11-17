// name: FUN_004979c4
// address: 0x4979c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004979c4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x507d8c);
  FUN_004dc844(param_1,0,0x30);
  *param_1 = 0x30;
  param_1[1] = param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

