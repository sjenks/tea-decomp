// name: FUN_004b73c0
// address: 0x4b73c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004b73c0(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50e488);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&PTR_FUN_004ea94c;
    param_1[9] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004c7d50(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_0050e344;
  *(undefined ***)param_1[1] = &PTR_LAB_0050e3a4;
  *(undefined ***)param_1[2] = &PTR_LAB_0050e3b0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050e3bc;
  *in_FS_OFFSET = local_28;
  return param_1;
}

