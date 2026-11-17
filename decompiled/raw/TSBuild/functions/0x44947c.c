// name: FUN_0044947c
// address: 0x44947c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0044947c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x481d68);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x12);
    param_1[0x12] = (int)(param_1 + 0xf);
    param_1[0x13] = (int)(param_1 + 0x10);
    param_1[1] = (int)(param_1 + 0xf);
    param_1[2] = (int)(param_1 + 0x10);
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0xf] = (int)&PTR_FUN_00474f84;
    param_1[0x10] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x12,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
  FUN_004468bc(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
  param_1[3] = (int)&PTR_FUN_00478284;
  *(undefined ***)param_1[1] = &PTR_LAB_004782e4;
  *(undefined ***)param_1[2] = &PTR_LAB_004782f0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004782fc;
  FUN_0044beec(param_1 + 7,0,0x51);
  *in_FS_OFFSET = local_28;
  return param_1;
}

