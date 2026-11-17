// name: FUN_004134f0
// address: 0x4134f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004134f0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed02c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004ed04c;
    *(undefined ***)param_1[1] = &PTR_LAB_004ed114;
    *(undefined ***)param_1[2] = &PTR_LAB_004ed120;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ed12c;
    FUN_0041d7b0(param_1 + 0x18,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xe0;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xe0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x54,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x52,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

