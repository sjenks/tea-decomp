// name: FUN_00421c0c
// address: 0x421c0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00421c0c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47a4b4);
  FUN_0042793c(param_1,param_2,0);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047a4f8;
  FUN_00421be4((int)param_1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

