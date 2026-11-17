// name: FUN_0045c140
// address: 0x45c140
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045c140(int *param_1,int param_2,LPCSTR param_3,uint param_4,uint param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4864d8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x13);
    FUN_0045b2c8(param_1 + 0x13);
  }
  FUN_0045b268(param_1,1);
  param_1[1] = (int)&PTR_FUN_00487608;
  *(undefined ***)*param_1 = &PTR_LAB_00487614;
  FUN_0045ac30(param_1 + 2);
  FUN_0045b330(*param_1,param_1 + 2);
  FUN_0045c1f0(param_1,param_3,param_4,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

