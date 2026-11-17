// name: FUN_00450940
// address: 0x450940
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00450940(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f79f0);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 10);
    param_1[10] = (int)(param_1 + 7);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[1] = (int)(param_1 + 7);
    param_1[2] = (int)(param_1 + 8);
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[7] = (int)&PTR_FUN_004ea94c;
    param_1[8] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 10,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004c7a28(param_1,1,param_3,param_4,0,0);
  param_1[3] = (int)&PTR_FUN_004fa140;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa17c;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa188;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa194;
  *in_FS_OFFSET = local_28;
  return param_1;
}

