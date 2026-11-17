// name: FUN_004cf040
// address: 0x4cf040
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cf040(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x513e60);
  pcVar1 = (char *)FUN_004cf09c(param_1 + 4,param_2);
  FUN_004ceed4(param_1,param_3,pcVar1);
  *param_1 = &PTR_FUN_00515a14;
  *in_FS_OFFSET = local_28;
  return param_1;
}

