// name: FUN_0042a5c4
// address: 0x42a5c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0042a5c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47bb44);
  FUN_0042a56c(param_1,param_2,param_3);
  param_1[4] = param_4;
  *(undefined2 *)(param_1 + 3) = 0xffff;
  *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x15) = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}

