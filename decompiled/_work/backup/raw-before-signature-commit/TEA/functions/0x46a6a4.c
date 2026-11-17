// name: FUN_0046a6a4
// address: 0x46a6a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046a6a4(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x4fd82c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004ff050;
    *(undefined ***)param_1[1] = &PTR_LAB_004ff124;
    *(undefined ***)param_1[2] = &PTR_LAB_004ff130;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004ff13c;
    FUN_0049468c(param_1[0x2d],3);
    if (param_1[0x85] != 0) {
      (*(code *)**(undefined4 **)(param_1[0x85] + 0xc))();
    }
    FUN_004cb934((int *)((int)param_1 + 0x166),2);
    piVar1 = param_1 + 0x2e;
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    FUN_004ad9d8(piVar1,0);
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + 0x96;
    FUN_004a52c0(param_1 + 0x38,0);
    *(int *)(param_1[0x2f] + -4) = *(int *)(param_1[0x2f] + -4) + -0x96;
    FUN_00489c54(param_1 + 0x36,0);
    FUN_0040b62c(param_1 + 0x24,param_1[0x25],param_1[0x26]);
    FUN_004cc0bc();
    FUN_0040b4f0(param_1 + 0x1a,param_1[0x1b],param_1[0x1c]);
    FUN_004cc0bc();
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x1c0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x1c0;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x1c0;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x1c0;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x8c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x8a,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

