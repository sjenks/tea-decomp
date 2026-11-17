// name: FUN_004016c0
// address: 0x4016c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004016c0(int *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4619f8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x392);
    param_1[0x392] = (int)(param_1 + 0x38f);
    param_1[0x393] = (int)(param_1 + 0x390);
    param_1[1] = (int)(param_1 + 0x38f);
    param_1[2] = (int)(param_1 + 0x390);
    param_1[0x38e] = 0;
    param_1[0x391] = 0;
    param_1[0x38f] = (int)&PTR_FUN_00462234;
    param_1[0x390] = (int)&PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84(param_1 + 0x392,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe20;
  FUN_00434494(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe20;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe20;
  param_1[6] = (int)&PTR_FUN_00462130;
  param_1[3] = (int)&PTR_FUN_00462024;
  param_1[6] = (int)&PTR_LAB_00462074;
  *(undefined ***)param_1[1] = &PTR_LAB_00462084;
  *(undefined ***)param_1[2] = &PTR_LAB_00462090;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046209c;
  param_1[7] = 0;
  FUN_004465fc(param_1 + 8,0,*param_1,0x6c,0,0);
  FUN_004465fc(param_1 + 0x34,0,*param_1,0x72,0,0);
  FUN_004465fc(param_1 + 0x60,0,*param_1,0x73,0,0);
  FUN_004465fc(param_1 + 0x8c,0,*param_1,0x6d,0,0);
  FUN_004465fc(param_1 + 0xb8,0,*param_1,0x6e,0,0);
  FUN_004465fc(param_1 + 0xe4,0,*param_1,0x74,0,0);
  FUN_004465fc(param_1 + 0x110,0,*param_1,0x75,0,0);
  FUN_004465fc(param_1 + 0x13c,0,*param_1,0x76,0,0);
  FUN_004465fc(param_1 + 0x168,0,*param_1,0x77,0,0);
  FUN_004465fc(param_1 + 0x194,0,*param_1,0x79,0,0);
  FUN_0043a4ec(param_1 + 0x1c0,0,*param_1,0x6f,0x400,0);
  FUN_0043a4ec((int *)((int)param_1 + 0x7b2),0,*param_1,0x66,0x400,0);
  FUN_0043a4ec(param_1 + 0x219,0,*param_1,0x69,0x400,0);
  FUN_0040124c(param_1 + 0x246,0,*param_1,0x102);
  FUN_0044788c(param_1 + 0x273,0,*param_1,0x67,0,0);
  FUN_004316d8((int *)((int)param_1 + 0xa7a),0,*param_1,0x70,0);
  FUN_004316d8((int *)((int)param_1 + 0xb26),0,*param_1,0x68,0);
  FUN_004316d8((int *)((int)param_1 + 0xbd2),0,*param_1,0x78,0);
  FUN_004316d8((int *)((int)param_1 + 0xc7e),0,*param_1,0x65,0);
  FUN_004316d8((int *)((int)param_1 + 0xd2a),0,*param_1,1,0);
  FUN_0040be50((int)(param_1 + 0x37c));
  *in_FS_OFFSET = local_28;
  return param_1;
}

