// name: FUN_004ba254
// address: 0x4ba254
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004ba254(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50ed20);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&PTR_FUN_004ea94c;
    param_1[0x10] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_004b73c0(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&PTR_FUN_004fcffc;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd05c;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd068;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd074;
  FUN_004bccc4(param_1 + 7,0,0x51);
  *in_FS_OFFSET = local_28;
  return param_1;
}

