// name: FUN_0044c0a8
// address: 0x44c0a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0044c0a8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4824ec);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&PTR_FUN_00474f84;
    param_1[0x14] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
  FUN_00420634(param_1,1,param_3,param_6,param_7);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
  param_1[3] = (int)&PTR_FUN_00482734;
  *(undefined ***)param_1[1] = &PTR_LAB_00482778;
  *(undefined ***)param_1[2] = &PTR_LAB_00482784;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00482790;
  param_1[0x11] = param_4;
  FUN_0044c00c(param_1,param_5);
  *in_FS_OFFSET = local_28;
  return param_1;
}

