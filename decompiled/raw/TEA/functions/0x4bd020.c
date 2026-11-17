// name: FUN_004bd020
// address: 0x4bd020
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004bd020(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50f4c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x16);
    param_1[0x16] = (int)(param_1 + 0x13);
    param_1[0x17] = (int)(param_1 + 0x14);
    param_1[1] = (int)(param_1 + 0x13);
    param_1[2] = (int)(param_1 + 0x14);
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x13] = (int)&PTR_FUN_004ea94c;
    param_1[0x14] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x16,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004bce80(param_1,1,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = (int)&PTR_FUN_0050f5fc;
  *(undefined ***)param_1[1] = &PTR_LAB_0050f640;
  *(undefined ***)param_1[2] = &PTR_LAB_0050f64c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050f658;
  *in_FS_OFFSET = local_28;
  return param_1;
}

