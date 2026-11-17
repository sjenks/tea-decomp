// name: FUN_00450800
// address: 0x450800
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00450800(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472784);
  FUN_0044e0c4(param_1 + 1,0);
  *param_1 = *param_2;
  FUN_004501cc(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

