// name: FUN_0041a59c
// address: 0x41a59c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041a59c(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  FUN_00455f04(0x46734c);
  if (param_1 != (int *)0x0) {
    param_1[6] = (int)&PTR_FUN_00467580;
    param_1[1] = (int)&PTR_LAB_004675f4;
    *(undefined ***)param_1[4] = &PTR_LAB_00467614;
    *(undefined ***)param_1[5] = &PTR_LAB_00467620;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0046762c;
    if ((uint *)param_1[7] != (uint *)0x0) {
      FUN_0041d334((uint *)param_1[7],0);
      FUN_0044b2cc();
    }
    if (*(undefined4 **)((int)param_1 + 0x37) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x37))();
    }
    FUN_00419e2c(param_1 + 1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + 0x96;
      FUN_0042ade0((undefined4 *)((int)param_1 + 0x5d),0);
      *(int *)(param_1[4] + -4) = *(int *)(param_1[4] + -4) + -0x96;
      FUN_00413978((undefined4 *)((int)param_1 + 0x55),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_34;
  return;
}

