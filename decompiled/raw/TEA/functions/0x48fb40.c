// name: FUN_0048fb40
// address: 0x48fb40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0048fb40(undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5067d4);
  if (param_2 == 0) {
    *param_1 = param_3;
  }
  else {
    param_1[3] = param_2;
    FUN_004dc7d4(param_1,param_3,param_4);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

