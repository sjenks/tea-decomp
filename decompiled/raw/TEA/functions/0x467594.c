// name: FUN_00467594
// address: 0x467594
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00467594(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  
  FUN_004dce64(0x4fc5a8);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_004fc6fc;
    *(undefined ***)param_1[1] = &PTR_LAB_004fc7c4;
    *(undefined ***)param_1[2] = &PTR_LAB_004fc7d0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fc7dc;
    uVar1 = 0;
    do {
      if (param_1[uVar1 + 0x19] != 0) {
        (*(code *)**(undefined4 **)(param_1[uVar1 + 0x19] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    uVar1 = 0;
    do {
      if (param_1[uVar1 + 0x23] != 0) {
        (*(code *)**(undefined4 **)(param_1[uVar1 + 0x23] + 0xc))();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 10);
    if ((uint *)param_1[0x2d] != (uint *)0x0) {
      FUN_004ab9b4((uint *)param_1[0x2d],3);
    }
    if ((uint *)param_1[0x5b] != (uint *)0x0) {
      FUN_00494064((uint *)param_1[0x5b],0);
      FUN_004cc0bc();
    }
    FUN_004ac5f0(param_1 + 0x2f,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x110;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x110;
    FUN_00413f3c(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x110;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x110;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_004a52c0(param_1 + 0x60,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_00489c54(param_1 + 0x5e,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_40;
  return;
}

