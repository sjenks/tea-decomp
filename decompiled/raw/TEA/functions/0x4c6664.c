// name: FUN_004c6664
// address: 0x4c6664
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_004c6664(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x5116e8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x2a;
    *(int *)((int)param_1 + 0x2a) = (int)param_1 + 0x1e;
    *(int *)((int)param_1 + 0x2e) = (int)param_1 + 0x22;
    param_1[1] = (int)param_1 + 0x1e;
    param_1[2] = (int)param_1 + 0x22;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined ***)((int)param_1 + 0x1e) = &PTR_FUN_004ea94c;
    *(undefined ***)((int)param_1 + 0x22) = &PTR_FUN_004ea93c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc((int *)((int)param_1 + 0x2a),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  FUN_004ac4b8(param_1,1,param_3,param_4,param_5,param_6);
  param_1[3] = (int)&PTR_FUN_00511708;
  *(undefined ***)param_1[1] = &PTR_LAB_00511740;
  *(undefined ***)param_1[2] = &PTR_LAB_0051174c;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_00511758;
  *in_FS_OFFSET = local_28;
  return param_1;
}

