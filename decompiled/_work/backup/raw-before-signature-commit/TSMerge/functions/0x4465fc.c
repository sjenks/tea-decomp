// name: FUN_004465fc
// address: 0x4465fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004465fc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46faac);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x2a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    *(int *)((int)param_1 + 0x2e) = (int)param_1 + 0x22;
    param_1[1] = (int)param_1 + 0x1e;
    param_1[2] = (int)param_1 + 0x22;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_00462234;
    *(undefined ***)((int)param_1 + 0x22) = &PTR_FUN_00462224;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042ab84((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_00431f2c(param_1,1,param_3,param_4,param_5,param_6);
  param_1[3] = (int)&PTR_FUN_0046facc;
  *(undefined ***)param_1[1] = &PTR_LAB_0046fb04;
  *(undefined ***)param_1[2] = &PTR_LAB_0046fb10;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046fb1c;
  *in_FS_OFFSET = local_28;
  return param_1;
}

