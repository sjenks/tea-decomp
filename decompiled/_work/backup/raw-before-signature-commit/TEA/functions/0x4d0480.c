// name: FUN_004d0480
// address: 0x4d0480
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d0480(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5141ac);
  FUN_004d027c(param_1);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *in_FS_OFFSET = local_28;
  return param_1;
}

