// name: FUN_0043e2e8
// address: 0x43e2e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0043e2e8(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46df8c);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&PTR_FUN_00462234;
    param_1[0x10] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_0043b728(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&PTR_FUN_004644d0;
  *(undefined ***)param_1[1] = &PTR_LAB_00464530;
  *(undefined ***)param_1[2] = &PTR_LAB_0046453c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464548;
  FUN_00440d58(param_1 + 7,0,0x51);
  *in_FS_OFFSET = local_28;
  return param_1;
}

