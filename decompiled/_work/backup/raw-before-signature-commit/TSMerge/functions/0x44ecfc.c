// name: FUN_0044ecfc
// address: 0x44ecfc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044ecfc(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472430);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x14);
    FUN_0044e66c(param_1 + 0x14);
  }
  FUN_0044e5a4(param_1,1);
  param_1[1] = (int)&PTR_FUN_0047303c;
  *(undefined ***)*param_1 = &PTR_LAB_00473048;
  FUN_0044dfd4(param_1 + 3);
  FUN_0044e6d4(*param_1,param_1 + 3);
  FUN_0044edac(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

