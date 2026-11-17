// name: FUN_00401150
// address: 0x401150
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_00401150(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ea368);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x296);
    param_1[0x296] = (int)(param_1 + 0x293);
    param_1[0x297] = (int)(param_1 + 0x294);
    param_1[1] = (int)(param_1 + 0x293);
    param_1[2] = (int)(param_1 + 0x294);
    param_1[0x292] = 0;
    param_1[0x295] = 0;
    param_1[0x293] = (int)&PTR_FUN_004ea94c;
    param_1[0x294] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x296,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x9e8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x9e8;
  FUN_00413cf4(param_1,1,0x4ea340,param_3,param_4,(uint *)0x12f2,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x9e8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x9e8;
  param_1[3] = (int)&PTR_FUN_004ea7c8;
  *(undefined ***)param_1[1] = &PTR_LAB_004ea890;
  *(undefined ***)param_1[2] = &PTR_LAB_004ea89c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ea8a8;
  param_1[0x18] = param_5;
  param_1[0x19] = param_6;
  FUN_004bf504(param_1 + 0x1a,0,*param_1,0x3278,0);
  FUN_0041af38(param_1 + 0x45,0,param_1,0x8de,0);
  FUN_0041af38(param_1 + 0x74,0,param_1,0x343a,0);
  FUN_0041af38(param_1 + 0xa3,0,param_1,0x1130,0);
  FUN_004c7a28(param_1 + 0xd2,0,*param_1,0x2fb2,0,0);
  FUN_004c7a28((int *)((int)param_1 + 0x3f6),0,*param_1,0x3688,0,0);
  FUN_004c7a28(param_1 + 0x129,0,*param_1,0x1a18,0,0);
  FUN_004c7a28((int *)((int)param_1 + 0x552),0,*param_1,0x1a22,0,0);
  FUN_0041af38(param_1 + 0x180,0,param_1,0x113a,0);
  FUN_0041af38(param_1 + 0x1af,0,param_1,0x367e,0);
  FUN_0041af38(param_1 + 0x1de,0,param_1,0x1202,0);
  FUN_0041af38(param_1 + 0x20d,0,param_1,0x120c,0);
  FUN_004abc64(param_1 + 0x23c,0,*param_1,1,0);
  FUN_004abc64(param_1 + 0x267,0,*param_1,0x5fa,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

