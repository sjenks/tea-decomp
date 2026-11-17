// name: FUN_00473f78
// address: 0x473f78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00473f78(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ff868);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0xea;
    *(int **)((int)param_1 + 0xea) = param_1 + 0x18;
    param_1[0x18] = (int)(param_1 + 0x15);
    param_1[0x19] = (int)(param_1 + 0x16);
    *(int **)((int)param_1 + 0xee) = param_1 + 0x15;
    *(int **)((int)param_1 + 0xf2) = param_1 + 0x16;
    param_1[1] = (int)(param_1 + 0x18);
    param_1[2] = (int)(param_1 + 0x15);
    param_1[3] = (int)(param_1 + 0x16);
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)((int)param_1 + 0xe6) = 0;
    param_1[0x15] = (int)&PTR_FUN_004ea94c;
    param_1[0x16] = (int)&PTR_FUN_004ea93c;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x18,1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0xea),1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -9;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -9;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -9;
  if (param_4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_4;
  }
  FUN_004ae248(param_1,1,0,(uint *)&DAT_004ff3d1,iVar1,1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 9;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 9;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 9;
  *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004ffcdc;
  param_1[4] = (int)&PTR_LAB_004ffd28;
  *(undefined ***)param_1[2] = &PTR_LAB_004ffd40;
  *(undefined ***)param_1[3] = &PTR_LAB_004ffd4c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004ffd58;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004ffde8;
  param_1[0x12] = (int)param_4;
  param_1[0x13] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

