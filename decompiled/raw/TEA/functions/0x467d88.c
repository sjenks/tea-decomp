// name: FUN_00467d88
// address: 0x467d88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00467d88(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,uint *param_9,int param_10)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4fc8c8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x4c);
    param_1[0x4c] = (int)(param_1 + 0x49);
    param_1[0x4d] = (int)(param_1 + 0x4a);
    param_1[1] = (int)(param_1 + 0x49);
    param_1[2] = (int)(param_1 + 0x4a);
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x49] = (int)&PTR_FUN_004ea94c;
    param_1[0x4a] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x4c,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc0;
  FUN_00413cf4(param_1,1,param_6,param_7,param_8,param_9,param_10,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc0;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc0;
  param_1[3] = (int)&PTR_FUN_004fca18;
  *(undefined ***)param_1[1] = &PTR_LAB_004fcae4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fcaf0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fcafc;
  FUN_0041eac8(param_1 + 0x18,0,param_1,0x1f5e);
  param_1[0x44] = param_3;
  param_1[0x45] = param_4;
  param_1[0x46] = param_5;
  *in_FS_OFFSET = local_28;
  return param_1;
}

