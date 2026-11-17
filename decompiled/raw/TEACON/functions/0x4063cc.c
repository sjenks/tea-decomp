// name: FUN_004063cc
// address: 0x4063cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004063cc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x42b8c4);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

