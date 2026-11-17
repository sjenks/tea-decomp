// name: FUN_00429e44
// address: 0x429e44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00429e44(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47b97c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x41;
    *(int *)((int)param_1 + 0x41) = (int)param_1 + 0x35;
    *(int *)((int)param_1 + 0x45) = (int)param_1 + 0x39;
    param_1[1] = (int)param_1 + 0x35;
    param_1[2] = (int)param_1 + 0x39;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    *(undefined4 *)((int)param_1 + 0x3d) = 0;
    *(undefined ***)((int)param_1 + 0x35) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x39) = &PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_0042fbbc((int *)((int)param_1 + 0x41),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  param_1[3] = (int)&PTR_FUN_0047ba24;
  *(undefined ***)param_1[1] = &PTR_LAB_0047ba3c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047ba48;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ba54;
  param_1[4] = 0;
  param_1[5] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

