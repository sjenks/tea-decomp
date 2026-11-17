// name: FUN_00443c6c
// address: 0x443c6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_00443c6c(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46f14c);
  *param_1 = &PTR_FUN_00462224;
  *param_1 = &PTR_FUN_0046f5e0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00443da0((int)param_1,param_2);
  if (param_3 != 0) {
    FUN_00443e3c((int)param_1,param_3);
  }
  if (param_5 != '\0') {
    FUN_004436dc((int)param_1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

