// name: FUN_0049146c
// address: 0x49146c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049146c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_004dce64(0x506d54);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_00506f88;
    param_1[1] = (int)&PTR_LAB_00506ffc;
    *(undefined ***)param_1[4] = &PTR_LAB_0050701c;
    *(undefined ***)param_1[5] = &PTR_LAB_00507028;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00507034;
    if ((uint *)param_1[7] != (uint *)0x0) {
      FUN_00494064((uint *)param_1[7],0);
      FUN_004cc0bc();
    }
    if (*(undefined4 **)((int)param_1 + 0x37) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x37))();
    }
    FUN_00490d0c(param_1 + 1,0);
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
  *in_FS_OFFSET = local_34;
  return;
}

