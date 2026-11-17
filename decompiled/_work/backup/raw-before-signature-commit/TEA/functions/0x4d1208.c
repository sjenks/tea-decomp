// name: FUN_004d1208
// address: 0x4d1208
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d1208(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x51454c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    FUN_004d0b78(param_1 + 0x14);
  }
  FUN_004d0ab0(param_1,1);
  param_1[1] = (int)&PTR_FUN_00515930;
  *(undefined ***)*param_1 = &PTR_LAB_0051593c;
  FUN_004d04e0(param_1 + 3);
  FUN_004d0be0(*param_1,param_1 + 3);
  FUN_004d12b8(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

