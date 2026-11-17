// name: FUN_00440f14
// address: 0x440f14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00440f14(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46e710);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&PTR_FUN_00462234;
    param_1[0x14] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_00415610(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&PTR_FUN_0046e958;
  *(undefined ***)param_1[1] = &PTR_LAB_0046e99c;
  *(undefined ***)param_1[2] = &PTR_LAB_0046e9a8;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046e9b4;
  param_1[0x11] = param_4;
  FUN_00440e78(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

