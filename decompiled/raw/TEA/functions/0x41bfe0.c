// name: FUN_0041bfe0
// address: 0x41bfe0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041bfe0(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4eed70);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004f0254;
    *(undefined ***)param_1[1] = &PTR_LAB_004f02e8;
    *(undefined ***)param_1[2] = &PTR_LAB_004f02f4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f0300;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc;
    FUN_004acd74(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0xd,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xb,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

