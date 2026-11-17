// name: FUN_0048b2c4
// address: 0x48b2c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048b2c4(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505494);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_005054b4;
    *(undefined ***)param_1[1] = &PTR_LAB_005054f8;
    *(undefined ***)param_1[2] = &PTR_LAB_00505504;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00505510;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x28;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x28;
    FUN_0048c668(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x28;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x28;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x15,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x13,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

