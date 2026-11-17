// name: FUN_00432dc8
// address: 0x432dc8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00432dc8(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46be74);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_0046bf10;
    param_1[4] = (int)&PTR_LAB_0046bf54;
    *(undefined ***)param_1[2] = &PTR_LAB_0046bf6c;
    *(undefined ***)param_1[3] = &PTR_LAB_0046bf78;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_0046bf84;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_0046c014;
    FUN_0044b2cc();
    FUN_0044b2cc();
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x12;
    FUN_0041dd10(param_1 + 1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x12;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x12;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      FUN_00441be8((int *)((int)param_1 + 0xe1),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      FUN_0042ade0((undefined4 *)((int)param_1 + 0x57),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      FUN_00413978((undefined4 *)((int)param_1 + 0x4f),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

