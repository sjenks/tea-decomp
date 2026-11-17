// name: FUN_004b7848
// address: 0x4b7848
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b7848(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50e598);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fd108;
    *(undefined ***)param_1[1] = &PTR_LAB_004fd188;
    *(undefined ***)param_1[2] = &PTR_LAB_004fd194;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd1a0;
    FUN_004cc0cc();
    FUN_004c2888((int)(param_1 + 0xe),2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x2c;
    FUN_004b96e4(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x2c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x2c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x1d,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x1b,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

