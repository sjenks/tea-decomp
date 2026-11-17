// name: FUN_00459790
// address: 0x459790
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00459790(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x485cd4);
  pcVar1 = (char *)FUN_004597ec(param_1 + 4,param_2);
  FUN_00459624(param_1,param_3,pcVar1);
  *param_1 = &PTR_FUN_00487748;
  *in_FS_OFFSET = local_28;
  return param_1;
}

