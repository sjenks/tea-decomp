// name: FUN_004c78e4
// address: 0x4c78e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004c78e4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            ,int param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5119a0);
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
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004ad6d8(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&PTR_FUN_005119e4;
  *(undefined ***)param_1[1] = &PTR_LAB_00511a1c;
  *(undefined ***)param_1[2] = &PTR_LAB_00511a28;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511a34;
  param_1[5] = param_10;
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffeffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

