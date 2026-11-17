// name: FUN_00451770
// address: 0x451770
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00451770(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48389c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&PTR_FUN_00474f84;
    param_1[9] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_0043d5a8(param_1,1,param_3,param_4,param_5);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  param_1[3] = (int)&PTR_FUN_004838bc;
  *(undefined ***)param_1[1] = &PTR_LAB_00483934;
  *(undefined ***)param_1[2] = &PTR_LAB_00483940;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0048394c;
  param_1[5] = 1;
  param_1[6] = 10;
  *in_FS_OFFSET = local_28;
  return param_1;
}

