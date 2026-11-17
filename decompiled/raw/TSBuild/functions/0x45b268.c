// name: FUN_0045b268
// address: 0x45b268
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045b268(undefined4 *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486214);
  if (param_2 == 0) {
    *param_1 = param_1 + 2;
    FUN_0045b2c8(param_1 + 2);
  }
  param_1[1] = &PTR_FUN_00487690;
  *(undefined ***)*param_1 = &PTR_LAB_0048769c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

