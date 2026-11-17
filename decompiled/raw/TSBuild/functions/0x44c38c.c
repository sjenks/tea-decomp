// name: FUN_0044c38c
// address: 0x44c38c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0044c38c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482534);
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
  FUN_0044c0a8(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&PTR_FUN_00482554;
  *(undefined ***)param_1[1] = &PTR_LAB_00482598;
  *(undefined ***)param_1[2] = &PTR_LAB_004825a4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004825b0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

