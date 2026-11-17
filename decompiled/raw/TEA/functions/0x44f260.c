// name: FUN_0044f260
// address: 0x44f260
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0044f260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f750c);
  FUN_004c684c(param_1,param_2,param_3,param_4,param_5,param_6);
  *param_1 = &PTR_FUN_004f752c;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

