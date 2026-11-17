// name: FUN_00436214
// address: 0x436214
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00436214(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46c408);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x23);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[0x24] = (int)(param_1 + 0x21);
    param_1[1] = (int)(param_1 + 0x20);
    param_1[2] = (int)(param_1 + 0x21);
    param_1[0x1f] = 0;
    param_1[0x22] = 0;
    param_1[0x20] = (int)&PTR_FUN_00462234;
    param_1[0x21] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x23,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_00445ea8(param_1,1,param_3,param_4,0,param_5,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  FUN_004361e8(param_1 + 0x1e,param_4);
  param_1[3] = (int)&PTR_FUN_0046ce98;
  *(undefined ***)param_1[1] = &PTR_LAB_0046cee0;
  *(undefined ***)param_1[2] = &PTR_LAB_0046ceec;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046cef8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

