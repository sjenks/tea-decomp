// name: FUN_004abd9c
// address: 0x4abd9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004abd9c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50c130);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0050c018;
    *(undefined ***)param_1[1] = &PTR_LAB_0050c04c;
    *(undefined ***)param_1[2] = &PTR_LAB_0050c058;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0050c064;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -2;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -2;
    FUN_004ad9d8(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 2;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 2;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0((undefined4 *)((int)param_1 + 0x26),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54((undefined4 *)((int)param_1 + 0x1e),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

