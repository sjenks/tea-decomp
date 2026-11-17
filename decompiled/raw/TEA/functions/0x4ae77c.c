// name: FUN_004ae77c
// address: 0x4ae77c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ae77c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50cb90);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_0050cc2c;
    param_1[4] = (int)&PTR_LAB_0050cc70;
    *(undefined ***)param_1[2] = &PTR_LAB_0050cc88;
    *(undefined ***)param_1[3] = &PTR_LAB_0050cc94;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_0050cca0;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_0050cd30;
    FUN_004cc0bc();
    FUN_004cc0bc();
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x12;
    FUN_00494cc0(param_1 + 1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x12;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      FUN_004bdc6c((int *)((int)param_1 + 0xe1),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x57),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x4f),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

