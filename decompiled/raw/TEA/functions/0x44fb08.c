// name: FUN_0044fb08
// address: 0x44fb08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044fb08(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f7908);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x15);
    param_1[0x15] = (int)(param_1 + 0x12);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[1] = (int)(param_1 + 0x12);
    param_1[2] = (int)(param_1 + 0x13);
    param_1[0x11] = 0;
    param_1[0x14] = 0;
    param_1[0x12] = (int)&PTR_FUN_004ea94c;
    param_1[0x13] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x15,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2e;
  FUN_004abc64(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2e;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2e;
  param_1[3] = (int)&PTR_FUN_004fa228;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa260;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa26c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa278;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

