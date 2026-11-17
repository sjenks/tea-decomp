// name: FUN_0044fc80
// address: 0x44fc80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044fc80(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4f792c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fa228;
    *(undefined ***)param_1[1] = &PTR_LAB_004fa260;
    *(undefined ***)param_1[2] = &PTR_LAB_004fa26c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa278;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2e;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2e;
    FUN_004abd9c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2e;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2e;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x15,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x13,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

