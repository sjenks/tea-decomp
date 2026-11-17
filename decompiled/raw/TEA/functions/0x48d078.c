// name: FUN_0048d078
// address: 0x48d078
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048d078(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505b70);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_00505b90;
    param_1[1] = (int)&PTR_LAB_00505c04;
    *(undefined ***)param_1[4] = &PTR_LAB_00505c24;
    *(undefined ***)param_1[5] = &PTR_LAB_00505c30;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505c3c;
    FUN_0049146c(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x5d),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x55),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

