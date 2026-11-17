// name: FUN_0045b200
// address: 0x45b200
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045b200(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4861f0);
  if (param_2 == 0) {
    *param_1 = param_1 + 3;
    FUN_0045b2c8(param_1 + 3);
  }
  param_1[1] = &PTR_FUN_004876ac;
  *(undefined ***)*param_1 = &PTR_LAB_004876b8;
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

