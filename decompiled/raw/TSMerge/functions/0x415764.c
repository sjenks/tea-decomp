// name: FUN_00415764
// address: 0x415764
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00415764(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46601c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0046603c;
    *(undefined ***)param_1[1] = &PTR_LAB_00466080;
    *(undefined ***)param_1[2] = &PTR_LAB_0046608c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00466098;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
    FUN_00434760(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0(param_1 + 0xb,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978(param_1 + 9,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

