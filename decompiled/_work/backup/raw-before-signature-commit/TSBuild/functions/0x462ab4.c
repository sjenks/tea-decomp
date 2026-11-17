// name: FUN_00462ab4
// address: 0x462ab4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00462ab4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x487244);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *in_FS_OFFSET = local_28;
  return param_1;
}

