// name: FUN_004468bc
// address: 0x4468bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004468bc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x481524);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xb);
    param_1[0xb] = (int)(param_1 + 8);
    param_1[0xc] = (int)(param_1 + 9);
    param_1[1] = (int)(param_1 + 8);
    param_1[2] = (int)(param_1 + 9);
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[8] = (int)&PTR_FUN_00474f84;
    param_1[9] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0xb,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004530f4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_004813e0;
  *(undefined ***)param_1[1] = &PTR_LAB_00481440;
  *(undefined ***)param_1[2] = &PTR_LAB_0048144c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00481458;
  *in_FS_OFFSET = local_28;
  return param_1;
}

