// name: FUN_0044cb34
// address: 0x44cb34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0044cb34(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5,char param_6,
            int param_7)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x482938);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x5a;
    *(int *)((int)param_1 + 0x5a) = (int)param_1 + 0x4e;
    *(int *)((int)param_1 + 0x5e) = (int)param_1 + 0x52;
    param_1[1] = (int)param_1 + 0x4e;
    param_1[2] = (int)param_1 + 0x52;
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
    *(undefined4 *)((int)param_1 + 0x56) = 0;
    *(undefined ***)((int)param_1 + 0x4e) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x52) = &PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x5a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_00482aa4;
  *(undefined ***)param_1[1] = &PTR_LAB_00482af8;
  *(undefined ***)param_1[2] = &PTR_LAB_00482b04;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00482b10;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  FUN_00435df4(*param_1,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  FUN_0044cc70(param_1,param_5,param_6);
  *in_FS_OFFSET = local_28;
  return param_1;
}

