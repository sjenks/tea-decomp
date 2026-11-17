// name: FUN_00418914
// address: 0x418914
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418914(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ee384);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004f0888;
    *(undefined ***)param_1[1] = &PTR_LAB_004f08c0;
    *(undefined ***)param_1[2] = &PTR_LAB_004f08cc;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f08d8;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x16;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x16;
    FUN_004abd9c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x16;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x16;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0xf,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0xd,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

