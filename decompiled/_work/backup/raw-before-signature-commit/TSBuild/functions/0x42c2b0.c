// name: FUN_0042c2b0
// address: 0x42c2b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c2b0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c388);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_0047c3a8;
    param_1[1] = (int)&PTR_LAB_0047c420;
    *(undefined ***)param_1[4] = &PTR_LAB_0047c440;
    *(undefined ***)param_1[5] = &PTR_LAB_0047c44c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047c458;
    FUN_0045681c();
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -5;
    FUN_00425710(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 5;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_00435f74((undefined4 *)((int)param_1 + 0x62),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_0041e99c((undefined4 *)((int)param_1 + 0x5a),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

