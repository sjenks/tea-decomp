// name: FUN_0048698c
// address: 0x48698c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0048698c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x503df8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1e);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[0x1f] = (int)(param_1 + 0x1c);
    param_1[1] = (int)(param_1 + 0x1b);
    param_1[2] = (int)(param_1 + 0x1c);
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1b] = (int)&PTR_FUN_004ea94c;
    param_1[0x1c] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004b917c(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_004fd234;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd2b4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd2c0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd2cc;
  *in_FS_OFFSET = local_28;
  return param_1;
}

