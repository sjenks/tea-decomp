// name: FUN_004533cc
// address: 0x4533cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004533cc(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x483e20);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00483fc0;
    *(undefined ***)param_1[1] = &PTR_LAB_00483fd4;
    *(undefined ***)param_1[2] = &PTR_LAB_00483fe0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00483fec;
    if (*(uint **)((int)param_1 + 0x26) != (uint *)0x0) {
      FUN_004284a8(*(uint **)((int)param_1 + 0x26),0);
      FUN_0045680c();
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 0x10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 0xe,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

