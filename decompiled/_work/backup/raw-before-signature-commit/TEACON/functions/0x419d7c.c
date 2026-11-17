// name: FUN_00419d7c
// address: 0x419d7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00419d7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0041f3fc(0x4302ec);
  FUN_00417d8c(param_1 + 1,0);
  *param_1 = *param_2;
  FUN_00419748(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

