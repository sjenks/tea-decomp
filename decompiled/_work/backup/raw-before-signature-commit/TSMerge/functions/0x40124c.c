// name: FUN_0040124c
// address: 0x40124c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0040124c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4617c0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&PTR_FUN_00462234;
    param_1[9] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -6;
  FUN_004316d8(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 6;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 6;
  param_1[3] = (int)&PTR_FUN_00462144;
  *(undefined ***)param_1[1] = &PTR_LAB_00462178;
  *(undefined ***)param_1[2] = &PTR_LAB_00462184;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00462190;
  param_1[6] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

