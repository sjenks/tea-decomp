// name: FUN_00401294
// address: 0x401294
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00401294(int *param_1,int param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x4747f4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x366);
    param_1[0x366] = (int)(param_1 + 0x363);
    param_1[0x367] = (int)(param_1 + 0x364);
    param_1[1] = (int)(param_1 + 0x363);
    param_1[2] = (int)(param_1 + 0x364);
    param_1[0x362] = 0;
    param_1[0x365] = 0;
    param_1[0x363] = (int)&PTR_FUN_00474f84;
    param_1[0x364] = (int)&PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18(param_1 + 0x366,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xd70;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd70;
  FUN_0043f628(param_1,1,param_3,param_4,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xd70;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd70;
  FUN_00405f68(param_1 + 6);
  param_1[3] = (int)&PTR_FUN_00474e54;
  param_1[6] = (int)&PTR_LAB_00474eac;
  *(undefined ***)param_1[1] = &PTR_LAB_00474ec8;
  *(undefined ***)param_1[2] = &PTR_LAB_00474ed4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00474ee0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00445680(param_1 + 9,0,*param_1,0x6f,1000,0);
  FUN_00445680((int *)((int)param_1 + 0xd6),0,*param_1,0x66,0,0);
  FUN_00445680(param_1 + 0x62,0,*param_1,0x69,0,0);
  FUN_00445680((int *)((int)param_1 + 0x23a),0,*param_1,0x71,1000,0);
  FUN_0043d0c0(param_1 + 0xbb,0,*param_1,0x79,0,0);
  FUN_004171b4(param_1 + 0xe7,0,*param_1,0x102);
  FUN_00452dcc(param_1 + 0x114,0,*param_1,0x67,0,0);
  FUN_0043c86c((int *)((int)param_1 + 0x4fe),0,*param_1,0x70,0);
  FUN_0043c86c((int *)((int)param_1 + 0x5aa),0,*param_1,0x68,0);
  FUN_0043c86c((int *)((int)param_1 + 0x656),0,*param_1,0x78,0);
  FUN_0043c86c((int *)((int)param_1 + 0x702),0,*param_1,0x65,0);
  FUN_0043c86c((int *)((int)param_1 + 0x7ae),0,*param_1,0x6a,0);
  FUN_0043c86c((int *)((int)param_1 + 0x85a),0,*param_1,1,0);
  FUN_00451770((int *)((int)param_1 + 0x906),0,*param_1,0x6c,0);
  FUN_00451770(param_1 + 0x26e,0,*param_1,0x6e,0);
  FUN_00451770((int *)((int)param_1 + 0xa6a),0,*param_1,0x77,0);
  FUN_00445680(param_1 + 0x2c7,0,*param_1,0x6b,0,0);
  FUN_00445680((int *)((int)param_1 + 0xbce),0,*param_1,0x6d,0,0);
  FUN_00445680(param_1 + 800,0,*param_1,0x76,0,0);
  param_1[0x34d] = 0;
  FUN_00415fb8((int)(param_1 + 0x34e));
  *in_FS_OFFSET = local_28;
  return param_1;
}

