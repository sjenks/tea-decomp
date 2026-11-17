// name: FUN_004bf9d8
// address: 0x4bf9d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004bf9d8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50fd64);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 9);
    param_1[9] = (int)(param_1 + 6);
    param_1[10] = (int)(param_1 + 7);
    param_1[1] = (int)(param_1 + 6);
    param_1[2] = (int)(param_1 + 7);
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[6] = (int)&PTR_FUN_004ea94c;
    param_1[7] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 9,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ad87c(param_1,1,param_3,param_4,param_5);
  param_1[3] = (int)&PTR_FUN_0050fdd0;
  *(undefined ***)param_1[1] = &PTR_LAB_0050fe54;
  *(undefined ***)param_1[2] = &PTR_LAB_0050fe60;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050fe6c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

