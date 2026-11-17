// name: FUN_00498528
// address: 0x498528
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00498528(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508114);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_00508134;
    param_1[1] = (int)&PTR_LAB_005081ac;
    *(undefined ***)param_1[4] = &PTR_LAB_005081cc;
    *(undefined ***)param_1[5] = &PTR_LAB_005081d8;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_005081e4;
    FUN_004cc0cc();
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -5;
    FUN_0049146c(param_1,0);
    *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 5;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 5;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x62),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x5a),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

