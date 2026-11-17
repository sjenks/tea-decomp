// name: FUN_0042113c
// address: 0x42113c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042113c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4685ac);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_004685cc;
    param_1[1] = (int)&PTR_LAB_00468644;
    *(undefined ***)param_1[4] = &PTR_LAB_00468664;
    *(undefined ***)param_1[5] = &PTR_LAB_00468670;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046867c;
    FUN_0044b2dc();
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -5;
    FUN_0041a59c(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 5;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_0042ade0((undefined4 *)((int)param_1 + 0x62),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_00413978((undefined4 *)((int)param_1 + 0x5a),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

