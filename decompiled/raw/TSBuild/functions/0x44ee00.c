// name: FUN_0044ee00
// address: 0x44ee00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0044ee00(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482f28);
  *param_1 = &PTR_FUN_00474f74;
  *param_1 = &PTR_FUN_004833bc;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_0044ef34((int)param_1,param_2);
  if (param_3 != 0) {
    FUN_0044efd0((int)param_1,param_3);
  }
  if (param_5 != '\0') {
    FUN_0044e870((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

