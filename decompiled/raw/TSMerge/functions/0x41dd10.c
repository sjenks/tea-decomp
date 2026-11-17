// name: FUN_0041dd10
// address: 0x41dd10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041dd10(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x467a94);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_00467c48;
    *(undefined ***)param_1[1] = &PTR_LAB_00467c60;
    *(undefined ***)param_1[2] = &PTR_LAB_00467c6c;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_00467c78;
    FUN_0044b2dc();
    iVar1 = param_1[6];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x55);
      FUN_0044b2cc();
    }
    param_1[6] = 0;
    FUN_0041e38c((int)param_1);
    iVar1 = param_1[7];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_0044b2cc();
    }
    param_1[7] = 0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_0042ade0((undefined4 *)((int)param_1 + 0x41),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00413978((undefined4 *)((int)param_1 + 0x39),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

