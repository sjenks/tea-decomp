// name: FUN_0043be48
// address: 0x43be48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043be48(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f4c8c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_004f4cac;
    param_1[4] = (int)&PTR_LAB_004f4d0c;
    *(undefined ***)param_1[2] = &PTR_LAB_004f4d24;
    *(undefined ***)param_1[3] = &PTR_LAB_004f4d30;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004f4d3c;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004f4dcc;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    FUN_00426de4(param_1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      FUN_004bdc6c((int *)((int)param_1 + 0x14a),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x30,0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x2e,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

