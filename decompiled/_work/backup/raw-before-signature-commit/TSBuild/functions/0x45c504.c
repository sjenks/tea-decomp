// name: FUN_0045c504
// address: 0x45c504
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045c504(int *param_1,int param_2,uint param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486544);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xe);
    FUN_0045b2c8(param_1 + 0xe);
  }
  FUN_0045b268(param_1,1);
  param_1[1] = (int)&PTR_FUN_004875ec;
  *(undefined ***)*param_1 = &PTR_LAB_004875f8;
  FUN_0045c030(param_1 + 2,param_3 | 8);
  FUN_0045b330(*param_1,param_1 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

