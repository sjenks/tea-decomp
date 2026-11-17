// name: FUN_004b96e4
// address: 0x4b96e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b96e4(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50eb78);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fcffc;
    *(undefined ***)param_1[1] = &PTR_LAB_004fd05c;
    *(undefined ***)param_1[2] = &PTR_LAB_004fd068;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd074;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    FUN_004bcd6c((int)(param_1 + 7),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
    FUN_004b62bc(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x12,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x10,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

