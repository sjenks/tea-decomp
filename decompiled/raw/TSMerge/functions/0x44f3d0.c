// name: FUN_0044f3d0
// address: 0x44f3d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044f3d0(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x472500);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x13);
    FUN_0044e66c(param_1 + 0x13);
  }
  FUN_0044e60c(param_1,1);
  param_1[1] = (int)&PTR_FUN_00473020;
  *(undefined ***)*param_1 = &PTR_LAB_0047302c;
  FUN_0044dfd4(param_1 + 2);
  FUN_0044e6d4(*param_1,param_1 + 2);
  FUN_0044f480(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

