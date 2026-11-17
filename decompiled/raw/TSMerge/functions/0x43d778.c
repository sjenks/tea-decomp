// name: FUN_0043d778
// address: 0x43d778
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043d778(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46dde4);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004644d0;
    *(undefined ***)param_1[1] = &PTR_LAB_00464530;
    *(undefined ***)param_1[2] = &PTR_LAB_0046453c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00464548;
    if (param_1[0xc] != 0) {
      (*(code *)**(undefined4 **)(param_1[0xc] + 0xc))();
    }
    FUN_00440e00((int)(param_1 + 7),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c;
    FUN_0043a624(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 0x12,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 0x10,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

