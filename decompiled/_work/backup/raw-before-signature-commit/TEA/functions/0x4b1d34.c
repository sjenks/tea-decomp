// name: FUN_004b1d34
// address: 0x4b1d34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004b1d34(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50d124);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x23);
    param_1[0x23] = (int)(param_1 + 0x20);
    param_1[0x24] = (int)(param_1 + 0x21);
    param_1[1] = (int)(param_1 + 0x20);
    param_1[2] = (int)(param_1 + 0x21);
    param_1[0x1f] = 0;
    param_1[0x22] = 0;
    param_1[0x20] = (int)&PTR_FUN_004ea94c;
    param_1[0x21] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x23,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004c2c5c(param_1,1,param_3,param_4,0,param_5,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  FUN_004b1d08(param_1 + 0x1e,param_4);
  param_1[3] = (int)&PTR_FUN_0050dbb4;
  *(undefined ***)param_1[1] = &PTR_LAB_0050dbfc;
  *(undefined ***)param_1[2] = &PTR_LAB_0050dc08;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050dc14;
  *in_FS_OFFSET = local_28;
  return param_1;
}

