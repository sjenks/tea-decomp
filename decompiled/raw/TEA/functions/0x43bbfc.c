// name: FUN_0043bbfc
// address: 0x43bbfc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0043bbfc(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,int param_7,
            undefined1 param_8,uint *param_9,undefined4 param_10,int *param_11)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f4c68);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x14a;
    *(int **)((int)param_1 + 0x14a) = param_1 + 0x30;
    param_1[0x30] = (int)(param_1 + 0x2d);
    param_1[0x31] = (int)(param_1 + 0x2e);
    *(int **)((int)param_1 + 0x14e) = param_1 + 0x2d;
    *(int **)((int)param_1 + 0x152) = param_1 + 0x2e;
    param_1[1] = (int)(param_1 + 0x30);
    param_1[2] = (int)(param_1 + 0x2d);
    param_1[3] = (int)(param_1 + 0x2e);
    param_1[0x2c] = 0;
    param_1[0x2f] = 0;
    *(undefined4 *)((int)param_1 + 0x146) = 0;
    param_1[0x2d] = (int)&PTR_FUN_004ea94c;
    param_1[0x2e] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x30,1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0x14a),1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -8;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
  FUN_004264ec(param_1,1,param_3,param_4,param_5,0x2c42,param_6,param_7,param_9,param_10,param_11);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 8;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004f4cac;
  param_1[4] = (int)&PTR_LAB_004f4d0c;
  *(undefined ***)param_1[2] = &PTR_LAB_004f4d24;
  *(undefined ***)param_1[3] = &PTR_LAB_004f4d30;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f4d3c;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f4dcc;
  *(undefined1 *)(param_1 + 0x2a) = param_8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

